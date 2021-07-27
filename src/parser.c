#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 122
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
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
  anon_sym_SQUOTE = 15,
  aux_sym_string_literal_token1 = 16,
  anon_sym_SQUOTE_SQUOTE = 17,
  aux_sym_numeric_literal_token1 = 18,
  aux_sym_numeric_literal_token2 = 19,
  anon_sym_DASH = 20,
  anon_sym_PLUS = 21,
  anon_sym_0x = 22,
  aux_sym_numeric_literal_token3 = 23,
  anon_sym_DQUOTE = 24,
  aux_sym__identifier_token1 = 25,
  anon_sym_DQUOTE_DQUOTE = 26,
  anon_sym_BQUOTE = 27,
  aux_sym__identifier_token2 = 28,
  anon_sym_BQUOTE_BQUOTE = 29,
  anon_sym_LBRACK = 30,
  aux_sym__identifier_token3 = 31,
  anon_sym_RBRACK = 32,
  anon_sym_LPAREN = 33,
  anon_sym_RPAREN = 34,
  sym_sql_stmt_list = 35,
  sym_select_stmt = 36,
  sym_table_or_subquery = 37,
  sym_result_column = 38,
  sym__expr = 39,
  sym_column_alias = 40,
  sym_schema_name = 41,
  sym_table_name = 42,
  sym_table_alias = 43,
  sym_index_name = 44,
  sym_column_name = 45,
  sym_string_literal = 46,
  sym_literal_value = 47,
  sym_numeric_literal = 48,
  sym__identifier = 49,
  sym__name = 50,
  aux_sym_sql_stmt_list_repeat1 = 51,
  aux_sym_select_stmt_repeat1 = 52,
  aux_sym_string_literal_repeat1 = 53,
  aux_sym_numeric_literal_repeat1 = 54,
  aux_sym__identifier_repeat1 = 55,
  aux_sym__identifier_repeat2 = 56,
  aux_sym__identifier_repeat3 = 57,
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
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '~') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(16);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(8);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(8);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 9:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '~') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 10:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '`') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 11:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '`') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '`') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '[') ADVANCE(51);
      if (lookahead == '`') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(8);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(23);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token1);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token3);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(39);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '*') ADVANCE(8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '-') ADVANCE(48);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(46);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
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
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
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
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 12},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 0},
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
    [sym_sql_stmt_list] = STATE(106),
    [sym_select_stmt] = STATE(83),
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
    STATE(13), 1,
      aux_sym_numeric_literal_repeat1,
    STATE(32), 1,
      sym_numeric_literal,
    STATE(46), 1,
      sym_result_column,
    STATE(117), 1,
      sym_table_name,
    STATE(121), 1,
      sym_schema_name,
    ACTIONS(13), 2,
      aux_sym_select_stmt_token2,
      aux_sym_select_stmt_token3,
    STATE(17), 3,
      sym__expr,
      sym_column_name,
      sym_literal_value,
    STATE(27), 3,
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
    STATE(13), 1,
      aux_sym_numeric_literal_repeat1,
    STATE(32), 1,
      sym_numeric_literal,
    STATE(47), 1,
      sym_result_column,
    STATE(117), 1,
      sym_table_name,
    STATE(121), 1,
      sym_schema_name,
    STATE(17), 3,
      sym__expr,
      sym_column_name,
      sym_literal_value,
    STATE(27), 3,
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
    STATE(13), 1,
      aux_sym_numeric_literal_repeat1,
    STATE(32), 1,
      sym_numeric_literal,
    STATE(61), 1,
      sym_result_column,
    STATE(117), 1,
      sym_table_name,
    STATE(121), 1,
      sym_schema_name,
    STATE(17), 3,
      sym__expr,
      sym_column_name,
      sym_literal_value,
    STATE(27), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [181] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
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
  [204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 5,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
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
  [227] = 13,
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
    ACTIONS(45), 1,
      sym__word,
    ACTIONS(47), 1,
      aux_sym_table_or_subquery_token1,
    ACTIONS(49), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(51), 1,
      aux_sym_table_or_subquery_token4,
    STATE(63), 1,
      sym_table_alias,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(59), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [270] = 13,
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
    ACTIONS(45), 1,
      sym__word,
    ACTIONS(55), 1,
      aux_sym_table_or_subquery_token1,
    ACTIONS(57), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(59), 1,
      aux_sym_table_or_subquery_token4,
    STATE(60), 1,
      sym_table_alias,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(59), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 5,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      sym__word,
    ACTIONS(61), 10,
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
  [336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 5,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      sym__word,
    ACTIONS(65), 10,
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
  [359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 5,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      sym__word,
    ACTIONS(69), 10,
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
  [382] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym_numeric_literal_token1,
    STATE(12), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(75), 4,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym_numeric_literal_token2,
      sym__word,
    ACTIONS(73), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [408] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_DOT,
    ACTIONS(86), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(88), 1,
      aux_sym_numeric_literal_token2,
    STATE(12), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(82), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [438] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(94), 1,
      aux_sym_numeric_literal_token2,
    STATE(12), 1,
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
  [465] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      aux_sym_numeric_literal_token2,
    ACTIONS(96), 1,
      aux_sym_numeric_literal_token1,
    STATE(16), 1,
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
  [492] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(102), 1,
      aux_sym_numeric_literal_token2,
    STATE(12), 1,
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
  [519] = 11,
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
    STATE(52), 1,
      sym_column_alias,
    STATE(72), 2,
      sym_string_literal,
      sym__identifier,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      sym__word,
    ACTIONS(112), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [576] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_numeric_literal_token1,
    STATE(12), 1,
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
  [600] = 11,
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
    ACTIONS(120), 1,
      sym__word,
    STATE(8), 1,
      sym_table_name,
    STATE(101), 1,
      sym_table_or_subquery,
    STATE(105), 1,
      sym_schema_name,
    STATE(22), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [636] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_numeric_literal_token1,
    STATE(12), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(124), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(122), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(114), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      sym__word,
    ACTIONS(112), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_numeric_literal_token1,
    STATE(12), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(130), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(128), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [706] = 11,
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
    ACTIONS(120), 1,
      sym__word,
    STATE(8), 1,
      sym_table_name,
    STATE(86), 1,
      sym_table_or_subquery,
    STATE(105), 1,
      sym_schema_name,
    STATE(22), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [742] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      aux_sym_numeric_literal_token1,
    STATE(12), 1,
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
  [766] = 11,
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
    ACTIONS(120), 1,
      sym__word,
    STATE(8), 1,
      sym_table_name,
    STATE(88), 1,
      sym_table_or_subquery,
    STATE(105), 1,
      sym_schema_name,
    STATE(22), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(134), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(132), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [823] = 10,
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
    ACTIONS(136), 1,
      sym__word,
    ACTIONS(138), 1,
      anon_sym_STAR,
    STATE(39), 1,
      sym_column_name,
    STATE(38), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [856] = 3,
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
  [874] = 9,
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
    ACTIONS(140), 1,
      sym__word,
    STATE(107), 1,
      sym_table_name,
    STATE(18), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [904] = 9,
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
    ACTIONS(142), 1,
      sym__word,
    STATE(87), 1,
      sym_index_name,
    STATE(103), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [934] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(144), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [952] = 9,
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
    ACTIONS(136), 1,
      sym__word,
    STATE(37), 1,
      sym_column_name,
    STATE(38), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [982] = 9,
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
    ACTIONS(148), 1,
      sym__word,
    STATE(56), 1,
      sym_table_alias,
    STATE(59), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1012] = 9,
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
    ACTIONS(140), 1,
      sym__word,
    STATE(7), 1,
      sym_table_name,
    STATE(18), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1042] = 9,
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
    ACTIONS(142), 1,
      sym__word,
    STATE(102), 1,
      sym_index_name,
    STATE(103), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [1090] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(132), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [1108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      sym__word,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [1126] = 9,
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
    ACTIONS(148), 1,
      sym__word,
    STATE(55), 1,
      sym_table_alias,
    STATE(59), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1156] = 9,
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
    ACTIONS(142), 1,
      sym__word,
    STATE(85), 1,
      sym_index_name,
    STATE(103), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1186] = 9,
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
    ACTIONS(142), 1,
      sym__word,
    STATE(89), 1,
      sym_index_name,
    STATE(103), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1216] = 9,
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
    ACTIONS(142), 1,
      sym__word,
    STATE(95), 1,
      sym_index_name,
    STATE(103), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1246] = 8,
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
    ACTIONS(158), 1,
      sym__word,
    STATE(118), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1273] = 8,
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
    ACTIONS(160), 1,
      sym__word,
    STATE(67), 1,
      sym_column_alias,
    STATE(72), 2,
      sym_string_literal,
      sym__identifier,
  [1299] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      aux_sym_select_stmt_token4,
    STATE(49), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1316] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      aux_sym_select_stmt_token4,
    STATE(50), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(172), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_stmt_token4,
  [1348] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      aux_sym_select_stmt_token4,
    STATE(48), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1365] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      aux_sym_select_stmt_token4,
    STATE(48), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1382] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(185), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [1396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1406] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(192), 1,
      anon_sym_DASH,
    ACTIONS(194), 1,
      anon_sym_PLUS,
    STATE(23), 1,
      aux_sym_numeric_literal_repeat1,
  [1422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(198), 1,
      anon_sym_DASH,
    ACTIONS(200), 1,
      anon_sym_PLUS,
    STATE(21), 1,
      aux_sym_numeric_literal_repeat1,
  [1438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(206), 1,
      aux_sym_table_or_subquery_token4,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1452] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(210), 1,
      aux_sym_table_or_subquery_token4,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1466] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(214), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [1480] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_BQUOTE,
    STATE(58), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(219), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [1494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
  [1504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(228), 1,
      aux_sym_table_or_subquery_token4,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1528] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(232), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [1542] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(238), 1,
      aux_sym_table_or_subquery_token4,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1566] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_BQUOTE,
    STATE(69), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(242), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [1580] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(246), 1,
      anon_sym_DASH,
    ACTIONS(248), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      aux_sym_numeric_literal_repeat1,
  [1596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1606] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(70), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(252), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [1620] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_BQUOTE,
    STATE(58), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(256), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [1634] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(258), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [1648] = 4,
    ACTIONS(181), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_SQUOTE,
    STATE(51), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(262), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [1662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      aux_sym__identifier_token3,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym__identifier_repeat3,
  [1685] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      aux_sym_sql_stmt_list_repeat1,
  [1698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      sym_select_stmt,
  [1711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      aux_sym_sql_stmt_list_repeat1,
  [1724] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      sym_select_stmt,
  [1737] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      aux_sym__identifier_token3,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      aux_sym__identifier_repeat3,
  [1750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    STATE(94), 1,
      sym_select_stmt,
  [1763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      aux_sym_sql_stmt_list_repeat1,
  [1776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      aux_sym__identifier_token3,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym__identifier_repeat3,
  [1789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      aux_sym_sql_stmt_list_repeat1,
  [1802] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
    ACTIONS(296), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      aux_sym_sql_stmt_list_repeat1,
  [1815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    STATE(94), 1,
      sym_select_stmt,
  [1825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      aux_sym_numeric_literal_token1,
    STATE(23), 1,
      aux_sym_numeric_literal_repeat1,
  [1883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      aux_sym_numeric_literal_token1,
    STATE(21), 1,
      aux_sym_numeric_literal_repeat1,
  [1925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      aux_sym_numeric_literal_token1,
    STATE(19), 1,
      aux_sym_numeric_literal_repeat1,
  [1935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym_numeric_literal_token1,
    STATE(14), 1,
      aux_sym_numeric_literal_repeat1,
  [1945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    STATE(82), 1,
      sym_select_stmt,
  [1963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
  [2002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
  [2009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_DOT,
  [2016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym_table_or_subquery_token2,
  [2023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      aux_sym_table_or_subquery_token3,
  [2030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_table_or_subquery_token3,
  [2037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      aux_sym_table_or_subquery_token2,
  [2044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_numeric_literal_token3,
  [2051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      aux_sym_table_or_subquery_token3,
  [2058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_table_or_subquery_token2,
  [2065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      aux_sym_table_or_subquery_token2,
  [2072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      aux_sym_table_or_subquery_token3,
  [2079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_DOT,
  [2086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
  [2093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      aux_sym_table_or_subquery_token2,
  [2100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      aux_sym_table_or_subquery_token3,
  [2107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 181,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 227,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 313,
  [SMALL_STATE(10)] = 336,
  [SMALL_STATE(11)] = 359,
  [SMALL_STATE(12)] = 382,
  [SMALL_STATE(13)] = 408,
  [SMALL_STATE(14)] = 438,
  [SMALL_STATE(15)] = 465,
  [SMALL_STATE(16)] = 492,
  [SMALL_STATE(17)] = 519,
  [SMALL_STATE(18)] = 556,
  [SMALL_STATE(19)] = 576,
  [SMALL_STATE(20)] = 600,
  [SMALL_STATE(21)] = 636,
  [SMALL_STATE(22)] = 660,
  [SMALL_STATE(23)] = 682,
  [SMALL_STATE(24)] = 706,
  [SMALL_STATE(25)] = 742,
  [SMALL_STATE(26)] = 766,
  [SMALL_STATE(27)] = 802,
  [SMALL_STATE(28)] = 823,
  [SMALL_STATE(29)] = 856,
  [SMALL_STATE(30)] = 874,
  [SMALL_STATE(31)] = 904,
  [SMALL_STATE(32)] = 934,
  [SMALL_STATE(33)] = 952,
  [SMALL_STATE(34)] = 982,
  [SMALL_STATE(35)] = 1012,
  [SMALL_STATE(36)] = 1042,
  [SMALL_STATE(37)] = 1072,
  [SMALL_STATE(38)] = 1090,
  [SMALL_STATE(39)] = 1108,
  [SMALL_STATE(40)] = 1126,
  [SMALL_STATE(41)] = 1156,
  [SMALL_STATE(42)] = 1186,
  [SMALL_STATE(43)] = 1216,
  [SMALL_STATE(44)] = 1246,
  [SMALL_STATE(45)] = 1273,
  [SMALL_STATE(46)] = 1299,
  [SMALL_STATE(47)] = 1316,
  [SMALL_STATE(48)] = 1333,
  [SMALL_STATE(49)] = 1348,
  [SMALL_STATE(50)] = 1365,
  [SMALL_STATE(51)] = 1382,
  [SMALL_STATE(52)] = 1396,
  [SMALL_STATE(53)] = 1406,
  [SMALL_STATE(54)] = 1422,
  [SMALL_STATE(55)] = 1438,
  [SMALL_STATE(56)] = 1452,
  [SMALL_STATE(57)] = 1466,
  [SMALL_STATE(58)] = 1480,
  [SMALL_STATE(59)] = 1494,
  [SMALL_STATE(60)] = 1504,
  [SMALL_STATE(61)] = 1518,
  [SMALL_STATE(62)] = 1528,
  [SMALL_STATE(63)] = 1542,
  [SMALL_STATE(64)] = 1556,
  [SMALL_STATE(65)] = 1566,
  [SMALL_STATE(66)] = 1580,
  [SMALL_STATE(67)] = 1596,
  [SMALL_STATE(68)] = 1606,
  [SMALL_STATE(69)] = 1620,
  [SMALL_STATE(70)] = 1634,
  [SMALL_STATE(71)] = 1648,
  [SMALL_STATE(72)] = 1662,
  [SMALL_STATE(73)] = 1672,
  [SMALL_STATE(74)] = 1685,
  [SMALL_STATE(75)] = 1698,
  [SMALL_STATE(76)] = 1711,
  [SMALL_STATE(77)] = 1724,
  [SMALL_STATE(78)] = 1737,
  [SMALL_STATE(79)] = 1750,
  [SMALL_STATE(80)] = 1763,
  [SMALL_STATE(81)] = 1776,
  [SMALL_STATE(82)] = 1789,
  [SMALL_STATE(83)] = 1802,
  [SMALL_STATE(84)] = 1815,
  [SMALL_STATE(85)] = 1825,
  [SMALL_STATE(86)] = 1833,
  [SMALL_STATE(87)] = 1841,
  [SMALL_STATE(88)] = 1849,
  [SMALL_STATE(89)] = 1857,
  [SMALL_STATE(90)] = 1865,
  [SMALL_STATE(91)] = 1873,
  [SMALL_STATE(92)] = 1883,
  [SMALL_STATE(93)] = 1891,
  [SMALL_STATE(94)] = 1899,
  [SMALL_STATE(95)] = 1907,
  [SMALL_STATE(96)] = 1915,
  [SMALL_STATE(97)] = 1925,
  [SMALL_STATE(98)] = 1935,
  [SMALL_STATE(99)] = 1945,
  [SMALL_STATE(100)] = 1953,
  [SMALL_STATE(101)] = 1963,
  [SMALL_STATE(102)] = 1971,
  [SMALL_STATE(103)] = 1979,
  [SMALL_STATE(104)] = 1987,
  [SMALL_STATE(105)] = 1995,
  [SMALL_STATE(106)] = 2002,
  [SMALL_STATE(107)] = 2009,
  [SMALL_STATE(108)] = 2016,
  [SMALL_STATE(109)] = 2023,
  [SMALL_STATE(110)] = 2030,
  [SMALL_STATE(111)] = 2037,
  [SMALL_STATE(112)] = 2044,
  [SMALL_STATE(113)] = 2051,
  [SMALL_STATE(114)] = 2058,
  [SMALL_STATE(115)] = 2065,
  [SMALL_STATE(116)] = 2072,
  [SMALL_STATE(117)] = 2079,
  [SMALL_STATE(118)] = 2086,
  [SMALL_STATE(119)] = 2093,
  [SMALL_STATE(120)] = 2100,
  [SMALL_STATE(121)] = 2107,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_literal_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_literal_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_literal_repeat1, 2), SHIFT_REPEAT(12),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_column, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_column, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_name, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 6),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 6),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_name, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 5),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_name, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_stmt_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_stmt_repeat1, 2), SHIFT_REPEAT(4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(51),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_column, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 5),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(57),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(58),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_column, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_alias, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_stmt_list_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_stmt_list_repeat1, 2), SHIFT_REPEAT(84),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat3, 2), SHIFT_REPEAT(81),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat3, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 8),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 6),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 7),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 6),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [316] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
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
