#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 193
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
  sym_number = 67,
  sym_file_import = 68,
  sym_metadata_declaration = 69,
  sym_global_metadata = 70,
  sym_function_metadata = 71,
  sym_binary_composition = 72,
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
  [sym_number] = "number",
  [sym_file_import] = "file_import",
  [sym_metadata_declaration] = "metadata_declaration",
  [sym_global_metadata] = "global_metadata",
  [sym_function_metadata] = "function_metadata",
  [sym_binary_composition] = "binary_composition",
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
  [sym_number] = sym_number,
  [sym_file_import] = sym_file_import,
  [sym_metadata_declaration] = sym_metadata_declaration,
  [sym_global_metadata] = sym_global_metadata,
  [sym_function_metadata] = sym_function_metadata,
  [sym_binary_composition] = sym_binary_composition,
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
  [sym_number] = {
    .visible = true,
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
  [sym_binary_composition] = {
    .visible = true,
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
  [13] = 13,
  [14] = 11,
  [15] = 15,
  [16] = 15,
  [17] = 7,
  [18] = 18,
  [19] = 19,
  [20] = 13,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 21,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 23,
  [30] = 30,
  [31] = 30,
  [32] = 27,
  [33] = 28,
  [34] = 26,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 36,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 44,
  [47] = 47,
  [48] = 48,
  [49] = 49,
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
  [61] = 51,
  [62] = 48,
  [63] = 50,
  [64] = 64,
  [65] = 65,
  [66] = 54,
  [67] = 67,
  [68] = 49,
  [69] = 56,
  [70] = 59,
  [71] = 71,
  [72] = 64,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 55,
  [79] = 53,
  [80] = 42,
  [81] = 81,
  [82] = 58,
  [83] = 65,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 81,
  [92] = 92,
  [93] = 93,
  [94] = 74,
  [95] = 87,
  [96] = 89,
  [97] = 73,
  [98] = 85,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 76,
  [103] = 84,
  [104] = 104,
  [105] = 90,
  [106] = 92,
  [107] = 86,
  [108] = 75,
  [109] = 109,
  [110] = 93,
  [111] = 111,
  [112] = 88,
  [113] = 113,
  [114] = 77,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 115,
  [119] = 119,
  [120] = 120,
  [121] = 119,
  [122] = 120,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 125,
  [130] = 130,
  [131] = 130,
  [132] = 132,
  [133] = 127,
  [134] = 126,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 139,
  [147] = 147,
  [148] = 148,
  [149] = 148,
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
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 173,
  [177] = 166,
  [178] = 168,
  [179] = 179,
  [180] = 164,
  [181] = 181,
  [182] = 158,
  [183] = 183,
  [184] = 184,
  [185] = 171,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 160,
  [191] = 186,
  [192] = 155,
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
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 29},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 29},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 29},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 29},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 29},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 29},
  [79] = {.lex_state = 29},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 29},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
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
  [115] = {.lex_state = 29},
  [116] = {.lex_state = 29},
  [117] = {.lex_state = 29},
  [118] = {.lex_state = 29},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 29},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 29},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 29},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 29},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 29},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 29},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 29},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 29},
  [181] = {.lex_state = 29},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 7},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 7},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 7},
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
    [sym_source_file] = STATE(179),
    [sym__statement] = STATE(41),
    [sym_definition] = STATE(170),
    [sym_simple_definition] = STATE(163),
    [sym_function_definition] = STATE(163),
    [sym_file_import] = STATE(170),
    [sym_metadata_declaration] = STATE(170),
    [sym_global_metadata] = STATE(159),
    [sym_function_metadata] = STATE(159),
    [sym_variable] = STATE(143),
    [aux_sym_source_file_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import_LPAREN] = ACTIONS(5),
    [anon_sym_declare] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_function_call] = STATE(100),
    [sym_lambda_abstraction] = STATE(187),
    [sym__expression] = STATE(100),
    [sym_iteration] = STATE(100),
    [sym_binary_operation] = STATE(100),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(100),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(24),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(100),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
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
    [sym_function_call] = STATE(113),
    [sym__expression] = STATE(113),
    [sym_iteration] = STATE(113),
    [sym_binary_operation] = STATE(113),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(113),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(24),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(113),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
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
    [sym_function_call] = STATE(67),
    [sym__expression] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_binary_operation] = STATE(67),
    [sym_core] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_one_sample_delay] = STATE(67),
    [sym_binary_operator] = STATE(190),
    [sym_object] = STATE(22),
    [sym_number] = STATE(30),
    [sym_binary_composition] = STATE(67),
    [sym_recursive] = STATE(76),
    [sym_sequential] = STATE(76),
    [sym_split] = STATE(76),
    [sym_merge] = STATE(76),
    [sym_parallel] = STATE(76),
    [sym_string] = STATE(30),
    [sym_variable] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_par] = ACTIONS(37),
    [anon_sym_seq] = ACTIONS(37),
    [anon_sym_sum] = ACTIONS(37),
    [anon_sym_prod] = ACTIONS(37),
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
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
  },
  [5] = {
    [sym_function_call] = STATE(101),
    [sym__expression] = STATE(101),
    [sym_iteration] = STATE(101),
    [sym_binary_operation] = STATE(101),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(101),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(24),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(101),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(49),
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
    [sym_function_call] = STATE(99),
    [sym__expression] = STATE(99),
    [sym_iteration] = STATE(99),
    [sym_binary_operation] = STATE(99),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(99),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(24),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(99),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(51),
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
    [sym_function_call] = STATE(65),
    [sym__expression] = STATE(65),
    [sym_iteration] = STATE(65),
    [sym_binary_operation] = STATE(65),
    [sym_core] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_one_sample_delay] = STATE(65),
    [sym_binary_operator] = STATE(190),
    [sym_object] = STATE(22),
    [sym_number] = STATE(30),
    [sym_binary_composition] = STATE(65),
    [sym_recursive] = STATE(76),
    [sym_sequential] = STATE(76),
    [sym_split] = STATE(76),
    [sym_merge] = STATE(76),
    [sym_parallel] = STATE(76),
    [sym_string] = STATE(30),
    [sym_variable] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_par] = ACTIONS(37),
    [anon_sym_seq] = ACTIONS(37),
    [anon_sym_sum] = ACTIONS(37),
    [anon_sym_prod] = ACTIONS(37),
    [sym_identity_function] = ACTIONS(53),
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
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
  },
  [8] = {
    [sym_function_call] = STATE(72),
    [sym__expression] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_binary_operation] = STATE(72),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(72),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(24),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(72),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(55),
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
  [9] = {
    [sym_function_call] = STATE(116),
    [sym__expression] = STATE(116),
    [sym_iteration] = STATE(116),
    [sym_binary_operation] = STATE(116),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(116),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(24),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(116),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
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
    [sym_function_call] = STATE(64),
    [sym__expression] = STATE(64),
    [sym_iteration] = STATE(64),
    [sym_binary_operation] = STATE(64),
    [sym_core] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_one_sample_delay] = STATE(64),
    [sym_binary_operator] = STATE(190),
    [sym_object] = STATE(22),
    [sym_number] = STATE(30),
    [sym_binary_composition] = STATE(64),
    [sym_recursive] = STATE(76),
    [sym_sequential] = STATE(76),
    [sym_split] = STATE(76),
    [sym_merge] = STATE(76),
    [sym_parallel] = STATE(76),
    [sym_string] = STATE(30),
    [sym_variable] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_par] = ACTIONS(37),
    [anon_sym_seq] = ACTIONS(37),
    [anon_sym_sum] = ACTIONS(37),
    [anon_sym_prod] = ACTIONS(37),
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
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
  },
  [11] = {
    [sym_function_call] = STATE(79),
    [sym__expression] = STATE(79),
    [sym_iteration] = STATE(79),
    [sym_binary_operation] = STATE(79),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(79),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(24),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(79),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
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
    [sym_function_call] = STATE(111),
    [sym__expression] = STATE(111),
    [sym_iteration] = STATE(111),
    [sym_binary_operation] = STATE(111),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(111),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(24),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(111),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
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
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [13] = {
    [sym_function_call] = STATE(118),
    [sym__expression] = STATE(118),
    [sym_iteration] = STATE(118),
    [sym_binary_operation] = STATE(118),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(118),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(35),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(118),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
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
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [14] = {
    [sym_function_call] = STATE(53),
    [sym__expression] = STATE(53),
    [sym_iteration] = STATE(53),
    [sym_binary_operation] = STATE(53),
    [sym_core] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_one_sample_delay] = STATE(53),
    [sym_binary_operator] = STATE(190),
    [sym_object] = STATE(22),
    [sym_number] = STATE(30),
    [sym_binary_composition] = STATE(53),
    [sym_recursive] = STATE(76),
    [sym_sequential] = STATE(76),
    [sym_split] = STATE(76),
    [sym_merge] = STATE(76),
    [sym_parallel] = STATE(76),
    [sym_string] = STATE(30),
    [sym_variable] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_par] = ACTIONS(37),
    [anon_sym_seq] = ACTIONS(37),
    [anon_sym_sum] = ACTIONS(37),
    [anon_sym_prod] = ACTIONS(37),
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
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
  },
  [15] = {
    [sym_function_call] = STATE(78),
    [sym__expression] = STATE(78),
    [sym_iteration] = STATE(78),
    [sym_binary_operation] = STATE(78),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(78),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(24),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(78),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
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
    [sym_function_call] = STATE(55),
    [sym__expression] = STATE(55),
    [sym_iteration] = STATE(55),
    [sym_binary_operation] = STATE(55),
    [sym_core] = STATE(77),
    [sym_infix] = STATE(77),
    [sym_prefix] = STATE(77),
    [sym_partial] = STATE(77),
    [sym_one_sample_delay] = STATE(55),
    [sym_binary_operator] = STATE(190),
    [sym_object] = STATE(22),
    [sym_number] = STATE(30),
    [sym_binary_composition] = STATE(55),
    [sym_recursive] = STATE(76),
    [sym_sequential] = STATE(76),
    [sym_split] = STATE(76),
    [sym_merge] = STATE(76),
    [sym_parallel] = STATE(76),
    [sym_string] = STATE(30),
    [sym_variable] = STATE(30),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_par] = ACTIONS(37),
    [anon_sym_seq] = ACTIONS(37),
    [anon_sym_sum] = ACTIONS(37),
    [anon_sym_prod] = ACTIONS(37),
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
    [sym_int] = ACTIONS(41),
    [sym_real] = ACTIONS(43),
    [anon_sym_DQUOTE] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
  },
  [17] = {
    [sym_function_call] = STATE(83),
    [sym__expression] = STATE(83),
    [sym_iteration] = STATE(83),
    [sym_binary_operation] = STATE(83),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(83),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(24),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(83),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
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
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
  },
  [18] = {
    [sym_function_call] = STATE(104),
    [sym__expression] = STATE(104),
    [sym_iteration] = STATE(104),
    [sym_binary_operation] = STATE(104),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(104),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(24),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(104),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
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
    [sym_function_call] = STATE(109),
    [sym__expression] = STATE(109),
    [sym_iteration] = STATE(109),
    [sym_binary_operation] = STATE(109),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(109),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(24),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(109),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
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
    [sym_function_call] = STATE(115),
    [sym__expression] = STATE(115),
    [sym_iteration] = STATE(115),
    [sym_binary_operation] = STATE(115),
    [sym_core] = STATE(114),
    [sym_infix] = STATE(114),
    [sym_prefix] = STATE(114),
    [sym_partial] = STATE(114),
    [sym_one_sample_delay] = STATE(115),
    [sym_binary_operator] = STATE(160),
    [sym_object] = STATE(35),
    [sym_number] = STATE(31),
    [sym_binary_composition] = STATE(115),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
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
    [sym_int] = ACTIONS(25),
    [sym_real] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym_identifier] = ACTIONS(31),
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
    STATE(48), 1,
      aux_sym_one_sample_delay_repeat1,
    STATE(51), 1,
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
  [80] = 3,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 23,
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
  [114] = 6,
    ACTIONS(101), 1,
      sym_one_sample_delay_operator,
    STATE(61), 1,
      sym_binary_operator,
    STATE(62), 1,
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
  [154] = 4,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
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
  [221] = 2,
    ACTIONS(113), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 23,
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
  [252] = 2,
    ACTIONS(117), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 23,
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
  [283] = 3,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 23,
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
  [316] = 2,
    ACTIONS(123), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 23,
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
  [347] = 2,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 23,
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
  [377] = 2,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 23,
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
  [407] = 2,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 23,
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
  [437] = 2,
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
  [467] = 6,
    ACTIONS(101), 1,
      sym_one_sample_delay_operator,
    STATE(61), 1,
      sym_binary_operator,
    STATE(62), 1,
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
  [505] = 3,
    STATE(105), 1,
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
  [531] = 3,
    STATE(112), 1,
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
  [557] = 3,
    STATE(88), 1,
      sym_binary_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 16,
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
  [583] = 3,
    STATE(90), 1,
      sym_binary_operator,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 16,
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
  [609] = 10,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      anon_sym_import_LPAREN,
    ACTIONS(134), 1,
      anon_sym_declare,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(140), 1,
      sym_comment,
    STATE(143), 1,
      sym_variable,
    STATE(40), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(159), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(163), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(170), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [645] = 10,
    ACTIONS(5), 1,
      anon_sym_import_LPAREN,
    ACTIONS(7), 1,
      anon_sym_declare,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      sym_comment,
    STATE(143), 1,
      sym_variable,
    STATE(40), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(159), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(163), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(170), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [681] = 2,
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
  [697] = 8,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(134), 1,
      sym_argument,
    STATE(147), 2,
      sym_function_call,
      sym_object,
    STATE(31), 3,
      sym_number,
      sym_string,
      sym_variable,
  [725] = 8,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      sym_argument,
    STATE(147), 2,
      sym_function_call,
      sym_object,
    STATE(31), 3,
      sym_number,
      sym_string,
      sym_variable,
  [753] = 8,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_argument,
    STATE(147), 2,
      sym_function_call,
      sym_object,
    STATE(31), 3,
      sym_number,
      sym_string,
      sym_variable,
  [781] = 8,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_argument,
    STATE(147), 2,
      sym_function_call,
      sym_object,
    STATE(31), 3,
      sym_number,
      sym_string,
      sym_variable,
  [809] = 7,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(142), 1,
      sym_argument,
    STATE(147), 2,
      sym_function_call,
      sym_object,
    STATE(31), 3,
      sym_number,
      sym_string,
      sym_variable,
  [834] = 4,
    ACTIONS(163), 1,
      anon_sym_COLON,
    ACTIONS(165), 1,
      sym_one_sample_delay_operator,
    STATE(49), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(161), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [852] = 4,
    ACTIONS(169), 1,
      anon_sym_COLON,
    ACTIONS(171), 1,
      sym_one_sample_delay_operator,
    STATE(49), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(167), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [870] = 2,
    ACTIONS(174), 1,
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
  [884] = 6,
    ACTIONS(41), 1,
      sym_int,
    ACTIONS(43), 1,
      sym_real,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(74), 1,
      sym_object,
    STATE(30), 3,
      sym_number,
      sym_string,
      sym_variable,
  [905] = 4,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(183), 1,
      anon_sym_COLON,
    STATE(52), 1,
      aux_sym_split_repeat1,
    ACTIONS(178), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [922] = 5,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    STATE(70), 1,
      aux_sym_split_repeat1,
    ACTIONS(185), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [941] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(182), 1,
      sym_object,
    STATE(31), 3,
      sym_number,
      sym_string,
      sym_variable,
  [962] = 4,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    STATE(70), 1,
      aux_sym_split_repeat1,
    ACTIONS(195), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [979] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(177), 1,
      sym_object,
    STATE(31), 3,
      sym_number,
      sym_string,
      sym_variable,
  [1000] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(148), 1,
      sym_object,
    STATE(31), 3,
      sym_number,
      sym_string,
      sym_variable,
  [1021] = 1,
    ACTIONS(95), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1032] = 4,
    ACTIONS(199), 1,
      anon_sym_COLON,
    ACTIONS(201), 1,
      anon_sym_COLON_GT,
    STATE(52), 1,
      aux_sym_split_repeat1,
    ACTIONS(197), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1049] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(149), 1,
      sym_object,
    STATE(31), 3,
      sym_number,
      sym_string,
      sym_variable,
  [1070] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(94), 1,
      sym_object,
    STATE(31), 3,
      sym_number,
      sym_string,
      sym_variable,
  [1091] = 3,
    ACTIONS(203), 1,
      sym_one_sample_delay_operator,
    STATE(68), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(161), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1106] = 3,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(81), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1121] = 4,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    STATE(70), 1,
      aux_sym_split_repeat1,
    ACTIONS(207), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [1138] = 6,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(211), 1,
      anon_sym_TILDE,
    STATE(70), 1,
      aux_sym_split_repeat1,
    ACTIONS(209), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [1159] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(158), 1,
      sym_object,
    STATE(31), 3,
      sym_number,
      sym_string,
      sym_variable,
  [1180] = 6,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(211), 1,
      anon_sym_TILDE,
    STATE(70), 1,
      aux_sym_split_repeat1,
    ACTIONS(178), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [1201] = 3,
    ACTIONS(213), 1,
      sym_one_sample_delay_operator,
    STATE(68), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(167), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1216] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(166), 1,
      sym_object,
    STATE(31), 3,
      sym_number,
      sym_string,
      sym_variable,
  [1237] = 4,
    ACTIONS(199), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_COLON_GT,
    STATE(52), 1,
      aux_sym_split_repeat1,
    ACTIONS(197), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1254] = 4,
    ACTIONS(201), 1,
      anon_sym_COLON_GT,
    ACTIONS(220), 1,
      anon_sym_COLON,
    STATE(52), 1,
      aux_sym_split_repeat1,
    ACTIONS(218), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1271] = 4,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    STATE(59), 1,
      aux_sym_split_repeat1,
    ACTIONS(207), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [1287] = 2,
    ACTIONS(226), 1,
      anon_sym_COLON,
    ACTIONS(224), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1299] = 2,
    ACTIONS(230), 1,
      anon_sym_COLON,
    ACTIONS(228), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1311] = 2,
    ACTIONS(234), 1,
      anon_sym_COLON,
    ACTIONS(232), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1323] = 2,
    ACTIONS(238), 1,
      anon_sym_COLON,
    ACTIONS(236), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1335] = 2,
    ACTIONS(242), 1,
      anon_sym_COLON,
    ACTIONS(240), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1347] = 4,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    STATE(59), 1,
      aux_sym_split_repeat1,
    ACTIONS(195), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [1363] = 5,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    STATE(59), 1,
      aux_sym_split_repeat1,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [1381] = 2,
    ACTIONS(149), 1,
      anon_sym_COLON,
    ACTIONS(147), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1393] = 5,
    ACTIONS(199), 1,
      anon_sym_COLON,
    ACTIONS(201), 1,
      anon_sym_COLON_GT,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_split_repeat1,
    ACTIONS(197), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1411] = 2,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(95), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1423] = 6,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_TILDE,
    STATE(59), 1,
      aux_sym_split_repeat1,
    ACTIONS(209), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1443] = 2,
    ACTIONS(250), 1,
      anon_sym_COLON,
    ACTIONS(248), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1455] = 2,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(252), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1467] = 2,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(256), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1479] = 2,
    ACTIONS(262), 1,
      anon_sym_COLON,
    ACTIONS(260), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1491] = 2,
    ACTIONS(266), 1,
      anon_sym_COLON,
    ACTIONS(264), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1503] = 2,
    ACTIONS(270), 1,
      anon_sym_COLON,
    ACTIONS(268), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1515] = 2,
    ACTIONS(274), 1,
      anon_sym_COLON,
    ACTIONS(272), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1527] = 5,
    ACTIONS(199), 1,
      anon_sym_COLON,
    ACTIONS(201), 1,
      anon_sym_COLON_GT,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_split_repeat1,
    ACTIONS(197), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1545] = 2,
    ACTIONS(280), 1,
      anon_sym_COLON,
    ACTIONS(278), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1557] = 2,
    ACTIONS(284), 1,
      anon_sym_COLON,
    ACTIONS(282), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1569] = 1,
    ACTIONS(228), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1578] = 1,
    ACTIONS(260), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1587] = 1,
    ACTIONS(268), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1596] = 1,
    ACTIONS(224), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1605] = 1,
    ACTIONS(252), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1614] = 6,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_TILDE,
    ACTIONS(286), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_split_repeat1,
  [1633] = 6,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_TILDE,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_split_repeat1,
  [1652] = 6,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_TILDE,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_split_repeat1,
  [1671] = 1,
    ACTIONS(236), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1680] = 1,
    ACTIONS(248), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1689] = 6,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_TILDE,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_split_repeat1,
  [1708] = 1,
    ACTIONS(272), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1717] = 1,
    ACTIONS(278), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1726] = 1,
    ACTIONS(256), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1735] = 1,
    ACTIONS(232), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1744] = 6,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_TILDE,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_split_repeat1,
  [1763] = 1,
    ACTIONS(282), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1772] = 6,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_TILDE,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_split_repeat1,
  [1791] = 1,
    ACTIONS(264), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1800] = 6,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_TILDE,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      aux_sym_split_repeat1,
  [1819] = 1,
    ACTIONS(240), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1828] = 5,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_TILDE,
    STATE(91), 1,
      aux_sym_split_repeat1,
  [1844] = 5,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_TILDE,
    STATE(71), 1,
      aux_sym_split_repeat1,
  [1860] = 2,
    ACTIONS(302), 2,
      anon_sym_declare,
      sym_identifier,
    ACTIONS(300), 3,
      ts_builtin_sym_end,
      anon_sym_import_LPAREN,
      sym_comment,
  [1870] = 5,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(222), 1,
      anon_sym_COLON,
    ACTIONS(246), 1,
      anon_sym_TILDE,
    STATE(81), 1,
      aux_sym_split_repeat1,
  [1886] = 4,
    ACTIONS(304), 1,
      anon_sym_DQUOTE,
    ACTIONS(306), 1,
      aux_sym_string_token1,
    ACTIONS(308), 1,
      sym_escape_sequence,
    STATE(122), 1,
      aux_sym_string_repeat1,
  [1899] = 4,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      aux_sym_string_token1,
    ACTIONS(314), 1,
      sym_escape_sequence,
    STATE(123), 1,
      aux_sym_string_repeat1,
  [1912] = 4,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      aux_sym_string_token1,
    ACTIONS(320), 1,
      sym_escape_sequence,
    STATE(120), 1,
      aux_sym_string_repeat1,
  [1925] = 4,
    ACTIONS(312), 1,
      aux_sym_string_token1,
    ACTIONS(314), 1,
      sym_escape_sequence,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      aux_sym_string_repeat1,
  [1938] = 4,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      aux_sym_string_token1,
    ACTIONS(329), 1,
      sym_escape_sequence,
    STATE(123), 1,
      aux_sym_string_repeat1,
  [1951] = 3,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_function_definition_repeat1,
  [1961] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_function_call_repeat1,
  [1971] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_function_call_repeat1,
  [1981] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_function_call_repeat1,
  [1991] = 3,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_function_definition_repeat1,
  [2001] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_function_call_repeat1,
  [2011] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_function_call_repeat1,
  [2021] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_function_call_repeat1,
  [2031] = 3,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      aux_sym_function_definition_repeat1,
  [2041] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_function_call_repeat1,
  [2051] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_function_call_repeat1,
  [2061] = 3,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(153), 1,
      sym_string,
  [2071] = 3,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_function_call_repeat1,
  [2081] = 3,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_function_definition_repeat1,
  [2091] = 3,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_function_definition_repeat1,
  [2101] = 2,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      anon_sym_COLON,
  [2108] = 2,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    ACTIONS(378), 1,
      sym_identifier,
  [2115] = 2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym_string,
  [2122] = 1,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2127] = 2,
    ACTIONS(380), 1,
      anon_sym_EQ,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
  [2134] = 2,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym_string,
  [2141] = 2,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 1,
      sym_identifier,
  [2148] = 2,
    ACTIONS(374), 1,
      anon_sym_COLON,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
  [2155] = 1,
    ACTIONS(390), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2160] = 2,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
  [2167] = 2,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
  [2174] = 1,
    ACTIONS(400), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2179] = 1,
    ACTIONS(402), 1,
      anon_sym_DOT,
  [2183] = 1,
    ACTIONS(404), 1,
      anon_sym_SEMI,
  [2187] = 1,
    ACTIONS(406), 1,
      anon_sym_SEMI,
  [2191] = 1,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
  [2195] = 1,
    ACTIONS(410), 1,
      sym_identifier,
  [2199] = 1,
    ACTIONS(412), 1,
      anon_sym_SEMI,
  [2203] = 1,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
  [2207] = 1,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
  [2211] = 1,
    ACTIONS(418), 1,
      anon_sym_SEMI,
  [2215] = 1,
    ACTIONS(420), 1,
      anon_sym_LPAREN,
  [2219] = 1,
    ACTIONS(422), 1,
      anon_sym_DOT,
  [2223] = 1,
    ACTIONS(424), 1,
      anon_sym_LPAREN,
  [2227] = 1,
    ACTIONS(426), 1,
      anon_sym_SEMI,
  [2231] = 1,
    ACTIONS(428), 1,
      anon_sym_COLON,
  [2235] = 1,
    ACTIONS(430), 1,
      anon_sym_EQ,
  [2239] = 1,
    ACTIONS(432), 1,
      anon_sym_COMMA,
  [2243] = 1,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
  [2247] = 1,
    ACTIONS(436), 1,
      sym_identifier,
  [2251] = 1,
    ACTIONS(438), 1,
      anon_sym_EQ,
  [2255] = 1,
    ACTIONS(440), 1,
      anon_sym_SEMI,
  [2259] = 1,
    ACTIONS(442), 1,
      sym_identifier,
  [2263] = 1,
    ACTIONS(444), 1,
      anon_sym_SEMI,
  [2267] = 1,
    ACTIONS(374), 1,
      anon_sym_COLON,
  [2271] = 1,
    ACTIONS(446), 1,
      anon_sym_SEMI,
  [2275] = 1,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
  [2279] = 1,
    ACTIONS(450), 1,
      anon_sym_COLON,
  [2283] = 1,
    ACTIONS(452), 1,
      anon_sym_COMMA,
  [2287] = 1,
    ACTIONS(454), 1,
      sym_identifier,
  [2291] = 1,
    ACTIONS(456), 1,
      ts_builtin_sym_end,
  [2295] = 1,
    ACTIONS(458), 1,
      anon_sym_COLON,
  [2299] = 1,
    ACTIONS(460), 1,
      anon_sym_DOT,
  [2303] = 1,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
  [2307] = 1,
    ACTIONS(464), 1,
      anon_sym_EQ,
  [2311] = 1,
    ACTIONS(466), 1,
      sym_identifier,
  [2315] = 1,
    ACTIONS(468), 1,
      sym_identifier,
  [2319] = 1,
    ACTIONS(470), 1,
      anon_sym_COMMA,
  [2323] = 1,
    ACTIONS(472), 1,
      anon_sym_SEMI,
  [2327] = 1,
    ACTIONS(474), 1,
      anon_sym_SEMI,
  [2331] = 1,
    ACTIONS(476), 1,
      sym_identifier,
  [2335] = 1,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
  [2339] = 1,
    ACTIONS(480), 1,
      anon_sym_COMMA,
  [2343] = 1,
    ACTIONS(482), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 37,
  [SMALL_STATE(23)] = 80,
  [SMALL_STATE(24)] = 114,
  [SMALL_STATE(25)] = 154,
  [SMALL_STATE(26)] = 190,
  [SMALL_STATE(27)] = 221,
  [SMALL_STATE(28)] = 252,
  [SMALL_STATE(29)] = 283,
  [SMALL_STATE(30)] = 316,
  [SMALL_STATE(31)] = 347,
  [SMALL_STATE(32)] = 377,
  [SMALL_STATE(33)] = 407,
  [SMALL_STATE(34)] = 437,
  [SMALL_STATE(35)] = 467,
  [SMALL_STATE(36)] = 505,
  [SMALL_STATE(37)] = 531,
  [SMALL_STATE(38)] = 557,
  [SMALL_STATE(39)] = 583,
  [SMALL_STATE(40)] = 609,
  [SMALL_STATE(41)] = 645,
  [SMALL_STATE(42)] = 681,
  [SMALL_STATE(43)] = 697,
  [SMALL_STATE(44)] = 725,
  [SMALL_STATE(45)] = 753,
  [SMALL_STATE(46)] = 781,
  [SMALL_STATE(47)] = 809,
  [SMALL_STATE(48)] = 834,
  [SMALL_STATE(49)] = 852,
  [SMALL_STATE(50)] = 870,
  [SMALL_STATE(51)] = 884,
  [SMALL_STATE(52)] = 905,
  [SMALL_STATE(53)] = 922,
  [SMALL_STATE(54)] = 941,
  [SMALL_STATE(55)] = 962,
  [SMALL_STATE(56)] = 979,
  [SMALL_STATE(57)] = 1000,
  [SMALL_STATE(58)] = 1021,
  [SMALL_STATE(59)] = 1032,
  [SMALL_STATE(60)] = 1049,
  [SMALL_STATE(61)] = 1070,
  [SMALL_STATE(62)] = 1091,
  [SMALL_STATE(63)] = 1106,
  [SMALL_STATE(64)] = 1121,
  [SMALL_STATE(65)] = 1138,
  [SMALL_STATE(66)] = 1159,
  [SMALL_STATE(67)] = 1180,
  [SMALL_STATE(68)] = 1201,
  [SMALL_STATE(69)] = 1216,
  [SMALL_STATE(70)] = 1237,
  [SMALL_STATE(71)] = 1254,
  [SMALL_STATE(72)] = 1271,
  [SMALL_STATE(73)] = 1287,
  [SMALL_STATE(74)] = 1299,
  [SMALL_STATE(75)] = 1311,
  [SMALL_STATE(76)] = 1323,
  [SMALL_STATE(77)] = 1335,
  [SMALL_STATE(78)] = 1347,
  [SMALL_STATE(79)] = 1363,
  [SMALL_STATE(80)] = 1381,
  [SMALL_STATE(81)] = 1393,
  [SMALL_STATE(82)] = 1411,
  [SMALL_STATE(83)] = 1423,
  [SMALL_STATE(84)] = 1443,
  [SMALL_STATE(85)] = 1455,
  [SMALL_STATE(86)] = 1467,
  [SMALL_STATE(87)] = 1479,
  [SMALL_STATE(88)] = 1491,
  [SMALL_STATE(89)] = 1503,
  [SMALL_STATE(90)] = 1515,
  [SMALL_STATE(91)] = 1527,
  [SMALL_STATE(92)] = 1545,
  [SMALL_STATE(93)] = 1557,
  [SMALL_STATE(94)] = 1569,
  [SMALL_STATE(95)] = 1578,
  [SMALL_STATE(96)] = 1587,
  [SMALL_STATE(97)] = 1596,
  [SMALL_STATE(98)] = 1605,
  [SMALL_STATE(99)] = 1614,
  [SMALL_STATE(100)] = 1633,
  [SMALL_STATE(101)] = 1652,
  [SMALL_STATE(102)] = 1671,
  [SMALL_STATE(103)] = 1680,
  [SMALL_STATE(104)] = 1689,
  [SMALL_STATE(105)] = 1708,
  [SMALL_STATE(106)] = 1717,
  [SMALL_STATE(107)] = 1726,
  [SMALL_STATE(108)] = 1735,
  [SMALL_STATE(109)] = 1744,
  [SMALL_STATE(110)] = 1763,
  [SMALL_STATE(111)] = 1772,
  [SMALL_STATE(112)] = 1791,
  [SMALL_STATE(113)] = 1800,
  [SMALL_STATE(114)] = 1819,
  [SMALL_STATE(115)] = 1828,
  [SMALL_STATE(116)] = 1844,
  [SMALL_STATE(117)] = 1860,
  [SMALL_STATE(118)] = 1870,
  [SMALL_STATE(119)] = 1886,
  [SMALL_STATE(120)] = 1899,
  [SMALL_STATE(121)] = 1912,
  [SMALL_STATE(122)] = 1925,
  [SMALL_STATE(123)] = 1938,
  [SMALL_STATE(124)] = 1951,
  [SMALL_STATE(125)] = 1961,
  [SMALL_STATE(126)] = 1971,
  [SMALL_STATE(127)] = 1981,
  [SMALL_STATE(128)] = 1991,
  [SMALL_STATE(129)] = 2001,
  [SMALL_STATE(130)] = 2011,
  [SMALL_STATE(131)] = 2021,
  [SMALL_STATE(132)] = 2031,
  [SMALL_STATE(133)] = 2041,
  [SMALL_STATE(134)] = 2051,
  [SMALL_STATE(135)] = 2061,
  [SMALL_STATE(136)] = 2071,
  [SMALL_STATE(137)] = 2081,
  [SMALL_STATE(138)] = 2091,
  [SMALL_STATE(139)] = 2101,
  [SMALL_STATE(140)] = 2108,
  [SMALL_STATE(141)] = 2115,
  [SMALL_STATE(142)] = 2122,
  [SMALL_STATE(143)] = 2127,
  [SMALL_STATE(144)] = 2134,
  [SMALL_STATE(145)] = 2141,
  [SMALL_STATE(146)] = 2148,
  [SMALL_STATE(147)] = 2155,
  [SMALL_STATE(148)] = 2160,
  [SMALL_STATE(149)] = 2167,
  [SMALL_STATE(150)] = 2174,
  [SMALL_STATE(151)] = 2179,
  [SMALL_STATE(152)] = 2183,
  [SMALL_STATE(153)] = 2187,
  [SMALL_STATE(154)] = 2191,
  [SMALL_STATE(155)] = 2195,
  [SMALL_STATE(156)] = 2199,
  [SMALL_STATE(157)] = 2203,
  [SMALL_STATE(158)] = 2207,
  [SMALL_STATE(159)] = 2211,
  [SMALL_STATE(160)] = 2215,
  [SMALL_STATE(161)] = 2219,
  [SMALL_STATE(162)] = 2223,
  [SMALL_STATE(163)] = 2227,
  [SMALL_STATE(164)] = 2231,
  [SMALL_STATE(165)] = 2235,
  [SMALL_STATE(166)] = 2239,
  [SMALL_STATE(167)] = 2243,
  [SMALL_STATE(168)] = 2247,
  [SMALL_STATE(169)] = 2251,
  [SMALL_STATE(170)] = 2255,
  [SMALL_STATE(171)] = 2259,
  [SMALL_STATE(172)] = 2263,
  [SMALL_STATE(173)] = 2267,
  [SMALL_STATE(174)] = 2271,
  [SMALL_STATE(175)] = 2275,
  [SMALL_STATE(176)] = 2279,
  [SMALL_STATE(177)] = 2283,
  [SMALL_STATE(178)] = 2287,
  [SMALL_STATE(179)] = 2291,
  [SMALL_STATE(180)] = 2295,
  [SMALL_STATE(181)] = 2299,
  [SMALL_STATE(182)] = 2303,
  [SMALL_STATE(183)] = 2307,
  [SMALL_STATE(184)] = 2311,
  [SMALL_STATE(185)] = 2315,
  [SMALL_STATE(186)] = 2319,
  [SMALL_STATE(187)] = 2323,
  [SMALL_STATE(188)] = 2327,
  [SMALL_STATE(189)] = 2331,
  [SMALL_STATE(190)] = 2335,
  [SMALL_STATE(191)] = 2339,
  [SMALL_STATE(192)] = 2343,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(144),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(189),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(49),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2), SHIFT_REPEAT(4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_split_repeat1, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 6),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 4, .production_id = 10),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 6, .production_id = 14),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(68),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 4, .production_id = 9),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split, 4, .production_id = 9),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_composition, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_composition, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 4),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 5),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 12),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 12),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 5),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 12),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 12),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 7),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 7),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 12),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 12),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 11),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 3, .production_id = 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 7),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 13),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(123),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(123),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(47),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(184),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 8),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_declaration, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 7),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 9, .production_id = 15),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [456] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 8, .production_id = 15),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
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
