#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 205
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 6
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 15

enum {
  anon_sym_SEMI = 1,
  anon_sym_singleprecision = 2,
  anon_sym_doubleprecision = 3,
  anon_sym_quadprecision = 4,
  anon_sym_fixedpointprecision = 5,
  anon_sym_LPAREN = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  anon_sym_EQ = 9,
  anon_sym_DOT = 10,
  anon_sym_BSLASH = 11,
  anon_sym_par = 12,
  anon_sym_seq = 13,
  anon_sym_sum = 14,
  anon_sym_prod = 15,
  sym_wire = 16,
  sym_cut = 17,
  anon_sym_COLON = 18,
  sym_one_sample_delay_operator = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_STAR = 22,
  anon_sym_SLASH = 23,
  anon_sym_PERCENT = 24,
  anon_sym_CARET = 25,
  anon_sym_PIPE = 26,
  anon_sym_AMP = 27,
  anon_sym_xor = 28,
  anon_sym_LT_LT = 29,
  anon_sym_GT_GT = 30,
  anon_sym_LT = 31,
  anon_sym_LT_EQ = 32,
  anon_sym_GT = 33,
  anon_sym_GT_EQ = 34,
  anon_sym_EQ_EQ = 35,
  anon_sym_BANG_EQ = 36,
  anon_sym_AT = 37,
  sym_int = 38,
  sym_real = 39,
  anon_sym_LTmdoc_GT = 40,
  anon_sym_LT_SLASHmdoc_GT = 41,
  sym__doc_char = 42,
  anon_sym_LTnotice_SLASH_GT = 43,
  anon_sym_LTnotice_SLASH_GT2 = 44,
  anon_sym_LTequation_GT = 45,
  anon_sym_LT_SLASHequation_GT = 46,
  anon_sym_LTdiagram_GT = 47,
  anon_sym_LT_SLASHdiagram_GT = 48,
  anon_sym_LTmetadata_GT = 49,
  anon_sym_LT_SLASHmetadata_GT = 50,
  anon_sym_LTlisting = 51,
  anon_sym_import = 52,
  anon_sym_declare = 53,
  anon_sym_TILDE = 54,
  anon_sym_LT_COLON = 55,
  anon_sym_COLON_GT = 56,
  anon_sym_DQUOTE = 57,
  aux_sym_string_token1 = 58,
  sym_escape_sequence = 59,
  anon_sym_COLON_COLON = 60,
  sym__id = 61,
  sym_comment = 62,
  sym_source_file = 63,
  sym__statement = 64,
  sym_variant = 65,
  sym_definition = 66,
  sym_function_call = 67,
  sym_argument = 68,
  sym__expression = 69,
  sym_iteration = 70,
  sym_binary_operation = 71,
  sym_core = 72,
  sym_infix = 73,
  sym_prefix = 74,
  sym_partial = 75,
  sym_one_sample_delay = 76,
  sym_binary_operator = 77,
  sym_object = 78,
  sym__number = 79,
  sym_documentation = 80,
  sym__doc_content = 81,
  sym__special_doc_tag = 82,
  sym_file_import = 83,
  sym_global_metadata = 84,
  sym_definition_metadata = 85,
  sym__binary_composition = 86,
  sym_recursive = 87,
  sym_sequential = 88,
  sym_split = 89,
  sym_merge = 90,
  sym_parallel = 91,
  sym_string = 92,
  sym_variable = 93,
  sym_identifier = 94,
  aux_sym_source_file_repeat1 = 95,
  aux_sym__statement_repeat1 = 96,
  aux_sym_definition_repeat1 = 97,
  aux_sym_function_call_repeat1 = 98,
  aux_sym_one_sample_delay_repeat1 = 99,
  aux_sym_documentation_repeat1 = 100,
  aux_sym_split_repeat1 = 101,
  aux_sym_string_repeat1 = 102,
  aux_sym_identifier_repeat1 = 103,
  alias_sym_current_iteration = 104,
  alias_sym_function_name = 105,
  alias_sym_metadata_key = 106,
  alias_sym_module_name = 107,
  alias_sym_numiter = 108,
  alias_sym_parameter = 109,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_singleprecision] = "singleprecision",
  [anon_sym_doubleprecision] = "doubleprecision",
  [anon_sym_quadprecision] = "quadprecision",
  [anon_sym_fixedpointprecision] = "fixedpointprecision",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_par] = "par",
  [anon_sym_seq] = "seq",
  [anon_sym_sum] = "sum",
  [anon_sym_prod] = "prod",
  [sym_wire] = "wire",
  [sym_cut] = "cut",
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
  [anon_sym_LTmdoc_GT] = "<mdoc>",
  [anon_sym_LT_SLASHmdoc_GT] = "</mdoc>",
  [sym__doc_char] = "_doc_char",
  [anon_sym_LTnotice_SLASH_GT] = "<notice/>",
  [anon_sym_LTnotice_SLASH_GT2] = "<notice />",
  [anon_sym_LTequation_GT] = "<equation>",
  [anon_sym_LT_SLASHequation_GT] = "</equation>",
  [anon_sym_LTdiagram_GT] = "<diagram>",
  [anon_sym_LT_SLASHdiagram_GT] = "</diagram>",
  [anon_sym_LTmetadata_GT] = "<metadata>",
  [anon_sym_LT_SLASHmetadata_GT] = "</metadata>",
  [anon_sym_LTlisting] = "<listing",
  [anon_sym_import] = "import",
  [anon_sym_declare] = "declare",
  [anon_sym_TILDE] = "~",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_COLON_COLON] = "::",
  [sym__id] = "_id",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_variant] = "variant",
  [sym_definition] = "definition",
  [sym_function_call] = "function_call",
  [sym_argument] = "argument",
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
  [sym_documentation] = "documentation",
  [sym__doc_content] = "_doc_content",
  [sym__special_doc_tag] = "_special_doc_tag",
  [sym_file_import] = "file_import",
  [sym_global_metadata] = "global_metadata",
  [sym_definition_metadata] = "definition_metadata",
  [sym__binary_composition] = "_binary_composition",
  [sym_recursive] = "recursive",
  [sym_sequential] = "sequential",
  [sym_split] = "split",
  [sym_merge] = "merge",
  [sym_parallel] = "parallel",
  [sym_string] = "string",
  [sym_variable] = "variable",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__statement_repeat1] = "_statement_repeat1",
  [aux_sym_definition_repeat1] = "definition_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_one_sample_delay_repeat1] = "one_sample_delay_repeat1",
  [aux_sym_documentation_repeat1] = "documentation_repeat1",
  [aux_sym_split_repeat1] = "split_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
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
  [anon_sym_singleprecision] = anon_sym_singleprecision,
  [anon_sym_doubleprecision] = anon_sym_doubleprecision,
  [anon_sym_quadprecision] = anon_sym_quadprecision,
  [anon_sym_fixedpointprecision] = anon_sym_fixedpointprecision,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_par] = anon_sym_par,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_prod] = anon_sym_prod,
  [sym_wire] = sym_wire,
  [sym_cut] = sym_cut,
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
  [anon_sym_LTmdoc_GT] = anon_sym_LTmdoc_GT,
  [anon_sym_LT_SLASHmdoc_GT] = anon_sym_LT_SLASHmdoc_GT,
  [sym__doc_char] = sym__doc_char,
  [anon_sym_LTnotice_SLASH_GT] = anon_sym_LTnotice_SLASH_GT,
  [anon_sym_LTnotice_SLASH_GT2] = anon_sym_LTnotice_SLASH_GT2,
  [anon_sym_LTequation_GT] = anon_sym_LTequation_GT,
  [anon_sym_LT_SLASHequation_GT] = anon_sym_LT_SLASHequation_GT,
  [anon_sym_LTdiagram_GT] = anon_sym_LTdiagram_GT,
  [anon_sym_LT_SLASHdiagram_GT] = anon_sym_LT_SLASHdiagram_GT,
  [anon_sym_LTmetadata_GT] = anon_sym_LTmetadata_GT,
  [anon_sym_LT_SLASHmetadata_GT] = anon_sym_LT_SLASHmetadata_GT,
  [anon_sym_LTlisting] = anon_sym_LTlisting,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym__id] = sym__id,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_variant] = sym_variant,
  [sym_definition] = sym_definition,
  [sym_function_call] = sym_function_call,
  [sym_argument] = sym_argument,
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
  [sym_documentation] = sym_documentation,
  [sym__doc_content] = sym__doc_content,
  [sym__special_doc_tag] = sym__special_doc_tag,
  [sym_file_import] = sym_file_import,
  [sym_global_metadata] = sym_global_metadata,
  [sym_definition_metadata] = sym_definition_metadata,
  [sym__binary_composition] = sym__binary_composition,
  [sym_recursive] = sym_recursive,
  [sym_sequential] = sym_sequential,
  [sym_split] = sym_split,
  [sym_merge] = sym_merge,
  [sym_parallel] = sym_parallel,
  [sym_string] = sym_string,
  [sym_variable] = sym_variable,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__statement_repeat1] = aux_sym__statement_repeat1,
  [aux_sym_definition_repeat1] = aux_sym_definition_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_one_sample_delay_repeat1] = aux_sym_one_sample_delay_repeat1,
  [aux_sym_documentation_repeat1] = aux_sym_documentation_repeat1,
  [aux_sym_split_repeat1] = aux_sym_split_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
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
  [anon_sym_EQ] = {
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
  [sym_wire] = {
    .visible = true,
    .named = true,
  },
  [sym_cut] = {
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
  [anon_sym_LTmdoc_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHmdoc_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__doc_char] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LTnotice_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTnotice_SLASH_GT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTequation_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHequation_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTdiagram_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHdiagram_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTmetadata_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASHmetadata_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LTlisting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__id] = {
    .visible = false,
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
  [sym_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
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
  [sym_documentation] = {
    .visible = true,
    .named = true,
  },
  [sym__doc_content] = {
    .visible = false,
    .named = true,
  },
  [sym__special_doc_tag] = {
    .visible = false,
    .named = true,
  },
  [sym_file_import] = {
    .visible = true,
    .named = true,
  },
  [sym_global_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_definition_metadata] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_repeat1] = {
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
  [aux_sym_documentation_repeat1] = {
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
  [aux_sym_identifier_repeat1] = {
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
  [2] = {.index = 0, .length = 2},
  [5] = {.index = 2, .length = 2},
  [7] = {.index = 4, .length = 2},
  [9] = {.index = 6, .length = 2},
  [10] = {.index = 8, .length = 3},
  [11] = {.index = 11, .length = 3},
  [12] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 2},
  [2] =
    {field_name, 0},
    {field_value, 4},
  [4] =
    {field_left, 0},
    {field_right, 2},
  [6] =
    {field_name, 0},
    {field_value, 5},
  [8] =
    {field_left, 0},
    {field_right, 2},
    {field_right, 3},
  [11] =
    {field_left, 0},
    {field_left, 1},
    {field_right, 3},
  [14] =
    {field_name, 0},
    {field_value, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_metadata_key,
  },
  [3] = {
    [0] = alias_sym_module_name,
  },
  [4] = {
    [1] = alias_sym_function_name,
    [2] = alias_sym_metadata_key,
  },
  [6] = {
    [1] = alias_sym_parameter,
  },
  [8] = {
    [0] = alias_sym_function_name,
  },
  [9] = {
    [2] = alias_sym_parameter,
  },
  [12] = {
    [2] = alias_sym_parameter,
  },
  [13] = {
    [0] = alias_sym_module_name,
    [2] = alias_sym_function_name,
  },
  [14] = {
    [1] = alias_sym_current_iteration,
    [3] = alias_sym_numiter,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_object, 2,
    sym_object,
    alias_sym_numiter,
  sym_identifier, 6,
    sym_identifier,
    alias_sym_current_iteration,
    alias_sym_function_name,
    alias_sym_metadata_key,
    alias_sym_module_name,
    alias_sym_parameter,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 3,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 8,
  [15] = 12,
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 22,
  [26] = 21,
  [27] = 19,
  [28] = 28,
  [29] = 18,
  [30] = 20,
  [31] = 23,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 28,
  [36] = 24,
  [37] = 37,
  [38] = 38,
  [39] = 37,
  [40] = 33,
  [41] = 41,
  [42] = 38,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 46,
  [48] = 45,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 22,
  [54] = 54,
  [55] = 54,
  [56] = 20,
  [57] = 19,
  [58] = 58,
  [59] = 18,
  [60] = 58,
  [61] = 21,
  [62] = 23,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 71,
  [72] = 72,
  [73] = 72,
  [74] = 71,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 79,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 77,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 82,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 99,
  [107] = 107,
  [108] = 108,
  [109] = 81,
  [110] = 78,
  [111] = 105,
  [112] = 98,
  [113] = 102,
  [114] = 96,
  [115] = 115,
  [116] = 95,
  [117] = 117,
  [118] = 118,
  [119] = 90,
  [120] = 84,
  [121] = 92,
  [122] = 80,
  [123] = 123,
  [124] = 108,
  [125] = 85,
  [126] = 103,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 91,
  [131] = 102,
  [132] = 107,
  [133] = 129,
  [134] = 93,
  [135] = 104,
  [136] = 100,
  [137] = 97,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 24,
  [142] = 140,
  [143] = 139,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 149,
  [152] = 152,
  [153] = 153,
  [154] = 152,
  [155] = 155,
  [156] = 156,
  [157] = 155,
  [158] = 153,
  [159] = 149,
  [160] = 160,
  [161] = 161,
  [162] = 148,
  [163] = 156,
  [164] = 147,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 167,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 174,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 182,
  [188] = 181,
  [189] = 189,
  [190] = 190,
  [191] = 184,
  [192] = 185,
  [193] = 182,
  [194] = 194,
  [195] = 195,
  [196] = 185,
  [197] = 197,
  [198] = 198,
  [199] = 183,
  [200] = 200,
  [201] = 176,
  [202] = 180,
  [203] = 203,
  [204] = 197,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(107);
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(118);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == '_') ADVANCE(124);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == 'q') ADVANCE(261);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 'x') ADVANCE(234);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '~') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0) ADVANCE(180);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\r') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'x') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(184);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(125);
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == '_') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == 'x') ADVANCE(234);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '~') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(129);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '~') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '~') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(130);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '~') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == '~') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '~') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(266);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(265);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'm') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(185);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(175);
      END_STATE();
    case 22:
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(152);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(168);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(166);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(170);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(167);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(169);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(164);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == 'q') ADVANCE(94);
      END_STATE();
    case 81:
      if (lookahead == 'q') ADVANCE(95);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 96:
      if (lookahead == '{') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == '}') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 105:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(267);
      END_STATE();
    case 106:
      if (eof) ADVANCE(107);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'q') ADVANCE(261);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(106)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(185);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '>') ADVANCE(176);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(176);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_one_sample_delay_operator);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(266);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(151);
      if (lookahead == '>') ADVANCE(145);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(178);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(181);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'u') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(266);
      if (lookahead == '\\') ADVANCE(105);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 106},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 106},
  [44] = {.lex_state = 106},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 106},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 106},
  [65] = {.lex_state = 106},
  [66] = {.lex_state = 106},
  [67] = {.lex_state = 106},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 106},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 106},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 11},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 106},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 10},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 7},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_singleprecision] = ACTIONS(1),
    [anon_sym_doubleprecision] = ACTIONS(1),
    [anon_sym_quadprecision] = ACTIONS(1),
    [anon_sym_fixedpointprecision] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_par] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_prod] = ACTIONS(1),
    [sym_wire] = ACTIONS(1),
    [sym_cut] = ACTIONS(1),
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
    [anon_sym_LT_SLASHmdoc_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHequation_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHdiagram_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHmetadata_GT] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym__id] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(195),
    [sym__statement] = STATE(43),
    [sym_variant] = STATE(49),
    [sym_definition] = STATE(190),
    [sym_documentation] = STATE(43),
    [sym_file_import] = STATE(190),
    [sym_global_metadata] = STATE(190),
    [sym_definition_metadata] = STATE(190),
    [sym_variable] = STATE(171),
    [sym_identifier] = STATE(79),
    [aux_sym_source_file_repeat1] = STATE(43),
    [aux_sym__statement_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_singleprecision] = ACTIONS(5),
    [anon_sym_doubleprecision] = ACTIONS(5),
    [anon_sym_quadprecision] = ACTIONS(5),
    [anon_sym_fixedpointprecision] = ACTIONS(5),
    [anon_sym_LTmdoc_GT] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_declare] = ACTIONS(11),
    [anon_sym_COLON_COLON] = ACTIONS(13),
    [sym__id] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(35), 1,
      sym_object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(23), 2,
      sym_wire,
      sym_cut,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(136), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(117), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [84] = 16,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_int,
    ACTIONS(47), 1,
      sym_real,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      sym__id,
    STATE(24), 1,
      sym_identifier,
    STATE(28), 1,
      sym_object,
    STATE(201), 1,
      sym_binary_operator,
    ACTIONS(43), 2,
      sym_wire,
      sym_cut,
    STATE(38), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(41), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(100), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(84), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [168] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(35), 1,
      sym_object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(55), 2,
      sym_wire,
      sym_cut,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(136), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(123), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [252] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(35), 1,
      sym_object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(57), 2,
      sym_wire,
      sym_cut,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(136), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(119), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [336] = 16,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_int,
    ACTIONS(47), 1,
      sym_real,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      sym__id,
    STATE(24), 1,
      sym_identifier,
    STATE(28), 1,
      sym_object,
    STATE(201), 1,
      sym_binary_operator,
    ACTIONS(59), 2,
      sym_wire,
      sym_cut,
    STATE(38), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(41), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(100), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(90), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [420] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(35), 1,
      sym_object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(61), 2,
      sym_wire,
      sym_cut,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(136), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(127), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [504] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(35), 1,
      sym_object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(63), 2,
      sym_wire,
      sym_cut,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(136), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(125), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [588] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(35), 1,
      sym_object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(65), 2,
      sym_wire,
      sym_cut,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(136), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(120), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [672] = 16,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_int,
    ACTIONS(47), 1,
      sym_real,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      sym__id,
    STATE(24), 1,
      sym_identifier,
    STATE(28), 1,
      sym_object,
    STATE(201), 1,
      sym_binary_operator,
    ACTIONS(67), 2,
      sym_wire,
      sym_cut,
    STATE(38), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(41), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(100), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(83), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [756] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(36), 1,
      sym_identifier,
    STATE(41), 1,
      sym_object,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(69), 2,
      sym_wire,
      sym_cut,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(136), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(129), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [840] = 16,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_int,
    ACTIONS(47), 1,
      sym_real,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      sym__id,
    STATE(24), 1,
      sym_identifier,
    STATE(28), 1,
      sym_object,
    STATE(201), 1,
      sym_binary_operator,
    ACTIONS(71), 2,
      sym_wire,
      sym_cut,
    STATE(38), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(41), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(100), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(80), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [924] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(35), 1,
      sym_object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(73), 2,
      sym_wire,
      sym_cut,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(136), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(118), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [1008] = 16,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_int,
    ACTIONS(47), 1,
      sym_real,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(53), 1,
      sym__id,
    STATE(24), 1,
      sym_identifier,
    STATE(28), 1,
      sym_object,
    STATE(201), 1,
      sym_binary_operator,
    ACTIONS(75), 2,
      sym_wire,
      sym_cut,
    STATE(38), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(41), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(100), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(85), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [1092] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(35), 1,
      sym_object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(77), 2,
      sym_wire,
      sym_cut,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(136), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(122), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [1176] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(36), 1,
      sym_identifier,
    STATE(41), 1,
      sym_object,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(79), 2,
      sym_wire,
      sym_cut,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(136), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(133), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [1260] = 16,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(35), 1,
      sym_object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(81), 2,
      sym_wire,
      sym_cut,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(136), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(25), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(115), 11,
      sym_function_call,
      sym__expression,
      sym_iteration,
      sym_binary_operation,
      sym_one_sample_delay,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(27), 13,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_AT,
  [1344] = 4,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(21), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(85), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
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
  [1383] = 4,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(21), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(91), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
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
  [1422] = 4,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(19), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(85), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
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
  [1461] = 4,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    STATE(21), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(95), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
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
  [1500] = 4,
    ACTIONS(87), 1,
      anon_sym_COLON_COLON,
    STATE(18), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(102), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
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
  [1539] = 2,
    ACTIONS(95), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
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
      anon_sym_COLON_COLON,
  [1573] = 4,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_DOT,
    ACTIONS(110), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(104), 23,
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
  [1610] = 4,
    ACTIONS(112), 1,
      anon_sym_COLON_COLON,
    STATE(29), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(102), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
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
  [1647] = 4,
    ACTIONS(114), 1,
      anon_sym_COLON_COLON,
    STATE(26), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(95), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
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
  [1684] = 4,
    ACTIONS(112), 1,
      anon_sym_COLON_COLON,
    STATE(26), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(91), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
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
  [1721] = 7,
    ACTIONS(119), 1,
      anon_sym_COLON,
    ACTIONS(121), 1,
      sym_one_sample_delay_operator,
    STATE(72), 1,
      sym_binary_operator,
    STATE(78), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(27), 16,
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
  [1764] = 4,
    ACTIONS(112), 1,
      anon_sym_COLON_COLON,
    STATE(26), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(85), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
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
  [1801] = 4,
    ACTIONS(112), 1,
      anon_sym_COLON_COLON,
    STATE(27), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(85), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 23,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
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
  [1838] = 2,
    ACTIONS(95), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
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
      anon_sym_COLON_COLON,
  [1870] = 3,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 23,
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
  [1904] = 2,
    ACTIONS(131), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 23,
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
  [1935] = 3,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 23,
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
  [1968] = 6,
    ACTIONS(135), 1,
      sym_one_sample_delay_operator,
    STATE(73), 1,
      sym_binary_operator,
    STATE(110), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
    ACTIONS(27), 16,
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
  [2007] = 4,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_DOT,
    ACTIONS(110), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(104), 22,
      anon_sym_SEMI,
      anon_sym_COMMA,
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
  [2042] = 2,
    ACTIONS(143), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 23,
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
  [2073] = 2,
    ACTIONS(147), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 23,
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
  [2104] = 2,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 23,
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
  [2134] = 2,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 23,
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
  [2164] = 6,
    ACTIONS(135), 1,
      sym_one_sample_delay_operator,
    STATE(73), 1,
      sym_binary_operator,
    STATE(110), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
    ACTIONS(27), 16,
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
  [2202] = 2,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 23,
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
  [2232] = 13,
    ACTIONS(7), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      sym_comment,
    STATE(79), 1,
      sym_identifier,
    STATE(171), 1,
      sym_variable,
    STATE(49), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(44), 3,
      sym__statement,
      sym_documentation,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(190), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [2281] = 13,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(161), 1,
      anon_sym_import,
    ACTIONS(164), 1,
      anon_sym_declare,
    ACTIONS(167), 1,
      anon_sym_COLON_COLON,
    ACTIONS(170), 1,
      sym__id,
    ACTIONS(173), 1,
      sym_comment,
    STATE(79), 1,
      sym_identifier,
    STATE(171), 1,
      sym_variable,
    STATE(49), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(44), 3,
      sym__statement,
      sym_documentation,
      aux_sym_source_file_repeat1,
    ACTIONS(155), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(190), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [2330] = 3,
    STATE(137), 1,
      sym_binary_operator,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(176), 16,
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
  [2356] = 3,
    STATE(130), 1,
      sym_binary_operator,
    ACTIONS(178), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(176), 16,
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
  [2382] = 3,
    STATE(91), 1,
      sym_binary_operator,
    ACTIONS(182), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 16,
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
  [2408] = 3,
    STATE(97), 1,
      sym_binary_operator,
    ACTIONS(182), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 16,
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
  [2434] = 9,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(79), 1,
      sym_identifier,
    STATE(171), 1,
      sym_variable,
    STATE(69), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(5), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(203), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [2469] = 4,
    ACTIONS(184), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(186), 1,
      sym__doc_char,
    STATE(51), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(188), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2492] = 4,
    ACTIONS(190), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(192), 1,
      sym__doc_char,
    STATE(51), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(195), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2515] = 4,
    ACTIONS(198), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(200), 1,
      sym__doc_char,
    STATE(50), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(202), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2538] = 4,
    ACTIONS(102), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_COLON_COLON,
    STATE(59), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(100), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_DQUOTE,
      sym__id,
  [2560] = 10,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(208), 1,
      sym__id,
    STATE(141), 1,
      sym_identifier,
    STATE(158), 1,
      sym_argument,
    STATE(169), 2,
      sym_function_call,
      sym_object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2594] = 10,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__id,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_identifier,
    STATE(153), 1,
      sym_argument,
    STATE(169), 2,
      sym_function_call,
      sym_object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2628] = 4,
    ACTIONS(85), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_COLON_COLON,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(83), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_DQUOTE,
      sym__id,
  [2650] = 4,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_COLON_COLON,
    STATE(61), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(89), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_DQUOTE,
      sym__id,
  [2672] = 10,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__id,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_identifier,
    STATE(155), 1,
      sym_argument,
    STATE(169), 2,
      sym_function_call,
      sym_object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2706] = 4,
    ACTIONS(85), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_COLON_COLON,
    STATE(61), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(83), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_DQUOTE,
      sym__id,
  [2728] = 10,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__id,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_identifier,
    STATE(157), 1,
      sym_argument,
    STATE(169), 2,
      sym_function_call,
      sym_object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2762] = 4,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_COLON_COLON,
    STATE(61), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(93), 10,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_DQUOTE,
      sym__id,
  [2784] = 2,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(93), 11,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_DQUOTE,
      anon_sym_COLON_COLON,
      sym__id,
  [2801] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__id,
    STATE(141), 1,
      sym_identifier,
    STATE(166), 1,
      sym_argument,
    STATE(169), 2,
      sym_function_call,
      sym_object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2832] = 2,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(221), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2848] = 2,
    ACTIONS(223), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(225), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2864] = 2,
    ACTIONS(227), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(229), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2880] = 2,
    ACTIONS(231), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(233), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2896] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__id,
    STATE(79), 1,
      sym_identifier,
    STATE(175), 1,
      sym_object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2923] = 4,
    ACTIONS(240), 1,
      anon_sym_COLON_COLON,
    STATE(69), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(238), 3,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
    ACTIONS(235), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2942] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__id,
    STATE(79), 1,
      sym_identifier,
    STATE(174), 1,
      sym_object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2969] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__id,
    STATE(79), 1,
      sym_identifier,
    STATE(191), 1,
      sym_object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2996] = 8,
    ACTIONS(45), 1,
      sym_int,
    ACTIONS(47), 1,
      sym_real,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(242), 1,
      sym__id,
    STATE(89), 1,
      sym_identifier,
    STATE(107), 1,
      sym_object,
    STATE(38), 3,
      sym__number,
      sym_string,
      sym_variable,
  [3023] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__id,
    STATE(79), 1,
      sym_identifier,
    STATE(132), 1,
      sym_object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [3050] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__id,
    STATE(79), 1,
      sym_identifier,
    STATE(184), 1,
      sym_object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [3077] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__id,
    STATE(79), 1,
      sym_identifier,
    STATE(181), 1,
      sym_object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [3104] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(29), 1,
      sym_int,
    ACTIONS(31), 1,
      sym_real,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__id,
    STATE(79), 1,
      sym_identifier,
    STATE(188), 1,
      sym_object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [3131] = 4,
    ACTIONS(246), 1,
      anon_sym_COLON,
    ACTIONS(248), 1,
      sym_one_sample_delay_operator,
    STATE(77), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(244), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3149] = 4,
    ACTIONS(253), 1,
      anon_sym_COLON,
    ACTIONS(255), 1,
      sym_one_sample_delay_operator,
    STATE(77), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(251), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3167] = 2,
    ACTIONS(257), 1,
      anon_sym_DOT,
    ACTIONS(104), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3181] = 4,
    ACTIONS(261), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    STATE(81), 1,
      aux_sym_split_repeat1,
    ACTIONS(259), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [3198] = 4,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(269), 1,
      anon_sym_COLON_GT,
    STATE(87), 1,
      aux_sym_split_repeat1,
    ACTIONS(265), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3215] = 1,
    ACTIONS(123), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3226] = 6,
    ACTIONS(261), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_TILDE,
    STATE(81), 1,
      aux_sym_split_repeat1,
    ACTIONS(271), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [3247] = 4,
    ACTIONS(261), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    STATE(81), 1,
      aux_sym_split_repeat1,
    ACTIONS(277), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [3264] = 5,
    ACTIONS(261), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_split_repeat1,
    ACTIONS(279), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [3283] = 2,
    ACTIONS(283), 1,
      anon_sym_COLON_COLON,
    ACTIONS(281), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [3296] = 4,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_COLON,
    STATE(87), 1,
      aux_sym_split_repeat1,
    ACTIONS(271), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3313] = 4,
    ACTIONS(292), 1,
      anon_sym_COLON,
    ACTIONS(294), 1,
      anon_sym_COLON_GT,
    STATE(87), 1,
      aux_sym_split_repeat1,
    ACTIONS(290), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3330] = 3,
    ACTIONS(110), 1,
      anon_sym_COLON,
    ACTIONS(296), 1,
      anon_sym_DOT,
    ACTIONS(104), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3345] = 6,
    ACTIONS(261), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_TILDE,
    STATE(81), 1,
      aux_sym_split_repeat1,
    ACTIONS(298), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [3366] = 2,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(300), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3378] = 2,
    ACTIONS(306), 1,
      anon_sym_COLON,
    ACTIONS(304), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3390] = 2,
    ACTIONS(310), 1,
      anon_sym_COLON,
    ACTIONS(308), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3402] = 3,
    ACTIONS(312), 1,
      sym_one_sample_delay_operator,
    STATE(94), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(244), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3416] = 2,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(315), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3428] = 2,
    ACTIONS(321), 1,
      anon_sym_COLON,
    ACTIONS(319), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3440] = 2,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(323), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3452] = 2,
    ACTIONS(329), 1,
      anon_sym_COLON,
    ACTIONS(327), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3464] = 5,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(294), 1,
      anon_sym_COLON_GT,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_split_repeat1,
    ACTIONS(265), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3482] = 2,
    ACTIONS(335), 1,
      anon_sym_COLON,
    ACTIONS(333), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3494] = 2,
    ACTIONS(127), 1,
      anon_sym_COLON,
    ACTIONS(123), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3506] = 2,
    ACTIONS(339), 1,
      anon_sym_COLON,
    ACTIONS(337), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3518] = 2,
    ACTIONS(343), 1,
      anon_sym_COLON,
    ACTIONS(341), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3530] = 2,
    ACTIONS(347), 1,
      anon_sym_COLON,
    ACTIONS(345), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3542] = 2,
    ACTIONS(351), 1,
      anon_sym_COLON,
    ACTIONS(349), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3554] = 5,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(294), 1,
      anon_sym_COLON_GT,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_split_repeat1,
    ACTIONS(265), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3572] = 2,
    ACTIONS(357), 1,
      anon_sym_COLON,
    ACTIONS(355), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3584] = 2,
    ACTIONS(361), 1,
      anon_sym_COLON,
    ACTIONS(359), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3596] = 4,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(294), 1,
      anon_sym_COLON_GT,
    STATE(87), 1,
      aux_sym_split_repeat1,
    ACTIONS(265), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3612] = 3,
    ACTIONS(363), 1,
      sym_one_sample_delay_operator,
    STATE(94), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(251), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3626] = 1,
    ACTIONS(349), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3635] = 1,
    ACTIONS(327), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3644] = 2,
    ACTIONS(339), 1,
      sym_int,
    ACTIONS(337), 5,
      anon_sym_LPAREN,
      sym_real,
      anon_sym_DQUOTE,
      anon_sym_COLON_COLON,
      sym__id,
  [3655] = 1,
    ACTIONS(319), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3664] = 6,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      anon_sym_TILDE,
    STATE(109), 1,
      aux_sym_split_repeat1,
  [3683] = 1,
    ACTIONS(315), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3692] = 6,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      anon_sym_TILDE,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym_split_repeat1,
  [3711] = 6,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      anon_sym_TILDE,
    ACTIONS(373), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym_split_repeat1,
  [3730] = 6,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_SEMI,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      anon_sym_TILDE,
    STATE(109), 1,
      aux_sym_split_repeat1,
  [3749] = 4,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(367), 1,
      anon_sym_COLON,
    STATE(109), 1,
      aux_sym_split_repeat1,
    ACTIONS(277), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
  [3764] = 1,
    ACTIONS(304), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3773] = 4,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(367), 1,
      anon_sym_COLON,
    STATE(109), 1,
      aux_sym_split_repeat1,
    ACTIONS(259), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
  [3788] = 6,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      anon_sym_TILDE,
    ACTIONS(375), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym_split_repeat1,
  [3807] = 1,
    ACTIONS(359), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3816] = 5,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_COLON,
    STATE(109), 1,
      aux_sym_split_repeat1,
    ACTIONS(279), 2,
      anon_sym_SEMI,
      anon_sym_TILDE,
  [3833] = 1,
    ACTIONS(341), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3841] = 5,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      anon_sym_TILDE,
    STATE(88), 1,
      aux_sym_split_repeat1,
  [3857] = 5,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      sym__id,
    STATE(170), 1,
      sym_identifier,
    STATE(194), 1,
      sym_string,
  [3873] = 5,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      anon_sym_TILDE,
    STATE(99), 1,
      aux_sym_split_repeat1,
  [3889] = 1,
    ACTIONS(300), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3897] = 1,
    ACTIONS(337), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3905] = 1,
    ACTIONS(355), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3913] = 5,
    ACTIONS(263), 1,
      anon_sym_LT_COLON,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_COLON,
    ACTIONS(369), 1,
      anon_sym_TILDE,
    STATE(106), 1,
      aux_sym_split_repeat1,
  [3929] = 1,
    ACTIONS(308), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3937] = 1,
    ACTIONS(345), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3945] = 1,
    ACTIONS(333), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3953] = 1,
    ACTIONS(323), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3961] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(208), 1,
      sym__id,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      sym_identifier,
  [3974] = 4,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(381), 1,
      aux_sym_string_token1,
    ACTIONS(383), 1,
      sym_escape_sequence,
    STATE(142), 1,
      aux_sym_string_repeat1,
  [3987] = 4,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(387), 1,
      aux_sym_string_token1,
    ACTIONS(389), 1,
      sym_escape_sequence,
    STATE(144), 1,
      aux_sym_string_repeat1,
  [4000] = 3,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(391), 1,
      anon_sym_DOT,
    ACTIONS(104), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4011] = 4,
    ACTIONS(387), 1,
      aux_sym_string_token1,
    ACTIONS(389), 1,
      sym_escape_sequence,
    ACTIONS(393), 1,
      anon_sym_DQUOTE,
    STATE(144), 1,
      aux_sym_string_repeat1,
  [4024] = 4,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 1,
      aux_sym_string_token1,
    ACTIONS(399), 1,
      sym_escape_sequence,
    STATE(140), 1,
      aux_sym_string_repeat1,
  [4037] = 4,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      aux_sym_string_token1,
    ACTIONS(406), 1,
      sym_escape_sequence,
    STATE(144), 1,
      aux_sym_string_repeat1,
  [4050] = 3,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
  [4060] = 3,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_definition_repeat1,
  [4070] = 3,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(242), 1,
      sym__id,
    STATE(101), 1,
      sym_identifier,
  [4080] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(208), 1,
      sym__id,
    STATE(180), 1,
      sym_identifier,
  [4090] = 3,
    ACTIONS(51), 1,
      anon_sym_COLON_COLON,
    ACTIONS(242), 1,
      sym__id,
    STATE(32), 1,
      sym_identifier,
  [4100] = 3,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_definition_repeat1,
  [4110] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(208), 1,
      sym__id,
    STATE(34), 1,
      sym_identifier,
  [4120] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
  [4130] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_function_call_repeat1,
  [4140] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
  [4150] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_function_call_repeat1,
  [4160] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
  [4170] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_function_call_repeat1,
  [4180] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      aux_sym_function_call_repeat1,
  [4190] = 3,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(439), 1,
      sym__id,
    STATE(34), 1,
      sym_identifier,
  [4200] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(208), 1,
      sym__id,
    STATE(172), 1,
      sym_identifier,
  [4210] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(208), 1,
      sym__id,
    STATE(128), 1,
      sym_identifier,
  [4220] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(208), 1,
      sym__id,
    STATE(202), 1,
      sym_identifier,
  [4230] = 3,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
  [4240] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(208), 1,
      sym__id,
    STATE(82), 1,
      sym_identifier,
  [4250] = 3,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_definition_repeat1,
  [4260] = 1,
    ACTIONS(412), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4265] = 2,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    ACTIONS(447), 1,
      anon_sym_COLON,
  [4272] = 2,
    ACTIONS(447), 1,
      anon_sym_COLON,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [4279] = 1,
    ACTIONS(451), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4284] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      sym_string,
  [4291] = 2,
    ACTIONS(453), 1,
      anon_sym_LPAREN,
    ACTIONS(455), 1,
      anon_sym_EQ,
  [4298] = 1,
    ACTIONS(457), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4303] = 2,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_string,
  [4310] = 2,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
  [4317] = 2,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
  [4324] = 1,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
  [4328] = 1,
    ACTIONS(469), 1,
      anon_sym_SEMI,
  [4332] = 1,
    ACTIONS(471), 1,
      anon_sym_SEMI,
  [4336] = 1,
    ACTIONS(473), 1,
      anon_sym_EQ,
  [4340] = 1,
    ACTIONS(475), 1,
      anon_sym_COMMA,
  [4344] = 1,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
  [4348] = 1,
    ACTIONS(479), 1,
      sym__id,
  [4352] = 1,
    ACTIONS(481), 1,
      anon_sym_COLON,
  [4356] = 1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
  [4360] = 1,
    ACTIONS(485), 1,
      sym__id,
  [4364] = 1,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [4368] = 1,
    ACTIONS(489), 1,
      sym__id,
  [4372] = 1,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
  [4376] = 1,
    ACTIONS(493), 1,
      anon_sym_EQ,
  [4380] = 1,
    ACTIONS(495), 1,
      anon_sym_SEMI,
  [4384] = 1,
    ACTIONS(497), 1,
      anon_sym_COMMA,
  [4388] = 1,
    ACTIONS(499), 1,
      sym__id,
  [4392] = 1,
    ACTIONS(501), 1,
      sym__id,
  [4396] = 1,
    ACTIONS(503), 1,
      anon_sym_SEMI,
  [4400] = 1,
    ACTIONS(505), 1,
      ts_builtin_sym_end,
  [4404] = 1,
    ACTIONS(507), 1,
      sym__id,
  [4408] = 1,
    ACTIONS(509), 1,
      anon_sym_COLON,
  [4412] = 1,
    ACTIONS(511), 1,
      anon_sym_EQ,
  [4416] = 1,
    ACTIONS(513), 1,
      anon_sym_COLON,
  [4420] = 1,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
  [4424] = 1,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
  [4428] = 1,
    ACTIONS(519), 1,
      anon_sym_COMMA,
  [4432] = 1,
    ACTIONS(521), 1,
      anon_sym_SEMI,
  [4436] = 1,
    ACTIONS(447), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 84,
  [SMALL_STATE(4)] = 168,
  [SMALL_STATE(5)] = 252,
  [SMALL_STATE(6)] = 336,
  [SMALL_STATE(7)] = 420,
  [SMALL_STATE(8)] = 504,
  [SMALL_STATE(9)] = 588,
  [SMALL_STATE(10)] = 672,
  [SMALL_STATE(11)] = 756,
  [SMALL_STATE(12)] = 840,
  [SMALL_STATE(13)] = 924,
  [SMALL_STATE(14)] = 1008,
  [SMALL_STATE(15)] = 1092,
  [SMALL_STATE(16)] = 1176,
  [SMALL_STATE(17)] = 1260,
  [SMALL_STATE(18)] = 1344,
  [SMALL_STATE(19)] = 1383,
  [SMALL_STATE(20)] = 1422,
  [SMALL_STATE(21)] = 1461,
  [SMALL_STATE(22)] = 1500,
  [SMALL_STATE(23)] = 1539,
  [SMALL_STATE(24)] = 1573,
  [SMALL_STATE(25)] = 1610,
  [SMALL_STATE(26)] = 1647,
  [SMALL_STATE(27)] = 1684,
  [SMALL_STATE(28)] = 1721,
  [SMALL_STATE(29)] = 1764,
  [SMALL_STATE(30)] = 1801,
  [SMALL_STATE(31)] = 1838,
  [SMALL_STATE(32)] = 1870,
  [SMALL_STATE(33)] = 1904,
  [SMALL_STATE(34)] = 1935,
  [SMALL_STATE(35)] = 1968,
  [SMALL_STATE(36)] = 2007,
  [SMALL_STATE(37)] = 2042,
  [SMALL_STATE(38)] = 2073,
  [SMALL_STATE(39)] = 2104,
  [SMALL_STATE(40)] = 2134,
  [SMALL_STATE(41)] = 2164,
  [SMALL_STATE(42)] = 2202,
  [SMALL_STATE(43)] = 2232,
  [SMALL_STATE(44)] = 2281,
  [SMALL_STATE(45)] = 2330,
  [SMALL_STATE(46)] = 2356,
  [SMALL_STATE(47)] = 2382,
  [SMALL_STATE(48)] = 2408,
  [SMALL_STATE(49)] = 2434,
  [SMALL_STATE(50)] = 2469,
  [SMALL_STATE(51)] = 2492,
  [SMALL_STATE(52)] = 2515,
  [SMALL_STATE(53)] = 2538,
  [SMALL_STATE(54)] = 2560,
  [SMALL_STATE(55)] = 2594,
  [SMALL_STATE(56)] = 2628,
  [SMALL_STATE(57)] = 2650,
  [SMALL_STATE(58)] = 2672,
  [SMALL_STATE(59)] = 2706,
  [SMALL_STATE(60)] = 2728,
  [SMALL_STATE(61)] = 2762,
  [SMALL_STATE(62)] = 2784,
  [SMALL_STATE(63)] = 2801,
  [SMALL_STATE(64)] = 2832,
  [SMALL_STATE(65)] = 2848,
  [SMALL_STATE(66)] = 2864,
  [SMALL_STATE(67)] = 2880,
  [SMALL_STATE(68)] = 2896,
  [SMALL_STATE(69)] = 2923,
  [SMALL_STATE(70)] = 2942,
  [SMALL_STATE(71)] = 2969,
  [SMALL_STATE(72)] = 2996,
  [SMALL_STATE(73)] = 3023,
  [SMALL_STATE(74)] = 3050,
  [SMALL_STATE(75)] = 3077,
  [SMALL_STATE(76)] = 3104,
  [SMALL_STATE(77)] = 3131,
  [SMALL_STATE(78)] = 3149,
  [SMALL_STATE(79)] = 3167,
  [SMALL_STATE(80)] = 3181,
  [SMALL_STATE(81)] = 3198,
  [SMALL_STATE(82)] = 3215,
  [SMALL_STATE(83)] = 3226,
  [SMALL_STATE(84)] = 3247,
  [SMALL_STATE(85)] = 3264,
  [SMALL_STATE(86)] = 3283,
  [SMALL_STATE(87)] = 3296,
  [SMALL_STATE(88)] = 3313,
  [SMALL_STATE(89)] = 3330,
  [SMALL_STATE(90)] = 3345,
  [SMALL_STATE(91)] = 3366,
  [SMALL_STATE(92)] = 3378,
  [SMALL_STATE(93)] = 3390,
  [SMALL_STATE(94)] = 3402,
  [SMALL_STATE(95)] = 3416,
  [SMALL_STATE(96)] = 3428,
  [SMALL_STATE(97)] = 3440,
  [SMALL_STATE(98)] = 3452,
  [SMALL_STATE(99)] = 3464,
  [SMALL_STATE(100)] = 3482,
  [SMALL_STATE(101)] = 3494,
  [SMALL_STATE(102)] = 3506,
  [SMALL_STATE(103)] = 3518,
  [SMALL_STATE(104)] = 3530,
  [SMALL_STATE(105)] = 3542,
  [SMALL_STATE(106)] = 3554,
  [SMALL_STATE(107)] = 3572,
  [SMALL_STATE(108)] = 3584,
  [SMALL_STATE(109)] = 3596,
  [SMALL_STATE(110)] = 3612,
  [SMALL_STATE(111)] = 3626,
  [SMALL_STATE(112)] = 3635,
  [SMALL_STATE(113)] = 3644,
  [SMALL_STATE(114)] = 3655,
  [SMALL_STATE(115)] = 3664,
  [SMALL_STATE(116)] = 3683,
  [SMALL_STATE(117)] = 3692,
  [SMALL_STATE(118)] = 3711,
  [SMALL_STATE(119)] = 3730,
  [SMALL_STATE(120)] = 3749,
  [SMALL_STATE(121)] = 3764,
  [SMALL_STATE(122)] = 3773,
  [SMALL_STATE(123)] = 3788,
  [SMALL_STATE(124)] = 3807,
  [SMALL_STATE(125)] = 3816,
  [SMALL_STATE(126)] = 3833,
  [SMALL_STATE(127)] = 3841,
  [SMALL_STATE(128)] = 3857,
  [SMALL_STATE(129)] = 3873,
  [SMALL_STATE(130)] = 3889,
  [SMALL_STATE(131)] = 3897,
  [SMALL_STATE(132)] = 3905,
  [SMALL_STATE(133)] = 3913,
  [SMALL_STATE(134)] = 3929,
  [SMALL_STATE(135)] = 3937,
  [SMALL_STATE(136)] = 3945,
  [SMALL_STATE(137)] = 3953,
  [SMALL_STATE(138)] = 3961,
  [SMALL_STATE(139)] = 3974,
  [SMALL_STATE(140)] = 3987,
  [SMALL_STATE(141)] = 4000,
  [SMALL_STATE(142)] = 4011,
  [SMALL_STATE(143)] = 4024,
  [SMALL_STATE(144)] = 4037,
  [SMALL_STATE(145)] = 4050,
  [SMALL_STATE(146)] = 4060,
  [SMALL_STATE(147)] = 4070,
  [SMALL_STATE(148)] = 4080,
  [SMALL_STATE(149)] = 4090,
  [SMALL_STATE(150)] = 4100,
  [SMALL_STATE(151)] = 4110,
  [SMALL_STATE(152)] = 4120,
  [SMALL_STATE(153)] = 4130,
  [SMALL_STATE(154)] = 4140,
  [SMALL_STATE(155)] = 4150,
  [SMALL_STATE(156)] = 4160,
  [SMALL_STATE(157)] = 4170,
  [SMALL_STATE(158)] = 4180,
  [SMALL_STATE(159)] = 4190,
  [SMALL_STATE(160)] = 4200,
  [SMALL_STATE(161)] = 4210,
  [SMALL_STATE(162)] = 4220,
  [SMALL_STATE(163)] = 4230,
  [SMALL_STATE(164)] = 4240,
  [SMALL_STATE(165)] = 4250,
  [SMALL_STATE(166)] = 4260,
  [SMALL_STATE(167)] = 4265,
  [SMALL_STATE(168)] = 4272,
  [SMALL_STATE(169)] = 4279,
  [SMALL_STATE(170)] = 4284,
  [SMALL_STATE(171)] = 4291,
  [SMALL_STATE(172)] = 4298,
  [SMALL_STATE(173)] = 4303,
  [SMALL_STATE(174)] = 4310,
  [SMALL_STATE(175)] = 4317,
  [SMALL_STATE(176)] = 4324,
  [SMALL_STATE(177)] = 4328,
  [SMALL_STATE(178)] = 4332,
  [SMALL_STATE(179)] = 4336,
  [SMALL_STATE(180)] = 4340,
  [SMALL_STATE(181)] = 4344,
  [SMALL_STATE(182)] = 4348,
  [SMALL_STATE(183)] = 4352,
  [SMALL_STATE(184)] = 4356,
  [SMALL_STATE(185)] = 4360,
  [SMALL_STATE(186)] = 4364,
  [SMALL_STATE(187)] = 4368,
  [SMALL_STATE(188)] = 4372,
  [SMALL_STATE(189)] = 4376,
  [SMALL_STATE(190)] = 4380,
  [SMALL_STATE(191)] = 4384,
  [SMALL_STATE(192)] = 4388,
  [SMALL_STATE(193)] = 4392,
  [SMALL_STATE(194)] = 4396,
  [SMALL_STATE(195)] = 4400,
  [SMALL_STATE(196)] = 4404,
  [SMALL_STATE(197)] = 4408,
  [SMALL_STATE(198)] = 4412,
  [SMALL_STATE(199)] = 4416,
  [SMALL_STATE(200)] = 4420,
  [SMALL_STATE(201)] = 4424,
  [SMALL_STATE(202)] = 4428,
  [SMALL_STATE(203)] = 4432,
  [SMALL_STATE(204)] = 4436,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(193),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(182),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(51),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(51),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(187),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(86),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(77),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 4, .production_id = 11),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 7),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 7),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2), SHIFT_REPEAT(10),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_split_repeat1, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 4, .production_id = 10),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split, 4, .production_id = 10),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 6, .production_id = 14),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 7),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 7),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 13),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 13),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(94),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 13),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 13),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 5),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 8),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 8),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 4),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 8),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 8),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 13),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 13),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 5, .production_id = 5),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 7, .production_id = 12),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 6, .production_id = 9),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(144),
  [406] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(144),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(63),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(160),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2, .production_id = 6),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_metadata, 4, .production_id = 4),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [505] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
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
