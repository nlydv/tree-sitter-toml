#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum {
  aux_sym_document_token1 = 1,
  sym_comment = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_LBRACK_LBRACK = 5,
  anon_sym_RBRACK_RBRACK = 6,
  anon_sym_EQ = 7,
  sym_bare_key = 8,
  anon_sym_DOT = 9,
  anon_sym_DQUOTE = 10,
  aux_sym__basic_string_token1 = 11,
  anon_sym_DQUOTE2 = 12,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 13,
  aux_sym__multiline_basic_string_token1 = 14,
  sym_escape_sequence = 15,
  sym__escape_line_ending = 16,
  anon_sym_SQUOTE = 17,
  aux_sym__literal_string_token1 = 18,
  anon_sym_SQUOTE2 = 19,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 20,
  aux_sym_integer_token1 = 21,
  aux_sym_integer_token2 = 22,
  aux_sym_integer_token3 = 23,
  aux_sym_integer_token4 = 24,
  aux_sym_float_token1 = 25,
  aux_sym_float_token2 = 26,
  sym_boolean = 27,
  sym_offset_date_time = 28,
  sym_local_date_time = 29,
  sym_local_date = 30,
  sym_local_time = 31,
  anon_sym_COMMA = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  sym__line_ending_or_eof = 35,
  sym__multiline_basic_string_content = 36,
  sym__multiline_basic_string_end = 37,
  sym__multiline_literal_string_content = 38,
  sym__multiline_literal_string_end = 39,
  sym_document = 40,
  sym_table = 41,
  sym_table_array_element = 42,
  sym__header_single = 43,
  sym__header_double = 44,
  sym_pair = 45,
  sym__inline_pair = 46,
  sym__key = 47,
  sym_quoted_key = 48,
  sym_key = 49,
  sym__inline_value = 50,
  sym_string = 51,
  sym__basic_string = 52,
  sym__multiline_basic_string = 53,
  sym__literal_string = 54,
  sym__multiline_literal_string = 55,
  sym_integer = 56,
  sym_float = 57,
  sym_array = 58,
  sym_inline_table = 59,
  aux_sym_document_repeat1 = 60,
  aux_sym_document_repeat2 = 61,
  aux_sym_key_repeat1 = 62,
  aux_sym__basic_string_repeat1 = 63,
  aux_sym__multiline_basic_string_repeat1 = 64,
  aux_sym__multiline_literal_string_repeat1 = 65,
  aux_sym_array_repeat1 = 66,
  aux_sym_array_repeat2 = 67,
  aux_sym_inline_table_repeat1 = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [sym_comment] = "comment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_EQ] = "=",
  [sym_bare_key] = "bare_key",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__basic_string_token1] = "_basic_string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym__multiline_basic_string_token1] = "_multiline_basic_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym__escape_line_ending] = "escape_sequence",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__literal_string_token1] = "_literal_string_token1",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_integer_token3] = "integer_token3",
  [aux_sym_integer_token4] = "integer_token4",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [sym_boolean] = "boolean",
  [sym_offset_date_time] = "offset_date_time",
  [sym_local_date_time] = "local_date_time",
  [sym_local_date] = "local_date",
  [sym_local_time] = "local_time",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__line_ending_or_eof] = "_line_ending_or_eof",
  [sym__multiline_basic_string_content] = "_multiline_basic_string_content",
  [sym__multiline_basic_string_end] = "_multiline_basic_string_end",
  [sym__multiline_literal_string_content] = "_multiline_literal_string_content",
  [sym__multiline_literal_string_end] = "_multiline_literal_string_end",
  [sym_document] = "document",
  [sym_table] = "table",
  [sym_table_array_element] = "table_array_element",
  [sym__header_single] = "header",
  [sym__header_double] = "header",
  [sym_pair] = "pair",
  [sym__inline_pair] = "_inline_pair",
  [sym__key] = "_key",
  [sym_quoted_key] = "quoted_key",
  [sym_key] = "key",
  [sym__inline_value] = "_inline_value",
  [sym_string] = "string",
  [sym__basic_string] = "_basic_string",
  [sym__multiline_basic_string] = "_multiline_basic_string",
  [sym__literal_string] = "_literal_string",
  [sym__multiline_literal_string] = "_multiline_literal_string",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_array] = "array",
  [sym_inline_table] = "inline_table",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym_key_repeat1] = "key_repeat1",
  [aux_sym__basic_string_repeat1] = "_basic_string_repeat1",
  [aux_sym__multiline_basic_string_repeat1] = "_multiline_basic_string_repeat1",
  [aux_sym__multiline_literal_string_repeat1] = "_multiline_literal_string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_array_repeat2] = "array_repeat2",
  [aux_sym_inline_table_repeat1] = "inline_table_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_bare_key] = sym_bare_key,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__basic_string_token1] = aux_sym__basic_string_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym__multiline_basic_string_token1] = aux_sym__multiline_basic_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__escape_line_ending] = sym_escape_sequence,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__literal_string_token1] = aux_sym__literal_string_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_integer_token3] = aux_sym_integer_token3,
  [aux_sym_integer_token4] = aux_sym_integer_token4,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [sym_boolean] = sym_boolean,
  [sym_offset_date_time] = sym_offset_date_time,
  [sym_local_date_time] = sym_local_date_time,
  [sym_local_date] = sym_local_date,
  [sym_local_time] = sym_local_time,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym__line_ending_or_eof] = sym__line_ending_or_eof,
  [sym__multiline_basic_string_content] = sym__multiline_basic_string_content,
  [sym__multiline_basic_string_end] = sym__multiline_basic_string_end,
  [sym__multiline_literal_string_content] = sym__multiline_literal_string_content,
  [sym__multiline_literal_string_end] = sym__multiline_literal_string_end,
  [sym_document] = sym_document,
  [sym_table] = sym_table,
  [sym_table_array_element] = sym_table_array_element,
  [sym__header_single] = sym__header_single,
  [sym__header_double] = sym__header_single,
  [sym_pair] = sym_pair,
  [sym__inline_pair] = sym__inline_pair,
  [sym__key] = sym__key,
  [sym_quoted_key] = sym_quoted_key,
  [sym_key] = sym_key,
  [sym__inline_value] = sym__inline_value,
  [sym_string] = sym_string,
  [sym__basic_string] = sym__basic_string,
  [sym__multiline_basic_string] = sym__multiline_basic_string,
  [sym__literal_string] = sym__literal_string,
  [sym__multiline_literal_string] = sym__multiline_literal_string,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_array] = sym_array,
  [sym_inline_table] = sym_inline_table,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym_key_repeat1] = aux_sym_key_repeat1,
  [aux_sym__basic_string_repeat1] = aux_sym__basic_string_repeat1,
  [aux_sym__multiline_basic_string_repeat1] = aux_sym__multiline_basic_string_repeat1,
  [aux_sym__multiline_literal_string_repeat1] = aux_sym__multiline_literal_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_array_repeat2] = aux_sym_array_repeat2,
  [aux_sym_inline_table_repeat1] = aux_sym_inline_table_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_bare_key] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__basic_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__multiline_basic_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_line_ending] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__literal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_offset_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_local_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_local_date] = {
    .visible = true,
    .named = true,
  },
  [sym_local_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym__line_ending_or_eof] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_basic_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_basic_string_end] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_literal_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_literal_string_end] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_table_array_element] = {
    .visible = true,
    .named = true,
  },
  [sym__header_single] = {
    .visible = true,
    .named = true,
  },
  [sym__header_double] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_pair] = {
    .visible = false,
    .named = true,
  },
  [sym__key] = {
    .visible = false,
    .named = true,
  },
  [sym_quoted_key] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__basic_string] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_basic_string] = {
    .visible = false,
    .named = true,
  },
  [sym__literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_table] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__basic_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_basic_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_literal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_table_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_path = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_path] = "path",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 2},
    {field_path, 0},
  [3] =
    {field_name, 3},
    {field_path, 0},
    {field_path, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [1] = sym_pair,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__inline_pair, 2,
    sym__inline_pair,
    sym_pair,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 7,
  [13] = 4,
  [14] = 3,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 17,
  [20] = 6,
  [21] = 8,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 43,
  [47] = 45,
  [48] = 44,
  [49] = 41,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 57,
  [61] = 56,
  [62] = 62,
  [63] = 58,
  [64] = 64,
  [65] = 59,
  [66] = 66,
  [67] = 62,
  [68] = 64,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 71,
  [75] = 75,
  [76] = 71,
  [77] = 77,
  [78] = 72,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 72,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 99,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 103,
  [106] = 73,
  [107] = 107,
  [108] = 101,
  [109] = 109,
  [110] = 110,
  [111] = 107,
  [112] = 112,
  [113] = 104,
  [114] = 110,
  [115] = 53,
  [116] = 116,
  [117] = 98,
  [118] = 116,
  [119] = 119,
  [120] = 102,
  [121] = 121,
  [122] = 122,
  [123] = 116,
  [124] = 121,
  [125] = 125,
  [126] = 52,
  [127] = 55,
  [128] = 54,
  [129] = 84,
  [130] = 130,
  [131] = 119,
  [132] = 82,
  [133] = 93,
  [134] = 55,
  [135] = 135,
  [136] = 92,
  [137] = 91,
  [138] = 95,
  [139] = 54,
  [140] = 140,
  [141] = 141,
  [142] = 53,
  [143] = 135,
  [144] = 52,
  [145] = 145,
  [146] = 81,
  [147] = 79,
  [148] = 148,
  [149] = 96,
  [150] = 80,
  [151] = 151,
  [152] = 97,
  [153] = 87,
  [154] = 154,
  [155] = 155,
  [156] = 70,
  [157] = 157,
  [158] = 158,
  [159] = 69,
  [160] = 88,
  [161] = 94,
  [162] = 89,
  [163] = 135,
  [164] = 151,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(137);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '1') ADVANCE(89);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != 127) ADVANCE(125);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(129);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != 127) ADVANCE(135);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(131);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == 'U') ADVANCE(74);
      if (lookahead == 'u') ADVANCE(70);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(130);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(78);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == '1') ADVANCE(142);
      if (lookahead == '2') ADVANCE(141);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(17);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(128);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(136);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(138);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(159);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(146);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '1') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(156);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == '6') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == ']') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 41:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(150);
      END_STATE();
    case 42:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(158);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(14);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(28);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(26);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(53);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(61);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(65);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(149);
      END_STATE();
    case 50:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 51:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(133);
      if (lookahead == '+') ADVANCE(15);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '1') ADVANCE(89);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '"') ADVANCE(122);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == ',') ADVANCE(161);
      if (lookahead == '.') ADVANCE(121);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_document_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead > 8 &&
          (lookahead < '\n' || 31 < lookahead) &&
          lookahead != 127) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == ':') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(86);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '1') ADVANCE(113);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0') ADVANCE(115);
      if (lookahead == '3') ADVANCE(111);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(117);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(97);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '_') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'l') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(97);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(93);
      if (lookahead == '-' ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_bare_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_bare_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 127) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead != 0 &&
          lookahead > 8 &&
          (lookahead < '\n' || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 127) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__escape_line_ending);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '\'' &&
          lookahead != 127) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          lookahead > 8 &&
          (lookahead < '\n' || 31 < lookahead) &&
          lookahead != '\'' &&
          lookahead != 127) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == '\'') ADVANCE(11);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(140);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_offset_date_time);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_local_date);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_local_time);
      if (lookahead == '.') ADVANCE(55);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_local_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 76},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 76},
  [29] = {.lex_state = 76},
  [30] = {.lex_state = 76},
  [31] = {.lex_state = 76},
  [32] = {.lex_state = 76},
  [33] = {.lex_state = 76},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 76},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 76},
  [41] = {.lex_state = 76},
  [42] = {.lex_state = 76},
  [43] = {.lex_state = 2, .external_lex_state = 2},
  [44] = {.lex_state = 76},
  [45] = {.lex_state = 2, .external_lex_state = 2},
  [46] = {.lex_state = 2, .external_lex_state = 2},
  [47] = {.lex_state = 2, .external_lex_state = 2},
  [48] = {.lex_state = 76},
  [49] = {.lex_state = 76},
  [50] = {.lex_state = 76},
  [51] = {.lex_state = 2, .external_lex_state = 2},
  [52] = {.lex_state = 76},
  [53] = {.lex_state = 76},
  [54] = {.lex_state = 76},
  [55] = {.lex_state = 76},
  [56] = {.lex_state = 76},
  [57] = {.lex_state = 3, .external_lex_state = 3},
  [58] = {.lex_state = 76},
  [59] = {.lex_state = 3, .external_lex_state = 3},
  [60] = {.lex_state = 3, .external_lex_state = 3},
  [61] = {.lex_state = 76},
  [62] = {.lex_state = 76},
  [63] = {.lex_state = 76},
  [64] = {.lex_state = 76},
  [65] = {.lex_state = 3, .external_lex_state = 3},
  [66] = {.lex_state = 3, .external_lex_state = 3},
  [67] = {.lex_state = 76},
  [68] = {.lex_state = 76},
  [69] = {.lex_state = 76},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 76},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 76},
  [80] = {.lex_state = 76},
  [81] = {.lex_state = 76},
  [82] = {.lex_state = 76},
  [83] = {.lex_state = 76},
  [84] = {.lex_state = 76},
  [85] = {.lex_state = 76},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 76},
  [88] = {.lex_state = 76},
  [89] = {.lex_state = 76},
  [90] = {.lex_state = 76},
  [91] = {.lex_state = 76},
  [92] = {.lex_state = 76},
  [93] = {.lex_state = 76},
  [94] = {.lex_state = 76},
  [95] = {.lex_state = 76},
  [96] = {.lex_state = 76},
  [97] = {.lex_state = 76},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 0, .external_lex_state = 4},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 0, .external_lex_state = 4},
  [132] = {.lex_state = 0, .external_lex_state = 4},
  [133] = {.lex_state = 0, .external_lex_state = 4},
  [134] = {.lex_state = 0, .external_lex_state = 4},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 0, .external_lex_state = 4},
  [137] = {.lex_state = 0, .external_lex_state = 4},
  [138] = {.lex_state = 0, .external_lex_state = 4},
  [139] = {.lex_state = 0, .external_lex_state = 4},
  [140] = {.lex_state = 0, .external_lex_state = 4},
  [141] = {.lex_state = 0, .external_lex_state = 4},
  [142] = {.lex_state = 0, .external_lex_state = 4},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 0, .external_lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0, .external_lex_state = 4},
  [147] = {.lex_state = 0, .external_lex_state = 4},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0, .external_lex_state = 4},
  [150] = {.lex_state = 0, .external_lex_state = 4},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0, .external_lex_state = 4},
  [153] = {.lex_state = 0, .external_lex_state = 4},
  [154] = {.lex_state = 0, .external_lex_state = 4},
  [155] = {.lex_state = 0, .external_lex_state = 4},
  [156] = {.lex_state = 0, .external_lex_state = 4},
  [157] = {.lex_state = 0, .external_lex_state = 4},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0, .external_lex_state = 4},
  [160] = {.lex_state = 0, .external_lex_state = 4},
  [161] = {.lex_state = 0, .external_lex_state = 4},
  [162] = {.lex_state = 0, .external_lex_state = 4},
  [163] = {.lex_state = 9},
  [164] = {.lex_state = 0},
};

enum {
  ts_external_token__line_ending_or_eof = 0,
  ts_external_token__multiline_basic_string_content = 1,
  ts_external_token__multiline_basic_string_end = 2,
  ts_external_token__multiline_literal_string_content = 3,
  ts_external_token__multiline_literal_string_end = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_ending_or_eof] = sym__line_ending_or_eof,
  [ts_external_token__multiline_basic_string_content] = sym__multiline_basic_string_content,
  [ts_external_token__multiline_basic_string_end] = sym__multiline_basic_string_end,
  [ts_external_token__multiline_literal_string_content] = sym__multiline_literal_string_content,
  [ts_external_token__multiline_literal_string_end] = sym__multiline_literal_string_end,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_ending_or_eof] = true,
    [ts_external_token__multiline_basic_string_content] = true,
    [ts_external_token__multiline_basic_string_end] = true,
    [ts_external_token__multiline_literal_string_content] = true,
    [ts_external_token__multiline_literal_string_end] = true,
  },
  [2] = {
    [ts_external_token__multiline_basic_string_content] = true,
    [ts_external_token__multiline_basic_string_end] = true,
  },
  [3] = {
    [ts_external_token__multiline_literal_string_content] = true,
    [ts_external_token__multiline_literal_string_end] = true,
  },
  [4] = {
    [ts_external_token__line_ending_or_eof] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_bare_key] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__escape_line_ending] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_local_date] = ACTIONS(1),
    [sym_local_time] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__line_ending_or_eof] = ACTIONS(1),
    [sym__multiline_basic_string_content] = ACTIONS(1),
    [sym__multiline_basic_string_end] = ACTIONS(1),
    [sym__multiline_literal_string_content] = ACTIONS(1),
    [sym__multiline_literal_string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(158),
    [sym_table] = STATE(38),
    [sym_table_array_element] = STATE(38),
    [sym__header_single] = STATE(157),
    [sym__header_double] = STATE(155),
    [sym_pair] = STATE(27),
    [sym__inline_pair] = STATE(154),
    [sym__key] = STATE(73),
    [sym_quoted_key] = STATE(73),
    [sym_key] = STATE(151),
    [sym__basic_string] = STATE(102),
    [sym__literal_string] = STATE(102),
    [aux_sym_document_repeat1] = STATE(27),
    [aux_sym_document_repeat2] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_document_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(11),
    [sym_bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [66] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [132] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(55), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(53), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(68), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [198] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      aux_sym_document_token1,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [264] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(63), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(61), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(85), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [330] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(63), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(61), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(85), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [396] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(63), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(61), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(85), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [462] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      aux_sym_document_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [528] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      aux_sym_document_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [594] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(63), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(61), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(85), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [660] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(63), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(61), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(85), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [726] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(81), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(79), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(64), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [792] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      aux_sym_document_token1,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [858] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(63), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(61), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(85), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [924] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(87), 1,
      aux_sym_document_token1,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(11), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [990] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      aux_sym_document_token1,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
    STATE(13), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(97), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(95), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(56), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1056] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(99), 1,
      aux_sym_document_token1,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1122] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      aux_sym_document_token1,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(109), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(107), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(61), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1188] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(63), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(61), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(85), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1254] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(63), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(61), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(85), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1320] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(63), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(61), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(85), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1383] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      aux_sym_document_token1,
    STATE(22), 1,
      aux_sym_array_repeat1,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(41), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(39), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1446] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(123), 1,
      aux_sym_integer_token1,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    ACTIONS(127), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(131), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(125), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(129), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(161), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(131), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1503] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_token1,
    ACTIONS(43), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(137), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(35), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(135), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(94), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(119), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1560] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(144), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_integer_token1,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(142), 14,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1593] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    STATE(151), 1,
      sym_key,
    STATE(154), 1,
      sym__inline_pair,
    STATE(155), 1,
      sym__header_double,
    STATE(157), 1,
      sym__header_single,
    STATE(29), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(73), 2,
      sym__key,
      sym_quoted_key,
    STATE(102), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(39), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [1647] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      aux_sym_document_token1,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_key,
    STATE(154), 1,
      sym__inline_pair,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(32), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(73), 2,
      sym__key,
      sym_quoted_key,
    STATE(102), 2,
      sym__basic_string,
      sym__literal_string,
  [1688] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      aux_sym_document_token1,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      sym_bare_key,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_SQUOTE,
    STATE(151), 1,
      sym_key,
    STATE(154), 1,
      sym__inline_pair,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(29), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(73), 2,
      sym__key,
      sym_quoted_key,
    STATE(102), 2,
      sym__basic_string,
      sym__literal_string,
  [1729] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(174), 1,
      aux_sym_document_token1,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_key,
    STATE(154), 1,
      sym__inline_pair,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(31), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(73), 2,
      sym__key,
      sym_quoted_key,
    STATE(102), 2,
      sym__basic_string,
      sym__literal_string,
  [1770] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_key,
    STATE(154), 1,
      sym__inline_pair,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(29), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(73), 2,
      sym__key,
      sym_quoted_key,
    STATE(102), 2,
      sym__basic_string,
      sym__literal_string,
  [1811] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(151), 1,
      sym_key,
    STATE(154), 1,
      sym__inline_pair,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK_LBRACK,
    STATE(29), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(73), 2,
      sym__key,
      sym_quoted_key,
    STATE(102), 2,
      sym__basic_string,
      sym__literal_string,
  [1852] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym__inline_pair,
    STATE(164), 1,
      sym_key,
    STATE(73), 2,
      sym__key,
      sym_quoted_key,
    STATE(102), 2,
      sym__basic_string,
      sym__literal_string,
  [1882] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__inline_pair,
    STATE(164), 1,
      sym_key,
    STATE(73), 2,
      sym__key,
      sym_quoted_key,
    STATE(102), 2,
      sym__basic_string,
      sym__literal_string,
  [1912] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(125), 1,
      sym__inline_pair,
    STATE(164), 1,
      sym_key,
    STATE(73), 2,
      sym__key,
      sym_quoted_key,
    STATE(102), 2,
      sym__basic_string,
      sym__literal_string,
  [1939] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(148), 1,
      sym_key,
    STATE(73), 2,
      sym__key,
      sym_quoted_key,
    STATE(102), 2,
      sym__basic_string,
      sym__literal_string,
  [1963] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LBRACK_LBRACK,
    STATE(155), 1,
      sym__header_double,
    STATE(157), 1,
      sym__header_single,
    STATE(37), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [1987] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(155), 1,
      sym__header_double,
    STATE(157), 1,
      sym__header_single,
    STATE(37), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2011] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    STATE(155), 1,
      sym__header_double,
    STATE(157), 1,
      sym__header_single,
    STATE(37), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2035] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_bare_key,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    STATE(130), 1,
      sym_key,
    STATE(106), 2,
      sym__key,
      sym_quoted_key,
    STATE(120), 2,
      sym__basic_string,
      sym__literal_string,
  [2059] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      sym_bare_key,
    STATE(98), 2,
      sym__key,
      sym_quoted_key,
    STATE(102), 2,
      sym__basic_string,
      sym__literal_string,
  [2080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    ACTIONS(208), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      anon_sym_LBRACK_LBRACK,
      sym_bare_key,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2095] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__multiline_basic_string_end,
    STATE(45), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(214), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2112] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(218), 1,
      sym_bare_key,
    STATE(102), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(110), 2,
      sym__key,
      sym_quoted_key,
  [2133] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym__multiline_basic_string_end,
    STATE(51), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(220), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2150] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym__multiline_basic_string_end,
    STATE(47), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(224), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2167] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__multiline_basic_string_end,
    STATE(51), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(220), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2184] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(230), 1,
      sym_bare_key,
    STATE(114), 2,
      sym__key,
      sym_quoted_key,
    STATE(120), 2,
      sym__basic_string,
      sym__literal_string,
  [2205] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(232), 1,
      sym_bare_key,
    STATE(117), 2,
      sym__key,
      sym_quoted_key,
    STATE(120), 2,
      sym__basic_string,
      sym__literal_string,
  [2226] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      sym_bare_key,
    STATE(102), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(145), 2,
      sym__key,
      sym_quoted_key,
  [2247] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym__multiline_basic_string_end,
    STATE(51), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(236), 5,
      sym__multiline_basic_string_content,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 6,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2312] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(249), 1,
      aux_sym_document_token1,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_array_repeat1,
    STATE(113), 1,
      aux_sym_array_repeat2,
  [2331] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym__multiline_literal_string_end,
    STATE(59), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(253), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2346] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(100), 1,
      aux_sym_array_repeat2,
  [2365] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym__multiline_literal_string_end,
    STATE(66), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(259), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2380] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym__multiline_literal_string_end,
    STATE(65), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(263), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2395] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(267), 1,
      aux_sym_document_token1,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_array_repeat1,
    STATE(104), 1,
      aux_sym_array_repeat2,
  [2414] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(108), 1,
      aux_sym_array_repeat2,
  [2433] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(99), 1,
      aux_sym_array_repeat2,
  [2452] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      aux_sym_document_token1,
    STATE(63), 1,
      aux_sym_array_repeat1,
    STATE(108), 1,
      aux_sym_array_repeat2,
  [2471] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym__multiline_literal_string_end,
    STATE(66), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(259), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2486] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym__multiline_literal_string_end,
    STATE(66), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(279), 3,
      sym__multiline_literal_string_content,
      aux_sym__multiline_basic_string_token1,
      aux_sym__literal_string_token1,
  [2501] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(101), 1,
      aux_sym_array_repeat2,
  [2520] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      aux_sym_document_token1,
    STATE(58), 1,
      aux_sym_array_repeat1,
    STATE(101), 1,
      aux_sym_array_repeat2,
  [2539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2559] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_DQUOTE2,
    STATE(75), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(292), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2573] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DQUOTE2,
    STATE(71), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(296), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2587] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOT,
    STATE(121), 1,
      aux_sym_key_repeat1,
    ACTIONS(300), 2,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [2601] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_DQUOTE2,
    STATE(75), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(292), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2615] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE2,
    STATE(75), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(306), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2629] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_DQUOTE2,
    STATE(75), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(292), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      aux_sym_document_token1,
    STATE(83), 1,
      aux_sym_array_repeat1,
    ACTIONS(315), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2657] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_DQUOTE2,
    STATE(76), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(317), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2711] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(329), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      aux_sym_document_token1,
    STATE(90), 1,
      aux_sym_array_repeat1,
    ACTIONS(329), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2749] = 4,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_DQUOTE2,
    STATE(74), 1,
      aux_sym__basic_string_repeat1,
    ACTIONS(335), 2,
      aux_sym__basic_string_token1,
      sym_escape_sequence,
  [2763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(345), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 4,
      aux_sym_document_token1,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2877] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(361), 2,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [2888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_array_repeat2,
  [2901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_array_repeat2,
  [2914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(257), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_array_repeat2,
  [2927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 3,
      anon_sym_RBRACK,
      anon_sym_EQ,
      anon_sym_DOT,
  [2936] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_inline_table_repeat1,
  [2949] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_array_repeat2,
  [2962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_inline_table_repeat1,
  [2975] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(377), 1,
      anon_sym_DOT,
    STATE(124), 1,
      aux_sym_key_repeat1,
  [2988] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      aux_sym_inline_table_repeat1,
  [3001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_array_repeat2,
  [3014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_array_repeat2,
  [3027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(384), 2,
      anon_sym_RBRACK,
      anon_sym_EQ,
  [3038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      aux_sym_inline_table_repeat1,
  [3051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_inline_table_repeat1,
  [3064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_array_repeat2,
  [3077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_DOT,
    ACTIONS(384), 1,
      anon_sym_RBRACK_RBRACK,
  [3087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3095] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(393), 1,
      aux_sym__literal_string_token1,
    ACTIONS(395), 1,
      anon_sym_SQUOTE2,
  [3105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(363), 1,
      anon_sym_DOT,
  [3115] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(397), 1,
      aux_sym__literal_string_token1,
    ACTIONS(399), 1,
      anon_sym_SQUOTE2,
  [3125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3141] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_DOT,
    STATE(122), 1,
      aux_sym_key_repeat1,
  [3151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_DOT,
    STATE(122), 1,
      aux_sym_key_repeat1,
  [3161] = 3,
    ACTIONS(212), 1,
      sym_comment,
    ACTIONS(408), 1,
      aux_sym__literal_string_token1,
    ACTIONS(410), 1,
      anon_sym_SQUOTE2,
  [3171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_DOT,
    STATE(122), 1,
      aux_sym_key_repeat1,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_RBRACK_RBRACK,
      anon_sym_DOT,
  [3213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym__line_ending_or_eof,
  [3220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_RBRACK_RBRACK,
  [3227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym__line_ending_or_eof,
  [3234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym__line_ending_or_eof,
  [3241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym__line_ending_or_eof,
  [3248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym__line_ending_or_eof,
  [3255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_SQUOTE2,
  [3262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym__line_ending_or_eof,
  [3269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym__line_ending_or_eof,
  [3276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      sym__line_ending_or_eof,
  [3283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym__line_ending_or_eof,
  [3290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      sym__line_ending_or_eof,
  [3297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym__line_ending_or_eof,
  [3304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym__line_ending_or_eof,
  [3311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_SQUOTE2,
  [3318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__line_ending_or_eof,
  [3325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_DOT,
  [3332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym__line_ending_or_eof,
  [3339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym__line_ending_or_eof,
  [3346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
  [3353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym__line_ending_or_eof,
  [3360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      sym__line_ending_or_eof,
  [3367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_EQ,
  [3374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym__line_ending_or_eof,
  [3381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym__line_ending_or_eof,
  [3388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym__line_ending_or_eof,
  [3395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym__line_ending_or_eof,
  [3402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym__line_ending_or_eof,
  [3409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym__line_ending_or_eof,
  [3416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      ts_builtin_sym_end,
  [3423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym__line_ending_or_eof,
  [3430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym__line_ending_or_eof,
  [3437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym__line_ending_or_eof,
  [3444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__line_ending_or_eof,
  [3451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_SQUOTE2,
  [3458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 198,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 330,
  [SMALL_STATE(8)] = 396,
  [SMALL_STATE(9)] = 462,
  [SMALL_STATE(10)] = 528,
  [SMALL_STATE(11)] = 594,
  [SMALL_STATE(12)] = 660,
  [SMALL_STATE(13)] = 726,
  [SMALL_STATE(14)] = 792,
  [SMALL_STATE(15)] = 858,
  [SMALL_STATE(16)] = 924,
  [SMALL_STATE(17)] = 990,
  [SMALL_STATE(18)] = 1056,
  [SMALL_STATE(19)] = 1122,
  [SMALL_STATE(20)] = 1188,
  [SMALL_STATE(21)] = 1254,
  [SMALL_STATE(22)] = 1320,
  [SMALL_STATE(23)] = 1383,
  [SMALL_STATE(24)] = 1446,
  [SMALL_STATE(25)] = 1503,
  [SMALL_STATE(26)] = 1560,
  [SMALL_STATE(27)] = 1593,
  [SMALL_STATE(28)] = 1647,
  [SMALL_STATE(29)] = 1688,
  [SMALL_STATE(30)] = 1729,
  [SMALL_STATE(31)] = 1770,
  [SMALL_STATE(32)] = 1811,
  [SMALL_STATE(33)] = 1852,
  [SMALL_STATE(34)] = 1882,
  [SMALL_STATE(35)] = 1912,
  [SMALL_STATE(36)] = 1939,
  [SMALL_STATE(37)] = 1963,
  [SMALL_STATE(38)] = 1987,
  [SMALL_STATE(39)] = 2011,
  [SMALL_STATE(40)] = 2035,
  [SMALL_STATE(41)] = 2059,
  [SMALL_STATE(42)] = 2080,
  [SMALL_STATE(43)] = 2095,
  [SMALL_STATE(44)] = 2112,
  [SMALL_STATE(45)] = 2133,
  [SMALL_STATE(46)] = 2150,
  [SMALL_STATE(47)] = 2167,
  [SMALL_STATE(48)] = 2184,
  [SMALL_STATE(49)] = 2205,
  [SMALL_STATE(50)] = 2226,
  [SMALL_STATE(51)] = 2247,
  [SMALL_STATE(52)] = 2264,
  [SMALL_STATE(53)] = 2276,
  [SMALL_STATE(54)] = 2288,
  [SMALL_STATE(55)] = 2300,
  [SMALL_STATE(56)] = 2312,
  [SMALL_STATE(57)] = 2331,
  [SMALL_STATE(58)] = 2346,
  [SMALL_STATE(59)] = 2365,
  [SMALL_STATE(60)] = 2380,
  [SMALL_STATE(61)] = 2395,
  [SMALL_STATE(62)] = 2414,
  [SMALL_STATE(63)] = 2433,
  [SMALL_STATE(64)] = 2452,
  [SMALL_STATE(65)] = 2471,
  [SMALL_STATE(66)] = 2486,
  [SMALL_STATE(67)] = 2501,
  [SMALL_STATE(68)] = 2520,
  [SMALL_STATE(69)] = 2539,
  [SMALL_STATE(70)] = 2549,
  [SMALL_STATE(71)] = 2559,
  [SMALL_STATE(72)] = 2573,
  [SMALL_STATE(73)] = 2587,
  [SMALL_STATE(74)] = 2601,
  [SMALL_STATE(75)] = 2615,
  [SMALL_STATE(76)] = 2629,
  [SMALL_STATE(77)] = 2643,
  [SMALL_STATE(78)] = 2657,
  [SMALL_STATE(79)] = 2671,
  [SMALL_STATE(80)] = 2681,
  [SMALL_STATE(81)] = 2691,
  [SMALL_STATE(82)] = 2701,
  [SMALL_STATE(83)] = 2711,
  [SMALL_STATE(84)] = 2725,
  [SMALL_STATE(85)] = 2735,
  [SMALL_STATE(86)] = 2749,
  [SMALL_STATE(87)] = 2763,
  [SMALL_STATE(88)] = 2773,
  [SMALL_STATE(89)] = 2783,
  [SMALL_STATE(90)] = 2793,
  [SMALL_STATE(91)] = 2807,
  [SMALL_STATE(92)] = 2817,
  [SMALL_STATE(93)] = 2827,
  [SMALL_STATE(94)] = 2837,
  [SMALL_STATE(95)] = 2847,
  [SMALL_STATE(96)] = 2857,
  [SMALL_STATE(97)] = 2867,
  [SMALL_STATE(98)] = 2877,
  [SMALL_STATE(99)] = 2888,
  [SMALL_STATE(100)] = 2901,
  [SMALL_STATE(101)] = 2914,
  [SMALL_STATE(102)] = 2927,
  [SMALL_STATE(103)] = 2936,
  [SMALL_STATE(104)] = 2949,
  [SMALL_STATE(105)] = 2962,
  [SMALL_STATE(106)] = 2975,
  [SMALL_STATE(107)] = 2988,
  [SMALL_STATE(108)] = 3001,
  [SMALL_STATE(109)] = 3014,
  [SMALL_STATE(110)] = 3027,
  [SMALL_STATE(111)] = 3038,
  [SMALL_STATE(112)] = 3051,
  [SMALL_STATE(113)] = 3064,
  [SMALL_STATE(114)] = 3077,
  [SMALL_STATE(115)] = 3087,
  [SMALL_STATE(116)] = 3095,
  [SMALL_STATE(117)] = 3105,
  [SMALL_STATE(118)] = 3115,
  [SMALL_STATE(119)] = 3125,
  [SMALL_STATE(120)] = 3133,
  [SMALL_STATE(121)] = 3141,
  [SMALL_STATE(122)] = 3151,
  [SMALL_STATE(123)] = 3161,
  [SMALL_STATE(124)] = 3171,
  [SMALL_STATE(125)] = 3181,
  [SMALL_STATE(126)] = 3189,
  [SMALL_STATE(127)] = 3197,
  [SMALL_STATE(128)] = 3205,
  [SMALL_STATE(129)] = 3213,
  [SMALL_STATE(130)] = 3220,
  [SMALL_STATE(131)] = 3227,
  [SMALL_STATE(132)] = 3234,
  [SMALL_STATE(133)] = 3241,
  [SMALL_STATE(134)] = 3248,
  [SMALL_STATE(135)] = 3255,
  [SMALL_STATE(136)] = 3262,
  [SMALL_STATE(137)] = 3269,
  [SMALL_STATE(138)] = 3276,
  [SMALL_STATE(139)] = 3283,
  [SMALL_STATE(140)] = 3290,
  [SMALL_STATE(141)] = 3297,
  [SMALL_STATE(142)] = 3304,
  [SMALL_STATE(143)] = 3311,
  [SMALL_STATE(144)] = 3318,
  [SMALL_STATE(145)] = 3325,
  [SMALL_STATE(146)] = 3332,
  [SMALL_STATE(147)] = 3339,
  [SMALL_STATE(148)] = 3346,
  [SMALL_STATE(149)] = 3353,
  [SMALL_STATE(150)] = 3360,
  [SMALL_STATE(151)] = 3367,
  [SMALL_STATE(152)] = 3374,
  [SMALL_STATE(153)] = 3381,
  [SMALL_STATE(154)] = 3388,
  [SMALL_STATE(155)] = 3395,
  [SMALL_STATE(156)] = 3402,
  [SMALL_STATE(157)] = 3409,
  [SMALL_STATE(158)] = 3416,
  [SMALL_STATE(159)] = 3423,
  [SMALL_STATE(160)] = 3430,
  [SMALL_STATE(161)] = 3437,
  [SMALL_STATE(162)] = 3444,
  [SMALL_STATE(163)] = 3451,
  [SMALL_STATE(164)] = 3458,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_array_element, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_array_element, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(86),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(118),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_array_element, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_array_element, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(36),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(40),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(51),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_string, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_string, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(66),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_literal_string, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, .production_id = 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(75),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__basic_string_repeat1, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 8),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 4, .production_id = 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 3, .production_id = 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_literal_string, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_basic_string, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_basic_string, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_key, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(23),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 4, .production_id = 3),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2), SHIFT_REPEAT(35),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_pair, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2), SHIFT_REPEAT(50),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2, .production_id = 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_double, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header_single, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [436] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_toml_external_scanner_create(void);
void tree_sitter_toml_external_scanner_destroy(void *);
bool tree_sitter_toml_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_toml_external_scanner_serialize(void *, char *);
void tree_sitter_toml_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_toml(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_toml_external_scanner_create,
      tree_sitter_toml_external_scanner_destroy,
      tree_sitter_toml_external_scanner_scan,
      tree_sitter_toml_external_scanner_serialize,
      tree_sitter_toml_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
