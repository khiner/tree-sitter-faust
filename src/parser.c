#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 157
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 5
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_DOT = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
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
  anon_sym_LTmdoc_GT = 35,
  anon_sym_LT_SLASHmdoc_GT = 36,
  sym__doc_char = 37,
  anon_sym_LTnotice_SLASH_GT = 38,
  anon_sym_LTnotice_SLASH_GT2 = 39,
  anon_sym_LTequation_GT = 40,
  anon_sym_LT_SLASHequation_GT = 41,
  anon_sym_LTdiagram_GT = 42,
  anon_sym_LT_SLASHdiagram_GT = 43,
  anon_sym_LTmetadata_GT = 44,
  anon_sym_LT_SLASHmetadata_GT = 45,
  anon_sym_LTlisting = 46,
  anon_sym_import_LPAREN = 47,
  anon_sym_declare = 48,
  anon_sym_singleprecision = 49,
  anon_sym_doubleprecision = 50,
  anon_sym_quadprecision = 51,
  anon_sym_fixedpointprecision = 52,
  anon_sym_TILDE = 53,
  anon_sym_LT_COLON = 54,
  anon_sym_COLON_GT = 55,
  anon_sym_DQUOTE = 56,
  aux_sym_string_token1 = 57,
  sym_escape_sequence = 58,
  sym_identifier = 59,
  sym_comment = 60,
  sym_source_file = 61,
  sym__statement = 62,
  sym_definition = 63,
  sym_function_call = 64,
  sym_argument = 65,
  sym__expression = 66,
  sym_iteration = 67,
  sym_binary_operation = 68,
  sym_core = 69,
  sym_infix = 70,
  sym_prefix = 71,
  sym_partial = 72,
  sym_one_sample_delay = 73,
  sym_binary_operator = 74,
  sym_object = 75,
  sym__number = 76,
  sym_documentation = 77,
  sym__doc_content = 78,
  sym__special_doc_tag = 79,
  sym_file_import = 80,
  sym_global_metadata = 81,
  sym_definition_metadata = 82,
  sym__binary_composition = 83,
  sym_recursive = 84,
  sym_sequential = 85,
  sym_split = 86,
  sym_merge = 87,
  sym_parallel = 88,
  sym_string = 89,
  sym_variable = 90,
  aux_sym_source_file_repeat1 = 91,
  aux_sym_function_call_repeat1 = 92,
  aux_sym_one_sample_delay_repeat1 = 93,
  aux_sym_documentation_repeat1 = 94,
  aux_sym_split_repeat1 = 95,
  aux_sym_string_repeat1 = 96,
  alias_sym_current_iteration = 97,
  alias_sym_function_name = 98,
  alias_sym_metadata_key = 99,
  alias_sym_module_name = 100,
  alias_sym_numiter = 101,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_one_sample_delay_repeat1] = "one_sample_delay_repeat1",
  [aux_sym_documentation_repeat1] = "documentation_repeat1",
  [aux_sym_split_repeat1] = "split_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [alias_sym_current_iteration] = "current_iteration",
  [alias_sym_function_name] = "function_name",
  [alias_sym_metadata_key] = "metadata_key",
  [alias_sym_module_name] = "module_name",
  [alias_sym_numiter] = "numiter",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_one_sample_delay_repeat1] = aux_sym_one_sample_delay_repeat1,
  [aux_sym_documentation_repeat1] = aux_sym_documentation_repeat1,
  [aux_sym_split_repeat1] = aux_sym_split_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [alias_sym_current_iteration] = alias_sym_current_iteration,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_metadata_key] = alias_sym_metadata_key,
  [alias_sym_module_name] = alias_sym_module_name,
  [alias_sym_numiter] = alias_sym_numiter,
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
  [anon_sym_DOT] = {
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
  [aux_sym_source_file_repeat1] = {
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
  [7] = {.index = 4, .length = 3},
  [8] = {.index = 7, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_value, 2},
  [2] =
    {field_left, 0},
    {field_right, 2},
  [4] =
    {field_left, 0},
    {field_right, 2},
    {field_right, 3},
  [7] =
    {field_left, 0},
    {field_left, 1},
    {field_right, 3},
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
  [9] = {
    [0] = alias_sym_module_name,
    [2] = alias_sym_function_name,
  },
  [10] = {
    [1] = alias_sym_current_iteration,
    [3] = alias_sym_numiter,
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 8,
  [12] = 5,
  [13] = 13,
  [14] = 9,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 16,
  [22] = 18,
  [23] = 23,
  [24] = 19,
  [25] = 23,
  [26] = 20,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 28,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 47,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 51,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 63,
  [64] = 64,
  [65] = 41,
  [66] = 66,
  [67] = 67,
  [68] = 66,
  [69] = 43,
  [70] = 70,
  [71] = 44,
  [72] = 72,
  [73] = 72,
  [74] = 74,
  [75] = 75,
  [76] = 45,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 75,
  [85] = 77,
  [86] = 86,
  [87] = 57,
  [88] = 88,
  [89] = 70,
  [90] = 52,
  [91] = 82,
  [92] = 64,
  [93] = 80,
  [94] = 94,
  [95] = 95,
  [96] = 61,
  [97] = 46,
  [98] = 78,
  [99] = 83,
  [100] = 81,
  [101] = 101,
  [102] = 74,
  [103] = 103,
  [104] = 79,
  [105] = 63,
  [106] = 67,
  [107] = 103,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 109,
  [112] = 108,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 114,
  [118] = 118,
  [119] = 116,
  [120] = 120,
  [121] = 118,
  [122] = 115,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 125,
  [128] = 126,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 133,
  [139] = 139,
  [140] = 140,
  [141] = 137,
  [142] = 131,
  [143] = 143,
  [144] = 132,
  [145] = 145,
  [146] = 139,
  [147] = 147,
  [148] = 140,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 147,
  [155] = 143,
  [156] = 134,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(103);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(107);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'q') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == 'x') ADVANCE(228);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0) ADVANCE(173);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '/') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead == 'x') ADVANCE(228);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(71);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(119);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(71);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '&') ADVANCE(130);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(71);
      if (lookahead == '|') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == '~') ADVANCE(167);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(260);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(168);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(141);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(149);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(155);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(148);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(156);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(152);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(154);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(153);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(160);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 75:
      if (lookahead == 'q') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'q') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 80:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 91:
      if (lookahead == '{') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 92:
      if (lookahead == '}') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 100:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 101:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(260);
      if (lookahead == '\r') ADVANCE(261);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '.') ADVANCE(106);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(104);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(193);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identity_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(169);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_one_sample_delay_operator);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(260);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(133);
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(134);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_import_LPAREN);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(171);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(174);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'u') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'u') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(101);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 102},
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
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 102},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 102},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 102},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 102},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 102},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 102},
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
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_LT_SLASHmdoc_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHequation_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHdiagram_GT] = ACTIONS(1),
    [anon_sym_LT_SLASHmetadata_GT] = ACTIONS(1),
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
    [sym_source_file] = STATE(152),
    [sym__statement] = STATE(32),
    [sym_definition] = STATE(150),
    [sym_documentation] = STATE(32),
    [sym_file_import] = STATE(150),
    [sym_global_metadata] = STATE(150),
    [sym_definition_metadata] = STATE(150),
    [sym_variable] = STATE(149),
    [aux_sym_source_file_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LTmdoc_GT] = ACTIONS(5),
    [anon_sym_import_LPAREN] = ACTIONS(7),
    [anon_sym_declare] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_identity_function,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(16), 1,
      sym_object,
    STATE(154), 1,
      sym_binary_operator,
    STATE(19), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(17), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(79), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(21), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(57), 11,
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
    ACTIONS(23), 13,
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
  [77] = 14,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      sym_identity_function,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(21), 1,
      sym_object,
    STATE(147), 1,
      sym_binary_operator,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(35), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(104), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(21), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(87), 11,
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
    ACTIONS(23), 13,
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
  [154] = 14,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      sym_identity_function,
    STATE(27), 1,
      sym_object,
    STATE(147), 1,
      sym_binary_operator,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(35), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(104), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(21), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(107), 11,
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
    ACTIONS(23), 13,
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
  [231] = 14,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      sym_identity_function,
    STATE(21), 1,
      sym_object,
    STATE(147), 1,
      sym_binary_operator,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(35), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(104), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(21), 5,
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
    ACTIONS(23), 13,
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
  [308] = 14,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_identity_function,
    STATE(27), 1,
      sym_object,
    STATE(147), 1,
      sym_binary_operator,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(35), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(104), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(21), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(103), 11,
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
    ACTIONS(23), 13,
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
  [385] = 14,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(53), 1,
      sym_identity_function,
    STATE(21), 1,
      sym_object,
    STATE(147), 1,
      sym_binary_operator,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(35), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(104), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(21), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(101), 11,
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
    ACTIONS(23), 13,
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
  [462] = 14,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_identity_function,
    STATE(21), 1,
      sym_object,
    STATE(147), 1,
      sym_binary_operator,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(35), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(104), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(21), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(96), 11,
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
    ACTIONS(23), 13,
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
  [539] = 14,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_identity_function,
    STATE(21), 1,
      sym_object,
    STATE(147), 1,
      sym_binary_operator,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(35), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(104), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(21), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(97), 11,
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
    ACTIONS(23), 13,
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
  [616] = 14,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(59), 1,
      sym_identity_function,
    STATE(16), 1,
      sym_object,
    STATE(154), 1,
      sym_binary_operator,
    STATE(19), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(17), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(79), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(21), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(58), 11,
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
    ACTIONS(23), 13,
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
  [693] = 14,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(61), 1,
      sym_identity_function,
    STATE(16), 1,
      sym_object,
    STATE(154), 1,
      sym_binary_operator,
    STATE(19), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(17), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(79), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(21), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(61), 11,
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
    ACTIONS(23), 13,
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
  [770] = 14,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(63), 1,
      sym_identity_function,
    STATE(16), 1,
      sym_object,
    STATE(154), 1,
      sym_binary_operator,
    STATE(19), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(17), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(79), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(21), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(52), 11,
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
    ACTIONS(23), 13,
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
  [847] = 14,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_identity_function,
    STATE(21), 1,
      sym_object,
    STATE(147), 1,
      sym_binary_operator,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(35), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(104), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(21), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(94), 11,
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
    ACTIONS(23), 13,
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
  [924] = 14,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_identity_function,
    STATE(16), 1,
      sym_object,
    STATE(154), 1,
      sym_binary_operator,
    STATE(19), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(17), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(79), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(21), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(46), 11,
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
    ACTIONS(23), 13,
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
  [1001] = 4,
    ACTIONS(71), 1,
      anon_sym_DOT,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 3,
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
  [1038] = 7,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      sym_one_sample_delay_operator,
    STATE(43), 1,
      aux_sym_one_sample_delay_repeat1,
    STATE(47), 1,
      sym_binary_operator,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 6,
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
  [1081] = 4,
    ACTIONS(83), 1,
      anon_sym_DOT,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 2,
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
  [1117] = 3,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 3,
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
  [1151] = 2,
    ACTIONS(95), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 23,
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
  [1182] = 2,
    ACTIONS(99), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 23,
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
  [1213] = 6,
    ACTIONS(101), 1,
      sym_one_sample_delay_operator,
    STATE(50), 1,
      sym_binary_operator,
    STATE(69), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 5,
      anon_sym_SEMI,
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
  [1252] = 3,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 2,
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
  [1285] = 2,
    ACTIONS(107), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 23,
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
  [1316] = 2,
    ACTIONS(95), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 23,
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
  [1346] = 2,
    ACTIONS(107), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 23,
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
  [1376] = 2,
    ACTIONS(99), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(97), 23,
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
  [1406] = 6,
    ACTIONS(101), 1,
      sym_one_sample_delay_operator,
    STATE(50), 1,
      sym_binary_operator,
    STATE(69), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 4,
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
  [1444] = 3,
    STATE(81), 1,
      sym_binary_operator,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 16,
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
  [1470] = 3,
    STATE(98), 1,
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
  [1496] = 3,
    STATE(78), 1,
      sym_binary_operator,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 16,
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
  [1522] = 3,
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
  [1548] = 9,
    ACTIONS(5), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(7), 1,
      anon_sym_import_LPAREN,
    ACTIONS(9), 1,
      anon_sym_declare,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      sym_comment,
    STATE(149), 1,
      sym_variable,
    STATE(35), 3,
      sym__statement,
      sym_documentation,
      aux_sym_source_file_repeat1,
    STATE(150), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [1581] = 4,
    ACTIONS(117), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(119), 1,
      sym__doc_char,
    STATE(36), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(121), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [1604] = 4,
    ACTIONS(123), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(125), 1,
      sym__doc_char,
    STATE(34), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(128), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [1627] = 9,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(136), 1,
      anon_sym_import_LPAREN,
    ACTIONS(139), 1,
      anon_sym_declare,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(145), 1,
      sym_comment,
    STATE(149), 1,
      sym_variable,
    STATE(35), 3,
      sym__statement,
      sym_documentation,
      aux_sym_source_file_repeat1,
    STATE(150), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [1660] = 4,
    ACTIONS(148), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(150), 1,
      sym__doc_char,
    STATE(34), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(152), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [1683] = 8,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(122), 1,
      sym_argument,
    STATE(130), 2,
      sym_function_call,
      sym_object,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
  [1711] = 8,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_argument,
    STATE(130), 2,
      sym_function_call,
      sym_object,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
  [1739] = 8,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      sym_argument,
    STATE(130), 2,
      sym_function_call,
      sym_object,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
  [1767] = 8,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_argument,
    STATE(130), 2,
      sym_function_call,
      sym_object,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
  [1795] = 2,
    ACTIONS(166), 1,
      sym_int,
    ACTIONS(164), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym_real,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_DQUOTE,
      sym_identifier,
  [1810] = 7,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(129), 1,
      sym_argument,
    STATE(130), 2,
      sym_function_call,
      sym_object,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
  [1835] = 4,
    ACTIONS(170), 1,
      anon_sym_COLON,
    ACTIONS(172), 1,
      sym_one_sample_delay_operator,
    STATE(44), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(168), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1853] = 4,
    ACTIONS(176), 1,
      anon_sym_COLON,
    ACTIONS(178), 1,
      sym_one_sample_delay_operator,
    STATE(44), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(174), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [1871] = 4,
    ACTIONS(183), 1,
      anon_sym_COLON,
    ACTIONS(185), 1,
      anon_sym_COLON_GT,
    STATE(56), 1,
      aux_sym_split_repeat1,
    ACTIONS(181), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [1888] = 4,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    STATE(45), 1,
      aux_sym_split_repeat1,
    ACTIONS(187), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [1905] = 6,
    ACTIONS(25), 1,
      sym_int,
    ACTIONS(27), 1,
      sym_real,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    STATE(67), 1,
      sym_object,
    STATE(19), 3,
      sym__number,
      sym_string,
      sym_variable,
  [1926] = 6,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(128), 1,
      sym_object,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
  [1947] = 6,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(126), 1,
      sym_object,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
  [1968] = 6,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(106), 1,
      sym_object,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
  [1989] = 3,
    ACTIONS(75), 1,
      anon_sym_COLON,
    ACTIONS(197), 1,
      anon_sym_DOT,
    ACTIONS(69), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2004] = 6,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_TILDE,
    STATE(45), 1,
      aux_sym_split_repeat1,
    ACTIONS(199), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [2025] = 6,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(137), 1,
      sym_object,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2046] = 6,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(141), 1,
      sym_object,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2067] = 2,
    ACTIONS(205), 1,
      anon_sym_DOT,
    ACTIONS(69), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2080] = 4,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_split_repeat1,
    ACTIONS(207), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2097] = 4,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    STATE(45), 1,
      aux_sym_split_repeat1,
    ACTIONS(214), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [2114] = 6,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_TILDE,
    STATE(45), 1,
      aux_sym_split_repeat1,
    ACTIONS(207), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [2135] = 4,
    ACTIONS(218), 1,
      anon_sym_COLON,
    ACTIONS(220), 1,
      anon_sym_COLON_GT,
    STATE(56), 1,
      aux_sym_split_repeat1,
    ACTIONS(216), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2152] = 6,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(139), 1,
      sym_object,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2173] = 5,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_split_repeat1,
    ACTIONS(222), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [2192] = 6,
    ACTIONS(39), 1,
      sym_int,
    ACTIONS(41), 1,
      sym_real,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(195), 1,
      sym_identifier,
    STATE(146), 1,
      sym_object,
    STATE(24), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2213] = 2,
    ACTIONS(226), 1,
      anon_sym_COLON,
    ACTIONS(224), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2225] = 2,
    ACTIONS(230), 1,
      anon_sym_COLON,
    ACTIONS(228), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2237] = 2,
    ACTIONS(166), 1,
      anon_sym_COLON,
    ACTIONS(164), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2249] = 2,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(87), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2261] = 2,
    ACTIONS(234), 1,
      anon_sym_COLON,
    ACTIONS(232), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2273] = 1,
    ACTIONS(87), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2283] = 3,
    ACTIONS(236), 1,
      sym_one_sample_delay_operator,
    STATE(71), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(168), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2297] = 2,
    ACTIONS(240), 1,
      anon_sym_COLON,
    ACTIONS(238), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2309] = 3,
    ACTIONS(242), 1,
      sym_one_sample_delay_operator,
    STATE(71), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(174), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2323] = 5,
    ACTIONS(183), 1,
      anon_sym_COLON,
    ACTIONS(220), 1,
      anon_sym_COLON_GT,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_split_repeat1,
    ACTIONS(181), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2341] = 5,
    ACTIONS(183), 1,
      anon_sym_COLON,
    ACTIONS(220), 1,
      anon_sym_COLON_GT,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_split_repeat1,
    ACTIONS(181), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2359] = 2,
    ACTIONS(251), 1,
      anon_sym_COLON,
    ACTIONS(249), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2371] = 2,
    ACTIONS(255), 1,
      anon_sym_COLON,
    ACTIONS(253), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2383] = 4,
    ACTIONS(183), 1,
      anon_sym_COLON,
    ACTIONS(220), 1,
      anon_sym_COLON_GT,
    STATE(56), 1,
      aux_sym_split_repeat1,
    ACTIONS(181), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2399] = 2,
    ACTIONS(259), 1,
      anon_sym_COLON,
    ACTIONS(257), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2411] = 2,
    ACTIONS(263), 1,
      anon_sym_COLON,
    ACTIONS(261), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2423] = 2,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(265), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2435] = 2,
    ACTIONS(271), 1,
      anon_sym_COLON,
    ACTIONS(269), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2447] = 2,
    ACTIONS(275), 1,
      anon_sym_COLON,
    ACTIONS(273), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2459] = 2,
    ACTIONS(279), 1,
      anon_sym_COLON,
    ACTIONS(277), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2471] = 2,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(281), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2483] = 1,
    ACTIONS(253), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2492] = 1,
    ACTIONS(257), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2501] = 2,
    ACTIONS(287), 2,
      anon_sym_declare,
      sym_identifier,
    ACTIONS(285), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_import_LPAREN,
      sym_comment,
  [2512] = 4,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(289), 1,
      anon_sym_COLON,
    STATE(76), 1,
      aux_sym_split_repeat1,
    ACTIONS(214), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
  [2527] = 2,
    ACTIONS(293), 2,
      anon_sym_declare,
      sym_identifier,
    ACTIONS(291), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_import_LPAREN,
      sym_comment,
  [2538] = 1,
    ACTIONS(238), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2547] = 6,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_COLON,
    ACTIONS(295), 1,
      anon_sym_TILDE,
    STATE(76), 1,
      aux_sym_split_repeat1,
  [2566] = 1,
    ACTIONS(277), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2575] = 1,
    ACTIONS(228), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2584] = 1,
    ACTIONS(269), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2593] = 6,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_COLON,
    ACTIONS(295), 1,
      anon_sym_TILDE,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      aux_sym_split_repeat1,
  [2612] = 2,
    ACTIONS(301), 2,
      anon_sym_declare,
      sym_identifier,
    ACTIONS(299), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_import_LPAREN,
      sym_comment,
  [2623] = 5,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_COLON,
    STATE(76), 1,
      aux_sym_split_repeat1,
    ACTIONS(222), 2,
      anon_sym_SEMI,
      anon_sym_TILDE,
  [2640] = 4,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(289), 1,
      anon_sym_COLON,
    STATE(76), 1,
      aux_sym_split_repeat1,
    ACTIONS(187), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
  [2655] = 1,
    ACTIONS(261), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2663] = 1,
    ACTIONS(281), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2671] = 1,
    ACTIONS(273), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2679] = 5,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_COLON,
    ACTIONS(295), 1,
      anon_sym_TILDE,
    STATE(59), 1,
      aux_sym_split_repeat1,
  [2695] = 1,
    ACTIONS(249), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2703] = 5,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_COLON,
    ACTIONS(295), 1,
      anon_sym_TILDE,
    STATE(72), 1,
      aux_sym_split_repeat1,
  [2719] = 1,
    ACTIONS(265), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2727] = 1,
    ACTIONS(224), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2735] = 1,
    ACTIONS(232), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2743] = 5,
    ACTIONS(191), 1,
      anon_sym_LT_COLON,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_COLON,
    ACTIONS(295), 1,
      anon_sym_TILDE,
    STATE(73), 1,
      aux_sym_split_repeat1,
  [2759] = 4,
    ACTIONS(303), 1,
      anon_sym_DQUOTE,
    ACTIONS(305), 1,
      aux_sym_string_token1,
    ACTIONS(307), 1,
      sym_escape_sequence,
    STATE(109), 1,
      aux_sym_string_repeat1,
  [2772] = 4,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      aux_sym_string_token1,
    ACTIONS(313), 1,
      sym_escape_sequence,
    STATE(110), 1,
      aux_sym_string_repeat1,
  [2785] = 4,
    ACTIONS(315), 1,
      anon_sym_DQUOTE,
    ACTIONS(317), 1,
      aux_sym_string_token1,
    ACTIONS(320), 1,
      sym_escape_sequence,
    STATE(110), 1,
      aux_sym_string_repeat1,
  [2798] = 4,
    ACTIONS(311), 1,
      aux_sym_string_token1,
    ACTIONS(313), 1,
      sym_escape_sequence,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      aux_sym_string_repeat1,
  [2811] = 4,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      aux_sym_string_token1,
    ACTIONS(329), 1,
      sym_escape_sequence,
    STATE(111), 1,
      aux_sym_string_repeat1,
  [2824] = 3,
    ACTIONS(331), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_function_call_repeat1,
  [2834] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_function_call_repeat1,
  [2844] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_function_call_repeat1,
  [2854] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_function_call_repeat1,
  [2864] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_function_call_repeat1,
  [2874] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_function_call_repeat1,
  [2884] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_function_call_repeat1,
  [2894] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      sym_identifier,
    STATE(151), 1,
      sym_string,
  [2904] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_function_call_repeat1,
  [2914] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_function_call_repeat1,
  [2924] = 2,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      sym_string,
  [2931] = 2,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(145), 1,
      sym_string,
  [2938] = 2,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    ACTIONS(358), 1,
      anon_sym_COLON,
  [2945] = 2,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
  [2952] = 2,
    ACTIONS(358), 1,
      anon_sym_COLON,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
  [2959] = 2,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
  [2966] = 1,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2971] = 1,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2976] = 1,
    ACTIONS(372), 1,
      sym_identifier,
  [2980] = 1,
    ACTIONS(374), 1,
      anon_sym_COLON,
  [2984] = 1,
    ACTIONS(376), 1,
      sym_identifier,
  [2988] = 1,
    ACTIONS(378), 1,
      sym_identifier,
  [2992] = 1,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
  [2996] = 1,
    ACTIONS(382), 1,
      anon_sym_SEMI,
  [3000] = 1,
    ACTIONS(384), 1,
      anon_sym_COMMA,
  [3004] = 1,
    ACTIONS(386), 1,
      sym_identifier,
  [3008] = 1,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
  [3012] = 1,
    ACTIONS(390), 1,
      anon_sym_COLON,
  [3016] = 1,
    ACTIONS(392), 1,
      anon_sym_COMMA,
  [3020] = 1,
    ACTIONS(394), 1,
      sym_identifier,
  [3024] = 1,
    ACTIONS(396), 1,
      anon_sym_COMMA,
  [3028] = 1,
    ACTIONS(398), 1,
      anon_sym_COLON,
  [3032] = 1,
    ACTIONS(400), 1,
      anon_sym_SEMI,
  [3036] = 1,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
  [3040] = 1,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
  [3044] = 1,
    ACTIONS(358), 1,
      anon_sym_COLON,
  [3048] = 1,
    ACTIONS(406), 1,
      anon_sym_EQ,
  [3052] = 1,
    ACTIONS(408), 1,
      anon_sym_SEMI,
  [3056] = 1,
    ACTIONS(410), 1,
      anon_sym_SEMI,
  [3060] = 1,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
  [3064] = 1,
    ACTIONS(414), 1,
      sym_identifier,
  [3068] = 1,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
  [3072] = 1,
    ACTIONS(418), 1,
      anon_sym_COMMA,
  [3076] = 1,
    ACTIONS(420), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 308,
  [SMALL_STATE(7)] = 385,
  [SMALL_STATE(8)] = 462,
  [SMALL_STATE(9)] = 539,
  [SMALL_STATE(10)] = 616,
  [SMALL_STATE(11)] = 693,
  [SMALL_STATE(12)] = 770,
  [SMALL_STATE(13)] = 847,
  [SMALL_STATE(14)] = 924,
  [SMALL_STATE(15)] = 1001,
  [SMALL_STATE(16)] = 1038,
  [SMALL_STATE(17)] = 1081,
  [SMALL_STATE(18)] = 1117,
  [SMALL_STATE(19)] = 1151,
  [SMALL_STATE(20)] = 1182,
  [SMALL_STATE(21)] = 1213,
  [SMALL_STATE(22)] = 1252,
  [SMALL_STATE(23)] = 1285,
  [SMALL_STATE(24)] = 1316,
  [SMALL_STATE(25)] = 1346,
  [SMALL_STATE(26)] = 1376,
  [SMALL_STATE(27)] = 1406,
  [SMALL_STATE(28)] = 1444,
  [SMALL_STATE(29)] = 1470,
  [SMALL_STATE(30)] = 1496,
  [SMALL_STATE(31)] = 1522,
  [SMALL_STATE(32)] = 1548,
  [SMALL_STATE(33)] = 1581,
  [SMALL_STATE(34)] = 1604,
  [SMALL_STATE(35)] = 1627,
  [SMALL_STATE(36)] = 1660,
  [SMALL_STATE(37)] = 1683,
  [SMALL_STATE(38)] = 1711,
  [SMALL_STATE(39)] = 1739,
  [SMALL_STATE(40)] = 1767,
  [SMALL_STATE(41)] = 1795,
  [SMALL_STATE(42)] = 1810,
  [SMALL_STATE(43)] = 1835,
  [SMALL_STATE(44)] = 1853,
  [SMALL_STATE(45)] = 1871,
  [SMALL_STATE(46)] = 1888,
  [SMALL_STATE(47)] = 1905,
  [SMALL_STATE(48)] = 1926,
  [SMALL_STATE(49)] = 1947,
  [SMALL_STATE(50)] = 1968,
  [SMALL_STATE(51)] = 1989,
  [SMALL_STATE(52)] = 2004,
  [SMALL_STATE(53)] = 2025,
  [SMALL_STATE(54)] = 2046,
  [SMALL_STATE(55)] = 2067,
  [SMALL_STATE(56)] = 2080,
  [SMALL_STATE(57)] = 2097,
  [SMALL_STATE(58)] = 2114,
  [SMALL_STATE(59)] = 2135,
  [SMALL_STATE(60)] = 2152,
  [SMALL_STATE(61)] = 2173,
  [SMALL_STATE(62)] = 2192,
  [SMALL_STATE(63)] = 2213,
  [SMALL_STATE(64)] = 2225,
  [SMALL_STATE(65)] = 2237,
  [SMALL_STATE(66)] = 2249,
  [SMALL_STATE(67)] = 2261,
  [SMALL_STATE(68)] = 2273,
  [SMALL_STATE(69)] = 2283,
  [SMALL_STATE(70)] = 2297,
  [SMALL_STATE(71)] = 2309,
  [SMALL_STATE(72)] = 2323,
  [SMALL_STATE(73)] = 2341,
  [SMALL_STATE(74)] = 2359,
  [SMALL_STATE(75)] = 2371,
  [SMALL_STATE(76)] = 2383,
  [SMALL_STATE(77)] = 2399,
  [SMALL_STATE(78)] = 2411,
  [SMALL_STATE(79)] = 2423,
  [SMALL_STATE(80)] = 2435,
  [SMALL_STATE(81)] = 2447,
  [SMALL_STATE(82)] = 2459,
  [SMALL_STATE(83)] = 2471,
  [SMALL_STATE(84)] = 2483,
  [SMALL_STATE(85)] = 2492,
  [SMALL_STATE(86)] = 2501,
  [SMALL_STATE(87)] = 2512,
  [SMALL_STATE(88)] = 2527,
  [SMALL_STATE(89)] = 2538,
  [SMALL_STATE(90)] = 2547,
  [SMALL_STATE(91)] = 2566,
  [SMALL_STATE(92)] = 2575,
  [SMALL_STATE(93)] = 2584,
  [SMALL_STATE(94)] = 2593,
  [SMALL_STATE(95)] = 2612,
  [SMALL_STATE(96)] = 2623,
  [SMALL_STATE(97)] = 2640,
  [SMALL_STATE(98)] = 2655,
  [SMALL_STATE(99)] = 2663,
  [SMALL_STATE(100)] = 2671,
  [SMALL_STATE(101)] = 2679,
  [SMALL_STATE(102)] = 2695,
  [SMALL_STATE(103)] = 2703,
  [SMALL_STATE(104)] = 2719,
  [SMALL_STATE(105)] = 2727,
  [SMALL_STATE(106)] = 2735,
  [SMALL_STATE(107)] = 2743,
  [SMALL_STATE(108)] = 2759,
  [SMALL_STATE(109)] = 2772,
  [SMALL_STATE(110)] = 2785,
  [SMALL_STATE(111)] = 2798,
  [SMALL_STATE(112)] = 2811,
  [SMALL_STATE(113)] = 2824,
  [SMALL_STATE(114)] = 2834,
  [SMALL_STATE(115)] = 2844,
  [SMALL_STATE(116)] = 2854,
  [SMALL_STATE(117)] = 2864,
  [SMALL_STATE(118)] = 2874,
  [SMALL_STATE(119)] = 2884,
  [SMALL_STATE(120)] = 2894,
  [SMALL_STATE(121)] = 2904,
  [SMALL_STATE(122)] = 2914,
  [SMALL_STATE(123)] = 2924,
  [SMALL_STATE(124)] = 2931,
  [SMALL_STATE(125)] = 2938,
  [SMALL_STATE(126)] = 2945,
  [SMALL_STATE(127)] = 2952,
  [SMALL_STATE(128)] = 2959,
  [SMALL_STATE(129)] = 2966,
  [SMALL_STATE(130)] = 2971,
  [SMALL_STATE(131)] = 2976,
  [SMALL_STATE(132)] = 2980,
  [SMALL_STATE(133)] = 2984,
  [SMALL_STATE(134)] = 2988,
  [SMALL_STATE(135)] = 2992,
  [SMALL_STATE(136)] = 2996,
  [SMALL_STATE(137)] = 3000,
  [SMALL_STATE(138)] = 3004,
  [SMALL_STATE(139)] = 3008,
  [SMALL_STATE(140)] = 3012,
  [SMALL_STATE(141)] = 3016,
  [SMALL_STATE(142)] = 3020,
  [SMALL_STATE(143)] = 3024,
  [SMALL_STATE(144)] = 3028,
  [SMALL_STATE(145)] = 3032,
  [SMALL_STATE(146)] = 3036,
  [SMALL_STATE(147)] = 3040,
  [SMALL_STATE(148)] = 3044,
  [SMALL_STATE(149)] = 3048,
  [SMALL_STATE(150)] = 3052,
  [SMALL_STATE(151)] = 3056,
  [SMALL_STATE(152)] = 3060,
  [SMALL_STATE(153)] = 3064,
  [SMALL_STATE(154)] = 3068,
  [SMALL_STATE(155)] = 3072,
  [SMALL_STATE(156)] = 3076,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(34),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(34),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(123),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(153),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(44),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 6),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 6, .production_id = 10),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2), SHIFT_REPEAT(10),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_split_repeat1, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 4, .production_id = 8),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 4, .production_id = 7),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split, 4, .production_id = 7),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 6),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 5),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 5),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(71),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 9),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 5),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 9),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 9),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 7),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 7),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 9),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 9),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(110),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(110),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(42),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_metadata, 4, .production_id = 4),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [412] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
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
