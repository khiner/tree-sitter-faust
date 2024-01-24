#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 177
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 6
#define TOKEN_COUNT 62
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
  anon_sym_import_LPAREN = 52,
  anon_sym_declare = 53,
  anon_sym_TILDE = 54,
  anon_sym_LT_COLON = 55,
  anon_sym_COLON_GT = 56,
  anon_sym_DQUOTE = 57,
  aux_sym_string_token1 = 58,
  sym_escape_sequence = 59,
  sym_identifier = 60,
  sym_comment = 61,
  sym_source_file = 62,
  sym__statement = 63,
  sym_variant = 64,
  sym_definition = 65,
  sym_function_call = 66,
  sym_argument = 67,
  sym__expression = 68,
  sym_iteration = 69,
  sym_binary_operation = 70,
  sym_core = 71,
  sym_infix = 72,
  sym_prefix = 73,
  sym_partial = 74,
  sym_one_sample_delay = 75,
  sym_binary_operator = 76,
  sym_object = 77,
  sym__number = 78,
  sym_documentation = 79,
  sym__doc_content = 80,
  sym__special_doc_tag = 81,
  sym_file_import = 82,
  sym_global_metadata = 83,
  sym_definition_metadata = 84,
  sym__binary_composition = 85,
  sym_recursive = 86,
  sym_sequential = 87,
  sym_split = 88,
  sym_merge = 89,
  sym_parallel = 90,
  sym_string = 91,
  sym_variable = 92,
  aux_sym_source_file_repeat1 = 93,
  aux_sym__statement_repeat1 = 94,
  aux_sym_definition_repeat1 = 95,
  aux_sym_function_call_repeat1 = 96,
  aux_sym_one_sample_delay_repeat1 = 97,
  aux_sym_documentation_repeat1 = 98,
  aux_sym_split_repeat1 = 99,
  aux_sym_string_repeat1 = 100,
  alias_sym_current_iteration = 101,
  alias_sym_function_name = 102,
  alias_sym_metadata_key = 103,
  alias_sym_module_name = 104,
  alias_sym_numiter = 105,
  alias_sym_parameter = 106,
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
  [anon_sym_import_LPAREN] = "import(",
  [anon_sym_declare] = "declare",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__statement_repeat1] = "_statement_repeat1",
  [aux_sym_definition_repeat1] = "definition_repeat1",
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
  [anon_sym_import_LPAREN] = anon_sym_import_LPAREN,
  [anon_sym_declare] = anon_sym_declare,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__statement_repeat1] = aux_sym__statement_repeat1,
  [aux_sym_definition_repeat1] = aux_sym_definition_repeat1,
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
  [anon_sym_import_LPAREN] = {
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
  [5] = {.index = 2, .length = 2},
  [8] = {.index = 4, .length = 2},
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
  [2] = {
    [0] = alias_sym_module_name,
  },
  [4] = {
    [1] = alias_sym_function_name,
    [2] = alias_sym_metadata_key,
  },
  [6] = {
    [1] = alias_sym_parameter,
  },
  [7] = {
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
  [8] = 3,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 2,
  [14] = 14,
  [15] = 15,
  [16] = 7,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 21,
  [23] = 18,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 28,
  [29] = 26,
  [30] = 24,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 34,
  [36] = 33,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 43,
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
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 57,
  [61] = 61,
  [62] = 54,
  [63] = 63,
  [64] = 64,
  [65] = 59,
  [66] = 64,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 58,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 52,
  [84] = 84,
  [85] = 53,
  [86] = 61,
  [87] = 87,
  [88] = 88,
  [89] = 47,
  [90] = 90,
  [91] = 63,
  [92] = 92,
  [93] = 73,
  [94] = 94,
  [95] = 95,
  [96] = 69,
  [97] = 79,
  [98] = 92,
  [99] = 99,
  [100] = 84,
  [101] = 101,
  [102] = 78,
  [103] = 75,
  [104] = 55,
  [105] = 74,
  [106] = 56,
  [107] = 70,
  [108] = 108,
  [109] = 77,
  [110] = 76,
  [111] = 111,
  [112] = 81,
  [113] = 87,
  [114] = 80,
  [115] = 82,
  [116] = 88,
  [117] = 108,
  [118] = 118,
  [119] = 118,
  [120] = 120,
  [121] = 121,
  [122] = 120,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 126,
  [129] = 129,
  [130] = 130,
  [131] = 124,
  [132] = 130,
  [133] = 133,
  [134] = 127,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 138,
  [143] = 143,
  [144] = 144,
  [145] = 136,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 150,
  [156] = 156,
  [157] = 157,
  [158] = 152,
  [159] = 159,
  [160] = 147,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 151,
  [165] = 165,
  [166] = 166,
  [167] = 161,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 166,
  [174] = 157,
  [175] = 156,
  [176] = 171,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(102);
      if (lookahead == '!') ADVANCE(120);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(123);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(114);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == '_') ADVANCE(119);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'q') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == 'x') ADVANCE(228);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
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
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == 'x') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
      if (lookahead != 0) ADVANCE(174);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '/') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(120);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == '_') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == 'x') ADVANCE(228);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(123);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(124);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(123);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(124);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(124);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == '|') ADVANCE(133);
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
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == '~') ADVANCE(167);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
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
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(260);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'l') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(168);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == '<') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(145);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(153);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(152);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(156);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(68);
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 74:
      if (lookahead == 'q') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'q') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 90:
      if (lookahead == '{') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 91:
      if (lookahead == '}') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 92:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 99:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 100:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(260);
      if (lookahead == '\r') ADVANCE(261);
      END_STATE();
    case 101:
      if (eof) ADVANCE(102);
      if (lookahead == '\'') ADVANCE(123);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '.') ADVANCE(112);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == ';') ADVANCE(103);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'q') ADVANCE(255);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == '~') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
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
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_wire);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(169);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_one_sample_delay_operator);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(260);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(258);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '>') ADVANCE(138);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_import_LPAREN);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_declare);
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
      if (lookahead == '#') ADVANCE(99);
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
      if (lookahead == '(') ADVANCE(165);
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
      if (lookahead == 'd') ADVANCE(118);
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
    case 194:
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
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
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
      if (lookahead == 'e') ADVANCE(185);
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
      if (lookahead == 'e') ADVANCE(191);
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
      if (lookahead == 'e') ADVANCE(186);
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
      if (lookahead == 'e') ADVANCE(187);
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
      if (lookahead == 'e') ADVANCE(188);
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
      if (lookahead == 'e') ADVANCE(237);
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
      if (lookahead == 'e') ADVANCE(238);
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
      if (lookahead == 'g') ADVANCE(217);
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
      if (lookahead == 'i') ADVANCE(257);
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
      if (lookahead == 'i') ADVANCE(220);
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
      if (lookahead == 'l') ADVANCE(201);
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
      if (lookahead == 'l') ADVANCE(202);
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
      if (lookahead == 'm') ADVANCE(117);
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
      if (lookahead == 'n') ADVANCE(203);
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
      if (lookahead == 'n') ADVANCE(106);
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
      if (lookahead == 'n') ADVANCE(105);
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
      if (lookahead == 'n') ADVANCE(104);
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
      if (lookahead == 'n') ADVANCE(107);
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
      if (lookahead == 'q') ADVANCE(116);
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
      if (lookahead == 'r') ADVANCE(115);
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
      if (lookahead == 'r') ADVANCE(136);
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
      if (lookahead == 'r') ADVANCE(195);
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
      if (lookahead == 'r') ADVANCE(196);
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
      if (lookahead == 'r') ADVANCE(198);
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
      if (lookahead == 'r') ADVANCE(199);
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
      if (lookahead == 'r') ADVANCE(200);
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
      if (lookahead == 'x') ADVANCE(197);
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
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(260);
      if (lookahead == '\\') ADVANCE(100);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 101},
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
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 101},
  [32] = {.lex_state = 101},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 101},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 101},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 101},
  [49] = {.lex_state = 101},
  [50] = {.lex_state = 101},
  [51] = {.lex_state = 101},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 101},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 101},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 8},
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
  [83] = {.lex_state = 101},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 101},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 101},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 101},
  [95] = {.lex_state = 101},
  [96] = {.lex_state = 101},
  [97] = {.lex_state = 101},
  [98] = {.lex_state = 101},
  [99] = {.lex_state = 101},
  [100] = {.lex_state = 101},
  [101] = {.lex_state = 101},
  [102] = {.lex_state = 101},
  [103] = {.lex_state = 101},
  [104] = {.lex_state = 101},
  [105] = {.lex_state = 101},
  [106] = {.lex_state = 101},
  [107] = {.lex_state = 101},
  [108] = {.lex_state = 101},
  [109] = {.lex_state = 101},
  [110] = {.lex_state = 101},
  [111] = {.lex_state = 101},
  [112] = {.lex_state = 101},
  [113] = {.lex_state = 101},
  [114] = {.lex_state = 101},
  [115] = {.lex_state = 101},
  [116] = {.lex_state = 101},
  [117] = {.lex_state = 101},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 101},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 101},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 101},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 101},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 101},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 101},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 8},
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
    [anon_sym_import_LPAREN] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(154),
    [sym__statement] = STATE(32),
    [sym_variant] = STATE(40),
    [sym_definition] = STATE(148),
    [sym_documentation] = STATE(32),
    [sym_file_import] = STATE(148),
    [sym_global_metadata] = STATE(148),
    [sym_definition_metadata] = STATE(148),
    [sym_variable] = STATE(141),
    [aux_sym_source_file_repeat1] = STATE(32),
    [aux_sym__statement_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_singleprecision] = ACTIONS(5),
    [anon_sym_doubleprecision] = ACTIONS(5),
    [anon_sym_quadprecision] = ACTIONS(5),
    [anon_sym_fixedpointprecision] = ACTIONS(5),
    [anon_sym_LTmdoc_GT] = ACTIONS(7),
    [anon_sym_import_LPAREN] = ACTIONS(9),
    [anon_sym_declare] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(23), 1,
      sym_object,
    STATE(157), 1,
      sym_binary_operator,
    ACTIONS(21), 2,
      sym_wire,
      sym_cut,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(19), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(116), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(106), 11,
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
    ACTIONS(25), 13,
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
  [78] = 14,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(28), 1,
      sym_object,
    STATE(157), 1,
      sym_binary_operator,
    ACTIONS(35), 2,
      sym_wire,
      sym_cut,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(19), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(116), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(108), 11,
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
    ACTIONS(25), 13,
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
  [156] = 14,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(23), 1,
      sym_object,
    STATE(157), 1,
      sym_binary_operator,
    ACTIONS(37), 2,
      sym_wire,
      sym_cut,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(19), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(116), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(99), 11,
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
    ACTIONS(25), 13,
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
  [234] = 14,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(23), 1,
      sym_object,
    STATE(157), 1,
      sym_binary_operator,
    ACTIONS(39), 2,
      sym_wire,
      sym_cut,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(19), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(116), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
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
    ACTIONS(25), 13,
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
  [312] = 14,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(23), 1,
      sym_object,
    STATE(157), 1,
      sym_binary_operator,
    ACTIONS(41), 2,
      sym_wire,
      sym_cut,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(19), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(116), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
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
    ACTIONS(25), 13,
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
  [390] = 14,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(23), 1,
      sym_object,
    STATE(157), 1,
      sym_binary_operator,
    ACTIONS(43), 2,
      sym_wire,
      sym_cut,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(19), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(116), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
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
    ACTIONS(25), 13,
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
  [468] = 14,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(28), 1,
      sym_object,
    STATE(157), 1,
      sym_binary_operator,
    ACTIONS(45), 2,
      sym_wire,
      sym_cut,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(19), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(116), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
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
    ACTIONS(25), 13,
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
  [546] = 14,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym_int,
    ACTIONS(55), 1,
      sym_real,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(18), 1,
      sym_object,
    STATE(174), 1,
      sym_binary_operator,
    ACTIONS(51), 2,
      sym_wire,
      sym_cut,
    STATE(25), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(49), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(88), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(70), 11,
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
    ACTIONS(25), 13,
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
  [624] = 14,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym_int,
    ACTIONS(55), 1,
      sym_real,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(18), 1,
      sym_object,
    STATE(174), 1,
      sym_binary_operator,
    ACTIONS(61), 2,
      sym_wire,
      sym_cut,
    STATE(25), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(49), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(88), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(55), 11,
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
    ACTIONS(25), 13,
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
  [702] = 14,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym_int,
    ACTIONS(55), 1,
      sym_real,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(18), 1,
      sym_object,
    STATE(174), 1,
      sym_binary_operator,
    ACTIONS(63), 2,
      sym_wire,
      sym_cut,
    STATE(25), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(49), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(88), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(71), 11,
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
    ACTIONS(25), 13,
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
  [780] = 14,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(23), 1,
      sym_object,
    STATE(157), 1,
      sym_binary_operator,
    ACTIONS(65), 2,
      sym_wire,
      sym_cut,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(19), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(116), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(104), 11,
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
    ACTIONS(25), 13,
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
  [858] = 14,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym_int,
    ACTIONS(55), 1,
      sym_real,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(18), 1,
      sym_object,
    STATE(174), 1,
      sym_binary_operator,
    ACTIONS(67), 2,
      sym_wire,
      sym_cut,
    STATE(25), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(49), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(88), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(56), 11,
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
    ACTIONS(25), 13,
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
  [936] = 14,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(23), 1,
      sym_object,
    STATE(157), 1,
      sym_binary_operator,
    ACTIONS(69), 2,
      sym_wire,
      sym_cut,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(19), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(116), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(95), 11,
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
    ACTIONS(25), 13,
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
  [1014] = 14,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(23), 1,
      sym_object,
    STATE(157), 1,
      sym_binary_operator,
    ACTIONS(71), 2,
      sym_wire,
      sym_cut,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(19), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(116), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(111), 11,
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
    ACTIONS(25), 13,
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
  [1092] = 14,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym_int,
    ACTIONS(55), 1,
      sym_real,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(18), 1,
      sym_object,
    STATE(174), 1,
      sym_binary_operator,
    ACTIONS(73), 2,
      sym_wire,
      sym_cut,
    STATE(25), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(49), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(88), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(69), 11,
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
    ACTIONS(25), 13,
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
  [1170] = 14,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(23), 1,
      sym_object,
    STATE(157), 1,
      sym_binary_operator,
    ACTIONS(75), 2,
      sym_wire,
      sym_cut,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(19), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(116), 4,
      sym_core,
      sym_infix,
      sym_prefix,
      sym_partial,
    ACTIONS(23), 5,
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
    ACTIONS(25), 13,
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
  [1248] = 7,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      sym_one_sample_delay_operator,
    STATE(52), 1,
      aux_sym_one_sample_delay_repeat1,
    STATE(64), 1,
      sym_binary_operator,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(25), 16,
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
  [1291] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(89), 3,
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
  [1328] = 4,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
      anon_sym_DOT,
    ACTIONS(89), 2,
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
  [1364] = 3,
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
  [1398] = 3,
    ACTIONS(101), 1,
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
  [1431] = 6,
    ACTIONS(103), 1,
      sym_one_sample_delay_operator,
    STATE(66), 1,
      sym_binary_operator,
    STATE(83), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
    ACTIONS(25), 16,
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
  [1470] = 2,
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
  [1501] = 2,
    ACTIONS(111), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 23,
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
  [1532] = 2,
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
  [1563] = 2,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 23,
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
  [1593] = 6,
    ACTIONS(103), 1,
      sym_one_sample_delay_operator,
    STATE(66), 1,
      sym_binary_operator,
    STATE(83), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 4,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
    ACTIONS(25), 16,
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
  [1631] = 2,
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
  [1661] = 2,
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
  [1691] = 11,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(125), 1,
      anon_sym_import_LPAREN,
    ACTIONS(128), 1,
      anon_sym_declare,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(134), 1,
      sym_comment,
    STATE(141), 1,
      sym_variable,
    STATE(40), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(31), 3,
      sym__statement,
      sym_documentation,
      aux_sym_source_file_repeat1,
    ACTIONS(119), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(148), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [1734] = 11,
    ACTIONS(7), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(9), 1,
      anon_sym_import_LPAREN,
    ACTIONS(11), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      sym_comment,
    STATE(141), 1,
      sym_variable,
    STATE(40), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(31), 3,
      sym__statement,
      sym_documentation,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(148), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [1777] = 3,
    STATE(77), 1,
      sym_binary_operator,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 16,
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
  [1803] = 3,
    STATE(87), 1,
      sym_binary_operator,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 16,
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
  [1829] = 3,
    STATE(113), 1,
      sym_binary_operator,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 16,
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
  [1855] = 3,
    STATE(109), 1,
      sym_binary_operator,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 16,
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
  [1881] = 4,
    ACTIONS(145), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(147), 1,
      sym__doc_char,
    STATE(39), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(149), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [1904] = 4,
    ACTIONS(151), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(153), 1,
      sym__doc_char,
    STATE(37), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(155), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [1927] = 4,
    ACTIONS(157), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(159), 1,
      sym__doc_char,
    STATE(39), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(162), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [1950] = 7,
    ACTIONS(9), 1,
      anon_sym_import_LPAREN,
    ACTIONS(11), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      sym_identifier,
    STATE(141), 1,
      sym_variable,
    STATE(51), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(5), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(159), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [1979] = 8,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(124), 1,
      sym_argument,
    STATE(143), 2,
      sym_function_call,
      sym_object,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2007] = 8,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_argument,
    STATE(143), 2,
      sym_function_call,
      sym_object,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2035] = 8,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym_argument,
    STATE(143), 2,
      sym_function_call,
      sym_object,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2063] = 8,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      sym_argument,
    STATE(143), 2,
      sym_function_call,
      sym_object,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2091] = 7,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      sym_identifier,
    STATE(144), 1,
      sym_argument,
    STATE(143), 2,
      sym_function_call,
      sym_object,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2116] = 2,
    ACTIONS(175), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_import_LPAREN,
      sym_comment,
    ACTIONS(177), 6,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_declare,
      sym_identifier,
  [2131] = 2,
    ACTIONS(181), 1,
      sym_int,
    ACTIONS(179), 9,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_COLON,
      sym_real,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_DQUOTE,
      sym_identifier,
  [2146] = 2,
    ACTIONS(183), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_import_LPAREN,
      sym_comment,
    ACTIONS(185), 6,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_declare,
      sym_identifier,
  [2161] = 2,
    ACTIONS(187), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_import_LPAREN,
      sym_comment,
    ACTIONS(189), 6,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_declare,
      sym_identifier,
  [2176] = 2,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_import_LPAREN,
      sym_comment,
    ACTIONS(193), 6,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_declare,
      sym_identifier,
  [2191] = 4,
    ACTIONS(198), 1,
      anon_sym_import_LPAREN,
    ACTIONS(200), 2,
      anon_sym_declare,
      sym_identifier,
    STATE(51), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(195), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2209] = 4,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(206), 1,
      sym_one_sample_delay_operator,
    STATE(53), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(202), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2227] = 4,
    ACTIONS(210), 1,
      anon_sym_COLON,
    ACTIONS(212), 1,
      sym_one_sample_delay_operator,
    STATE(53), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(208), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2245] = 2,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(83), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2259] = 4,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    STATE(61), 1,
      aux_sym_split_repeat1,
    ACTIONS(217), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [2276] = 5,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_split_repeat1,
    ACTIONS(223), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [2295] = 6,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(166), 1,
      sym_object,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2316] = 6,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(161), 1,
      sym_object,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2337] = 6,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(145), 1,
      sym_object,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2358] = 6,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(173), 1,
      sym_object,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2379] = 4,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(233), 1,
      anon_sym_COLON_GT,
    STATE(68), 1,
      aux_sym_split_repeat1,
    ACTIONS(229), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2396] = 3,
    ACTIONS(89), 1,
      anon_sym_COLON,
    ACTIONS(235), 1,
      anon_sym_DOT,
    ACTIONS(83), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2411] = 1,
    ACTIONS(95), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2422] = 6,
    ACTIONS(53), 1,
      sym_int,
    ACTIONS(55), 1,
      sym_real,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(82), 1,
      sym_object,
    STATE(25), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2443] = 6,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(136), 1,
      sym_object,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2464] = 6,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(115), 1,
      sym_object,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2485] = 4,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(243), 1,
      anon_sym_COLON_GT,
    STATE(68), 1,
      aux_sym_split_repeat1,
    ACTIONS(239), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2502] = 4,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_COLON,
    STATE(68), 1,
      aux_sym_split_repeat1,
    ACTIONS(245), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2519] = 4,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    STATE(61), 1,
      aux_sym_split_repeat1,
    ACTIONS(252), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [2536] = 6,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_TILDE,
    STATE(61), 1,
      aux_sym_split_repeat1,
    ACTIONS(254), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [2557] = 6,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_TILDE,
    STATE(61), 1,
      aux_sym_split_repeat1,
    ACTIONS(245), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [2578] = 6,
    ACTIONS(27), 1,
      sym_int,
    ACTIONS(29), 1,
      sym_real,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_identifier,
    STATE(167), 1,
      sym_object,
    STATE(27), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2599] = 5,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(243), 1,
      anon_sym_COLON_GT,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_split_repeat1,
    ACTIONS(229), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2617] = 2,
    ACTIONS(262), 1,
      anon_sym_COLON,
    ACTIONS(260), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2629] = 2,
    ACTIONS(266), 1,
      anon_sym_COLON,
    ACTIONS(264), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2641] = 2,
    ACTIONS(270), 1,
      anon_sym_COLON,
    ACTIONS(268), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2653] = 2,
    ACTIONS(274), 1,
      anon_sym_COLON,
    ACTIONS(272), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2665] = 2,
    ACTIONS(278), 1,
      anon_sym_COLON,
    ACTIONS(276), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2677] = 2,
    ACTIONS(282), 1,
      anon_sym_COLON,
    ACTIONS(280), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2689] = 2,
    ACTIONS(286), 1,
      anon_sym_COLON,
    ACTIONS(284), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2701] = 2,
    ACTIONS(290), 1,
      anon_sym_COLON,
    ACTIONS(288), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2713] = 2,
    ACTIONS(294), 1,
      anon_sym_COLON,
    ACTIONS(292), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2725] = 3,
    ACTIONS(296), 1,
      sym_one_sample_delay_operator,
    STATE(85), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(202), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2739] = 2,
    ACTIONS(300), 1,
      anon_sym_COLON,
    ACTIONS(298), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2751] = 3,
    ACTIONS(302), 1,
      sym_one_sample_delay_operator,
    STATE(85), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(208), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2765] = 4,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(243), 1,
      anon_sym_COLON_GT,
    STATE(68), 1,
      aux_sym_split_repeat1,
    ACTIONS(229), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2781] = 2,
    ACTIONS(307), 1,
      anon_sym_COLON,
    ACTIONS(305), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2793] = 2,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(309), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2805] = 2,
    ACTIONS(181), 1,
      anon_sym_COLON,
    ACTIONS(179), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2817] = 2,
    ACTIONS(315), 1,
      anon_sym_import_LPAREN,
    ACTIONS(313), 6,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_declare,
      sym_identifier,
  [2829] = 2,
    ACTIONS(99), 1,
      anon_sym_COLON,
    ACTIONS(95), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2841] = 2,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(317), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2853] = 5,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(243), 1,
      anon_sym_COLON_GT,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_split_repeat1,
    ACTIONS(229), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2871] = 6,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    STATE(86), 1,
      aux_sym_split_repeat1,
  [2890] = 6,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_split_repeat1,
  [2909] = 4,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(325), 1,
      anon_sym_COLON,
    STATE(86), 1,
      aux_sym_split_repeat1,
    ACTIONS(252), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
  [2924] = 1,
    ACTIONS(280), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2933] = 1,
    ACTIONS(317), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2942] = 6,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_split_repeat1,
  [2961] = 1,
    ACTIONS(298), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2970] = 6,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      aux_sym_split_repeat1,
  [2989] = 1,
    ACTIONS(276), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2998] = 1,
    ACTIONS(264), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3007] = 4,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(325), 1,
      anon_sym_COLON,
    STATE(86), 1,
      aux_sym_split_repeat1,
    ACTIONS(217), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
  [3022] = 1,
    ACTIONS(260), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3031] = 5,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_COLON,
    STATE(86), 1,
      aux_sym_split_repeat1,
    ACTIONS(223), 2,
      anon_sym_SEMI,
      anon_sym_TILDE,
  [3048] = 6,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    STATE(86), 1,
      aux_sym_split_repeat1,
  [3067] = 5,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    STATE(93), 1,
      aux_sym_split_repeat1,
  [3083] = 1,
    ACTIONS(272), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3091] = 1,
    ACTIONS(268), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3099] = 5,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    STATE(67), 1,
      aux_sym_split_repeat1,
  [3115] = 1,
    ACTIONS(288), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3123] = 1,
    ACTIONS(305), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3131] = 1,
    ACTIONS(284), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3139] = 1,
    ACTIONS(292), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3147] = 1,
    ACTIONS(309), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3155] = 5,
    ACTIONS(221), 1,
      anon_sym_LT_COLON,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_TILDE,
    STATE(73), 1,
      aux_sym_split_repeat1,
  [3171] = 4,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    ACTIONS(337), 1,
      aux_sym_string_token1,
    ACTIONS(339), 1,
      sym_escape_sequence,
    STATE(120), 1,
      aux_sym_string_repeat1,
  [3184] = 4,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      aux_sym_string_token1,
    ACTIONS(345), 1,
      sym_escape_sequence,
    STATE(122), 1,
      aux_sym_string_repeat1,
  [3197] = 4,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      aux_sym_string_token1,
    ACTIONS(351), 1,
      sym_escape_sequence,
    STATE(121), 1,
      aux_sym_string_repeat1,
  [3210] = 4,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      aux_sym_string_token1,
    ACTIONS(358), 1,
      sym_escape_sequence,
    STATE(121), 1,
      aux_sym_string_repeat1,
  [3223] = 4,
    ACTIONS(349), 1,
      aux_sym_string_token1,
    ACTIONS(351), 1,
      sym_escape_sequence,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      aux_sym_string_repeat1,
  [3236] = 3,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_definition_repeat1,
  [3246] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_function_call_repeat1,
  [3256] = 3,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_definition_repeat1,
  [3266] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym_function_call_repeat1,
  [3276] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_function_call_repeat1,
  [3286] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_function_call_repeat1,
  [3296] = 3,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_function_call_repeat1,
  [3306] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_function_call_repeat1,
  [3316] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_function_call_repeat1,
  [3326] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_function_call_repeat1,
  [3336] = 3,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(165), 1,
      sym_string,
  [3346] = 3,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_function_call_repeat1,
  [3356] = 3,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym_definition_repeat1,
  [3366] = 2,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
  [3373] = 2,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      sym_identifier,
  [3380] = 2,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    ACTIONS(409), 1,
      anon_sym_COLON,
  [3387] = 2,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(169), 1,
      sym_string,
  [3394] = 2,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(153), 1,
      sym_string,
  [3401] = 2,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_EQ,
  [3408] = 2,
    ACTIONS(409), 1,
      anon_sym_COLON,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
  [3415] = 1,
    ACTIONS(417), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3420] = 1,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3425] = 2,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
  [3432] = 1,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3437] = 1,
    ACTIONS(409), 1,
      anon_sym_COLON,
  [3441] = 1,
    ACTIONS(425), 1,
      anon_sym_SEMI,
  [3445] = 1,
    ACTIONS(427), 1,
      anon_sym_EQ,
  [3449] = 1,
    ACTIONS(429), 1,
      sym_identifier,
  [3453] = 1,
    ACTIONS(431), 1,
      anon_sym_COLON,
  [3457] = 1,
    ACTIONS(433), 1,
      sym_identifier,
  [3461] = 1,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
  [3465] = 1,
    ACTIONS(437), 1,
      ts_builtin_sym_end,
  [3469] = 1,
    ACTIONS(439), 1,
      sym_identifier,
  [3473] = 1,
    ACTIONS(441), 1,
      anon_sym_COMMA,
  [3477] = 1,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
  [3481] = 1,
    ACTIONS(445), 1,
      sym_identifier,
  [3485] = 1,
    ACTIONS(447), 1,
      anon_sym_SEMI,
  [3489] = 1,
    ACTIONS(449), 1,
      anon_sym_COLON,
  [3493] = 1,
    ACTIONS(451), 1,
      anon_sym_COMMA,
  [3497] = 1,
    ACTIONS(453), 1,
      anon_sym_SEMI,
  [3501] = 1,
    ACTIONS(455), 1,
      sym_identifier,
  [3505] = 1,
    ACTIONS(457), 1,
      anon_sym_COLON,
  [3509] = 1,
    ACTIONS(459), 1,
      anon_sym_SEMI,
  [3513] = 1,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
  [3517] = 1,
    ACTIONS(463), 1,
      anon_sym_COMMA,
  [3521] = 1,
    ACTIONS(465), 1,
      anon_sym_EQ,
  [3525] = 1,
    ACTIONS(467), 1,
      anon_sym_SEMI,
  [3529] = 1,
    ACTIONS(469), 1,
      anon_sym_EQ,
  [3533] = 1,
    ACTIONS(471), 1,
      sym_identifier,
  [3537] = 1,
    ACTIONS(473), 1,
      sym_identifier,
  [3541] = 1,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
  [3545] = 1,
    ACTIONS(477), 1,
      anon_sym_LPAREN,
  [3549] = 1,
    ACTIONS(479), 1,
      anon_sym_COMMA,
  [3553] = 1,
    ACTIONS(481), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 78,
  [SMALL_STATE(4)] = 156,
  [SMALL_STATE(5)] = 234,
  [SMALL_STATE(6)] = 312,
  [SMALL_STATE(7)] = 390,
  [SMALL_STATE(8)] = 468,
  [SMALL_STATE(9)] = 546,
  [SMALL_STATE(10)] = 624,
  [SMALL_STATE(11)] = 702,
  [SMALL_STATE(12)] = 780,
  [SMALL_STATE(13)] = 858,
  [SMALL_STATE(14)] = 936,
  [SMALL_STATE(15)] = 1014,
  [SMALL_STATE(16)] = 1092,
  [SMALL_STATE(17)] = 1170,
  [SMALL_STATE(18)] = 1248,
  [SMALL_STATE(19)] = 1291,
  [SMALL_STATE(20)] = 1328,
  [SMALL_STATE(21)] = 1364,
  [SMALL_STATE(22)] = 1398,
  [SMALL_STATE(23)] = 1431,
  [SMALL_STATE(24)] = 1470,
  [SMALL_STATE(25)] = 1501,
  [SMALL_STATE(26)] = 1532,
  [SMALL_STATE(27)] = 1563,
  [SMALL_STATE(28)] = 1593,
  [SMALL_STATE(29)] = 1631,
  [SMALL_STATE(30)] = 1661,
  [SMALL_STATE(31)] = 1691,
  [SMALL_STATE(32)] = 1734,
  [SMALL_STATE(33)] = 1777,
  [SMALL_STATE(34)] = 1803,
  [SMALL_STATE(35)] = 1829,
  [SMALL_STATE(36)] = 1855,
  [SMALL_STATE(37)] = 1881,
  [SMALL_STATE(38)] = 1904,
  [SMALL_STATE(39)] = 1927,
  [SMALL_STATE(40)] = 1950,
  [SMALL_STATE(41)] = 1979,
  [SMALL_STATE(42)] = 2007,
  [SMALL_STATE(43)] = 2035,
  [SMALL_STATE(44)] = 2063,
  [SMALL_STATE(45)] = 2091,
  [SMALL_STATE(46)] = 2116,
  [SMALL_STATE(47)] = 2131,
  [SMALL_STATE(48)] = 2146,
  [SMALL_STATE(49)] = 2161,
  [SMALL_STATE(50)] = 2176,
  [SMALL_STATE(51)] = 2191,
  [SMALL_STATE(52)] = 2209,
  [SMALL_STATE(53)] = 2227,
  [SMALL_STATE(54)] = 2245,
  [SMALL_STATE(55)] = 2259,
  [SMALL_STATE(56)] = 2276,
  [SMALL_STATE(57)] = 2295,
  [SMALL_STATE(58)] = 2316,
  [SMALL_STATE(59)] = 2337,
  [SMALL_STATE(60)] = 2358,
  [SMALL_STATE(61)] = 2379,
  [SMALL_STATE(62)] = 2396,
  [SMALL_STATE(63)] = 2411,
  [SMALL_STATE(64)] = 2422,
  [SMALL_STATE(65)] = 2443,
  [SMALL_STATE(66)] = 2464,
  [SMALL_STATE(67)] = 2485,
  [SMALL_STATE(68)] = 2502,
  [SMALL_STATE(69)] = 2519,
  [SMALL_STATE(70)] = 2536,
  [SMALL_STATE(71)] = 2557,
  [SMALL_STATE(72)] = 2578,
  [SMALL_STATE(73)] = 2599,
  [SMALL_STATE(74)] = 2617,
  [SMALL_STATE(75)] = 2629,
  [SMALL_STATE(76)] = 2641,
  [SMALL_STATE(77)] = 2653,
  [SMALL_STATE(78)] = 2665,
  [SMALL_STATE(79)] = 2677,
  [SMALL_STATE(80)] = 2689,
  [SMALL_STATE(81)] = 2701,
  [SMALL_STATE(82)] = 2713,
  [SMALL_STATE(83)] = 2725,
  [SMALL_STATE(84)] = 2739,
  [SMALL_STATE(85)] = 2751,
  [SMALL_STATE(86)] = 2765,
  [SMALL_STATE(87)] = 2781,
  [SMALL_STATE(88)] = 2793,
  [SMALL_STATE(89)] = 2805,
  [SMALL_STATE(90)] = 2817,
  [SMALL_STATE(91)] = 2829,
  [SMALL_STATE(92)] = 2841,
  [SMALL_STATE(93)] = 2853,
  [SMALL_STATE(94)] = 2871,
  [SMALL_STATE(95)] = 2890,
  [SMALL_STATE(96)] = 2909,
  [SMALL_STATE(97)] = 2924,
  [SMALL_STATE(98)] = 2933,
  [SMALL_STATE(99)] = 2942,
  [SMALL_STATE(100)] = 2961,
  [SMALL_STATE(101)] = 2970,
  [SMALL_STATE(102)] = 2989,
  [SMALL_STATE(103)] = 2998,
  [SMALL_STATE(104)] = 3007,
  [SMALL_STATE(105)] = 3022,
  [SMALL_STATE(106)] = 3031,
  [SMALL_STATE(107)] = 3048,
  [SMALL_STATE(108)] = 3067,
  [SMALL_STATE(109)] = 3083,
  [SMALL_STATE(110)] = 3091,
  [SMALL_STATE(111)] = 3099,
  [SMALL_STATE(112)] = 3115,
  [SMALL_STATE(113)] = 3123,
  [SMALL_STATE(114)] = 3131,
  [SMALL_STATE(115)] = 3139,
  [SMALL_STATE(116)] = 3147,
  [SMALL_STATE(117)] = 3155,
  [SMALL_STATE(118)] = 3171,
  [SMALL_STATE(119)] = 3184,
  [SMALL_STATE(120)] = 3197,
  [SMALL_STATE(121)] = 3210,
  [SMALL_STATE(122)] = 3223,
  [SMALL_STATE(123)] = 3236,
  [SMALL_STATE(124)] = 3246,
  [SMALL_STATE(125)] = 3256,
  [SMALL_STATE(126)] = 3266,
  [SMALL_STATE(127)] = 3276,
  [SMALL_STATE(128)] = 3286,
  [SMALL_STATE(129)] = 3296,
  [SMALL_STATE(130)] = 3306,
  [SMALL_STATE(131)] = 3316,
  [SMALL_STATE(132)] = 3326,
  [SMALL_STATE(133)] = 3336,
  [SMALL_STATE(134)] = 3346,
  [SMALL_STATE(135)] = 3356,
  [SMALL_STATE(136)] = 3366,
  [SMALL_STATE(137)] = 3373,
  [SMALL_STATE(138)] = 3380,
  [SMALL_STATE(139)] = 3387,
  [SMALL_STATE(140)] = 3394,
  [SMALL_STATE(141)] = 3401,
  [SMALL_STATE(142)] = 3408,
  [SMALL_STATE(143)] = 3415,
  [SMALL_STATE(144)] = 3420,
  [SMALL_STATE(145)] = 3425,
  [SMALL_STATE(146)] = 3432,
  [SMALL_STATE(147)] = 3437,
  [SMALL_STATE(148)] = 3441,
  [SMALL_STATE(149)] = 3445,
  [SMALL_STATE(150)] = 3449,
  [SMALL_STATE(151)] = 3453,
  [SMALL_STATE(152)] = 3457,
  [SMALL_STATE(153)] = 3461,
  [SMALL_STATE(154)] = 3465,
  [SMALL_STATE(155)] = 3469,
  [SMALL_STATE(156)] = 3473,
  [SMALL_STATE(157)] = 3477,
  [SMALL_STATE(158)] = 3481,
  [SMALL_STATE(159)] = 3485,
  [SMALL_STATE(160)] = 3489,
  [SMALL_STATE(161)] = 3493,
  [SMALL_STATE(162)] = 3497,
  [SMALL_STATE(163)] = 3501,
  [SMALL_STATE(164)] = 3505,
  [SMALL_STATE(165)] = 3509,
  [SMALL_STATE(166)] = 3513,
  [SMALL_STATE(167)] = 3517,
  [SMALL_STATE(168)] = 3521,
  [SMALL_STATE(169)] = 3525,
  [SMALL_STATE(170)] = 3529,
  [SMALL_STATE(171)] = 3533,
  [SMALL_STATE(172)] = 3537,
  [SMALL_STATE(173)] = 3541,
  [SMALL_STATE(174)] = 3545,
  [SMALL_STATE(175)] = 3549,
  [SMALL_STATE(176)] = 3553,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(39),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(39),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(90),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(53),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 8),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 8),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 4, .production_id = 10),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split, 4, .production_id = 10),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2), SHIFT_REPEAT(11),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_split_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 4, .production_id = 11),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 6, .production_id = 14),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 13),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 13),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 7),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 7),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 5),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 5),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 13),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 13),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 7),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 7),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 7),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 7),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(85),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 7),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 7),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 13),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 13),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 6, .production_id = 9),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 5, .production_id = 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 7, .production_id = 12),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 3),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(121),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(121),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(172),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(45),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2, .production_id = 6),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [437] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_metadata, 4, .production_id = 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
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
