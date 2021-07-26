#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 164
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  sym_comment = 2,
  aux_sym_select_stmt_token1 = 3,
  aux_sym_select_stmt_token2 = 4,
  aux_sym_select_stmt_token3 = 5,
  anon_sym_COMMA = 6,
  aux_sym_select_stmt_token4 = 7,
  anon_sym_DOT = 8,
  aux_sym_table_or_subquery_token1 = 9,
  aux_sym_table_or_subquery_token2 = 10,
  aux_sym_table_or_subquery_token3 = 11,
  aux_sym_table_or_subquery_token4 = 12,
  anon_sym_STAR = 13,
  anon_sym_SQUOTE = 14,
  aux_sym_string_literal_token1 = 15,
  anon_sym_SQUOTE_SQUOTE = 16,
  aux_sym_numeric_literal_token1 = 17,
  aux_sym_numeric_literal_token2 = 18,
  anon_sym_DASH = 19,
  anon_sym_PLUS = 20,
  anon_sym_0x = 21,
  aux_sym_numeric_literal_token3 = 22,
  anon_sym_DQUOTE = 23,
  aux_sym__identifier_token1 = 24,
  anon_sym_DQUOTE_DQUOTE = 25,
  anon_sym_BQUOTE = 26,
  aux_sym__identifier_token2 = 27,
  anon_sym_BQUOTE_BQUOTE = 28,
  anon_sym_LBRACK = 29,
  aux_sym__identifier_token3 = 30,
  anon_sym_RBRACK = 31,
  aux_sym__identifier_token4 = 32,
  aux_sym__identifier_token5 = 33,
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
  aux_sym__identifier_repeat4 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [aux_sym__identifier_token4] = "_identifier_token4",
  [aux_sym__identifier_token5] = "_identifier_token5",
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
  [aux_sym__identifier_repeat4] = "_identifier_repeat4",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [aux_sym__identifier_token4] = aux_sym__identifier_token4,
  [aux_sym__identifier_token5] = aux_sym__identifier_token5,
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
  [aux_sym__identifier_repeat4] = aux_sym__identifier_repeat4,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
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
  [aux_sym__identifier_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__identifier_token5] = {
    .visible = false,
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
  [aux_sym__identifier_repeat4] = {
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
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == ']') ADVANCE(85);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead == '~') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(55);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '`') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 18:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 25:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '/') ADVANCE(27);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(27);
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 28:
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(97);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 29:
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 30:
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 31:
      if (eof) ADVANCE(36);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == '`') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 32:
      if (eof) ADVANCE(36);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 33:
      if (eof) ADVANCE(36);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(18);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(19);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 34:
      if (eof) ADVANCE(36);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(37);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(27);
      if (lookahead == '*') ADVANCE(26);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_select_stmt_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_select_stmt_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_select_stmt_token3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_select_stmt_token4);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_select_stmt_token4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_table_or_subquery_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_table_or_subquery_token2);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_table_or_subquery_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_table_or_subquery_token3);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_table_or_subquery_token4);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_table_or_subquery_token4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(56);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token1);
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_numeric_literal_token3);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(71);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(82);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__identifier_token2);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(78);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__identifier_token3);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__identifier_token4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__identifier_token5);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__identifier_token5);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__identifier_token5);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__identifier_token5);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 29},
  [15] = {.lex_state = 29},
  [16] = {.lex_state = 29},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 29},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 29},
  [21] = {.lex_state = 29},
  [22] = {.lex_state = 31},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 31},
  [25] = {.lex_state = 29},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 31},
  [31] = {.lex_state = 29},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 31},
  [35] = {.lex_state = 31},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 29},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 29},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 35},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 34},
  [65] = {.lex_state = 34},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 33},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 33},
  [71] = {.lex_state = 33},
  [72] = {.lex_state = 32},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 33},
  [83] = {.lex_state = 33},
  [84] = {.lex_state = 33},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 33},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 33},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 8},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 33},
  [107] = {.lex_state = 33},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 33},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 33},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 33},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 33},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 33},
  [137] = {.lex_state = 33},
  [138] = {.lex_state = 33},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 33},
  [143] = {.lex_state = 33},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 33},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 33},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 33},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 33},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 33},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_table_or_subquery_token2] = ACTIONS(1),
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
    [aux_sym__identifier_token5] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_sql_stmt_list] = STATE(163),
    [sym_select_stmt] = STATE(122),
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
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(21), 1,
      anon_sym_0x,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      aux_sym__identifier_token4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      aux_sym_numeric_literal_repeat1,
    STATE(55), 1,
      sym_numeric_literal,
    STATE(75), 1,
      sym_result_column,
    STATE(148), 1,
      sym_schema_name,
    STATE(149), 1,
      sym_table_name,
    ACTIONS(11), 2,
      aux_sym_select_stmt_token2,
      aux_sym_select_stmt_token3,
    STATE(18), 3,
      sym__expr,
      sym_column_name,
      sym_literal_value,
    STATE(40), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [63] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(21), 1,
      anon_sym_0x,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym__identifier_token4,
    STATE(7), 1,
      aux_sym_numeric_literal_repeat1,
    STATE(55), 1,
      sym_numeric_literal,
    STATE(73), 1,
      sym_result_column,
    STATE(148), 1,
      sym_schema_name,
    STATE(149), 1,
      sym_table_name,
    STATE(18), 3,
      sym__expr,
      sym_column_name,
      sym_literal_value,
    STATE(40), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [122] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(21), 1,
      anon_sym_0x,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym__identifier_token4,
    STATE(7), 1,
      aux_sym_numeric_literal_repeat1,
    STATE(55), 1,
      sym_numeric_literal,
    STATE(106), 1,
      sym_result_column,
    STATE(148), 1,
      sym_schema_name,
    STATE(149), 1,
      sym_table_name,
    STATE(18), 3,
      sym__expr,
      sym_column_name,
      sym_literal_value,
    STATE(40), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [181] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_table_or_subquery_token1,
    ACTIONS(39), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(41), 1,
      aux_sym_table_or_subquery_token4,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      aux_sym__identifier_token4,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_table_alias,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(89), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [224] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      aux_sym__identifier_token4,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      aux_sym_table_or_subquery_token1,
    ACTIONS(59), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(61), 1,
      aux_sym_table_or_subquery_token4,
    STATE(104), 1,
      sym_table_alias,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
    STATE(89), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [267] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(71), 1,
      aux_sym_numeric_literal_token2,
    STATE(11), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(65), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [297] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      aux_sym__identifier_token5,
    STATE(8), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(75), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      aux_sym__identifier_token4,
    ACTIONS(73), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [323] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym__identifier_token5,
    STATE(8), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(82), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      aux_sym__identifier_token4,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [349] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      aux_sym__identifier_token5,
    STATE(9), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(88), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      aux_sym__identifier_token4,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [375] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym_numeric_literal_token1,
    STATE(11), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(94), 4,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym_numeric_literal_token2,
      aux_sym__identifier_token4,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [401] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(103), 1,
      aux_sym_numeric_literal_token2,
    STATE(11), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(101), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(111), 1,
      aux_sym_numeric_literal_token2,
    STATE(12), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(107), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [455] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      aux_sym__identifier_token5,
    STATE(14), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(75), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(73), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [480] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      aux_sym__identifier_token5,
    STATE(14), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(82), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [505] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym__identifier_token5,
    STATE(15), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(88), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(86), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [530] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(111), 1,
      aux_sym_numeric_literal_token2,
    STATE(11), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(107), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [557] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      aux_sym_select_stmt_token4,
    ACTIONS(124), 1,
      aux_sym_table_or_subquery_token1,
    ACTIONS(126), 1,
      aux_sym__identifier_token4,
    STATE(107), 1,
      sym_column_alias,
    STATE(82), 2,
      sym_string_literal,
      sym__identifier,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [594] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      aux_sym__identifier_token4,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_table_name,
    STATE(132), 1,
      sym_table_or_subquery,
    STATE(147), 1,
      sym_schema_name,
    STATE(26), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [630] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(140), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(144), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      aux_sym_numeric_literal_token1,
    STATE(35), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(150), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [694] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      aux_sym__identifier_token4,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_table_name,
    STATE(134), 1,
      sym_table_or_subquery,
    STATE(147), 1,
      sym_schema_name,
    STATE(26), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [730] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      aux_sym_numeric_literal_token1,
    STATE(35), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(156), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(158), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(166), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      aux_sym__identifier_token4,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [796] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      aux_sym__identifier_token4,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_table_name,
    STATE(141), 1,
      sym_table_or_subquery,
    STATE(147), 1,
      sym_schema_name,
    STATE(26), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      aux_sym__identifier_token4,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      aux_sym__identifier_token4,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [872] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      aux_sym_numeric_literal_token1,
    STATE(35), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(101), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(168), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      aux_sym__identifier_token4,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [936] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(80), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
  [956] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      aux_sym_numeric_literal_token1,
    STATE(35), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(174), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(172), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [980] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_numeric_literal_token1,
    STATE(35), 1,
      aux_sym_numeric_literal_repeat1,
    ACTIONS(94), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(92), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [1004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      aux_sym__identifier_token4,
    ACTIONS(140), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [1024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      aux_sym__identifier_token4,
    ACTIONS(162), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [1044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 4,
      aux_sym_table_or_subquery_token1,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
      aux_sym__identifier_token4,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [1064] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym__identifier_token4,
    ACTIONS(179), 1,
      anon_sym_STAR,
    STATE(49), 1,
      sym_column_name,
    STATE(50), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    ACTIONS(183), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [1118] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(132), 1,
      anon_sym_BQUOTE,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      aux_sym__identifier_token4,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_table_name,
    STATE(37), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1148] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym__identifier_token4,
    STATE(144), 1,
      sym_index_name,
    STATE(133), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1178] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym__identifier_token4,
    STATE(128), 1,
      sym_index_name,
    STATE(133), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1208] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym__identifier_token4,
    STATE(162), 1,
      sym_table_name,
    STATE(37), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1238] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym__identifier_token4,
    STATE(95), 1,
      sym_table_alias,
    STATE(89), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1268] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      aux_sym__identifier_token4,
    STATE(52), 1,
      sym_column_name,
    STATE(50), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(105), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [1316] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym__identifier_token4,
    STATE(139), 1,
      sym_index_name,
    STATE(133), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(189), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [1364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [1382] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym__identifier_token4,
    STATE(130), 1,
      sym_index_name,
    STATE(133), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [1430] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 1,
      aux_sym__identifier_token4,
    STATE(109), 1,
      sym_table_alias,
    STATE(89), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1460] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym__identifier_token4,
    STATE(135), 1,
      sym_index_name,
    STATE(133), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token1,
      aux_sym__identifier_token4,
    ACTIONS(197), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
  [1508] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym__identifier_token4,
    STATE(160), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1535] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym__identifier_token4,
    STATE(161), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1562] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_BQUOTE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(185), 1,
      aux_sym__identifier_token4,
    STATE(152), 3,
      sym_string_literal,
      sym__identifier,
      sym__name,
  [1589] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_BQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      aux_sym__identifier_token4,
    STATE(101), 1,
      sym_column_alias,
    STATE(82), 2,
      sym_string_literal,
      sym__identifier,
  [1615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym__identifier_token5,
    STATE(60), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
  [1631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      aux_sym__identifier_token5,
    STATE(60), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
  [1647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      aux_sym__identifier_token5,
    STATE(61), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
  [1663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      aux_sym__identifier_token5,
    STATE(63), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      aux_sym__identifier_token5,
    STATE(63), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym__identifier_token5,
    STATE(64), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      aux_sym__identifier_token5,
    STATE(66), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [1727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
  [1739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
  [1751] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      aux_sym__identifier_token5,
    STATE(66), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [1767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
  [1791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      aux_sym__identifier_token5,
    STATE(69), 1,
      aux_sym__identifier_repeat4,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
  [1807] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      aux_sym_select_stmt_token4,
    STATE(74), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1824] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      aux_sym_select_stmt_token4,
    STATE(76), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1841] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      aux_sym_select_stmt_token4,
    STATE(77), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(238), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_select_stmt_token4,
  [1873] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      aux_sym_select_stmt_token4,
    STATE(76), 1,
      aux_sym_select_stmt_repeat1,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [1890] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
    STATE(87), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(247), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [1904] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(251), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [1918] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(256), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [1932] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    STATE(108), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(260), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [1946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1956] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(266), 1,
      anon_sym_DASH,
    ACTIONS(268), 1,
      anon_sym_PLUS,
    STATE(30), 1,
      aux_sym_numeric_literal_repeat1,
  [1972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [1982] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
  [1992] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_BQUOTE,
    STATE(105), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(272), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [2006] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(274), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [2020] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(280), 1,
      aux_sym_table_or_subquery_token4,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2034] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_table_or_subquery_token2,
      aux_sym_table_or_subquery_token4,
  [2044] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_SQUOTE,
    STATE(96), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(286), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [2058] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(290), 1,
      anon_sym_DASH,
    ACTIONS(292), 1,
      anon_sym_PLUS,
    STATE(34), 1,
      aux_sym_numeric_literal_repeat1,
  [2074] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(296), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [2088] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_BQUOTE,
    STATE(105), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(272), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [2102] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(274), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [2116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(302), 1,
      aux_sym_table_or_subquery_token4,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2130] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(306), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [2144] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_BQUOTE,
    STATE(93), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(308), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [2158] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(306), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [2172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym_numeric_literal_token1,
    ACTIONS(314), 1,
      anon_sym_DASH,
    ACTIONS(316), 1,
      anon_sym_PLUS,
    STATE(22), 1,
      aux_sym_numeric_literal_repeat1,
  [2188] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(320), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [2202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [2212] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_BQUOTE,
    STATE(86), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(325), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [2226] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_BQUOTE,
    STATE(111), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(327), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [2240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(333), 1,
      aux_sym_table_or_subquery_token4,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2254] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_BQUOTE,
    STATE(105), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(337), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [2268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [2278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      aux_sym_select_stmt_token4,
  [2288] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(306), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [2302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym_table_or_subquery_token2,
    ACTIONS(348), 1,
      aux_sym_table_or_subquery_token4,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2316] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      aux_sym__identifier_repeat1,
    ACTIONS(274), 2,
      aux_sym__identifier_token1,
      anon_sym_DQUOTE_DQUOTE,
  [2330] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_BQUOTE,
    STATE(105), 1,
      aux_sym__identifier_repeat2,
    ACTIONS(272), 2,
      aux_sym__identifier_token2,
      anon_sym_BQUOTE_BQUOTE,
  [2344] = 4,
    ACTIONS(243), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
    STATE(98), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(354), 2,
      aux_sym_string_literal_token1,
      anon_sym_SQUOTE_SQUOTE,
  [2358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      aux_sym__identifier_token3,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      aux_sym__identifier_repeat3,
  [2371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
    ACTIONS(362), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      aux_sym_sql_stmt_list_repeat1,
  [2384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_select_stmt,
  [2397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym__identifier_token3,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym__identifier_repeat3,
  [2410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      aux_sym_sql_stmt_list_repeat1,
  [2423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      aux_sym__identifier_token3,
    ACTIONS(375), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      aux_sym__identifier_repeat3,
  [2436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym__identifier_token3,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym__identifier_repeat3,
  [2449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    STATE(127), 1,
      aux_sym_sql_stmt_list_repeat1,
  [2462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_select_stmt,
  [2475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
    ACTIONS(383), 1,
      anon_sym_SEMI,
    STATE(117), 1,
      aux_sym_sql_stmt_list_repeat1,
  [2488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      aux_sym__identifier_token3,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym__identifier_repeat3,
  [2501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_select_stmt,
  [2514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym__identifier_token3,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym__identifier_repeat3,
  [2527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      aux_sym__identifier_token3,
    ACTIONS(396), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      aux_sym__identifier_repeat3,
  [2540] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
    ACTIONS(398), 1,
      anon_sym_SEMI,
    STATE(114), 1,
      aux_sym_sql_stmt_list_repeat1,
  [2553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    STATE(140), 1,
      sym_select_stmt,
  [2571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2595] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2603] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_select_stmt_token1,
    STATE(120), 1,
      sym_select_stmt,
  [2629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym_numeric_literal_token1,
    STATE(34), 1,
      aux_sym_numeric_literal_repeat1,
  [2639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym_numeric_literal_token1,
    STATE(17), 1,
      aux_sym_numeric_literal_repeat1,
  [2649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      aux_sym_numeric_literal_token1,
    STATE(24), 1,
      aux_sym_numeric_literal_repeat1,
  [2683] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym_numeric_literal_token1,
    STATE(22), 1,
      aux_sym_numeric_literal_repeat1,
  [2693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      aux_sym_table_or_subquery_token3,
  [2708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      aux_sym_numeric_literal_token3,
  [2715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_DOT,
  [2722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_DOT,
  [2729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_DOT,
  [2736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_table_or_subquery_token2,
  [2743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      aux_sym_table_or_subquery_token3,
  [2750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
  [2757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      aux_sym_table_or_subquery_token2,
  [2764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      aux_sym_table_or_subquery_token3,
  [2771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_table_or_subquery_token2,
  [2778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_table_or_subquery_token3,
  [2785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      aux_sym_table_or_subquery_token2,
  [2792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      aux_sym_table_or_subquery_token3,
  [2799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym_table_or_subquery_token2,
  [2806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
  [2813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
  [2820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_DOT,
  [2827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 122,
  [SMALL_STATE(5)] = 181,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 267,
  [SMALL_STATE(8)] = 297,
  [SMALL_STATE(9)] = 323,
  [SMALL_STATE(10)] = 349,
  [SMALL_STATE(11)] = 375,
  [SMALL_STATE(12)] = 401,
  [SMALL_STATE(13)] = 428,
  [SMALL_STATE(14)] = 455,
  [SMALL_STATE(15)] = 480,
  [SMALL_STATE(16)] = 505,
  [SMALL_STATE(17)] = 530,
  [SMALL_STATE(18)] = 557,
  [SMALL_STATE(19)] = 594,
  [SMALL_STATE(20)] = 630,
  [SMALL_STATE(21)] = 650,
  [SMALL_STATE(22)] = 670,
  [SMALL_STATE(23)] = 694,
  [SMALL_STATE(24)] = 730,
  [SMALL_STATE(25)] = 754,
  [SMALL_STATE(26)] = 774,
  [SMALL_STATE(27)] = 796,
  [SMALL_STATE(28)] = 832,
  [SMALL_STATE(29)] = 852,
  [SMALL_STATE(30)] = 872,
  [SMALL_STATE(31)] = 896,
  [SMALL_STATE(32)] = 916,
  [SMALL_STATE(33)] = 936,
  [SMALL_STATE(34)] = 956,
  [SMALL_STATE(35)] = 980,
  [SMALL_STATE(36)] = 1004,
  [SMALL_STATE(37)] = 1024,
  [SMALL_STATE(38)] = 1044,
  [SMALL_STATE(39)] = 1064,
  [SMALL_STATE(40)] = 1097,
  [SMALL_STATE(41)] = 1118,
  [SMALL_STATE(42)] = 1148,
  [SMALL_STATE(43)] = 1178,
  [SMALL_STATE(44)] = 1208,
  [SMALL_STATE(45)] = 1238,
  [SMALL_STATE(46)] = 1268,
  [SMALL_STATE(47)] = 1298,
  [SMALL_STATE(48)] = 1316,
  [SMALL_STATE(49)] = 1346,
  [SMALL_STATE(50)] = 1364,
  [SMALL_STATE(51)] = 1382,
  [SMALL_STATE(52)] = 1412,
  [SMALL_STATE(53)] = 1430,
  [SMALL_STATE(54)] = 1460,
  [SMALL_STATE(55)] = 1490,
  [SMALL_STATE(56)] = 1508,
  [SMALL_STATE(57)] = 1535,
  [SMALL_STATE(58)] = 1562,
  [SMALL_STATE(59)] = 1589,
  [SMALL_STATE(60)] = 1615,
  [SMALL_STATE(61)] = 1631,
  [SMALL_STATE(62)] = 1647,
  [SMALL_STATE(63)] = 1663,
  [SMALL_STATE(64)] = 1679,
  [SMALL_STATE(65)] = 1695,
  [SMALL_STATE(66)] = 1711,
  [SMALL_STATE(67)] = 1727,
  [SMALL_STATE(68)] = 1739,
  [SMALL_STATE(69)] = 1751,
  [SMALL_STATE(70)] = 1767,
  [SMALL_STATE(71)] = 1779,
  [SMALL_STATE(72)] = 1791,
  [SMALL_STATE(73)] = 1807,
  [SMALL_STATE(74)] = 1824,
  [SMALL_STATE(75)] = 1841,
  [SMALL_STATE(76)] = 1858,
  [SMALL_STATE(77)] = 1873,
  [SMALL_STATE(78)] = 1890,
  [SMALL_STATE(79)] = 1904,
  [SMALL_STATE(80)] = 1918,
  [SMALL_STATE(81)] = 1932,
  [SMALL_STATE(82)] = 1946,
  [SMALL_STATE(83)] = 1956,
  [SMALL_STATE(84)] = 1972,
  [SMALL_STATE(85)] = 1982,
  [SMALL_STATE(86)] = 1992,
  [SMALL_STATE(87)] = 2006,
  [SMALL_STATE(88)] = 2020,
  [SMALL_STATE(89)] = 2034,
  [SMALL_STATE(90)] = 2044,
  [SMALL_STATE(91)] = 2058,
  [SMALL_STATE(92)] = 2074,
  [SMALL_STATE(93)] = 2088,
  [SMALL_STATE(94)] = 2102,
  [SMALL_STATE(95)] = 2116,
  [SMALL_STATE(96)] = 2130,
  [SMALL_STATE(97)] = 2144,
  [SMALL_STATE(98)] = 2158,
  [SMALL_STATE(99)] = 2172,
  [SMALL_STATE(100)] = 2188,
  [SMALL_STATE(101)] = 2202,
  [SMALL_STATE(102)] = 2212,
  [SMALL_STATE(103)] = 2226,
  [SMALL_STATE(104)] = 2240,
  [SMALL_STATE(105)] = 2254,
  [SMALL_STATE(106)] = 2268,
  [SMALL_STATE(107)] = 2278,
  [SMALL_STATE(108)] = 2288,
  [SMALL_STATE(109)] = 2302,
  [SMALL_STATE(110)] = 2316,
  [SMALL_STATE(111)] = 2330,
  [SMALL_STATE(112)] = 2344,
  [SMALL_STATE(113)] = 2358,
  [SMALL_STATE(114)] = 2371,
  [SMALL_STATE(115)] = 2384,
  [SMALL_STATE(116)] = 2397,
  [SMALL_STATE(117)] = 2410,
  [SMALL_STATE(118)] = 2423,
  [SMALL_STATE(119)] = 2436,
  [SMALL_STATE(120)] = 2449,
  [SMALL_STATE(121)] = 2462,
  [SMALL_STATE(122)] = 2475,
  [SMALL_STATE(123)] = 2488,
  [SMALL_STATE(124)] = 2501,
  [SMALL_STATE(125)] = 2514,
  [SMALL_STATE(126)] = 2527,
  [SMALL_STATE(127)] = 2540,
  [SMALL_STATE(128)] = 2553,
  [SMALL_STATE(129)] = 2561,
  [SMALL_STATE(130)] = 2571,
  [SMALL_STATE(131)] = 2579,
  [SMALL_STATE(132)] = 2587,
  [SMALL_STATE(133)] = 2595,
  [SMALL_STATE(134)] = 2603,
  [SMALL_STATE(135)] = 2611,
  [SMALL_STATE(136)] = 2619,
  [SMALL_STATE(137)] = 2629,
  [SMALL_STATE(138)] = 2639,
  [SMALL_STATE(139)] = 2649,
  [SMALL_STATE(140)] = 2657,
  [SMALL_STATE(141)] = 2665,
  [SMALL_STATE(142)] = 2673,
  [SMALL_STATE(143)] = 2683,
  [SMALL_STATE(144)] = 2693,
  [SMALL_STATE(145)] = 2701,
  [SMALL_STATE(146)] = 2708,
  [SMALL_STATE(147)] = 2715,
  [SMALL_STATE(148)] = 2722,
  [SMALL_STATE(149)] = 2729,
  [SMALL_STATE(150)] = 2736,
  [SMALL_STATE(151)] = 2743,
  [SMALL_STATE(152)] = 2750,
  [SMALL_STATE(153)] = 2757,
  [SMALL_STATE(154)] = 2764,
  [SMALL_STATE(155)] = 2771,
  [SMALL_STATE(156)] = 2778,
  [SMALL_STATE(157)] = 2785,
  [SMALL_STATE(158)] = 2792,
  [SMALL_STATE(159)] = 2799,
  [SMALL_STATE(160)] = 2806,
  [SMALL_STATE(161)] = 2813,
  [SMALL_STATE(162)] = 2820,
  [SMALL_STATE(163)] = 2827,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat4, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat4, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat4, 2), SHIFT_REPEAT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numeric_literal_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_numeric_literal_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_literal_repeat1, 2), SHIFT_REPEAT(11),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat4, 2), SHIFT_REPEAT(14),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_column, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_result_column, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 6),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_name, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema_name, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_name, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__name, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 5),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numeric_literal_repeat1, 2), SHIFT_REPEAT(35),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_name, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_name, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 5),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_value, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal_value, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat4, 2), SHIFT_REPEAT(60),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat4, 2), SHIFT_REPEAT(63),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier_repeat4, 2), SHIFT_REPEAT(66),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_select_stmt_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_select_stmt_repeat1, 2), SHIFT_REPEAT(4),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat1, 2), SHIFT_REPEAT(79),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_alias, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_alias, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(100),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_column, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat2, 2), SHIFT_REPEAT(105),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result_column, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_stmt_list_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_stmt_list_repeat1, 2), SHIFT_REPEAT(129),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_stmt_list, 4),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier_repeat3, 2), SHIFT_REPEAT(125),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier_repeat3, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 7),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 6),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_name, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 8),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_stmt, 5),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_or_subquery, 6),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [452] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
