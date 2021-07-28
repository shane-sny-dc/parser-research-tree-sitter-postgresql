#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 138
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  sym__word = 1,
  anon_sym_SEMI = 2,
  sym_comment = 3,
  aux_sym_select_stmt_token1 = 4,
  aux_sym_select_stmt_token2 = 5,
  aux_sym_select_stmt_token3 = 6,
  anon_sym_COMMA = 7,
  aux_sym_select_stmt_token4 = 8,
  anon_sym_DOT = 9,
  aux_sym_table_or_subquery_token1 = 10,
  aux_sym_table_or_subquery_token2 = 11,
  aux_sym_table_or_subquery_token3 = 12,
  aux_sym_table_or_subquery_token4 = 13,
  anon_sym_STAR = 14,
  anon_sym_DOT2 = 15,
  anon_sym_SQUOTE = 16,
  aux_sym_string_literal_token1 = 17,
  anon_sym_SQUOTE_SQUOTE = 18,
  aux_sym_numeric_literal_token1 = 19,
  aux_sym_numeric_literal_token2 = 20,
  anon_sym_DASH = 21,
  anon_sym_PLUS = 22,
  anon_sym_0x = 23,
  aux_sym_numeric_literal_token3 = 24,
  anon_sym_DQUOTE = 25,
  aux_sym__identifier_token1 = 26,
  anon_sym_DQUOTE_DQUOTE = 27,
  anon_sym_BQUOTE = 28,
  aux_sym__identifier_token2 = 29,
  anon_sym_BQUOTE_BQUOTE = 30,
  anon_sym_LBRACK = 31,
  aux_sym__identifier_token3 = 32,
  anon_sym_RBRACK = 33,
  anon_sym_LPAREN = 34,
  anon_sym_RPAREN = 35,
  sym_sql_stmt_list = 36,
  sym_select_stmt = 37,
  sym_table_or_subquery = 38,
  sym_result_column = 39,
  sym__expr = 40,
  sym_column_alias = 41,
  sym_schema_name = 42,
  sym_table_name = 43,
  sym_table_alias = 44,
  sym_index_name = 45,
  sym_column_name = 46,
  sym_string_literal = 47,
  sym_literal_value = 48,
  sym_numeric_literal = 49,
  sym__identifier = 50,
  sym__name = 51,
  aux_sym_sql_stmt_list_repeat1 = 52,
  aux_sym_select_stmt_repeat1 = 53,
  aux_sym_string_literal_repeat1 = 54,
  aux_sym_numeric_literal_repeat1 = 55,
  aux_sym__identifier_repeat1 = 56,
  aux_sym__identifier_repeat2 = 57,
  aux_sym__identifier_repeat3 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [anon_sym_SEMI] = ";",
  [sym_comment] = "comment",
  [aux_sym_select_stmt_token1] = "SELECT",
  [aux_sym_select_stmt_token2] = "DISTINCT",
  [aux_sym_select_stmt_token3] = "ALL",
  [anon_sym_COMMA] = ",",
  [aux_sym_select_stmt_token4] = "FROM",
  [anon_sym_DOT] = ".",
  [aux_sym_table_or_subquery_token1] = "AS",
  [aux_sym_table_or_subquery_token2] = "INDEXED",
  [aux_sym_table_or_subquery_token3] = "BY",
  [aux_sym_table_or_subquery_token4] = "NOT",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT2] = ".",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [aux_sym_numeric_literal_token1] = "numeric_literal_token1",
  [aux_sym_numeric_literal_token2] = "E",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_0x] = "0x",
  [aux_sym_numeric_literal_token3] = "numeric_literal_token3",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [anon_sym_BQUOTE] = "`",
  [aux_sym__identifier_token2] = "_identifier_token2",
  [anon_sym_BQUOTE_BQUOTE] = "``",
  [anon_sym_LBRACK] = "[",
  [aux_sym__identifier_token3] = "_identifier_token3",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_sql_stmt_list] = "sql_stmt_list",
  [sym_select_stmt] = "select_stmt",
  [sym_table_or_subquery] = "table_or_subquery",
  [sym_result_column] = "result_column",
  [sym__expr] = "_expr",
  [sym_column_alias] = "column_alias",
  [sym_schema_name] = "schema_name",
  [sym_table_name] = "table_name",
  [sym_table_alias] = "table_alias",
  [sym_index_name] = "index_name",
  [sym_column_name] = "column_name",
  [sym_string_literal] = "string_literal",
  [sym_literal_value] = "literal_value",
  [sym_numeric_literal] = "numeric_literal",
  [sym__identifier] = "_identifier",
  [sym__name] = "_name",
  [aux_sym_sql_stmt_list_repeat1] = "sql_stmt_list_repeat1",
  [aux_sym_select_stmt_repeat1] = "select_stmt_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_numeric_literal_repeat1] = "numeric_literal_repeat1",
  [aux_sym__identifier_repeat1] = "_identifier_repeat1",
  [aux_sym__identifier_repeat2] = "_identifier_repeat2",
  [aux_sym__identifier_repeat3] = "_identifier_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_comment] = sym_comment,
  [aux_sym_select_stmt_token1] = aux_sym_select_stmt_token1,
  [aux_sym_select_stmt_token2] = aux_sym_select_stmt_token2,
  [aux_sym_select_stmt_token3] = aux_sym_select_stmt_token3,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_select_stmt_token4] = aux_sym_select_stmt_token4,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_table_or_subquery_token1] = aux_sym_table_or_subquery_token1,
  [aux_sym_table_or_subquery_token2] = aux_sym_table_or_subquery_token2,
  [aux_sym_table_or_subquery_token3] = aux_sym_table_or_subquery_token3,
  [aux_sym_table_or_subquery_token4] = aux_sym_table_or_subquery_token4,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DOT2] = anon_sym_DOT,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [aux_sym_numeric_literal_token1] = aux_sym_numeric_literal_token1,
  [aux_sym_numeric_literal_token2] = aux_sym_numeric_literal_token2,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_0x] = anon_sym_0x,
  [aux_sym_numeric_literal_token3] = aux_sym_numeric_literal_token3,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [anon_sym_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym__identifier_token2] = aux_sym__identifier_token2,
  [anon_sym_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym__identifier_token3] = aux_sym__identifier_token3,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_sql_stmt_list] = sym_sql_stmt_list,
  [sym_select_stmt] = sym_select_stmt,
  [sym_table_or_subquery] = sym_table_or_subquery,
  [sym_result_column] = sym_result_column,
  [sym__expr] = sym__expr,
  [sym_column_alias] = sym_column_alias,
  [sym_schema_name] = sym_schema_name,
  [sym_table_name] = sym_table_name,
  [sym_table_alias] = sym_table_alias,
  [sym_index_name] = sym_index_name,
  [sym_column_name] = sym_column_name,
  [sym_string_literal] = sym_string_literal,
  [sym_literal_value] = sym_literal_value,
  [sym_numeric_literal] = sym_numeric_literal,
  [sym__identifier] = sym__identifier,
  [sym__name] = sym__name,
  [aux_sym_sql_stmt_list_repeat1] = aux_sym_sql_stmt_list_repeat1,
  [aux_sym_select_stmt_repeat1] = aux_sym_select_stmt_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_numeric_literal_repeat1] = aux_sym_numeric_literal_repeat1,
  [aux_sym__identifier_repeat1] = aux_sym__identifier_repeat1,
  [aux_sym__identifier_repeat2] = aux_sym__identifier_repeat2,
  [aux_sym__identifier_repeat3] = aux_sym__identifier_repeat3,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_select_stmt_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_stmt_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_stmt_token3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_select_stmt_token4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_or_subquery_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_or_subquery_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_or_subquery_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_or_subquery_token4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_literal_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_numeric_literal_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__identifier_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_sql_stmt_list] = {
    .visible = true,
    .named = true,
  },
  [sym_select_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_table_or_subquery] = {
    .visible = true,
    .named = true,
  },
  [sym_result_column] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_column_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_schema_name] = {
    .visible = true,
    .named = true,
  },
  [sym_table_name] = {
    .visible = true,
    .named = true,
  },
  [sym_table_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_index_name] = {
    .visible = true,
    .named = true,
  },
  [sym_column_name] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_value] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_sql_stmt_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_select_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_repeat3] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(8);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(8);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 9:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '~') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 10:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 11:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 12:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(19);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '[') ADVANCE(53);
      if (lookahead == '`') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(8);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT2);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(25);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token1);
      if (lookahead == 'x') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token3);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '-') ADVANCE(17);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(48);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(3);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(5);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(6);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(7);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(9);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token2);
      END_STATE();
    case 5:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_table_or_subquery_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_table_or_subquery_token3);
      END_STATE();
    case 12:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_select_stmt_token3);
      END_STATE();
    case 18:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_table_or_subquery_token4);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_select_stmt_token4);
      END_STATE();
    case 25:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_select_stmt_token1);
      END_STATE();
    case 33:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_table_or_subquery_token2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_select_stmt_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 10},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 10},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_select_stmt_token1] = ACTIONS(1),
    [aux_sym_select_stmt_token2] = ACTIONS(1),
    [aux_sym_select_stmt_token3] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_select_stmt_token4] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_table_or_subquery_token1] = ACTIONS(1),
    [aux_sym_table_or_subquery_token2] = ACTIONS(1),
    [aux_sym_table_or_subquery_token3] = ACTIONS(1),
    [aux_sym_table_or_subquery_token4] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [aux_sym_numeric_literal_token1] = ACTIONS(1),
    [aux_sym_numeric_literal_token2] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_numeric_literal_token3] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym__identifier_token3] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_sql_stmt_list] = STATE(137),
    [sym_select_stmt] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [aux_sym_select_stmt_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym__word,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(23), 1,
      anon_sym_0x,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      aux_sym_numeric_literal_repeat1,
    STATE(38), 1,
      sym_numeric_literal,
    STATE(51), 1,
      sym_result_column,
    STATE(107), 1,
      sym_table_name,
    STATE(128), 1,
      sym_schema_name,
    ACTIONS(13), 2,
      aux_sym_select_stmt_token2,
      aux_sym_select_stmt_token3,
    STATE(17), 3,
      sym__expr,
      sym_column_name,
      sym_literal_value,
    STATE(22), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [63] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(23), 1,
      anon_sym_0x,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym__word,
    STATE(12), 1,
      aux_sym_numeric_literal_repeat1,
    STATE(38), 1,
      sym_numeric_literal,
    STATE(48), 1,
      sym_result_column,
    STATE(107), 1,
      sym_table_name,
    STATE(128), 1,
      sym_schema_name,
    STATE(17), 3,
      sym__expr,
      sym_column_name,
      sym_literal_value,
    STATE(22), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [122] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(23), 1,
      anon_sym_0x,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym__word,
    STATE(12), 1,
      aux_sym_numeric_literal_repeat1,
    STATE(38), 1,
      sym_numeric_literal,
    STATE(66), 1,
      sym_result_column,
    STATE(107), 1,
      sym_table_name,
    STATE(128), 1,
      sym_schema_name,
    STATE(17), 3,
      sym__expr,
      sym_column_name,
      sym_literal_value,
    STATE(22), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 6,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      anon_sym_DOT2,
      sym__word,
    ACTIONS(35), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 6,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      anon_sym_DOT2,
      sym__word,
    ACTIONS(39), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 6,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      anon_sym_DOT2,
      sym__word,
    ACTIONS(43), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 6,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      anon_sym_DOT2,
      sym__word,
    ACTIONS(47), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 6,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      anon_sym_DOT2,
      sym__word,
    ACTIONS(51), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [301] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      sym__word,
    ACTIONS(59), 1,
      aux_sym_table_or_subquery_token1,
    ACTIONS(61), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(63), 1,
      aux_sym_table_or_subquery_token4,
    STATE(77), 1,
      sym_table_alias,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(71), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [344] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      sym__word,
    ACTIONS(67), 1,
      aux_sym_table_or_subquery_token1,
    ACTIONS(69), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(71), 1,
      aux_sym_table_or_subquery_token4,
    STATE(60), 1,
      sym_table_alias,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(71), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [387] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(79), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(81), 1,
      aux_sym_numeric_literal_token2,
    STATE(13), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(75), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [417] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      aux_sym_numeric_literal_token1,
    STATE(13), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(85), 4,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym_numeric_literal_token2,
      sym__word,
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [443] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(96), 1,
      aux_sym_numeric_literal_token2,
    STATE(15), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(92), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [470] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(102), 1,
      aux_sym_numeric_literal_token2,
    STATE(13), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(100), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [497] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(96), 1,
      aux_sym_numeric_literal_token2,
    STATE(13), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(92), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [524] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(106), 1,
      sym__word,
    ACTIONS(108), 1,
      aux_sym_select_stmt_token4,
    ACTIONS(110), 1,
      aux_sym_table_or_subquery_token1,
    STATE(54), 1,
      sym_column_alias,
    STATE(55), 2,
      sym_string_literal,
      sym__identifier,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [561] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_numeric_literal_token1,
    STATE(13), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(100), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [585] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_numeric_literal_token1,
    STATE(13), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(114), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(112), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_numeric_literal_token1,
    STATE(13), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(118), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_DOT,
    ACTIONS(122), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      sym__word,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [655] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_DOT2,
    ACTIONS(128), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [679] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym__word,
    STATE(10), 1,
      sym_table_name,
    STATE(96), 1,
      sym_table_or_subquery,
    STATE(133), 1,
      sym_schema_name,
    STATE(21), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [715] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_numeric_literal_token1,
    STATE(13), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(136), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [739] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym__word,
    STATE(10), 1,
      sym_table_name,
    STATE(105), 1,
      sym_table_or_subquery,
    STATE(133), 1,
      sym_schema_name,
    STATE(21), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [775] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym__word,
    STATE(10), 1,
      sym_table_name,
    STATE(101), 1,
      sym_table_or_subquery,
    STATE(133), 1,
      sym_schema_name,
    STATE(21), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      sym__word,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT2,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [831] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym__word,
    ACTIONS(140), 1,
      anon_sym_SQUOTE,
    ACTIONS(142), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_BQUOTE,
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_table_name,
    STATE(27), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [861] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      sym__word,
    STATE(11), 1,
      sym_table_name,
    STATE(27), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [891] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym__word,
    STATE(102), 1,
      sym_index_name,
    STATE(104), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [921] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym__word,
    STATE(108), 1,
      sym_index_name,
    STATE(104), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(126), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(152), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [1005] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      sym__word,
    STATE(56), 1,
      sym_table_alias,
    STATE(71), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1035] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym__word,
    STATE(93), 1,
      sym_index_name,
    STATE(104), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1065] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym__word,
    STATE(103), 1,
      sym_index_name,
    STATE(104), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [1113] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym__word,
    STATE(113), 1,
      sym_index_name,
    STATE(104), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1143] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      sym__word,
    STATE(34), 1,
      sym_column_name,
    STATE(33), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(164), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [1191] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      sym__word,
    STATE(79), 1,
      sym_table_alias,
    STATE(71), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1221] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 1,
      sym__word,
    STATE(41), 1,
      sym_column_name,
    STATE(33), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1251] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      sym__word,
    STATE(136), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1278] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(170), 1,
      sym__word,
    STATE(115), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1305] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_BQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      sym__word,
    STATE(52), 1,
      sym_column_alias,
    STATE(55), 2,
      sym_string_literal,
      sym__identifier,
  [1331] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      aux_sym_select_stmt_token4,
    STATE(50), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1348] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      aux_sym_select_stmt_token4,
    STATE(49), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1365] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      aux_sym_select_stmt_token4,
    STATE(50), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_stmt_token4,
  [1397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      aux_sym_select_stmt_token4,
    STATE(47), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1424] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(199), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [1438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(207), 1,
      aux_sym_table_or_subquery_token4,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1472] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(211), 1,
      anon_sym_DASH,
    ACTIONS(213), 1,
      anon_sym_PLUS,
    STATE(18), 1,
      aux_sym_numeric_literal_repeat1,
  [1488] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_BQUOTE,
    STATE(64), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(217), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [1502] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(221), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [1516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(227), 1,
      aux_sym_table_or_subquery_token4,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1530] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(231), 1,
      anon_sym_DASH,
    ACTIONS(233), 1,
      anon_sym_PLUS,
    STATE(24), 1,
      aux_sym_numeric_literal_repeat1,
  [1546] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(237), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [1560] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(242), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [1574] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_BQUOTE,
    STATE(64), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(247), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [1588] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(252), 1,
      anon_sym_DASH,
    ACTIONS(254), 1,
      anon_sym_PLUS,
    STATE(19), 1,
      aux_sym_numeric_literal_repeat1,
  [1604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1614] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(63), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(199), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [1628] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(258), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [1642] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_SQUOTE,
    STATE(75), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(262), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [1656] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_BQUOTE,
    STATE(58), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(266), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [1670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
  [1680] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_BQUOTE,
    STATE(64), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(217), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [1694] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_BQUOTE,
    STATE(72), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(270), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [1708] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(272), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [1722] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(258), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [1736] = 4,
    ACTIONS(195), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_SQUOTE,
    STATE(68), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(278), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [1750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(284), 1,
      aux_sym_table_or_subquery_token4,
    ACTIONS(280), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(290), 1,
      aux_sym_table_or_subquery_token4,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym_select_stmt,
  [1801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_sql_stmt_list_repeat1,
  [1814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym_select_stmt,
  [1827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      anon_sym_SEMI,
    STATE(84), 1,
      aux_sym_sql_stmt_list_repeat1,
  [1840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_sql_stmt_list_repeat1,
  [1853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      aux_sym_sql_stmt_list_repeat1,
  [1866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym__identifier_token3,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym__identifier_repeat3,
  [1879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      aux_sym__identifier_token3,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym__identifier_repeat3,
  [1892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym__identifier_token3,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym__identifier_repeat3,
  [1905] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym_select_stmt,
  [1918] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
    ACTIONS(321), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      aux_sym_sql_stmt_list_repeat1,
  [1931] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym__identifier_token3,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym__identifier_repeat3,
  [1944] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym__identifier_token3,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym__identifier_repeat3,
  [1957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    STATE(83), 1,
      sym_select_stmt,
  [1999] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_numeric_literal_token1,
    STATE(20), 1,
      aux_sym_numeric_literal_repeat1,
  [2009] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym_numeric_literal_token1,
    STATE(24), 1,
      aux_sym_numeric_literal_repeat1,
  [2019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    STATE(95), 1,
      sym_select_stmt,
  [2029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(344), 1,
      anon_sym_DOT2,
  [2087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2095] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym_numeric_literal_token1,
    STATE(16), 1,
      aux_sym_numeric_literal_repeat1,
  [2105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      aux_sym_numeric_literal_token1,
    STATE(19), 1,
      aux_sym_numeric_literal_repeat1,
  [2131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
  [2154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOT2,
  [2161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      aux_sym_table_or_subquery_token3,
  [2168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      aux_sym_table_or_subquery_token3,
  [2175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym_table_or_subquery_token3,
  [2182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      aux_sym_table_or_subquery_token2,
  [2189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      aux_sym_table_or_subquery_token3,
  [2196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym_table_or_subquery_token2,
  [2203] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT2,
  [2210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DOT2,
  [2217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DOT2,
  [2224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_table_or_subquery_token2,
  [2231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DOT2,
  [2238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_DOT2,
  [2245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym_table_or_subquery_token2,
  [2252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      aux_sym_table_or_subquery_token3,
  [2259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      aux_sym_numeric_literal_token3,
  [2266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT2,
  [2273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
  [2280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_STAR,
  [2287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym_table_or_subquery_token2,
  [2294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
  [2301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 181,
  [SMALL_STATE(6)] = 205,
  [SMALL_STATE(7)] = 229,
  [SMALL_STATE(8)] = 253,
  [SMALL_STATE(9)] = 277,
  [SMALL_STATE(10)] = 301,
  [SMALL_STATE(11)] = 344,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 417,
  [SMALL_STATE(14)] = 443,
  [SMALL_STATE(15)] = 470,
  [SMALL_STATE(16)] = 497,
  [SMALL_STATE(17)] = 524,
  [SMALL_STATE(18)] = 561,
  [SMALL_STATE(19)] = 585,
  [SMALL_STATE(20)] = 609,
  [SMALL_STATE(21)] = 633,
  [SMALL_STATE(22)] = 655,
  [SMALL_STATE(23)] = 679,
  [SMALL_STATE(24)] = 715,
  [SMALL_STATE(25)] = 739,
  [SMALL_STATE(26)] = 775,
  [SMALL_STATE(27)] = 811,
  [SMALL_STATE(28)] = 831,
  [SMALL_STATE(29)] = 861,
  [SMALL_STATE(30)] = 891,
  [SMALL_STATE(31)] = 921,
  [SMALL_STATE(32)] = 951,
  [SMALL_STATE(33)] = 969,
  [SMALL_STATE(34)] = 987,
  [SMALL_STATE(35)] = 1005,
  [SMALL_STATE(36)] = 1035,
  [SMALL_STATE(37)] = 1065,
  [SMALL_STATE(38)] = 1095,
  [SMALL_STATE(39)] = 1113,
  [SMALL_STATE(40)] = 1143,
  [SMALL_STATE(41)] = 1173,
  [SMALL_STATE(42)] = 1191,
  [SMALL_STATE(43)] = 1221,
  [SMALL_STATE(44)] = 1251,
  [SMALL_STATE(45)] = 1278,
  [SMALL_STATE(46)] = 1305,
  [SMALL_STATE(47)] = 1331,
  [SMALL_STATE(48)] = 1348,
  [SMALL_STATE(49)] = 1365,
  [SMALL_STATE(50)] = 1382,
  [SMALL_STATE(51)] = 1397,
  [SMALL_STATE(52)] = 1414,
  [SMALL_STATE(53)] = 1424,
  [SMALL_STATE(54)] = 1438,
  [SMALL_STATE(55)] = 1448,
  [SMALL_STATE(56)] = 1458,
  [SMALL_STATE(57)] = 1472,
  [SMALL_STATE(58)] = 1488,
  [SMALL_STATE(59)] = 1502,
  [SMALL_STATE(60)] = 1516,
  [SMALL_STATE(61)] = 1530,
  [SMALL_STATE(62)] = 1546,
  [SMALL_STATE(63)] = 1560,
  [SMALL_STATE(64)] = 1574,
  [SMALL_STATE(65)] = 1588,
  [SMALL_STATE(66)] = 1604,
  [SMALL_STATE(67)] = 1614,
  [SMALL_STATE(68)] = 1628,
  [SMALL_STATE(69)] = 1642,
  [SMALL_STATE(70)] = 1656,
  [SMALL_STATE(71)] = 1670,
  [SMALL_STATE(72)] = 1680,
  [SMALL_STATE(73)] = 1694,
  [SMALL_STATE(74)] = 1708,
  [SMALL_STATE(75)] = 1722,
  [SMALL_STATE(76)] = 1736,
  [SMALL_STATE(77)] = 1750,
  [SMALL_STATE(78)] = 1764,
  [SMALL_STATE(79)] = 1774,
  [SMALL_STATE(80)] = 1788,
  [SMALL_STATE(81)] = 1801,
  [SMALL_STATE(82)] = 1814,
  [SMALL_STATE(83)] = 1827,
  [SMALL_STATE(84)] = 1840,
  [SMALL_STATE(85)] = 1853,
  [SMALL_STATE(86)] = 1866,
  [SMALL_STATE(87)] = 1879,
  [SMALL_STATE(88)] = 1892,
  [SMALL_STATE(89)] = 1905,
  [SMALL_STATE(90)] = 1918,
  [SMALL_STATE(91)] = 1931,
  [SMALL_STATE(92)] = 1944,
  [SMALL_STATE(93)] = 1957,
  [SMALL_STATE(94)] = 1965,
  [SMALL_STATE(95)] = 1973,
  [SMALL_STATE(96)] = 1981,
  [SMALL_STATE(97)] = 1989,
  [SMALL_STATE(98)] = 1999,
  [SMALL_STATE(99)] = 2009,
  [SMALL_STATE(100)] = 2019,
  [SMALL_STATE(101)] = 2029,
  [SMALL_STATE(102)] = 2037,
  [SMALL_STATE(103)] = 2045,
  [SMALL_STATE(104)] = 2053,
  [SMALL_STATE(105)] = 2061,
  [SMALL_STATE(106)] = 2069,
  [SMALL_STATE(107)] = 2077,
  [SMALL_STATE(108)] = 2087,
  [SMALL_STATE(109)] = 2095,
  [SMALL_STATE(110)] = 2105,
  [SMALL_STATE(111)] = 2113,
  [SMALL_STATE(112)] = 2121,
  [SMALL_STATE(113)] = 2131,
  [SMALL_STATE(114)] = 2139,
  [SMALL_STATE(115)] = 2147,
  [SMALL_STATE(116)] = 2154,
  [SMALL_STATE(117)] = 2161,
  [SMALL_STATE(118)] = 2168,
  [SMALL_STATE(119)] = 2175,
  [SMALL_STATE(120)] = 2182,
  [SMALL_STATE(121)] = 2189,
  [SMALL_STATE(122)] = 2196,
  [SMALL_STATE(123)] = 2203,
  [SMALL_STATE(124)] = 2210,
  [SMALL_STATE(125)] = 2217,
  [SMALL_STATE(126)] = 2224,
  [SMALL_STATE(127)] = 2231,
  [SMALL_STATE(128)] = 2238,
  [SMALL_STATE(129)] = 2245,
  [SMALL_STATE(130)] = 2252,
  [SMALL_STATE(131)] = 2259,
  [SMALL_STATE(132)] = 2266,
  [SMALL_STATE(133)] = 2273,
  [SMALL_STATE(134)] = 2280,
  [SMALL_STATE(135)] = 2287,
  [SMALL_STATE(136)] = 2294,
  [SMALL_STATE(137)] = 2301,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_literal_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_literal_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_literal_repeat1, 2), SHIFT_REPEAT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_column, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_column, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 6),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 6),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_name, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_name, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_name, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_schema_name, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 5),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_stmt_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_stmt_repeat1, 2), SHIFT_REPEAT(4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_column, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_column, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_alias, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(62),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(63),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(64),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat3, 2), SHIFT_REPEAT(88),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat3, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_stmt_list_repeat1, 2),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_stmt_list_repeat1, 2), SHIFT_REPEAT(100),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 6),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 8),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 6),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 7),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [384] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_postgresql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__word,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
