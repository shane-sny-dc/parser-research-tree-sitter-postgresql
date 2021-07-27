/**
 * Create a case-insensitive token for a given string.
 */
const i = (str) => {
  return alias(
    token(
      new RegExp(
        str
          .split("")
          .map((letter) => `[${letter.toUpperCase()}${letter.toLowerCase()}]`)
          .join("")
      )
    ),
    str
  );
};

/**
 * Create a case-insensitive reserved word.
 *
 * This simply gives the word higher precedence which should help the parser
 * not identify it as an identifier.
 */
const iReserved = (str) => {
  return prec(2, i(str));
};

module.exports = grammar({
  name: "postgresql",

  extras: ($) => [$.comment, /\s/],

  inline: ($) => [$.sql_stmt],

  word: ($) => $._word,

  rules: {
    sql_stmt_list: ($) =>
      optional(
        seq(
          optional(";"),
          $.sql_stmt,
          repeat(seq(";", $.sql_stmt)),
          optional(";")
        )
      ),

    comment: () => /(--.*|\/\*(.|\n)*\*\/)/,

    sql_stmt: ($) => choice($.select_stmt),

    select_stmt: ($) =>
      seq(
        iReserved("SELECT"),
        optional(choice(iReserved("DISTINCT"), iReserved("ALL"))),
        $.result_column,
        repeat(seq(",", $.result_column)),
        optional(seq(iReserved("FROM"), $.table_or_subquery))
      ),

    table_or_subquery: ($) =>
      choice(
        seq(
          optional(seq($.schema_name, token.immediate("."))),
          $.table_name,
          optional(seq(optional(iReserved("AS")), $.table_alias)),
          optional(
            choice(
              seq(iReserved("INDEXED"), iReserved("BY"), $.index_name),
              seq(iReserved("NOT"), iReserved("INDEXED"))
            )
          )
        )
        //     | (schema_name DOT)? table_function_name OPEN_PAR expr (COMMA expr)* CLOSE_PAR (
        //         AS_? table_alias
        //     )?
        //     | OPEN_PAR (table_or_subquery (COMMA table_or_subquery)* | join_clause) CLOSE_PAR
        //     | OPEN_PAR select_stmt CLOSE_PAR (AS_? table_alias)?
        // ;
      ),

    result_column: ($) =>
      choice(
        "*",
        seq($._expr, optional(seq(optional(i("AS")), $.column_alias))),
        seq($.table_name, token.immediate("."), "*")
      ),

    // TODO - tonnes missing from expr
    _expr: ($) =>
      choice(
        $.literal_value,
        seq(
          $.schema_name,
          token.immediate("."),
          $.table_name,
          token.immediate("."),
          $.column_name
        ),
        seq($.table_name, token.immediate("."), $.column_name),
        $.column_name
      ),

    column_alias: ($) => choice($._identifier, $.string_literal),

    schema_name: ($) => prec(1, $._name),

    table_name: ($) => $._name,

    table_alias: ($) => $._name,

    index_name: ($) => $._name,

    column_name: ($) => $._name,

    string_literal: () => seq("'", repeat(choice(/[^']/, "''")), "'"),

    // TODO - lots missing here
    literal_value: ($) => choice($.numeric_literal),
    // | STRING_LITERAL
    // | BLOB_LITERAL
    // | NULL_
    // | TRUE_
    // | FALSE_
    // | CURRENT_TIME_
    // | CURRENT_DATE_
    // | CURRENT_TIMESTAMP_

    numeric_literal: () =>
      choice(
        seq(
          choice(
            seq(
              repeat1(/[0-9]/),
              optional(seq(token.immediate("."), repeat(/[0-9]/)))
            ),
            seq(token.immediate("."), repeat1(/[0-9]/))
          ),
          optional(seq(i("E"), optional(choice("-", "+")), repeat1(/[0-9]/)))
        ),
        seq("0x", /[0-9a-fA-F]/)
      ),

    _word: () => /[a-zA-Z_]+[a-zA-Z_0-9]*/,

    _identifier: ($) =>
      choice(
        seq('"', repeat(choice(/[^"]/, '""')), '"'),
        seq("`", repeat(choice(/[^`]/, "``")), "`"),
        seq("[", repeat(/[~\]]/), "]"),
        $._word
      ),

    _name: ($) =>
      choice($._identifier, $.string_literal, seq("(", $._name, ")")),
  },
});
