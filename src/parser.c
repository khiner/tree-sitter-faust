#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 198
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 6
#define TOKEN_COUNT 53
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
  aux_sym_float_token1 = 33,
  aux_sym_float_token2 = 34,
  aux_sym_float_token3 = 35,
  sym_integer = 36,
  sym_exponent = 37,
  sym__digit = 38,
  anon_sym_import_LPAREN = 39,
  anon_sym_declare = 40,
  anon_sym_singleprecision = 41,
  anon_sym_doubleprecision = 42,
  anon_sym_quadprecision = 43,
  anon_sym_fixedpointprecision = 44,
  anon_sym_TILDE = 45,
  anon_sym_LT_COLON = 46,
  anon_sym_COLON_GT = 47,
  anon_sym_DQUOTE = 48,
  aux_sym_string_token1 = 49,
  sym_escape_sequence = 50,
  sym_identifier = 51,
  sym_comment = 52,
  sym_source_file = 53,
  sym__statement = 54,
  sym_definition = 55,
  sym_simple_definition = 56,
  sym_function_definition = 57,
  sym_function_call = 58,
  sym_argument = 59,
  sym_lambda_abstraction = 60,
  sym_expression = 61,
  sym_iteration = 62,
  sym_binary_operation = 63,
  sym_core = 64,
  sym_infix = 65,
  sym_prefix = 66,
  sym_partial = 67,
  sym_one_sample_delay = 68,
  sym_binary_operator = 69,
  sym_object = 70,
  sym_primitive = 71,
  sym_float = 72,
  sym_file_import = 73,
  sym_metadata_declaration = 74,
  sym_global_metadata = 75,
  sym_function_metadata = 76,
  sym_binary_composition = 77,
  sym_recursive_composition = 78,
  sym_sequential_composition = 79,
  sym_split_composition = 80,
  sym_merge_composition = 81,
  sym_parallel_composition = 82,
  sym_string = 83,
  sym_variable = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_function_definition_repeat1 = 86,
  aux_sym_function_call_repeat1 = 87,
  aux_sym_one_sample_delay_repeat1 = 88,
  aux_sym_split_composition_repeat1 = 89,
  aux_sym_string_repeat1 = 90,
  alias_sym_current_iteration = 91,
  alias_sym_function_name = 92,
  alias_sym_metadata_key = 93,
  alias_sym_module_name = 94,
  alias_sym_numiter = 95,
  alias_sym_parameter = 96,
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
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [aux_sym_float_token3] = "float_token3",
  [sym_integer] = "integer",
  [sym_exponent] = "exponent",
  [sym__digit] = "_digit",
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
  [sym_expression] = "expression",
  [sym_iteration] = "iteration",
  [sym_binary_operation] = "binary_operation",
  [sym_core] = "core",
  [sym_infix] = "infix",
  [sym_prefix] = "prefix",
  [sym_partial] = "partial",
  [sym_one_sample_delay] = "one_sample_delay",
  [sym_binary_operator] = "binary_operator",
  [sym_object] = "object",
  [sym_primitive] = "primitive",
  [sym_float] = "float",
  [sym_file_import] = "file_import",
  [sym_metadata_declaration] = "metadata_declaration",
  [sym_global_metadata] = "global_metadata",
  [sym_function_metadata] = "function_metadata",
  [sym_binary_composition] = "binary_composition",
  [sym_recursive_composition] = "recursive_composition",
  [sym_sequential_composition] = "sequential_composition",
  [sym_split_composition] = "split_composition",
  [sym_merge_composition] = "merge_composition",
  [sym_parallel_composition] = "parallel_composition",
  [sym_string] = "string",
  [sym_variable] = "variable",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_one_sample_delay_repeat1] = "one_sample_delay_repeat1",
  [aux_sym_split_composition_repeat1] = "split_composition_repeat1",
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
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [aux_sym_float_token3] = aux_sym_float_token3,
  [sym_integer] = sym_integer,
  [sym_exponent] = sym_exponent,
  [sym__digit] = sym__digit,
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
  [sym_expression] = sym_expression,
  [sym_iteration] = sym_iteration,
  [sym_binary_operation] = sym_binary_operation,
  [sym_core] = sym_core,
  [sym_infix] = sym_infix,
  [sym_prefix] = sym_prefix,
  [sym_partial] = sym_partial,
  [sym_one_sample_delay] = sym_one_sample_delay,
  [sym_binary_operator] = sym_binary_operator,
  [sym_object] = sym_object,
  [sym_primitive] = sym_primitive,
  [sym_float] = sym_float,
  [sym_file_import] = sym_file_import,
  [sym_metadata_declaration] = sym_metadata_declaration,
  [sym_global_metadata] = sym_global_metadata,
  [sym_function_metadata] = sym_function_metadata,
  [sym_binary_composition] = sym_binary_composition,
  [sym_recursive_composition] = sym_recursive_composition,
  [sym_sequential_composition] = sym_sequential_composition,
  [sym_split_composition] = sym_split_composition,
  [sym_merge_composition] = sym_merge_composition,
  [sym_parallel_composition] = sym_parallel_composition,
  [sym_string] = sym_string,
  [sym_variable] = sym_variable,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_one_sample_delay_repeat1] = aux_sym_one_sample_delay_repeat1,
  [aux_sym_split_composition_repeat1] = aux_sym_split_composition_repeat1,
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
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent] = {
    .visible = true,
    .named = true,
  },
  [sym__digit] = {
    .visible = false,
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
  [sym_expression] = {
    .visible = true,
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
  [sym_primitive] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
  [sym_recursive_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_sequential_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_split_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_merge_composition] = {
    .visible = true,
    .named = true,
  },
  [sym_parallel_composition] = {
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
  [aux_sym_split_composition_repeat1] = {
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
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 8,
  [20] = 4,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 22,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 29,
  [34] = 30,
  [35] = 28,
  [36] = 27,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 38,
  [42] = 42,
  [43] = 43,
  [44] = 42,
  [45] = 45,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 50,
  [53] = 53,
  [54] = 53,
  [55] = 49,
  [56] = 51,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 57,
  [63] = 60,
  [64] = 59,
  [65] = 65,
  [66] = 58,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 67,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 75,
  [80] = 61,
  [81] = 70,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 76,
  [92] = 92,
  [93] = 93,
  [94] = 76,
  [95] = 95,
  [96] = 72,
  [97] = 68,
  [98] = 88,
  [99] = 84,
  [100] = 74,
  [101] = 101,
  [102] = 86,
  [103] = 90,
  [104] = 92,
  [105] = 89,
  [106] = 82,
  [107] = 95,
  [108] = 108,
  [109] = 85,
  [110] = 93,
  [111] = 78,
  [112] = 112,
  [113] = 113,
  [114] = 83,
  [115] = 115,
  [116] = 77,
  [117] = 117,
  [118] = 87,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 120,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 126,
  [128] = 124,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 133,
  [136] = 134,
  [137] = 137,
  [138] = 138,
  [139] = 137,
  [140] = 140,
  [141] = 132,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 148,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 146,
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
  [173] = 161,
  [174] = 174,
  [175] = 175,
  [176] = 160,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 163,
  [182] = 157,
  [183] = 183,
  [184] = 184,
  [185] = 172,
  [186] = 186,
  [187] = 164,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 156,
  [196] = 192,
  [197] = 169,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(47);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'p') ADVANCE(124);
      if (lookahead == 'q') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == 'x') ADVANCE(173);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == '*') ADVANCE(65);
      if (lookahead == '+') ADVANCE(60);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead == '@') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead == '^') ADVANCE(71);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(172);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(206);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(206);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(119);
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(18);
      if (lookahead == '|') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(209);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(109);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 20:
      if (lookahead == '{') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 23:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 24:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 35:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(209);
      if (lookahead == '\r') ADVANCE(210);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '\'') ADVANCE(57);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead == '~') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identity_function);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identity_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(110);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_one_sample_delay_operator);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(109);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(79);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_AT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_exponent);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_exponent);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_import_LPAREN);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(113);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'r') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'o') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(209);
      if (lookahead == '\\') ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 37},
  [73] = {.lex_state = 37},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 37},
  [81] = {.lex_state = 37},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 37},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 37},
  [98] = {.lex_state = 37},
  [99] = {.lex_state = 37},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 37},
  [102] = {.lex_state = 37},
  [103] = {.lex_state = 37},
  [104] = {.lex_state = 37},
  [105] = {.lex_state = 37},
  [106] = {.lex_state = 37},
  [107] = {.lex_state = 37},
  [108] = {.lex_state = 37},
  [109] = {.lex_state = 37},
  [110] = {.lex_state = 37},
  [111] = {.lex_state = 37},
  [112] = {.lex_state = 37},
  [113] = {.lex_state = 37},
  [114] = {.lex_state = 37},
  [115] = {.lex_state = 37},
  [116] = {.lex_state = 37},
  [117] = {.lex_state = 37},
  [118] = {.lex_state = 37},
  [119] = {.lex_state = 37},
  [120] = {.lex_state = 37},
  [121] = {.lex_state = 37},
  [122] = {.lex_state = 37},
  [123] = {.lex_state = 37},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 37},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 37},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 37},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 37},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 37},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 37},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 8},
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
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_exponent] = ACTIONS(1),
    [sym__digit] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(193),
    [sym__statement] = STATE(45),
    [sym_definition] = STATE(191),
    [sym_simple_definition] = STATE(190),
    [sym_function_definition] = STATE(190),
    [sym_file_import] = STATE(191),
    [sym_metadata_declaration] = STATE(191),
    [sym_global_metadata] = STATE(184),
    [sym_function_metadata] = STATE(184),
    [sym_variable] = STATE(147),
    [aux_sym_source_file_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import_LPAREN] = ACTIONS(5),
    [anon_sym_declare] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
  },
  [2] = {
    [sym_function_call] = STATE(107),
    [sym_lambda_abstraction] = STATE(167),
    [sym_expression] = STATE(113),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(15),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [3] = {
    [sym_function_call] = STATE(95),
    [sym_expression] = STATE(71),
    [sym_iteration] = STATE(95),
    [sym_binary_operation] = STATE(95),
    [sym_core] = STATE(93),
    [sym_infix] = STATE(93),
    [sym_prefix] = STATE(93),
    [sym_partial] = STATE(93),
    [sym_one_sample_delay] = STATE(95),
    [sym_binary_operator] = STATE(195),
    [sym_object] = STATE(22),
    [sym_primitive] = STATE(31),
    [sym_float] = STATE(27),
    [sym_binary_composition] = STATE(95),
    [sym_recursive_composition] = STATE(92),
    [sym_sequential_composition] = STATE(92),
    [sym_split_composition] = STATE(92),
    [sym_merge_composition] = STATE(92),
    [sym_parallel_composition] = STATE(92),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_par] = ACTIONS(37),
    [anon_sym_seq] = ACTIONS(37),
    [anon_sym_sum] = ACTIONS(37),
    [anon_sym_prod] = ACTIONS(37),
    [sym_identity_function] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(41),
    [aux_sym_float_token2] = ACTIONS(43),
    [aux_sym_float_token3] = ACTIONS(43),
    [sym_integer] = ACTIONS(45),
    [sym_exponent] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
  },
  [4] = {
    [sym_function_call] = STATE(107),
    [sym_expression] = STATE(73),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [5] = {
    [sym_function_call] = STATE(107),
    [sym_expression] = STATE(115),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [6] = {
    [sym_function_call] = STATE(107),
    [sym_expression] = STATE(108),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [7] = {
    [sym_function_call] = STATE(107),
    [sym_expression] = STATE(122),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [8] = {
    [sym_function_call] = STATE(107),
    [sym_expression] = STATE(81),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [9] = {
    [sym_function_call] = STATE(107),
    [sym_expression] = STATE(80),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [10] = {
    [sym_function_call] = STATE(95),
    [sym_expression] = STATE(61),
    [sym_iteration] = STATE(95),
    [sym_binary_operation] = STATE(95),
    [sym_core] = STATE(93),
    [sym_infix] = STATE(93),
    [sym_prefix] = STATE(93),
    [sym_partial] = STATE(93),
    [sym_one_sample_delay] = STATE(95),
    [sym_binary_operator] = STATE(195),
    [sym_object] = STATE(22),
    [sym_primitive] = STATE(31),
    [sym_float] = STATE(27),
    [sym_binary_composition] = STATE(95),
    [sym_recursive_composition] = STATE(92),
    [sym_sequential_composition] = STATE(92),
    [sym_split_composition] = STATE(92),
    [sym_merge_composition] = STATE(92),
    [sym_parallel_composition] = STATE(92),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_par] = ACTIONS(37),
    [anon_sym_seq] = ACTIONS(37),
    [anon_sym_sum] = ACTIONS(37),
    [anon_sym_prod] = ACTIONS(37),
    [sym_identity_function] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(41),
    [aux_sym_float_token2] = ACTIONS(43),
    [aux_sym_float_token3] = ACTIONS(43),
    [sym_integer] = ACTIONS(45),
    [sym_exponent] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
  },
  [11] = {
    [sym_function_call] = STATE(107),
    [sym_expression] = STATE(117),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [12] = {
    [sym_function_call] = STATE(107),
    [sym_expression] = STATE(97),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [13] = {
    [sym_function_call] = STATE(95),
    [sym_expression] = STATE(68),
    [sym_iteration] = STATE(95),
    [sym_binary_operation] = STATE(95),
    [sym_core] = STATE(93),
    [sym_infix] = STATE(93),
    [sym_prefix] = STATE(93),
    [sym_partial] = STATE(93),
    [sym_one_sample_delay] = STATE(95),
    [sym_binary_operator] = STATE(195),
    [sym_object] = STATE(22),
    [sym_primitive] = STATE(31),
    [sym_float] = STATE(27),
    [sym_binary_composition] = STATE(95),
    [sym_recursive_composition] = STATE(92),
    [sym_sequential_composition] = STATE(92),
    [sym_split_composition] = STATE(92),
    [sym_merge_composition] = STATE(92),
    [sym_parallel_composition] = STATE(92),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_par] = ACTIONS(37),
    [anon_sym_seq] = ACTIONS(37),
    [anon_sym_sum] = ACTIONS(37),
    [anon_sym_prod] = ACTIONS(37),
    [sym_identity_function] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(41),
    [aux_sym_float_token2] = ACTIONS(43),
    [aux_sym_float_token3] = ACTIONS(43),
    [sym_integer] = ACTIONS(45),
    [sym_exponent] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
  },
  [14] = {
    [sym_function_call] = STATE(107),
    [sym_expression] = STATE(112),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [15] = {
    [sym_function_call] = STATE(107),
    [sym_expression] = STATE(119),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [16] = {
    [sym_function_call] = STATE(107),
    [sym_expression] = STATE(123),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(37),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [17] = {
    [sym_function_call] = STATE(107),
    [sym_expression] = STATE(101),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(25),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [18] = {
    [sym_function_call] = STATE(107),
    [sym_expression] = STATE(120),
    [sym_iteration] = STATE(107),
    [sym_binary_operation] = STATE(107),
    [sym_core] = STATE(110),
    [sym_infix] = STATE(110),
    [sym_prefix] = STATE(110),
    [sym_partial] = STATE(110),
    [sym_one_sample_delay] = STATE(107),
    [sym_binary_operator] = STATE(156),
    [sym_object] = STATE(37),
    [sym_primitive] = STATE(32),
    [sym_float] = STATE(36),
    [sym_binary_composition] = STATE(107),
    [sym_recursive_composition] = STATE(104),
    [sym_sequential_composition] = STATE(104),
    [sym_split_composition] = STATE(104),
    [sym_merge_composition] = STATE(104),
    [sym_parallel_composition] = STATE(104),
    [sym_string] = STATE(32),
    [sym_variable] = STATE(32),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_par] = ACTIONS(17),
    [anon_sym_seq] = ACTIONS(17),
    [anon_sym_sum] = ACTIONS(17),
    [anon_sym_prod] = ACTIONS(17),
    [sym_identity_function] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(25),
    [aux_sym_float_token2] = ACTIONS(27),
    [aux_sym_float_token3] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_exponent] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
  },
  [19] = {
    [sym_function_call] = STATE(95),
    [sym_expression] = STATE(70),
    [sym_iteration] = STATE(95),
    [sym_binary_operation] = STATE(95),
    [sym_core] = STATE(93),
    [sym_infix] = STATE(93),
    [sym_prefix] = STATE(93),
    [sym_partial] = STATE(93),
    [sym_one_sample_delay] = STATE(95),
    [sym_binary_operator] = STATE(195),
    [sym_object] = STATE(22),
    [sym_primitive] = STATE(31),
    [sym_float] = STATE(27),
    [sym_binary_composition] = STATE(95),
    [sym_recursive_composition] = STATE(92),
    [sym_sequential_composition] = STATE(92),
    [sym_split_composition] = STATE(92),
    [sym_merge_composition] = STATE(92),
    [sym_parallel_composition] = STATE(92),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_par] = ACTIONS(37),
    [anon_sym_seq] = ACTIONS(37),
    [anon_sym_sum] = ACTIONS(37),
    [anon_sym_prod] = ACTIONS(37),
    [sym_identity_function] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(41),
    [aux_sym_float_token2] = ACTIONS(43),
    [aux_sym_float_token3] = ACTIONS(43),
    [sym_integer] = ACTIONS(45),
    [sym_exponent] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
  },
  [20] = {
    [sym_function_call] = STATE(95),
    [sym_expression] = STATE(67),
    [sym_iteration] = STATE(95),
    [sym_binary_operation] = STATE(95),
    [sym_core] = STATE(93),
    [sym_infix] = STATE(93),
    [sym_prefix] = STATE(93),
    [sym_partial] = STATE(93),
    [sym_one_sample_delay] = STATE(95),
    [sym_binary_operator] = STATE(195),
    [sym_object] = STATE(22),
    [sym_primitive] = STATE(31),
    [sym_float] = STATE(27),
    [sym_binary_composition] = STATE(95),
    [sym_recursive_composition] = STATE(92),
    [sym_sequential_composition] = STATE(92),
    [sym_split_composition] = STATE(92),
    [sym_merge_composition] = STATE(92),
    [sym_parallel_composition] = STATE(92),
    [sym_string] = STATE(31),
    [sym_variable] = STATE(31),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_par] = ACTIONS(37),
    [anon_sym_seq] = ACTIONS(37),
    [anon_sym_sum] = ACTIONS(37),
    [anon_sym_prod] = ACTIONS(37),
    [sym_identity_function] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(21),
    [anon_sym_CARET] = ACTIONS(21),
    [anon_sym_PIPE] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(21),
    [anon_sym_xor] = ACTIONS(21),
    [anon_sym_LT_LT] = ACTIONS(23),
    [anon_sym_GT_GT] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(21),
    [anon_sym_LT_EQ] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(21),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_EQ_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(21),
    [aux_sym_float_token1] = ACTIONS(41),
    [aux_sym_float_token2] = ACTIONS(43),
    [aux_sym_float_token3] = ACTIONS(43),
    [sym_integer] = ACTIONS(45),
    [sym_exponent] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_DOT,
    ACTIONS(57), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 23,
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
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(63), 1,
      sym_one_sample_delay_operator,
    STATE(50), 1,
      sym_binary_operator,
    STATE(58), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(65), 16,
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
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 23,
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
  [114] = 4,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_DOT,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 23,
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
  [150] = 6,
    ACTIONS(79), 1,
      sym_one_sample_delay_operator,
    STATE(52), 1,
      sym_binary_operator,
    STATE(66), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
    ACTIONS(65), 16,
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
  [190] = 3,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 23,
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
  [223] = 2,
    ACTIONS(85), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 23,
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
  [254] = 2,
    ACTIONS(89), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 23,
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
    ACTIONS(93), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 23,
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
    ACTIONS(97), 3,
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
  [347] = 2,
    ACTIONS(101), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 23,
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
  [378] = 2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 23,
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
  [408] = 2,
    ACTIONS(93), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 23,
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
  [438] = 2,
    ACTIONS(97), 2,
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
  [468] = 2,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 23,
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
  [498] = 2,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 23,
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
  [528] = 6,
    ACTIONS(79), 1,
      sym_one_sample_delay_operator,
    STATE(52), 1,
      sym_binary_operator,
    STATE(66), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(67), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
    ACTIONS(65), 16,
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
  [566] = 3,
    STATE(111), 1,
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
  [592] = 3,
    STATE(83), 1,
      sym_binary_operator,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 16,
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
  [618] = 3,
    STATE(114), 1,
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
  [644] = 3,
    STATE(78), 1,
      sym_binary_operator,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 16,
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
  [670] = 10,
    ACTIONS(25), 1,
      aux_sym_float_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_float,
    STATE(141), 1,
      sym_argument,
    ACTIONS(27), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(29), 2,
      sym_integer,
      sym_exponent,
    STATE(144), 2,
      sym_function_call,
      sym_object,
    STATE(32), 3,
      sym_primitive,
      sym_string,
      sym_variable,
  [706] = 10,
    ACTIONS(25), 1,
      aux_sym_float_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_float,
    STATE(137), 1,
      sym_argument,
    ACTIONS(27), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(29), 2,
      sym_integer,
      sym_exponent,
    STATE(144), 2,
      sym_function_call,
      sym_object,
    STATE(32), 3,
      sym_primitive,
      sym_string,
      sym_variable,
  [742] = 10,
    ACTIONS(25), 1,
      aux_sym_float_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_float,
    STATE(132), 1,
      sym_argument,
    ACTIONS(27), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(29), 2,
      sym_integer,
      sym_exponent,
    STATE(144), 2,
      sym_function_call,
      sym_object,
    STATE(32), 3,
      sym_primitive,
      sym_string,
      sym_variable,
  [778] = 10,
    ACTIONS(5), 1,
      anon_sym_import_LPAREN,
    ACTIONS(7), 1,
      anon_sym_declare,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      sym_comment,
    STATE(147), 1,
      sym_variable,
    STATE(47), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(184), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(190), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(191), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [814] = 10,
    ACTIONS(25), 1,
      aux_sym_float_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_float,
    STATE(139), 1,
      sym_argument,
    ACTIONS(27), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(29), 2,
      sym_integer,
      sym_exponent,
    STATE(144), 2,
      sym_function_call,
      sym_object,
    STATE(32), 3,
      sym_primitive,
      sym_string,
      sym_variable,
  [850] = 10,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_import_LPAREN,
    ACTIONS(124), 1,
      anon_sym_declare,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym_comment,
    STATE(147), 1,
      sym_variable,
    STATE(47), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(184), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(190), 2,
      sym_simple_definition,
      sym_function_definition,
    STATE(191), 3,
      sym_definition,
      sym_file_import,
      sym_metadata_declaration,
  [886] = 9,
    ACTIONS(25), 1,
      aux_sym_float_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(36), 1,
      sym_float,
    STATE(145), 1,
      sym_argument,
    ACTIONS(27), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(29), 2,
      sym_integer,
      sym_exponent,
    STATE(144), 2,
      sym_function_call,
      sym_object,
    STATE(32), 3,
      sym_primitive,
      sym_string,
      sym_variable,
  [919] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_float_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_float,
    STATE(150), 1,
      sym_object,
    ACTIONS(27), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(29), 2,
      sym_integer,
      sym_exponent,
    STATE(32), 3,
      sym_primitive,
      sym_string,
      sym_variable,
  [948] = 8,
    ACTIONS(41), 1,
      aux_sym_float_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(27), 1,
      sym_float,
    STATE(89), 1,
      sym_object,
    ACTIONS(43), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(45), 2,
      sym_integer,
      sym_exponent,
    STATE(31), 3,
      sym_primitive,
      sym_string,
      sym_variable,
  [977] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_float_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_float,
    STATE(187), 1,
      sym_object,
    ACTIONS(27), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(29), 2,
      sym_integer,
      sym_exponent,
    STATE(32), 3,
      sym_primitive,
      sym_string,
      sym_variable,
  [1006] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_float_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_float,
    STATE(105), 1,
      sym_object,
    ACTIONS(27), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(29), 2,
      sym_integer,
      sym_exponent,
    STATE(32), 3,
      sym_primitive,
      sym_string,
      sym_variable,
  [1035] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_float_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_float,
    STATE(157), 1,
      sym_object,
    ACTIONS(27), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(29), 2,
      sym_integer,
      sym_exponent,
    STATE(32), 3,
      sym_primitive,
      sym_string,
      sym_variable,
  [1064] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_float_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_float,
    STATE(182), 1,
      sym_object,
    ACTIONS(27), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(29), 2,
      sym_integer,
      sym_exponent,
    STATE(32), 3,
      sym_primitive,
      sym_string,
      sym_variable,
  [1093] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_float_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_float,
    STATE(148), 1,
      sym_object,
    ACTIONS(27), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(29), 2,
      sym_integer,
      sym_exponent,
    STATE(32), 3,
      sym_primitive,
      sym_string,
      sym_variable,
  [1122] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(25), 1,
      aux_sym_float_token1,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_float,
    STATE(164), 1,
      sym_object,
    ACTIONS(27), 2,
      aux_sym_float_token2,
      aux_sym_float_token3,
    ACTIONS(29), 2,
      sym_integer,
      sym_exponent,
    STATE(32), 3,
      sym_primitive,
      sym_string,
      sym_variable,
  [1151] = 2,
    ACTIONS(135), 1,
      anon_sym_DOT,
    ACTIONS(51), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1165] = 4,
    ACTIONS(139), 1,
      anon_sym_COLON,
    ACTIONS(141), 1,
      sym_one_sample_delay_operator,
    STATE(59), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(137), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1183] = 4,
    ACTIONS(145), 1,
      anon_sym_COLON,
    ACTIONS(147), 1,
      sym_one_sample_delay_operator,
    STATE(59), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(143), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1201] = 4,
    ACTIONS(152), 1,
      anon_sym_COLON,
    ACTIONS(154), 1,
      anon_sym_COLON_GT,
    STATE(65), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(150), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1218] = 4,
    ACTIONS(158), 1,
      anon_sym_COLON,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    STATE(60), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(156), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [1235] = 3,
    ACTIONS(57), 1,
      anon_sym_COLON,
    ACTIONS(162), 1,
      anon_sym_DOT,
    ACTIONS(51), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1250] = 4,
    ACTIONS(152), 1,
      anon_sym_COLON,
    ACTIONS(164), 1,
      anon_sym_COLON_GT,
    STATE(65), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(150), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1267] = 3,
    ACTIONS(166), 1,
      sym_one_sample_delay_operator,
    STATE(64), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(143), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1282] = 4,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_COLON,
    STATE(65), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(169), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1299] = 3,
    ACTIONS(176), 1,
      sym_one_sample_delay_operator,
    STATE(64), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(137), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1314] = 4,
    ACTIONS(158), 1,
      anon_sym_COLON,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    STATE(60), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(178), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [1331] = 6,
    ACTIONS(158), 1,
      anon_sym_COLON,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_TILDE,
    STATE(60), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(180), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [1352] = 4,
    ACTIONS(164), 1,
      anon_sym_COLON_GT,
    ACTIONS(188), 1,
      anon_sym_COLON,
    STATE(65), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(186), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1369] = 5,
    ACTIONS(158), 1,
      anon_sym_COLON,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(190), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [1388] = 6,
    ACTIONS(158), 1,
      anon_sym_COLON,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_TILDE,
    STATE(60), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(169), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [1409] = 1,
    ACTIONS(69), 8,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1420] = 4,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(192), 1,
      anon_sym_COLON,
    STATE(63), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(178), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [1436] = 2,
    ACTIONS(196), 1,
      anon_sym_COLON,
    ACTIONS(194), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1448] = 5,
    ACTIONS(152), 1,
      anon_sym_COLON,
    ACTIONS(164), 1,
      anon_sym_COLON_GT,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(150), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1466] = 2,
    ACTIONS(202), 1,
      anon_sym_COLON,
    ACTIONS(200), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1478] = 2,
    ACTIONS(206), 1,
      anon_sym_COLON,
    ACTIONS(204), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1490] = 2,
    ACTIONS(210), 1,
      anon_sym_COLON,
    ACTIONS(208), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1502] = 5,
    ACTIONS(152), 1,
      anon_sym_COLON,
    ACTIONS(164), 1,
      anon_sym_COLON_GT,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(150), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1520] = 4,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(192), 1,
      anon_sym_COLON,
    STATE(63), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(156), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [1536] = 5,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_COLON,
    STATE(63), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(190), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [1554] = 2,
    ACTIONS(216), 1,
      anon_sym_COLON,
    ACTIONS(214), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1566] = 2,
    ACTIONS(220), 1,
      anon_sym_COLON,
    ACTIONS(218), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1578] = 2,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(222), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1590] = 2,
    ACTIONS(228), 1,
      anon_sym_COLON,
    ACTIONS(226), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1602] = 2,
    ACTIONS(232), 1,
      anon_sym_COLON,
    ACTIONS(230), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1614] = 2,
    ACTIONS(236), 1,
      anon_sym_COLON,
    ACTIONS(234), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1626] = 2,
    ACTIONS(240), 1,
      anon_sym_COLON,
    ACTIONS(238), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1638] = 2,
    ACTIONS(244), 1,
      anon_sym_COLON,
    ACTIONS(242), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1650] = 2,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(246), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1662] = 1,
    ACTIONS(200), 7,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1672] = 2,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(250), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1684] = 2,
    ACTIONS(256), 1,
      anon_sym_COLON,
    ACTIONS(254), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1696] = 2,
    ACTIONS(200), 1,
      aux_sym_float_token1,
    ACTIONS(202), 6,
      aux_sym_float_token2,
      aux_sym_float_token3,
      sym_integer,
      sym_exponent,
      anon_sym_DQUOTE,
      sym_identifier,
  [1708] = 2,
    ACTIONS(61), 1,
      anon_sym_COLON,
    ACTIONS(59), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1720] = 2,
    ACTIONS(73), 1,
      anon_sym_COLON,
    ACTIONS(69), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1732] = 6,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_TILDE,
    STATE(63), 1,
      aux_sym_split_composition_repeat1,
    ACTIONS(180), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1752] = 1,
    ACTIONS(238), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1761] = 1,
    ACTIONS(222), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1770] = 1,
    ACTIONS(194), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1779] = 6,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_TILDE,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      aux_sym_split_composition_repeat1,
  [1798] = 1,
    ACTIONS(230), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1807] = 1,
    ACTIONS(246), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1816] = 1,
    ACTIONS(250), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1825] = 1,
    ACTIONS(242), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1834] = 1,
    ACTIONS(214), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1843] = 1,
    ACTIONS(59), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1852] = 6,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_TILDE,
    ACTIONS(262), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      aux_sym_split_composition_repeat1,
  [1871] = 1,
    ACTIONS(226), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1880] = 1,
    ACTIONS(254), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1889] = 1,
    ACTIONS(208), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1898] = 6,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_TILDE,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_split_composition_repeat1,
  [1917] = 6,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_TILDE,
    ACTIONS(266), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      aux_sym_split_composition_repeat1,
  [1936] = 1,
    ACTIONS(218), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1945] = 6,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_TILDE,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      aux_sym_split_composition_repeat1,
  [1964] = 1,
    ACTIONS(204), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1973] = 6,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_TILDE,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_split_composition_repeat1,
  [1992] = 1,
    ACTIONS(234), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2001] = 6,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_TILDE,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      aux_sym_split_composition_repeat1,
  [2020] = 5,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_TILDE,
    STATE(79), 1,
      aux_sym_split_composition_repeat1,
  [2036] = 2,
    ACTIONS(276), 2,
      anon_sym_declare,
      sym_identifier,
    ACTIONS(274), 3,
      ts_builtin_sym_end,
      anon_sym_import_LPAREN,
      sym_comment,
  [2046] = 5,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_TILDE,
    STATE(69), 1,
      aux_sym_split_composition_repeat1,
  [2062] = 5,
    ACTIONS(160), 1,
      anon_sym_LT_COLON,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_TILDE,
    STATE(75), 1,
      aux_sym_split_composition_repeat1,
  [2078] = 4,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_string_token1,
    ACTIONS(282), 1,
      sym_escape_sequence,
    STATE(127), 1,
      aux_sym_string_repeat1,
  [2091] = 4,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
    ACTIONS(286), 1,
      aux_sym_string_token1,
    ACTIONS(289), 1,
      sym_escape_sequence,
    STATE(125), 1,
      aux_sym_string_repeat1,
  [2104] = 4,
    ACTIONS(292), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      aux_sym_string_token1,
    ACTIONS(296), 1,
      sym_escape_sequence,
    STATE(125), 1,
      aux_sym_string_repeat1,
  [2117] = 4,
    ACTIONS(294), 1,
      aux_sym_string_token1,
    ACTIONS(296), 1,
      sym_escape_sequence,
    ACTIONS(298), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      aux_sym_string_repeat1,
  [2130] = 4,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      aux_sym_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    STATE(126), 1,
      aux_sym_string_repeat1,
  [2143] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_function_definition_repeat1,
  [2153] = 3,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      sym_identifier,
    STATE(177), 1,
      sym_string,
  [2163] = 3,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_function_definition_repeat1,
  [2173] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_function_call_repeat1,
  [2183] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_function_call_repeat1,
  [2193] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_function_call_repeat1,
  [2203] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_function_call_repeat1,
  [2213] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_function_call_repeat1,
  [2223] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_function_call_repeat1,
  [2233] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_function_definition_repeat1,
  [2243] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      aux_sym_function_call_repeat1,
  [2253] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_function_definition_repeat1,
  [2263] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_function_call_repeat1,
  [2273] = 3,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_function_definition_repeat1,
  [2283] = 3,
    ACTIONS(343), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_function_call_repeat1,
  [2293] = 1,
    ACTIONS(348), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2298] = 1,
    ACTIONS(346), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2303] = 2,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(352), 1,
      anon_sym_COLON,
  [2310] = 2,
    ACTIONS(354), 1,
      anon_sym_EQ,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
  [2317] = 2,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
  [2324] = 2,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym_string,
  [2331] = 2,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
  [2338] = 1,
    ACTIONS(366), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2343] = 2,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    STATE(179), 1,
      sym_string,
  [2350] = 2,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(370), 1,
      sym_identifier,
  [2357] = 2,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      sym_identifier,
  [2364] = 2,
    ACTIONS(352), 1,
      anon_sym_COLON,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
  [2371] = 1,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
  [2375] = 1,
    ACTIONS(380), 1,
      anon_sym_COMMA,
  [2379] = 1,
    ACTIONS(382), 1,
      anon_sym_SEMI,
  [2383] = 1,
    ACTIONS(384), 1,
      anon_sym_EQ,
  [2387] = 1,
    ACTIONS(386), 1,
      sym_identifier,
  [2391] = 1,
    ACTIONS(388), 1,
      sym_identifier,
  [2395] = 1,
    ACTIONS(390), 1,
      anon_sym_DOT,
  [2399] = 1,
    ACTIONS(352), 1,
      anon_sym_COLON,
  [2403] = 1,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
  [2407] = 1,
    ACTIONS(394), 1,
      anon_sym_LPAREN,
  [2411] = 1,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
  [2415] = 1,
    ACTIONS(398), 1,
      anon_sym_SEMI,
  [2419] = 1,
    ACTIONS(400), 1,
      anon_sym_LPAREN,
  [2423] = 1,
    ACTIONS(402), 1,
      sym_identifier,
  [2427] = 1,
    ACTIONS(404), 1,
      sym_identifier,
  [2431] = 1,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
  [2435] = 1,
    ACTIONS(408), 1,
      anon_sym_COLON,
  [2439] = 1,
    ACTIONS(410), 1,
      sym_identifier,
  [2443] = 1,
    ACTIONS(412), 1,
      anon_sym_DOT,
  [2447] = 1,
    ACTIONS(414), 1,
      anon_sym_EQ,
  [2451] = 1,
    ACTIONS(416), 1,
      sym_identifier,
  [2455] = 1,
    ACTIONS(418), 1,
      anon_sym_SEMI,
  [2459] = 1,
    ACTIONS(420), 1,
      anon_sym_DOT,
  [2463] = 1,
    ACTIONS(422), 1,
      anon_sym_SEMI,
  [2467] = 1,
    ACTIONS(424), 1,
      anon_sym_SEMI,
  [2471] = 1,
    ACTIONS(426), 1,
      anon_sym_COLON,
  [2475] = 1,
    ACTIONS(428), 1,
      anon_sym_COMMA,
  [2479] = 1,
    ACTIONS(430), 1,
      anon_sym_SEMI,
  [2483] = 1,
    ACTIONS(432), 1,
      anon_sym_SEMI,
  [2487] = 1,
    ACTIONS(434), 1,
      anon_sym_COLON,
  [2491] = 1,
    ACTIONS(436), 1,
      anon_sym_SEMI,
  [2495] = 1,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
  [2499] = 1,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
  [2503] = 1,
    ACTIONS(442), 1,
      anon_sym_EQ,
  [2507] = 1,
    ACTIONS(444), 1,
      anon_sym_SEMI,
  [2511] = 1,
    ACTIONS(446), 1,
      anon_sym_SEMI,
  [2515] = 1,
    ACTIONS(448), 1,
      anon_sym_COMMA,
  [2519] = 1,
    ACTIONS(450), 1,
      ts_builtin_sym_end,
  [2523] = 1,
    ACTIONS(452), 1,
      sym_identifier,
  [2527] = 1,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
  [2531] = 1,
    ACTIONS(456), 1,
      anon_sym_COMMA,
  [2535] = 1,
    ACTIONS(458), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 37,
  [SMALL_STATE(23)] = 80,
  [SMALL_STATE(24)] = 114,
  [SMALL_STATE(25)] = 150,
  [SMALL_STATE(26)] = 190,
  [SMALL_STATE(27)] = 223,
  [SMALL_STATE(28)] = 254,
  [SMALL_STATE(29)] = 285,
  [SMALL_STATE(30)] = 316,
  [SMALL_STATE(31)] = 347,
  [SMALL_STATE(32)] = 378,
  [SMALL_STATE(33)] = 408,
  [SMALL_STATE(34)] = 438,
  [SMALL_STATE(35)] = 468,
  [SMALL_STATE(36)] = 498,
  [SMALL_STATE(37)] = 528,
  [SMALL_STATE(38)] = 566,
  [SMALL_STATE(39)] = 592,
  [SMALL_STATE(40)] = 618,
  [SMALL_STATE(41)] = 644,
  [SMALL_STATE(42)] = 670,
  [SMALL_STATE(43)] = 706,
  [SMALL_STATE(44)] = 742,
  [SMALL_STATE(45)] = 778,
  [SMALL_STATE(46)] = 814,
  [SMALL_STATE(47)] = 850,
  [SMALL_STATE(48)] = 886,
  [SMALL_STATE(49)] = 919,
  [SMALL_STATE(50)] = 948,
  [SMALL_STATE(51)] = 977,
  [SMALL_STATE(52)] = 1006,
  [SMALL_STATE(53)] = 1035,
  [SMALL_STATE(54)] = 1064,
  [SMALL_STATE(55)] = 1093,
  [SMALL_STATE(56)] = 1122,
  [SMALL_STATE(57)] = 1151,
  [SMALL_STATE(58)] = 1165,
  [SMALL_STATE(59)] = 1183,
  [SMALL_STATE(60)] = 1201,
  [SMALL_STATE(61)] = 1218,
  [SMALL_STATE(62)] = 1235,
  [SMALL_STATE(63)] = 1250,
  [SMALL_STATE(64)] = 1267,
  [SMALL_STATE(65)] = 1282,
  [SMALL_STATE(66)] = 1299,
  [SMALL_STATE(67)] = 1314,
  [SMALL_STATE(68)] = 1331,
  [SMALL_STATE(69)] = 1352,
  [SMALL_STATE(70)] = 1369,
  [SMALL_STATE(71)] = 1388,
  [SMALL_STATE(72)] = 1409,
  [SMALL_STATE(73)] = 1420,
  [SMALL_STATE(74)] = 1436,
  [SMALL_STATE(75)] = 1448,
  [SMALL_STATE(76)] = 1466,
  [SMALL_STATE(77)] = 1478,
  [SMALL_STATE(78)] = 1490,
  [SMALL_STATE(79)] = 1502,
  [SMALL_STATE(80)] = 1520,
  [SMALL_STATE(81)] = 1536,
  [SMALL_STATE(82)] = 1554,
  [SMALL_STATE(83)] = 1566,
  [SMALL_STATE(84)] = 1578,
  [SMALL_STATE(85)] = 1590,
  [SMALL_STATE(86)] = 1602,
  [SMALL_STATE(87)] = 1614,
  [SMALL_STATE(88)] = 1626,
  [SMALL_STATE(89)] = 1638,
  [SMALL_STATE(90)] = 1650,
  [SMALL_STATE(91)] = 1662,
  [SMALL_STATE(92)] = 1672,
  [SMALL_STATE(93)] = 1684,
  [SMALL_STATE(94)] = 1696,
  [SMALL_STATE(95)] = 1708,
  [SMALL_STATE(96)] = 1720,
  [SMALL_STATE(97)] = 1732,
  [SMALL_STATE(98)] = 1752,
  [SMALL_STATE(99)] = 1761,
  [SMALL_STATE(100)] = 1770,
  [SMALL_STATE(101)] = 1779,
  [SMALL_STATE(102)] = 1798,
  [SMALL_STATE(103)] = 1807,
  [SMALL_STATE(104)] = 1816,
  [SMALL_STATE(105)] = 1825,
  [SMALL_STATE(106)] = 1834,
  [SMALL_STATE(107)] = 1843,
  [SMALL_STATE(108)] = 1852,
  [SMALL_STATE(109)] = 1871,
  [SMALL_STATE(110)] = 1880,
  [SMALL_STATE(111)] = 1889,
  [SMALL_STATE(112)] = 1898,
  [SMALL_STATE(113)] = 1917,
  [SMALL_STATE(114)] = 1936,
  [SMALL_STATE(115)] = 1945,
  [SMALL_STATE(116)] = 1964,
  [SMALL_STATE(117)] = 1973,
  [SMALL_STATE(118)] = 1992,
  [SMALL_STATE(119)] = 2001,
  [SMALL_STATE(120)] = 2020,
  [SMALL_STATE(121)] = 2036,
  [SMALL_STATE(122)] = 2046,
  [SMALL_STATE(123)] = 2062,
  [SMALL_STATE(124)] = 2078,
  [SMALL_STATE(125)] = 2091,
  [SMALL_STATE(126)] = 2104,
  [SMALL_STATE(127)] = 2117,
  [SMALL_STATE(128)] = 2130,
  [SMALL_STATE(129)] = 2143,
  [SMALL_STATE(130)] = 2153,
  [SMALL_STATE(131)] = 2163,
  [SMALL_STATE(132)] = 2173,
  [SMALL_STATE(133)] = 2183,
  [SMALL_STATE(134)] = 2193,
  [SMALL_STATE(135)] = 2203,
  [SMALL_STATE(136)] = 2213,
  [SMALL_STATE(137)] = 2223,
  [SMALL_STATE(138)] = 2233,
  [SMALL_STATE(139)] = 2243,
  [SMALL_STATE(140)] = 2253,
  [SMALL_STATE(141)] = 2263,
  [SMALL_STATE(142)] = 2273,
  [SMALL_STATE(143)] = 2283,
  [SMALL_STATE(144)] = 2293,
  [SMALL_STATE(145)] = 2298,
  [SMALL_STATE(146)] = 2303,
  [SMALL_STATE(147)] = 2310,
  [SMALL_STATE(148)] = 2317,
  [SMALL_STATE(149)] = 2324,
  [SMALL_STATE(150)] = 2331,
  [SMALL_STATE(151)] = 2338,
  [SMALL_STATE(152)] = 2343,
  [SMALL_STATE(153)] = 2350,
  [SMALL_STATE(154)] = 2357,
  [SMALL_STATE(155)] = 2364,
  [SMALL_STATE(156)] = 2371,
  [SMALL_STATE(157)] = 2375,
  [SMALL_STATE(158)] = 2379,
  [SMALL_STATE(159)] = 2383,
  [SMALL_STATE(160)] = 2387,
  [SMALL_STATE(161)] = 2391,
  [SMALL_STATE(162)] = 2395,
  [SMALL_STATE(163)] = 2399,
  [SMALL_STATE(164)] = 2403,
  [SMALL_STATE(165)] = 2407,
  [SMALL_STATE(166)] = 2411,
  [SMALL_STATE(167)] = 2415,
  [SMALL_STATE(168)] = 2419,
  [SMALL_STATE(169)] = 2423,
  [SMALL_STATE(170)] = 2427,
  [SMALL_STATE(171)] = 2431,
  [SMALL_STATE(172)] = 2435,
  [SMALL_STATE(173)] = 2439,
  [SMALL_STATE(174)] = 2443,
  [SMALL_STATE(175)] = 2447,
  [SMALL_STATE(176)] = 2451,
  [SMALL_STATE(177)] = 2455,
  [SMALL_STATE(178)] = 2459,
  [SMALL_STATE(179)] = 2463,
  [SMALL_STATE(180)] = 2467,
  [SMALL_STATE(181)] = 2471,
  [SMALL_STATE(182)] = 2475,
  [SMALL_STATE(183)] = 2479,
  [SMALL_STATE(184)] = 2483,
  [SMALL_STATE(185)] = 2487,
  [SMALL_STATE(186)] = 2491,
  [SMALL_STATE(187)] = 2495,
  [SMALL_STATE(188)] = 2499,
  [SMALL_STATE(189)] = 2503,
  [SMALL_STATE(190)] = 2507,
  [SMALL_STATE(191)] = 2511,
  [SMALL_STATE(192)] = 2515,
  [SMALL_STATE(193)] = 2519,
  [SMALL_STATE(194)] = 2523,
  [SMALL_STATE(195)] = 2527,
  [SMALL_STATE(196)] = 2531,
  [SMALL_STATE(197)] = 2535,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(149),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(59),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel_composition, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel_composition, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_composition, 3, .production_id = 6),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(64),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_split_composition_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_split_composition_repeat1, 2), SHIFT_REPEAT(3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_split_composition_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_composition, 4, .production_id = 10),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 6, .production_id = 14),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_composition, 4, .production_id = 9),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split_composition, 4, .production_id = 9),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_composition, 3, .production_id = 6),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 12),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 12),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 7),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 7),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 12),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 12),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 12),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 12),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel_composition, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel_composition, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_composition, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_composition, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 11),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, .production_id = 7),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_definition, 3, .production_id = 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 13),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(125),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(125),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2), SHIFT_REPEAT(170),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(48),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, .production_id = 8),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 9, .production_id = 15),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 8, .production_id = 15),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_declaration, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda_abstraction, 7),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [450] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
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
