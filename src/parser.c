#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 189
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 6
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_DOT = 6,
  anon_sym_BSLASH = 7,
  anon_sym_par = 8,
  anon_sym_seq = 9,
  anon_sym_sum = 10,
  anon_sym_prod = 11,
  sym_identity_function = 12,
  anon_sym_COLON = 13,
  sym_one_sample_delay_operator = 14,
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  anon_sym_STAR = 17,
  anon_sym_SLASH = 18,
  anon_sym_PERCENT = 19,
  anon_sym_CARET = 20,
  anon_sym_PIPE = 21,
  anon_sym_AMP = 22,
  anon_sym_xor = 23,
  anon_sym_LT_LT = 24,
  anon_sym_GT_GT = 25,
  anon_sym_LT = 26,
  anon_sym_LT_EQ = 27,
  anon_sym_GT = 28,
  anon_sym_GT_EQ = 29,
  anon_sym_EQ_EQ = 30,
  anon_sym_BANG_EQ = 31,
  anon_sym_AT = 32,
  sym_int = 33,
  sym_real = 34,
  anon_sym_import_LPAREN = 35,
  anon_sym_declare = 36,
  anon_sym_singleprecision = 37,
  anon_sym_doubleprecision = 38,
  anon_sym_quadprecision = 39,
  anon_sym_fixedpointprecision = 40,
  anon_sym_TILDE = 41,
  anon_sym_LT_COLON = 42,
  anon_sym_COLON_GT = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_string_token1 = 45,
  sym_escape_sequence = 46,
  sym_identifier = 47,
  sym_comment = 48,
  sym_source_file = 49,
  sym__statement = 50,
  sym_definition = 51,
  sym_simple_definition = 52,
  sym_function_definition = 53,
  sym_function_call = 54,
  sym_argument = 55,
  sym_lambda_abstraction = 56,
  sym__expression = 57,
  sym_iteration = 58,
  sym_binary_operation = 59,
  sym_core = 60,
  sym_infix = 61,
  sym_prefix = 62,
  sym_partial = 63,
  sym_one_sample_delay = 64,
  sym_binary_operator = 65,
  sym_object = 66,
  sym__number = 67,
  sym_file_import = 68,
  sym_metadata_declaration = 69,
  sym_global_metadata = 70,
  sym_function_metadata = 71,
  sym__binary_composition = 72,
  sym_recursive = 73,
  sym_sequential = 74,
  sym_split = 75,
  sym_merge = 76,
  sym_parallel = 77,
  sym_string = 78,
  sym_variable = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_function_definition_repeat1 = 81,
  aux_sym_function_call_repeat1 = 82,
  aux_sym_one_sample_delay_repeat1 = 83,
  aux_sym_split_repeat1 = 84,
  aux_sym_string_repeat1 = 85,
  alias_sym_current_iteration = 86,
  alias_sym_function_name = 87,
  alias_sym_metadata_key = 88,
  alias_sym_module_name = 89,
  alias_sym_numiter = 90,
  alias_sym_parameter = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_par] = "par",
  [anon_sym_seq] = "seq",
  [anon_sym_sum] = "sum",
  [anon_sym_prod] = "prod",
  [sym_identity_function] = "identity_function",
  [anon_sym_COLON] = ":",
  [sym_one_sample_delay_operator] = "one_sample_delay_operator",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_xor] = "xor",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AT] = "@",
  [sym_int] = "int",
  [sym_real] = "real",
  [anon_sym_import_LPAREN] = "import(",
  [anon_sym_declare] = "declare",
  [anon_sym_singleprecision] = "singleprecision",
  [anon_sym_doubleprecision] = "doubleprecision",
  [anon_sym_quadprecision] = "quadprecision",
  [anon_sym_fixedpointprecision] = "fixedpointprecision",
  [anon_sym_TILDE] = "~",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_definition] = "definition",
  [sym_simple_definition] = "simple_definition",
  [sym_function_definition] = "function_definition",
  [sym_function_call] = "function_call",
  [sym_argument] = "argument",
  [sym_lambda_abstraction] = "lambda_abstraction",
  [sym__expression] = "_expression",
  [sym_iteration] = "iteration",
  [sym_binary_operation] = "binary_operation",
  [sym_core] = "core",
  [sym_infix] = "infix",
  [sym_prefix] = "prefix",
  [sym_partial] = "partial",
  [sym_one_sample_delay] = "one_sample_delay",
  [sym_binary_operator] = "binary_operator",
  [sym_object] = "object",
  [sym__number] = "_number",
  [sym_file_import] = "file_import",
  [sym_metadata_declaration] = "metadata_declaration",
  [sym_global_metadata] = "global_metadata",
  [sym_function_metadata] = "function_metadata",
  [sym__binary_composition] = "_binary_composition",
  [sym_recursive] = "recursive",
  [sym_sequential] = "sequential",
  [sym_split] = "split",
  [sym_merge] = "merge",
  [sym_parallel] = "parallel",
  [sym_string] = "string",
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_one_sample_delay_repeat1] = "one_sample_delay_repeat1",
  [aux_sym_split_repeat1] = "split_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_current_iteration] = "current_iteration",
  [alias_sym_function_name] = "function_name",
  [alias_sym_metadata_key] = "metadata_key",
  [alias_sym_module_name] = "module_name",
  [alias_sym_numiter] = "numiter",
  [alias_sym_parameter] = "parameter",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_par] = anon_sym_par,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_prod] = anon_sym_prod,
  [sym_identity_function] = sym_identity_function,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_one_sample_delay_operator] = sym_one_sample_delay_operator,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [sym_int] = sym_int,
  [sym_real] = sym_real,
  [anon_sym_import_LPAREN] = anon_sym_import_LPAREN,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_singleprecision] = anon_sym_singleprecision,
  [anon_sym_doubleprecision] = anon_sym_doubleprecision,
  [anon_sym_quadprecision] = anon_sym_quadprecision,
  [anon_sym_fixedpointprecision] = anon_sym_fixedpointprecision,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_definition] = sym_definition,
  [sym_simple_definition] = sym_simple_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_function_call] = sym_function_call,
  [sym_argument] = sym_argument,
  [sym_lambda_abstraction] = sym_lambda_abstraction,
  [sym__expression] = sym__expression,
  [sym_iteration] = sym_iteration,
  [sym_binary_operation] = sym_binary_operation,
  [sym_core] = sym_core,
  [sym_infix] = sym_infix,
  [sym_prefix] = sym_prefix,
  [sym_partial] = sym_partial,
  [sym_one_sample_delay] = sym_one_sample_delay,
  [sym_binary_operator] = sym_binary_operator,
  [sym_object] = sym_object,
  [sym__number] = sym__number,
  [sym_file_import] = sym_file_import,
  [sym_metadata_declaration] = sym_metadata_declaration,
  [sym_global_metadata] = sym_global_metadata,
  [sym_function_metadata] = sym_function_metadata,
  [sym__binary_composition] = sym__binary_composition,
  [sym_recursive] = sym_recursive,
  [sym_sequential] = sym_sequential,
  [sym_split] = sym_split,
  [sym_merge] = sym_merge,
  [sym_parallel] = sym_parallel,
  [sym_string] = sym_string,
  [sym_variable] = sym_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_one_sample_delay_repeat1] = aux_sym_one_sample_delay_repeat1,
  [aux_sym_split_repeat1] = aux_sym_split_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_current_iteration] = alias_sym_current_iteration,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_metadata_key] = alias_sym_metadata_key,
  [alias_sym_module_name] = alias_sym_module_name,
  [alias_sym_numiter] = alias_sym_numiter,
  [alias_sym_parameter] = alias_sym_parameter,
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_par] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prod] = {
    .visible = true,
    .named = false,
  },
  [sym_identity_function] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_one_sample_delay_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_real] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_singleprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_doubleprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quadprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixedpointprecision] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_lambda_abstraction] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_iteration] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_core] = {
    .visible = true,
    .named = true,
  },
  [sym_infix] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_partial] = {
    .visible = true,
    .named = true,
  },
  [sym_one_sample_delay] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_file_import] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_global_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_function_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym__binary_composition] = {
    .visible = false,
    .named = true,
  },
  [sym_recursive] = {
    .visible = true,
    .named = true,
  },
  [sym_sequential] = {
    .visible = true,
    .named = true,
  },
  [sym_split] = {
    .visible = true,
    .named = true,
  },
  [sym_merge] = {
    .visible = true,
    .named = true,
  },
  [sym_parallel] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_one_sample_delay_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_split_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_current_iteration] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_metadata_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_numiter] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_parameter] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_left = 1,
  field_name = 2,
  field_right = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 2},
  [6] = {.index = 2, .length = 2},
  [7] = {.index = 4, .length = 2},
  [9] = {.index = 6, .length = 3},
  [10] = {.index = 9, .length = 3},
  [11] = {.index = 12, .length = 2},
  [13] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 2},
  [2] =
    {field_left, 0},
    {field_right, 2},
  [4] =
    {field_name, 0},
    {field_value, 4},
  [6] =
    {field_left, 0},
    {field_right, 2},
    {field_right, 3},
  [9] =
    {field_left, 0},
    {field_left, 1},
    {field_right, 3},
  [12] =
    {field_name, 0},
    {field_value, 5},
  [14] =
    {field_name, 0},
    {field_value, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_metadata_key,
  },
  [2] = {
    [0] = alias_sym_module_name,
  },
  [4] = {
    [1] = alias_sym_function_name,
    [2] = alias_sym_metadata_key,
  },
  [5] = {
    [0] = alias_sym_function_name,
  },
  [8] = {
    [1] = alias_sym_parameter,
  },
  [11] = {
    [2] = alias_sym_parameter,
  },
  [12] = {
    [0] = alias_sym_module_name,
    [2] = alias_sym_function_name,
  },
  [13] = {
    [2] = alias_sym_parameter,
  },
  [14] = {
    [1] = alias_sym_current_iteration,
    [3] = alias_sym_numiter,
  },
  [15] = {
    [2] = alias_sym_parameter,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_object, 2,
    sym_object,
    alias_sym_numiter,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 4,
  [14] = 14,
  [15] = 12,
  [16] = 11,
  [17] = 9,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 21,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 28,
  [29] = 29,
  [30] = 28,
  [31] = 29,
  [32] = 26,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 34,
  [37] = 35,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 40,
  [44] = 42,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 47,
  [56] = 56,
  [57] = 51,
  [58] = 52,
  [59] = 53,
  [60] = 46,
  [61] = 61,
  [62] = 48,
  [63] = 49,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 61,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 50,
  [73] = 68,
  [74] = 74,
  [75] = 75,
  [76] = 70,
  [77] = 77,
  [78] = 54,
  [79] = 66,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 41,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 56,
  [91] = 71,
  [92] = 85,
  [93] = 93,
  [94] = 77,
  [95] = 80,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 74,
  [100] = 86,
  [101] = 87,
  [102] = 88,
  [103] = 103,
  [104] = 75,
  [105] = 81,
  [106] = 89,
  [107] = 82,
  [108] = 108,
  [109] = 109,
  [110] = 83,
  [111] = 111,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 115,
  [119] = 117,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 123,
  [126] = 126,
  [127] = 127,
  [128] = 126,
  [129] = 129,
  [130] = 130,
  [131] = 127,
  [132] = 132,
  [133] = 133,
  [134] = 132,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 139,
  [142] = 137,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 161,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 148,
  [173] = 160,
  [174] = 174,
  [175] = 175,
  [176] = 159,
  [177] = 177,
  [178] = 151,
  [179] = 167,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 168,
  [187] = 180,
  [188] = 152,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(30);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '&') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '^') ADVANCE(55);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'q') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(141);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '~') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(90);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '&') ADVANCE(57);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(48);
      if (lookahead == '-') ADVANCE(50);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '^') ADVANCE(55);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(141);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '&') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '^') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(16);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '~') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '&') ADVANCE(57);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '^') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(16);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '~') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == '&') ADVANCE(57);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '+') ADVANCE(47);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == '^') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(16);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == '~') ADVANCE(80);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(173);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(172);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == '{') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == '}') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 27:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 28:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(174);
      END_STATE();
    case 29:
      if (eof) ADVANCE(30);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == '~') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identity_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_one_sample_delay_operator);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(173);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_import_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 29},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 29},
  [39] = {.lex_state = 29},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 29},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 29},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 29},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 29},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 29},
  [73] = {.lex_state = 29},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 29},
  [91] = {.lex_state = 29},
  [92] = {.lex_state = 29},
  [93] = {.lex_state = 29},
  [94] = {.lex_state = 29},
  [95] = {.lex_state = 29},
  [96] = {.lex_state = 29},
  [97] = {.lex_state = 29},
  [98] = {.lex_state = 29},
  [99] = {.lex_state = 29},
  [100] = {.lex_state = 29},
  [101] = {.lex_state = 29},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 29},
  [104] = {.lex_state = 29},
  [105] = {.lex_state = 29},
  [106] = {.lex_state = 29},
  [107] = {.lex_state = 29},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 29},
  [110] = {.lex_state = 29},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 29},
  [113] = {.lex_state = 29},
  [114] = {.lex_state = 29},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 29},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 29},
  [148] = {.lex_state = 29},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 29},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 29},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 29},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 29},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_par] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_prod] = ACTIONS(1),
    [sym_identity_function] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_one_sample_delay_operator] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
    [anon_sym_import_LPAREN] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_singleprecision] = ACTIONS(1),
    [anon_sym_doubleprecision] = ACTIONS(1),
    [anon_sym_quadprecision] = ACTIONS(1),
    [anon_sym_fixedpointprecision] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(166),
    [sym__statement] = STATE(39),
    [sym_definition] = STATE(158),
    [sym_simple_definition] = STATE(154),
    [sym_function_definition] = STATE(154),
    [sym_file_import] = STATE(158),
    [sym_metadata_declaration] = STATE(158),
    [sym_global_metadata] = STATE(153),
    [sym_function_metadata] = STATE(153),
    [sym_variable] = STATE(145),
    [aux_sym_source_file_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import_LPAREN] = ACTIONS(5),
    [anon_sym_declare] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_function_call] = STATE(98),
    [sym_lambda_abstraction] = STATE(157),
    [sym__expression] = STATE(98),
    [sym_iteration] = STATE(98),
    [sym_binary_operation] = STATE(98),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(98),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(23),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(98),
    [sym_recursive] = STATE(98),
    [sym_sequential] = STATE(98),
    [sym_split] = STATE(98),
    [sym_merge] = STATE(98),
    [sym_parallel] = STATE(98),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [3] = {
    [sym_function_call] = STATE(93),
    [sym__expression] = STATE(93),
    [sym_iteration] = STATE(93),
    [sym_binary_operation] = STATE(93),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(93),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(23),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(93),
    [sym_recursive] = STATE(93),
    [sym_sequential] = STATE(93),
    [sym_split] = STATE(93),
    [sym_merge] = STATE(93),
    [sym_parallel] = STATE(93),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [4] = {
    [sym_function_call] = STATE(72),
    [sym__expression] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_binary_operation] = STATE(72),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(72),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(23),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(72),
    [sym_recursive] = STATE(72),
    [sym_sequential] = STATE(72),
    [sym_split] = STATE(72),
    [sym_merge] = STATE(72),
    [sym_parallel] = STATE(72),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [5] = {
    [sym_function_call] = STATE(103),
    [sym__expression] = STATE(103),
    [sym_iteration] = STATE(103),
    [sym_binary_operation] = STATE(103),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(103),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(23),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(103),
    [sym_recursive] = STATE(103),
    [sym_sequential] = STATE(103),
    [sym_split] = STATE(103),
    [sym_merge] = STATE(103),
    [sym_parallel] = STATE(103),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [6] = {
    [sym_function_call] = STATE(96),
    [sym__expression] = STATE(96),
    [sym_iteration] = STATE(96),
    [sym_binary_operation] = STATE(96),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(96),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(23),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(96),
    [sym_recursive] = STATE(96),
    [sym_sequential] = STATE(96),
    [sym_split] = STATE(96),
    [sym_merge] = STATE(96),
    [sym_parallel] = STATE(96),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [7] = {
    [sym_function_call] = STATE(97),
    [sym__expression] = STATE(97),
    [sym_iteration] = STATE(97),
    [sym_binary_operation] = STATE(97),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(97),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(23),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(97),
    [sym_recursive] = STATE(97),
    [sym_sequential] = STATE(97),
    [sym_split] = STATE(97),
    [sym_merge] = STATE(97),
    [sym_parallel] = STATE(97),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(41),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [8] = {
    [sym_function_call] = STATE(56),
    [sym__expression] = STATE(56),
    [sym_iteration] = STATE(56),
    [sym_binary_operation] = STATE(56),
    [sym_core] = STATE(88),
    [sym_infix] = STATE(88),
    [sym_prefix] = STATE(88),
    [sym_partial] = STATE(88),
    [sym_one_sample_delay] = STATE(56),
    [sym_binary_operator] = STATE(186),
    [sym_object] = STATE(22),
    [sym__number] = STATE(29),
    [sym__binary_composition] = STATE(56),
    [sym_recursive] = STATE(56),
    [sym_sequential] = STATE(56),
    [sym_split] = STATE(56),
    [sym_merge] = STATE(56),
    [sym_parallel] = STATE(56),
    [sym_string] = STATE(29),
    [sym_variable] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_par] = ACTIONS(45),
    [anon_sym_seq] = ACTIONS(45),
    [anon_sym_sum] = ACTIONS(45),
    [anon_sym_prod] = ACTIONS(45),
    [sym_identity_function] = ACTIONS(47),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
  },
  [9] = {
    [sym_function_call] = STATE(78),
    [sym__expression] = STATE(78),
    [sym_iteration] = STATE(78),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(23),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(78),
    [sym_recursive] = STATE(78),
    [sym_sequential] = STATE(78),
    [sym_split] = STATE(78),
    [sym_merge] = STATE(78),
    [sym_parallel] = STATE(78),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [10] = {
    [sym_function_call] = STATE(90),
    [sym__expression] = STATE(90),
    [sym_iteration] = STATE(90),
    [sym_binary_operation] = STATE(90),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(90),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(23),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(90),
    [sym_recursive] = STATE(90),
    [sym_sequential] = STATE(90),
    [sym_split] = STATE(90),
    [sym_merge] = STATE(90),
    [sym_parallel] = STATE(90),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [11] = {
    [sym_function_call] = STATE(113),
    [sym__expression] = STATE(113),
    [sym_iteration] = STATE(113),
    [sym_binary_operation] = STATE(113),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(113),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(33),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(113),
    [sym_recursive] = STATE(113),
    [sym_sequential] = STATE(113),
    [sym_split] = STATE(113),
    [sym_merge] = STATE(113),
    [sym_parallel] = STATE(113),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(61),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [12] = {
    [sym_function_call] = STATE(68),
    [sym__expression] = STATE(68),
    [sym_iteration] = STATE(68),
    [sym_binary_operation] = STATE(68),
    [sym_core] = STATE(88),
    [sym_infix] = STATE(88),
    [sym_prefix] = STATE(88),
    [sym_partial] = STATE(88),
    [sym_one_sample_delay] = STATE(68),
    [sym_binary_operator] = STATE(186),
    [sym_object] = STATE(22),
    [sym__number] = STATE(29),
    [sym__binary_composition] = STATE(68),
    [sym_recursive] = STATE(68),
    [sym_sequential] = STATE(68),
    [sym_split] = STATE(68),
    [sym_merge] = STATE(68),
    [sym_parallel] = STATE(68),
    [sym_string] = STATE(29),
    [sym_variable] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_par] = ACTIONS(45),
    [anon_sym_seq] = ACTIONS(45),
    [anon_sym_sum] = ACTIONS(45),
    [anon_sym_prod] = ACTIONS(45),
    [sym_identity_function] = ACTIONS(63),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
  },
  [13] = {
    [sym_function_call] = STATE(50),
    [sym__expression] = STATE(50),
    [sym_iteration] = STATE(50),
    [sym_binary_operation] = STATE(50),
    [sym_core] = STATE(88),
    [sym_infix] = STATE(88),
    [sym_prefix] = STATE(88),
    [sym_partial] = STATE(88),
    [sym_one_sample_delay] = STATE(50),
    [sym_binary_operator] = STATE(186),
    [sym_object] = STATE(22),
    [sym__number] = STATE(29),
    [sym__binary_composition] = STATE(50),
    [sym_recursive] = STATE(50),
    [sym_sequential] = STATE(50),
    [sym_split] = STATE(50),
    [sym_merge] = STATE(50),
    [sym_parallel] = STATE(50),
    [sym_string] = STATE(29),
    [sym_variable] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_par] = ACTIONS(45),
    [anon_sym_seq] = ACTIONS(45),
    [anon_sym_sum] = ACTIONS(45),
    [anon_sym_prod] = ACTIONS(45),
    [sym_identity_function] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
  },
  [14] = {
    [sym_function_call] = STATE(111),
    [sym__expression] = STATE(111),
    [sym_iteration] = STATE(111),
    [sym_binary_operation] = STATE(111),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(111),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(23),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(111),
    [sym_recursive] = STATE(111),
    [sym_sequential] = STATE(111),
    [sym_split] = STATE(111),
    [sym_merge] = STATE(111),
    [sym_parallel] = STATE(111),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [15] = {
    [sym_function_call] = STATE(73),
    [sym__expression] = STATE(73),
    [sym_iteration] = STATE(73),
    [sym_binary_operation] = STATE(73),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(73),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(23),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(73),
    [sym_recursive] = STATE(73),
    [sym_sequential] = STATE(73),
    [sym_split] = STATE(73),
    [sym_merge] = STATE(73),
    [sym_parallel] = STATE(73),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [16] = {
    [sym_function_call] = STATE(112),
    [sym__expression] = STATE(112),
    [sym_iteration] = STATE(112),
    [sym_binary_operation] = STATE(112),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(112),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(33),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(112),
    [sym_recursive] = STATE(112),
    [sym_sequential] = STATE(112),
    [sym_split] = STATE(112),
    [sym_merge] = STATE(112),
    [sym_parallel] = STATE(112),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [17] = {
    [sym_function_call] = STATE(54),
    [sym__expression] = STATE(54),
    [sym_iteration] = STATE(54),
    [sym_binary_operation] = STATE(54),
    [sym_core] = STATE(88),
    [sym_infix] = STATE(88),
    [sym_prefix] = STATE(88),
    [sym_partial] = STATE(88),
    [sym_one_sample_delay] = STATE(54),
    [sym_binary_operator] = STATE(186),
    [sym_object] = STATE(22),
    [sym__number] = STATE(29),
    [sym__binary_composition] = STATE(54),
    [sym_recursive] = STATE(54),
    [sym_sequential] = STATE(54),
    [sym_split] = STATE(54),
    [sym_merge] = STATE(54),
    [sym_parallel] = STATE(54),
    [sym_string] = STATE(29),
    [sym_variable] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_par] = ACTIONS(45),
    [anon_sym_seq] = ACTIONS(45),
    [anon_sym_sum] = ACTIONS(45),
    [anon_sym_prod] = ACTIONS(45),
    [sym_identity_function] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
  },
  [18] = {
    [sym_function_call] = STATE(109),
    [sym__expression] = STATE(109),
    [sym_iteration] = STATE(109),
    [sym_binary_operation] = STATE(109),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(109),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(23),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(109),
    [sym_recursive] = STATE(109),
    [sym_sequential] = STATE(109),
    [sym_split] = STATE(109),
    [sym_merge] = STATE(109),
    [sym_parallel] = STATE(109),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [19] = {
    [sym_function_call] = STATE(108),
    [sym__expression] = STATE(108),
    [sym_iteration] = STATE(108),
    [sym_binary_operation] = STATE(108),
    [sym_core] = STATE(102),
    [sym_infix] = STATE(102),
    [sym_prefix] = STATE(102),
    [sym_partial] = STATE(102),
    [sym_one_sample_delay] = STATE(108),
    [sym_binary_operator] = STATE(168),
    [sym_object] = STATE(23),
    [sym__number] = STATE(31),
    [sym__binary_composition] = STATE(108),
    [sym_recursive] = STATE(108),
    [sym_sequential] = STATE(108),
    [sym_split] = STATE(108),
    [sym_merge] = STATE(108),
    [sym_parallel] = STATE(108),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [20] = {
    [sym_function_call] = STATE(65),
    [sym__expression] = STATE(65),
    [sym_iteration] = STATE(65),
    [sym_binary_operation] = STATE(65),
    [sym_core] = STATE(88),
    [sym_infix] = STATE(88),
    [sym_prefix] = STATE(88),
    [sym_partial] = STATE(88),
    [sym_one_sample_delay] = STATE(65),
    [sym_binary_operator] = STATE(186),
    [sym_object] = STATE(22),
    [sym__number] = STATE(29),
    [sym__binary_composition] = STATE(65),
    [sym_recursive] = STATE(65),
    [sym_sequential] = STATE(65),
    [sym_split] = STATE(65),
    [sym_merge] = STATE(65),
    [sym_parallel] = STATE(65),
    [sym_string] = STATE(29),
    [sym_variable] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_par] = ACTIONS(45),
    [anon_sym_seq] = ACTIONS(45),
    [anon_sym_sum] = ACTIONS(45),
    [anon_sym_prod] = ACTIONS(45),
    [sym_identity_function] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_CARET] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(87), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [37] = 7,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(93), 1,
      sym_one_sample_delay_operator,
    STATE(46), 1,
      aux_sym_one_sample_delay_repeat1,
    STATE(53), 1,
      sym_binary_operator,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(23), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [80] = 6,
    ACTIONS(95), 1,
      sym_one_sample_delay_operator,
    STATE(59), 1,
      sym_binary_operator,
    STATE(60), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
    ACTIONS(23), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [120] = 4,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DOT,
    ACTIONS(87), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [156] = 3,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [190] = 2,
    ACTIONS(109), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [221] = 3,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [254] = 2,
    ACTIONS(115), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [285] = 2,
    ACTIONS(119), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [316] = 2,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [346] = 2,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [376] = 2,
    ACTIONS(109), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 23,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_one_sample_delay_operator,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [406] = 6,
    ACTIONS(95), 1,
      sym_one_sample_delay_operator,
    STATE(59), 1,
      sym_binary_operator,
    STATE(60), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
    ACTIONS(23), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [444] = 3,
    STATE(86), 1,
      sym_binary_operator,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [470] = 3,
    STATE(110), 1,
      sym_binary_operator,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [496] = 3,
    STATE(100), 1,
      sym_binary_operator,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [522] = 3,
    STATE(83), 1,
      sym_binary_operator,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 16,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_xor,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [548] = 10,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_import_LPAREN,
    ACTIONS(130), 1,
      anon_sym_declare,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(136), 1,
      sym_comment,
    STATE(145), 1,
      sym_variable,
    STATE(38), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(153), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(154), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(158), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [584] = 10,
    ACTIONS(5), 1,
      anon_sym_import_LPAREN,
    ACTIONS(7), 1,
      anon_sym_declare,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      sym_comment,
    STATE(145), 1,
      sym_variable,
    STATE(38), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(153), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(154), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(158), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [620] = 8,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(126), 1,
      sym_argument,
    STATE(140), 2,
      sym_function_call,
      sym_object,
    STATE(31), 3,
      sym__number,
      sym_string,
      sym_variable,
  [648] = 2,
    ACTIONS(149), 1,
      sym_int,
    ACTIONS(147), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym_real,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_DQUOTE,
      sym_identifier,
  [664] = 8,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      sym_argument,
    STATE(140), 2,
      sym_function_call,
      sym_object,
    STATE(31), 3,
      sym__number,
      sym_string,
      sym_variable,
  [692] = 8,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym_argument,
    STATE(140), 2,
      sym_function_call,
      sym_object,
    STATE(31), 3,
      sym__number,
      sym_string,
      sym_variable,
  [720] = 8,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_argument,
    STATE(140), 2,
      sym_function_call,
      sym_object,
    STATE(31), 3,
      sym__number,
      sym_string,
      sym_variable,
  [748] = 7,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(146), 1,
      sym_argument,
    STATE(140), 2,
      sym_function_call,
      sym_object,
    STATE(31), 3,
      sym__number,
      sym_string,
      sym_variable,
  [773] = 4,
    ACTIONS(159), 1,
      anon_sym_COLON,
    ACTIONS(161), 1,
      sym_one_sample_delay_operator,
    STATE(47), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(157), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [791] = 4,
    ACTIONS(165), 1,
      anon_sym_COLON,
    ACTIONS(167), 1,
      sym_one_sample_delay_operator,
    STATE(47), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(163), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [809] = 2,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(81), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [823] = 4,
    ACTIONS(174), 1,
      anon_sym_COLON,
    ACTIONS(176), 1,
      anon_sym_COLON_GT,
    STATE(64), 1,
      aux_sym_split_repeat1,
    ACTIONS(172), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [840] = 4,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    STATE(63), 1,
      aux_sym_split_repeat1,
    ACTIONS(178), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [857] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(151), 1,
      sym_object,
    STATE(31), 3,
      sym__number,
      sym_string,
      sym_variable,
  [878] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(139), 1,
      sym_object,
    STATE(31), 3,
      sym__number,
      sym_string,
      sym_variable,
  [899] = 6,
    ACTIONS(49), 1,
      sym_int,
    ACTIONS(51), 1,
      sym_real,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      sym_identifier,
    STATE(75), 1,
      sym_object,
    STATE(29), 3,
      sym__number,
      sym_string,
      sym_variable,
  [920] = 6,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_TILDE,
    STATE(63), 1,
      aux_sym_split_repeat1,
    ACTIONS(188), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [941] = 3,
    ACTIONS(194), 1,
      sym_one_sample_delay_operator,
    STATE(55), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(163), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [956] = 4,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    STATE(63), 1,
      aux_sym_split_repeat1,
    ACTIONS(197), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [973] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(178), 1,
      sym_object,
    STATE(31), 3,
      sym__number,
      sym_string,
      sym_variable,
  [994] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(141), 1,
      sym_object,
    STATE(31), 3,
      sym__number,
      sym_string,
      sym_variable,
  [1015] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(104), 1,
      sym_object,
    STATE(31), 3,
      sym__number,
      sym_string,
      sym_variable,
  [1036] = 3,
    ACTIONS(199), 1,
      sym_one_sample_delay_operator,
    STATE(55), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(157), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1051] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(173), 1,
      sym_object,
    STATE(31), 3,
      sym__number,
      sym_string,
      sym_variable,
  [1072] = 3,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(81), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1087] = 4,
    ACTIONS(174), 1,
      anon_sym_COLON,
    ACTIONS(203), 1,
      anon_sym_COLON_GT,
    STATE(64), 1,
      aux_sym_split_repeat1,
    ACTIONS(172), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1104] = 4,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_COLON,
    STATE(64), 1,
      aux_sym_split_repeat1,
    ACTIONS(205), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1121] = 6,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_TILDE,
    STATE(63), 1,
      aux_sym_split_repeat1,
    ACTIONS(205), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [1142] = 1,
    ACTIONS(101), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1153] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(160), 1,
      sym_object,
    STATE(31), 3,
      sym__number,
      sym_string,
      sym_variable,
  [1174] = 5,
    ACTIONS(180), 1,
      anon_sym_COLON,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_split_repeat1,
    ACTIONS(212), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [1193] = 4,
    ACTIONS(176), 1,
      anon_sym_COLON_GT,
    ACTIONS(216), 1,
      anon_sym_COLON,
    STATE(64), 1,
      aux_sym_split_repeat1,
    ACTIONS(214), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1210] = 5,
    ACTIONS(174), 1,
      anon_sym_COLON,
    ACTIONS(176), 1,
      anon_sym_COLON_GT,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_split_repeat1,
    ACTIONS(172), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1228] = 2,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(220), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1240] = 4,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(224), 1,
      anon_sym_COLON,
    STATE(49), 1,
      aux_sym_split_repeat1,
    ACTIONS(178), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [1256] = 5,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
    STATE(49), 1,
      aux_sym_split_repeat1,
    ACTIONS(212), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [1274] = 2,
    ACTIONS(228), 1,
      anon_sym_COLON,
    ACTIONS(226), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1286] = 2,
    ACTIONS(232), 1,
      anon_sym_COLON,
    ACTIONS(230), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1298] = 5,
    ACTIONS(174), 1,
      anon_sym_COLON,
    ACTIONS(176), 1,
      anon_sym_COLON_GT,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_split_repeat1,
    ACTIONS(172), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1316] = 2,
    ACTIONS(238), 1,
      anon_sym_COLON,
    ACTIONS(236), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1328] = 6,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_TILDE,
    STATE(49), 1,
      aux_sym_split_repeat1,
    ACTIONS(188), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1348] = 2,
    ACTIONS(105), 1,
      anon_sym_COLON,
    ACTIONS(101), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1360] = 2,
    ACTIONS(244), 1,
      anon_sym_COLON,
    ACTIONS(242), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1372] = 2,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(246), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1384] = 2,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(250), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1396] = 2,
    ACTIONS(256), 1,
      anon_sym_COLON,
    ACTIONS(254), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1408] = 2,
    ACTIONS(149), 1,
      anon_sym_COLON,
    ACTIONS(147), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1420] = 2,
    ACTIONS(260), 1,
      anon_sym_COLON,
    ACTIONS(258), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1432] = 2,
    ACTIONS(264), 1,
      anon_sym_COLON,
    ACTIONS(262), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1444] = 2,
    ACTIONS(268), 1,
      anon_sym_COLON,
    ACTIONS(266), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1456] = 2,
    ACTIONS(272), 1,
      anon_sym_COLON,
    ACTIONS(270), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1468] = 2,
    ACTIONS(276), 1,
      anon_sym_COLON,
    ACTIONS(274), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1480] = 4,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(224), 1,
      anon_sym_COLON,
    STATE(49), 1,
      aux_sym_split_repeat1,
    ACTIONS(197), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [1496] = 1,
    ACTIONS(220), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1505] = 1,
    ACTIONS(258), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1514] = 6,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_TILDE,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_split_repeat1,
  [1533] = 1,
    ACTIONS(236), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1542] = 1,
    ACTIONS(242), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1551] = 6,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_TILDE,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_split_repeat1,
  [1570] = 6,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_TILDE,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      aux_sym_split_repeat1,
  [1589] = 6,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_TILDE,
    ACTIONS(284), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      aux_sym_split_repeat1,
  [1608] = 1,
    ACTIONS(226), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1617] = 1,
    ACTIONS(262), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1626] = 1,
    ACTIONS(266), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1635] = 1,
    ACTIONS(270), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1644] = 6,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_TILDE,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      aux_sym_split_repeat1,
  [1663] = 1,
    ACTIONS(230), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1672] = 1,
    ACTIONS(246), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1681] = 1,
    ACTIONS(274), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1690] = 1,
    ACTIONS(250), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1699] = 6,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_TILDE,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_split_repeat1,
  [1718] = 6,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_TILDE,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      aux_sym_split_repeat1,
  [1737] = 1,
    ACTIONS(254), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1746] = 5,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_TILDE,
    STATE(69), 1,
      aux_sym_split_repeat1,
  [1762] = 5,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_TILDE,
    STATE(76), 1,
      aux_sym_split_repeat1,
  [1778] = 5,
    ACTIONS(182), 1,
      anon_sym_LT_COLON,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      anon_sym_TILDE,
    STATE(70), 1,
      aux_sym_split_repeat1,
  [1794] = 2,
    ACTIONS(294), 2,
      anon_sym_declare,
      sym_identifier,
    ACTIONS(292), 3,
      ts_builtin_sym_end,
      anon_sym_import_LPAREN,
      sym_comment,
  [1804] = 4,
    ACTIONS(296), 1,
      anon_sym_DQUOTE,
    ACTIONS(298), 1,
      aux_sym_string_token1,
    ACTIONS(300), 1,
      sym_escape_sequence,
    STATE(116), 1,
      aux_sym_string_repeat1,
  [1817] = 4,
    ACTIONS(302), 1,
      anon_sym_DQUOTE,
    ACTIONS(304), 1,
      aux_sym_string_token1,
    ACTIONS(307), 1,
      sym_escape_sequence,
    STATE(116), 1,
      aux_sym_string_repeat1,
  [1830] = 4,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      aux_sym_string_token1,
    ACTIONS(314), 1,
      sym_escape_sequence,
    STATE(115), 1,
      aux_sym_string_repeat1,
  [1843] = 4,
    ACTIONS(298), 1,
      aux_sym_string_token1,
    ACTIONS(300), 1,
      sym_escape_sequence,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    STATE(116), 1,
      aux_sym_string_repeat1,
  [1856] = 4,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      aux_sym_string_token1,
    ACTIONS(322), 1,
      sym_escape_sequence,
    STATE(118), 1,
      aux_sym_string_repeat1,
  [1869] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_function_call_repeat1,
  [1879] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_function_definition_repeat1,
  [1889] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym_function_definition_repeat1,
  [1899] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_function_call_repeat1,
  [1909] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_function_definition_repeat1,
  [1919] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_function_call_repeat1,
  [1929] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_function_call_repeat1,
  [1939] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_function_call_repeat1,
  [1949] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_function_call_repeat1,
  [1959] = 3,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_function_definition_repeat1,
  [1969] = 3,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      sym_identifier,
    STATE(181), 1,
      sym_string,
  [1979] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_function_call_repeat1,
  [1989] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_function_call_repeat1,
  [1999] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_function_definition_repeat1,
  [2009] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_function_call_repeat1,
  [2019] = 1,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2024] = 2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(171), 1,
      sym_string,
  [2031] = 2,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      anon_sym_COLON,
  [2038] = 2,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 1,
      sym_identifier,
  [2045] = 2,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
  [2052] = 1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2057] = 2,
    ACTIONS(380), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
  [2064] = 2,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
  [2071] = 2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      sym_string,
  [2078] = 2,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    ACTIONS(388), 1,
      sym_identifier,
  [2085] = 2,
    ACTIONS(390), 1,
      anon_sym_EQ,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
  [2092] = 1,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2097] = 1,
    ACTIONS(394), 1,
      anon_sym_DOT,
  [2101] = 1,
    ACTIONS(368), 1,
      anon_sym_COLON,
  [2105] = 1,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
  [2109] = 1,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
  [2113] = 1,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
  [2117] = 1,
    ACTIONS(402), 1,
      sym_identifier,
  [2121] = 1,
    ACTIONS(404), 1,
      anon_sym_SEMI,
  [2125] = 1,
    ACTIONS(406), 1,
      anon_sym_SEMI,
  [2129] = 1,
    ACTIONS(408), 1,
      anon_sym_DOT,
  [2133] = 1,
    ACTIONS(410), 1,
      anon_sym_LPAREN,
  [2137] = 1,
    ACTIONS(412), 1,
      anon_sym_SEMI,
  [2141] = 1,
    ACTIONS(414), 1,
      anon_sym_SEMI,
  [2145] = 1,
    ACTIONS(416), 1,
      anon_sym_COLON,
  [2149] = 1,
    ACTIONS(418), 1,
      anon_sym_COMMA,
  [2153] = 1,
    ACTIONS(420), 1,
      sym_identifier,
  [2157] = 1,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
  [2161] = 1,
    ACTIONS(424), 1,
      anon_sym_SEMI,
  [2165] = 1,
    ACTIONS(426), 1,
      sym_identifier,
  [2169] = 1,
    ACTIONS(428), 1,
      anon_sym_EQ,
  [2173] = 1,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
  [2177] = 1,
    ACTIONS(432), 1,
      sym_identifier,
  [2181] = 1,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
  [2185] = 1,
    ACTIONS(436), 1,
      anon_sym_SEMI,
  [2189] = 1,
    ACTIONS(438), 1,
      anon_sym_SEMI,
  [2193] = 1,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
  [2197] = 1,
    ACTIONS(442), 1,
      anon_sym_COLON,
  [2201] = 1,
    ACTIONS(444), 1,
      anon_sym_COMMA,
  [2205] = 1,
    ACTIONS(446), 1,
      anon_sym_DOT,
  [2209] = 1,
    ACTIONS(448), 1,
      anon_sym_EQ,
  [2213] = 1,
    ACTIONS(450), 1,
      anon_sym_COLON,
  [2217] = 1,
    ACTIONS(452), 1,
      sym_identifier,
  [2221] = 1,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
  [2225] = 1,
    ACTIONS(456), 1,
      sym_identifier,
  [2229] = 1,
    ACTIONS(458), 1,
      anon_sym_COMMA,
  [2233] = 1,
    ACTIONS(460), 1,
      anon_sym_SEMI,
  [2237] = 1,
    ACTIONS(462), 1,
      anon_sym_SEMI,
  [2241] = 1,
    ACTIONS(464), 1,
      anon_sym_SEMI,
  [2245] = 1,
    ACTIONS(466), 1,
      anon_sym_EQ,
  [2249] = 1,
    ACTIONS(468), 1,
      sym_identifier,
  [2253] = 1,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
  [2257] = 1,
    ACTIONS(472), 1,
      anon_sym_COMMA,
  [2261] = 1,
    ACTIONS(474), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 37,
  [SMALL_STATE(23)] = 80,
  [SMALL_STATE(24)] = 120,
  [SMALL_STATE(25)] = 156,
  [SMALL_STATE(26)] = 190,
  [SMALL_STATE(27)] = 221,
  [SMALL_STATE(28)] = 254,
  [SMALL_STATE(29)] = 285,
  [SMALL_STATE(30)] = 316,
  [SMALL_STATE(31)] = 346,
  [SMALL_STATE(32)] = 376,
  [SMALL_STATE(33)] = 406,
  [SMALL_STATE(34)] = 444,
  [SMALL_STATE(35)] = 470,
  [SMALL_STATE(36)] = 496,
  [SMALL_STATE(37)] = 522,
  [SMALL_STATE(38)] = 548,
  [SMALL_STATE(39)] = 584,
  [SMALL_STATE(40)] = 620,
  [SMALL_STATE(41)] = 648,
  [SMALL_STATE(42)] = 664,
  [SMALL_STATE(43)] = 692,
  [SMALL_STATE(44)] = 720,
  [SMALL_STATE(45)] = 748,
  [SMALL_STATE(46)] = 773,
  [SMALL_STATE(47)] = 791,
  [SMALL_STATE(48)] = 809,
  [SMALL_STATE(49)] = 823,
  [SMALL_STATE(50)] = 840,
  [SMALL_STATE(51)] = 857,
  [SMALL_STATE(52)] = 878,
  [SMALL_STATE(53)] = 899,
  [SMALL_STATE(54)] = 920,
  [SMALL_STATE(55)] = 941,
  [SMALL_STATE(56)] = 956,
  [SMALL_STATE(57)] = 973,
  [SMALL_STATE(58)] = 994,
  [SMALL_STATE(59)] = 1015,
  [SMALL_STATE(60)] = 1036,
  [SMALL_STATE(61)] = 1051,
  [SMALL_STATE(62)] = 1072,
  [SMALL_STATE(63)] = 1087,
  [SMALL_STATE(64)] = 1104,
  [SMALL_STATE(65)] = 1121,
  [SMALL_STATE(66)] = 1142,
  [SMALL_STATE(67)] = 1153,
  [SMALL_STATE(68)] = 1174,
  [SMALL_STATE(69)] = 1193,
  [SMALL_STATE(70)] = 1210,
  [SMALL_STATE(71)] = 1228,
  [SMALL_STATE(72)] = 1240,
  [SMALL_STATE(73)] = 1256,
  [SMALL_STATE(74)] = 1274,
  [SMALL_STATE(75)] = 1286,
  [SMALL_STATE(76)] = 1298,
  [SMALL_STATE(77)] = 1316,
  [SMALL_STATE(78)] = 1328,
  [SMALL_STATE(79)] = 1348,
  [SMALL_STATE(80)] = 1360,
  [SMALL_STATE(81)] = 1372,
  [SMALL_STATE(82)] = 1384,
  [SMALL_STATE(83)] = 1396,
  [SMALL_STATE(84)] = 1408,
  [SMALL_STATE(85)] = 1420,
  [SMALL_STATE(86)] = 1432,
  [SMALL_STATE(87)] = 1444,
  [SMALL_STATE(88)] = 1456,
  [SMALL_STATE(89)] = 1468,
  [SMALL_STATE(90)] = 1480,
  [SMALL_STATE(91)] = 1496,
  [SMALL_STATE(92)] = 1505,
  [SMALL_STATE(93)] = 1514,
  [SMALL_STATE(94)] = 1533,
  [SMALL_STATE(95)] = 1542,
  [SMALL_STATE(96)] = 1551,
  [SMALL_STATE(97)] = 1570,
  [SMALL_STATE(98)] = 1589,
  [SMALL_STATE(99)] = 1608,
  [SMALL_STATE(100)] = 1617,
  [SMALL_STATE(101)] = 1626,
  [SMALL_STATE(102)] = 1635,
  [SMALL_STATE(103)] = 1644,
  [SMALL_STATE(104)] = 1663,
  [SMALL_STATE(105)] = 1672,
  [SMALL_STATE(106)] = 1681,
  [SMALL_STATE(107)] = 1690,
  [SMALL_STATE(108)] = 1699,
  [SMALL_STATE(109)] = 1718,
  [SMALL_STATE(110)] = 1737,
  [SMALL_STATE(111)] = 1746,
  [SMALL_STATE(112)] = 1762,
  [SMALL_STATE(113)] = 1778,
  [SMALL_STATE(114)] = 1794,
  [SMALL_STATE(115)] = 1804,
  [SMALL_STATE(116)] = 1817,
  [SMALL_STATE(117)] = 1830,
  [SMALL_STATE(118)] = 1843,
  [SMALL_STATE(119)] = 1856,
  [SMALL_STATE(120)] = 1869,
  [SMALL_STATE(121)] = 1879,
  [SMALL_STATE(122)] = 1889,
  [SMALL_STATE(123)] = 1899,
  [SMALL_STATE(124)] = 1909,
  [SMALL_STATE(125)] = 1919,
  [SMALL_STATE(126)] = 1929,
  [SMALL_STATE(127)] = 1939,
  [SMALL_STATE(128)] = 1949,
  [SMALL_STATE(129)] = 1959,
  [SMALL_STATE(130)] = 1969,
  [SMALL_STATE(131)] = 1979,
  [SMALL_STATE(132)] = 1989,
  [SMALL_STATE(133)] = 1999,
  [SMALL_STATE(134)] = 2009,
  [SMALL_STATE(135)] = 2019,
  [SMALL_STATE(136)] = 2024,
  [SMALL_STATE(137)] = 2031,
  [SMALL_STATE(138)] = 2038,
  [SMALL_STATE(139)] = 2045,
  [SMALL_STATE(140)] = 2052,
  [SMALL_STATE(141)] = 2057,
  [SMALL_STATE(142)] = 2064,
  [SMALL_STATE(143)] = 2071,
  [SMALL_STATE(144)] = 2078,
  [SMALL_STATE(145)] = 2085,
  [SMALL_STATE(146)] = 2092,
  [SMALL_STATE(147)] = 2097,
  [SMALL_STATE(148)] = 2101,
  [SMALL_STATE(149)] = 2105,
  [SMALL_STATE(150)] = 2109,
  [SMALL_STATE(151)] = 2113,
  [SMALL_STATE(152)] = 2117,
  [SMALL_STATE(153)] = 2121,
  [SMALL_STATE(154)] = 2125,
  [SMALL_STATE(155)] = 2129,
  [SMALL_STATE(156)] = 2133,
  [SMALL_STATE(157)] = 2137,
  [SMALL_STATE(158)] = 2141,
  [SMALL_STATE(159)] = 2145,
  [SMALL_STATE(160)] = 2149,
  [SMALL_STATE(161)] = 2153,
  [SMALL_STATE(162)] = 2157,
  [SMALL_STATE(163)] = 2161,
  [SMALL_STATE(164)] = 2165,
  [SMALL_STATE(165)] = 2169,
  [SMALL_STATE(166)] = 2173,
  [SMALL_STATE(167)] = 2177,
  [SMALL_STATE(168)] = 2181,
  [SMALL_STATE(169)] = 2185,
  [SMALL_STATE(170)] = 2189,
  [SMALL_STATE(171)] = 2193,
  [SMALL_STATE(172)] = 2197,
  [SMALL_STATE(173)] = 2201,
  [SMALL_STATE(174)] = 2205,
  [SMALL_STATE(175)] = 2209,
  [SMALL_STATE(176)] = 2213,
  [SMALL_STATE(177)] = 2217,
  [SMALL_STATE(178)] = 2221,
  [SMALL_STATE(179)] = 2225,
  [SMALL_STATE(180)] = 2229,
  [SMALL_STATE(181)] = 2233,
  [SMALL_STATE(182)] = 2237,
  [SMALL_STATE(183)] = 2241,
  [SMALL_STATE(184)] = 2245,
  [SMALL_STATE(185)] = 2249,
  [SMALL_STATE(186)] = 2253,
  [SMALL_STATE(187)] = 2257,
  [SMALL_STATE(188)] = 2261,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(47),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 6),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 6, .production_id = 14),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(55),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 4, .production_id = 10),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2), SHIFT_REPEAT(20),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_split_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 6),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 4, .production_id = 9),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split, 4, .production_id = 9),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 12),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 12),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 5),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 12),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 12),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 7),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 12),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 12),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 11),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 3, .production_id = 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 7),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 13),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(116),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(116),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(45),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(177),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 8),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_declaration, 1),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 7),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [430] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 9, .production_id = 15),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 8, .production_id = 15),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_faust(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
