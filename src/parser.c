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
  sym__object = 78,
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
  [sym__object] = "_object",
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
  [sym__object] = sym__object,
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
  [sym__object] = {
    .visible = false,
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
  sym__object, 2,
    sym__object,
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
      if (eof) ADVANCE(106);
      if (lookahead == '!') ADVANCE(123);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(131);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 'q') ADVANCE(264);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == 'x') ADVANCE(237);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '~') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(181);
      if (lookahead == '\r') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'x') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(187);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(123);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == 'x') ADVANCE(237);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '~') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '~') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '~') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '@') ADVANCE(154);
      if (lookahead == '^') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == '|') ADVANCE(140);
      if (lookahead == '~') ADVANCE(177);
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
      if (lookahead == '+') ADVANCE(129);
      if (lookahead == '-') ADVANCE(132);
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
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == '~') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '<') ADVANCE(21);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '~') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(270);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(269);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(98);
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
      if (lookahead == ':') ADVANCE(188);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(178);
      END_STATE();
    case 22:
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(152);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(171);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(169);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(173);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(170);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(166);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(168);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(172);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(167);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
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
      if (lookahead == 'g') ADVANCE(174);
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
      if (lookahead == '{') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 97:
      if (lookahead == '}') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 104:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(271);
      END_STATE();
    case 105:
      if (eof) ADVANCE(106);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(227);
      if (lookahead == 'q') ADVANCE(264);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(105)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(188);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(188);
      if (lookahead == '>') ADVANCE(179);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(179);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_one_sample_delay_operator);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
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
      if (lookahead == '/') ADVANCE(270);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
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
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(178);
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
      if (lookahead == '.') ADVANCE(158);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'f') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(181);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(184);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(270);
      if (lookahead == '\\') ADVANCE(104);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 105},
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
  [43] = {.lex_state = 105},
  [44] = {.lex_state = 105},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 105},
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
  [64] = {.lex_state = 105},
  [65] = {.lex_state = 105},
  [66] = {.lex_state = 105},
  [67] = {.lex_state = 105},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 105},
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
  [86] = {.lex_state = 105},
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
  [141] = {.lex_state = 0},
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
  [0] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(35), 1,
      sym__object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(23), 2,
      sym_wire,
      sym_cut,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
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
  [82] = 15,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(24), 1,
      sym_identifier,
    STATE(28), 1,
      sym__object,
    STATE(201), 1,
      sym_binary_operator,
    ACTIONS(41), 2,
      sym_wire,
      sym_cut,
    ACTIONS(43), 2,
      sym_int,
      sym_real,
    STATE(38), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(39), 4,
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
  [164] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(35), 1,
      sym__object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(51), 2,
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
  [246] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(35), 1,
      sym__object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(53), 2,
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
  [328] = 15,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(24), 1,
      sym_identifier,
    STATE(28), 1,
      sym__object,
    STATE(201), 1,
      sym_binary_operator,
    ACTIONS(43), 2,
      sym_int,
      sym_real,
    ACTIONS(55), 2,
      sym_wire,
      sym_cut,
    STATE(38), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(39), 4,
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
  [410] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(35), 1,
      sym__object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
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
  [492] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(35), 1,
      sym__object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(59), 2,
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
  [574] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(35), 1,
      sym__object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
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
  [656] = 15,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(24), 1,
      sym_identifier,
    STATE(28), 1,
      sym__object,
    STATE(201), 1,
      sym_binary_operator,
    ACTIONS(43), 2,
      sym_int,
      sym_real,
    ACTIONS(63), 2,
      sym_wire,
      sym_cut,
    STATE(38), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(39), 4,
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
  [738] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(36), 1,
      sym_identifier,
    STATE(41), 1,
      sym__object,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
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
  [820] = 15,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(24), 1,
      sym_identifier,
    STATE(28), 1,
      sym__object,
    STATE(201), 1,
      sym_binary_operator,
    ACTIONS(43), 2,
      sym_int,
      sym_real,
    ACTIONS(67), 2,
      sym_wire,
      sym_cut,
    STATE(38), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(39), 4,
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
  [902] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(35), 1,
      sym__object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
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
  [984] = 15,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(24), 1,
      sym_identifier,
    STATE(28), 1,
      sym__object,
    STATE(201), 1,
      sym_binary_operator,
    ACTIONS(43), 2,
      sym_int,
      sym_real,
    ACTIONS(71), 2,
      sym_wire,
      sym_cut,
    STATE(38), 3,
      sym__number,
      sym_string,
      sym_variable,
    ACTIONS(39), 4,
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
  [1066] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(35), 1,
      sym__object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
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
  [1148] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(36), 1,
      sym_identifier,
    STATE(41), 1,
      sym__object,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(75), 2,
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
  [1230] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(35), 1,
      sym__object,
    STATE(36), 1,
      sym_identifier,
    STATE(176), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
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
  [1312] = 4,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    STATE(21), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(81), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 25,
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
  [1351] = 4,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    STATE(21), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(87), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 25,
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
  [1390] = 4,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    STATE(19), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(81), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 25,
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
  [1429] = 4,
    ACTIONS(93), 1,
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
  [1468] = 4,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    STATE(18), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(98), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(96), 25,
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
  [1507] = 2,
    ACTIONS(91), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 26,
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
  [1541] = 4,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_DOT,
    ACTIONS(106), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 23,
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
  [1578] = 4,
    ACTIONS(108), 1,
      anon_sym_COLON_COLON,
    STATE(29), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(98), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(96), 23,
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
  [1615] = 4,
    ACTIONS(110), 1,
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
  [1652] = 4,
    ACTIONS(108), 1,
      anon_sym_COLON_COLON,
    STATE(26), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(87), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 23,
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
  [1689] = 7,
    ACTIONS(115), 1,
      anon_sym_COLON,
    ACTIONS(117), 1,
      sym_one_sample_delay_operator,
    STATE(72), 1,
      sym_binary_operator,
    STATE(78), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 6,
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
  [1732] = 4,
    ACTIONS(108), 1,
      anon_sym_COLON_COLON,
    STATE(26), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(81), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 23,
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
  [1769] = 4,
    ACTIONS(108), 1,
      anon_sym_COLON_COLON,
    STATE(27), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(81), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 23,
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
  [1806] = 2,
    ACTIONS(91), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 24,
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
  [1838] = 3,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 23,
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
  [1872] = 2,
    ACTIONS(127), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 23,
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
  [1903] = 3,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 23,
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
  [1936] = 6,
    ACTIONS(131), 1,
      sym_one_sample_delay_operator,
    STATE(73), 1,
      sym_binary_operator,
    STATE(110), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 5,
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
  [1975] = 4,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_DOT,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 22,
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
  [2010] = 2,
    ACTIONS(139), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 23,
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
  [2041] = 2,
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
  [2072] = 2,
    ACTIONS(139), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 23,
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
  [2102] = 2,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(125), 23,
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
  [2132] = 6,
    ACTIONS(131), 1,
      sym_one_sample_delay_operator,
    STATE(73), 1,
      sym_binary_operator,
    STATE(110), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 4,
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
  [2170] = 2,
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
  [2200] = 13,
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
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
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
  [2249] = 13,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(157), 1,
      anon_sym_import,
    ACTIONS(160), 1,
      anon_sym_declare,
    ACTIONS(163), 1,
      anon_sym_COLON_COLON,
    ACTIONS(166), 1,
      sym__id,
    ACTIONS(169), 1,
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
    ACTIONS(151), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(190), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [2298] = 3,
    STATE(137), 1,
      sym_binary_operator,
    ACTIONS(174), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 16,
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
  [2324] = 3,
    STATE(130), 1,
      sym_binary_operator,
    ACTIONS(174), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 16,
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
  [2350] = 3,
    STATE(91), 1,
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
  [2376] = 3,
    STATE(97), 1,
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
  [2402] = 9,
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
  [2437] = 4,
    ACTIONS(180), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(182), 1,
      sym__doc_char,
    STATE(51), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(184), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2460] = 4,
    ACTIONS(186), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(188), 1,
      sym__doc_char,
    STATE(51), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(191), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2483] = 4,
    ACTIONS(194), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(196), 1,
      sym__doc_char,
    STATE(50), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(198), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2506] = 4,
    ACTIONS(98), 1,
      anon_sym_COLON,
    ACTIONS(200), 1,
      anon_sym_COLON_COLON,
    STATE(59), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(96), 10,
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
  [2528] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_identifier,
    STATE(158), 1,
      sym_argument,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(169), 2,
      sym_function_call,
      sym__object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2560] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_identifier,
    STATE(153), 1,
      sym_argument,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(169), 2,
      sym_function_call,
      sym__object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2592] = 4,
    ACTIONS(81), 1,
      anon_sym_COLON,
    ACTIONS(200), 1,
      anon_sym_COLON_COLON,
    STATE(57), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(79), 10,
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
  [2614] = 4,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(200), 1,
      anon_sym_COLON_COLON,
    STATE(61), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(85), 10,
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
  [2636] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_identifier,
    STATE(155), 1,
      sym_argument,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(169), 2,
      sym_function_call,
      sym__object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2668] = 4,
    ACTIONS(81), 1,
      anon_sym_COLON,
    ACTIONS(200), 1,
      anon_sym_COLON_COLON,
    STATE(61), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(79), 10,
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
  [2690] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      sym_identifier,
    STATE(157), 1,
      sym_argument,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(169), 2,
      sym_function_call,
      sym__object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2722] = 4,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(210), 1,
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
  [2744] = 2,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(89), 11,
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
  [2761] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym_identifier,
    STATE(166), 1,
      sym_argument,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(169), 2,
      sym_function_call,
      sym__object,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2790] = 2,
    ACTIONS(213), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(215), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2806] = 2,
    ACTIONS(217), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(219), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2822] = 2,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(223), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2838] = 2,
    ACTIONS(225), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(227), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2854] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_identifier,
    STATE(175), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2879] = 4,
    ACTIONS(234), 1,
      anon_sym_COLON_COLON,
    STATE(69), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(232), 3,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
    ACTIONS(229), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2898] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_identifier,
    STATE(174), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2923] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_identifier,
    STATE(191), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2948] = 7,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(89), 1,
      sym_identifier,
    STATE(107), 1,
      sym__object,
    ACTIONS(43), 2,
      sym_int,
      sym_real,
    STATE(38), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2973] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_identifier,
    STATE(132), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [2998] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_identifier,
    STATE(184), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [3023] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_identifier,
    STATE(181), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [3048] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_identifier,
    STATE(188), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(42), 3,
      sym__number,
      sym_string,
      sym_variable,
  [3073] = 4,
    ACTIONS(238), 1,
      anon_sym_COLON,
    ACTIONS(240), 1,
      sym_one_sample_delay_operator,
    STATE(77), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(236), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3091] = 4,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(247), 1,
      sym_one_sample_delay_operator,
    STATE(77), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(243), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3109] = 2,
    ACTIONS(249), 1,
      anon_sym_DOT,
    ACTIONS(100), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3123] = 4,
    ACTIONS(253), 1,
      anon_sym_COLON,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    STATE(81), 1,
      aux_sym_split_repeat1,
    ACTIONS(251), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [3140] = 4,
    ACTIONS(259), 1,
      anon_sym_COLON,
    ACTIONS(261), 1,
      anon_sym_COLON_GT,
    STATE(87), 1,
      aux_sym_split_repeat1,
    ACTIONS(257), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3157] = 1,
    ACTIONS(119), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3168] = 6,
    ACTIONS(253), 1,
      anon_sym_COLON,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_TILDE,
    STATE(81), 1,
      aux_sym_split_repeat1,
    ACTIONS(263), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [3189] = 4,
    ACTIONS(253), 1,
      anon_sym_COLON,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    STATE(81), 1,
      aux_sym_split_repeat1,
    ACTIONS(269), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [3206] = 5,
    ACTIONS(253), 1,
      anon_sym_COLON,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_split_repeat1,
    ACTIONS(271), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [3225] = 2,
    ACTIONS(275), 1,
      anon_sym_COLON_COLON,
    ACTIONS(273), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [3238] = 4,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_COLON,
    STATE(87), 1,
      aux_sym_split_repeat1,
    ACTIONS(263), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3255] = 4,
    ACTIONS(284), 1,
      anon_sym_COLON,
    ACTIONS(286), 1,
      anon_sym_COLON_GT,
    STATE(87), 1,
      aux_sym_split_repeat1,
    ACTIONS(282), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3272] = 3,
    ACTIONS(106), 1,
      anon_sym_COLON,
    ACTIONS(288), 1,
      anon_sym_DOT,
    ACTIONS(100), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3287] = 6,
    ACTIONS(253), 1,
      anon_sym_COLON,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_TILDE,
    STATE(81), 1,
      aux_sym_split_repeat1,
    ACTIONS(290), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [3308] = 2,
    ACTIONS(294), 1,
      anon_sym_COLON,
    ACTIONS(292), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3320] = 2,
    ACTIONS(298), 1,
      anon_sym_COLON,
    ACTIONS(296), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3332] = 2,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(300), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3344] = 3,
    ACTIONS(304), 1,
      sym_one_sample_delay_operator,
    STATE(94), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(236), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3358] = 2,
    ACTIONS(309), 1,
      anon_sym_COLON,
    ACTIONS(307), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3370] = 2,
    ACTIONS(313), 1,
      anon_sym_COLON,
    ACTIONS(311), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3382] = 2,
    ACTIONS(317), 1,
      anon_sym_COLON,
    ACTIONS(315), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3394] = 2,
    ACTIONS(321), 1,
      anon_sym_COLON,
    ACTIONS(319), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3406] = 5,
    ACTIONS(259), 1,
      anon_sym_COLON,
    ACTIONS(286), 1,
      anon_sym_COLON_GT,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_split_repeat1,
    ACTIONS(257), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3424] = 2,
    ACTIONS(327), 1,
      anon_sym_COLON,
    ACTIONS(325), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3436] = 2,
    ACTIONS(123), 1,
      anon_sym_COLON,
    ACTIONS(119), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3448] = 2,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(329), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3460] = 2,
    ACTIONS(335), 1,
      anon_sym_COLON,
    ACTIONS(333), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3472] = 2,
    ACTIONS(339), 1,
      anon_sym_COLON,
    ACTIONS(337), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3484] = 2,
    ACTIONS(343), 1,
      anon_sym_COLON,
    ACTIONS(341), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3496] = 5,
    ACTIONS(259), 1,
      anon_sym_COLON,
    ACTIONS(286), 1,
      anon_sym_COLON_GT,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_split_repeat1,
    ACTIONS(257), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3514] = 2,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(347), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3526] = 2,
    ACTIONS(353), 1,
      anon_sym_COLON,
    ACTIONS(351), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3538] = 4,
    ACTIONS(259), 1,
      anon_sym_COLON,
    ACTIONS(286), 1,
      anon_sym_COLON_GT,
    STATE(87), 1,
      aux_sym_split_repeat1,
    ACTIONS(257), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3554] = 3,
    ACTIONS(355), 1,
      sym_one_sample_delay_operator,
    STATE(94), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(243), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3568] = 1,
    ACTIONS(341), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3577] = 1,
    ACTIONS(319), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3586] = 2,
    ACTIONS(329), 3,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_COLON_COLON,
    ACTIONS(331), 3,
      sym_int,
      sym_real,
      sym__id,
  [3597] = 1,
    ACTIONS(311), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3606] = 6,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    ACTIONS(359), 1,
      anon_sym_COLON,
    ACTIONS(361), 1,
      anon_sym_TILDE,
    STATE(109), 1,
      aux_sym_split_repeat1,
  [3625] = 1,
    ACTIONS(307), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3634] = 6,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_COLON,
    ACTIONS(361), 1,
      anon_sym_TILDE,
    ACTIONS(363), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym_split_repeat1,
  [3653] = 6,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_COLON,
    ACTIONS(361), 1,
      anon_sym_TILDE,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym_split_repeat1,
  [3672] = 6,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(359), 1,
      anon_sym_COLON,
    ACTIONS(361), 1,
      anon_sym_TILDE,
    STATE(109), 1,
      aux_sym_split_repeat1,
  [3691] = 4,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(359), 1,
      anon_sym_COLON,
    STATE(109), 1,
      aux_sym_split_repeat1,
    ACTIONS(269), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
  [3706] = 1,
    ACTIONS(296), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3715] = 4,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(359), 1,
      anon_sym_COLON,
    STATE(109), 1,
      aux_sym_split_repeat1,
    ACTIONS(251), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
  [3730] = 6,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_COLON,
    ACTIONS(361), 1,
      anon_sym_TILDE,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      aux_sym_split_repeat1,
  [3749] = 1,
    ACTIONS(351), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3758] = 5,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_COLON,
    STATE(109), 1,
      aux_sym_split_repeat1,
    ACTIONS(271), 2,
      anon_sym_SEMI,
      anon_sym_TILDE,
  [3775] = 1,
    ACTIONS(333), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3783] = 5,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_COLON,
    ACTIONS(361), 1,
      anon_sym_TILDE,
    STATE(88), 1,
      aux_sym_split_repeat1,
  [3799] = 5,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      sym__id,
    STATE(170), 1,
      sym_identifier,
    STATE(194), 1,
      sym_string,
  [3815] = 5,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_COLON,
    ACTIONS(361), 1,
      anon_sym_TILDE,
    STATE(99), 1,
      aux_sym_split_repeat1,
  [3831] = 1,
    ACTIONS(292), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3839] = 1,
    ACTIONS(329), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3847] = 1,
    ACTIONS(347), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3855] = 5,
    ACTIONS(255), 1,
      anon_sym_LT_COLON,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_COLON,
    ACTIONS(361), 1,
      anon_sym_TILDE,
    STATE(106), 1,
      aux_sym_split_repeat1,
  [3871] = 1,
    ACTIONS(300), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3879] = 1,
    ACTIONS(337), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3887] = 1,
    ACTIONS(325), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3895] = 1,
    ACTIONS(315), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3903] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(369), 1,
      sym__id,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      sym_identifier,
  [3916] = 4,
    ACTIONS(373), 1,
      anon_sym_DQUOTE,
    ACTIONS(375), 1,
      aux_sym_string_token1,
    ACTIONS(377), 1,
      sym_escape_sequence,
    STATE(142), 1,
      aux_sym_string_repeat1,
  [3929] = 4,
    ACTIONS(379), 1,
      anon_sym_DQUOTE,
    ACTIONS(381), 1,
      aux_sym_string_token1,
    ACTIONS(383), 1,
      sym_escape_sequence,
    STATE(144), 1,
      aux_sym_string_repeat1,
  [3942] = 3,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(385), 1,
      anon_sym_DOT,
    ACTIONS(100), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3953] = 4,
    ACTIONS(381), 1,
      aux_sym_string_token1,
    ACTIONS(383), 1,
      sym_escape_sequence,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    STATE(144), 1,
      aux_sym_string_repeat1,
  [3966] = 4,
    ACTIONS(389), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      aux_sym_string_token1,
    ACTIONS(393), 1,
      sym_escape_sequence,
    STATE(140), 1,
      aux_sym_string_repeat1,
  [3979] = 4,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 1,
      aux_sym_string_token1,
    ACTIONS(400), 1,
      sym_escape_sequence,
    STATE(144), 1,
      aux_sym_string_repeat1,
  [3992] = 3,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
  [4002] = 3,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_definition_repeat1,
  [4012] = 3,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(413), 1,
      sym__id,
    STATE(101), 1,
      sym_identifier,
  [4022] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(369), 1,
      sym__id,
    STATE(180), 1,
      sym_identifier,
  [4032] = 3,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(413), 1,
      sym__id,
    STATE(32), 1,
      sym_identifier,
  [4042] = 3,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_definition_repeat1,
  [4052] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(369), 1,
      sym__id,
    STATE(34), 1,
      sym_identifier,
  [4062] = 3,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
  [4072] = 3,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_function_call_repeat1,
  [4082] = 3,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
  [4092] = 3,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_function_call_repeat1,
  [4102] = 3,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
  [4112] = 3,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_function_call_repeat1,
  [4122] = 3,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      aux_sym_function_call_repeat1,
  [4132] = 3,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(435), 1,
      sym__id,
    STATE(34), 1,
      sym_identifier,
  [4142] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(369), 1,
      sym__id,
    STATE(172), 1,
      sym_identifier,
  [4152] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(369), 1,
      sym__id,
    STATE(128), 1,
      sym_identifier,
  [4162] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(369), 1,
      sym__id,
    STATE(202), 1,
      sym_identifier,
  [4172] = 3,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_function_call_repeat1,
  [4182] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(369), 1,
      sym__id,
    STATE(82), 1,
      sym_identifier,
  [4192] = 3,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_definition_repeat1,
  [4202] = 1,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4207] = 2,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(443), 1,
      anon_sym_COLON,
  [4214] = 2,
    ACTIONS(443), 1,
      anon_sym_COLON,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
  [4221] = 1,
    ACTIONS(447), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4226] = 2,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(178), 1,
      sym_string,
  [4233] = 2,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    ACTIONS(451), 1,
      anon_sym_EQ,
  [4240] = 1,
    ACTIONS(453), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4245] = 2,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_string,
  [4252] = 2,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
  [4259] = 2,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
  [4266] = 1,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
  [4270] = 1,
    ACTIONS(465), 1,
      anon_sym_SEMI,
  [4274] = 1,
    ACTIONS(467), 1,
      anon_sym_SEMI,
  [4278] = 1,
    ACTIONS(469), 1,
      anon_sym_EQ,
  [4282] = 1,
    ACTIONS(471), 1,
      anon_sym_COMMA,
  [4286] = 1,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
  [4290] = 1,
    ACTIONS(475), 1,
      sym__id,
  [4294] = 1,
    ACTIONS(477), 1,
      anon_sym_COLON,
  [4298] = 1,
    ACTIONS(479), 1,
      anon_sym_COMMA,
  [4302] = 1,
    ACTIONS(481), 1,
      sym__id,
  [4306] = 1,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
  [4310] = 1,
    ACTIONS(485), 1,
      sym__id,
  [4314] = 1,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
  [4318] = 1,
    ACTIONS(489), 1,
      anon_sym_EQ,
  [4322] = 1,
    ACTIONS(491), 1,
      anon_sym_SEMI,
  [4326] = 1,
    ACTIONS(493), 1,
      anon_sym_COMMA,
  [4330] = 1,
    ACTIONS(495), 1,
      sym__id,
  [4334] = 1,
    ACTIONS(497), 1,
      sym__id,
  [4338] = 1,
    ACTIONS(499), 1,
      anon_sym_SEMI,
  [4342] = 1,
    ACTIONS(501), 1,
      ts_builtin_sym_end,
  [4346] = 1,
    ACTIONS(503), 1,
      sym__id,
  [4350] = 1,
    ACTIONS(505), 1,
      anon_sym_COLON,
  [4354] = 1,
    ACTIONS(507), 1,
      anon_sym_EQ,
  [4358] = 1,
    ACTIONS(509), 1,
      anon_sym_COLON,
  [4362] = 1,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
  [4366] = 1,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
  [4370] = 1,
    ACTIONS(515), 1,
      anon_sym_COMMA,
  [4374] = 1,
    ACTIONS(517), 1,
      anon_sym_SEMI,
  [4378] = 1,
    ACTIONS(443), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 246,
  [SMALL_STATE(6)] = 328,
  [SMALL_STATE(7)] = 410,
  [SMALL_STATE(8)] = 492,
  [SMALL_STATE(9)] = 574,
  [SMALL_STATE(10)] = 656,
  [SMALL_STATE(11)] = 738,
  [SMALL_STATE(12)] = 820,
  [SMALL_STATE(13)] = 902,
  [SMALL_STATE(14)] = 984,
  [SMALL_STATE(15)] = 1066,
  [SMALL_STATE(16)] = 1148,
  [SMALL_STATE(17)] = 1230,
  [SMALL_STATE(18)] = 1312,
  [SMALL_STATE(19)] = 1351,
  [SMALL_STATE(20)] = 1390,
  [SMALL_STATE(21)] = 1429,
  [SMALL_STATE(22)] = 1468,
  [SMALL_STATE(23)] = 1507,
  [SMALL_STATE(24)] = 1541,
  [SMALL_STATE(25)] = 1578,
  [SMALL_STATE(26)] = 1615,
  [SMALL_STATE(27)] = 1652,
  [SMALL_STATE(28)] = 1689,
  [SMALL_STATE(29)] = 1732,
  [SMALL_STATE(30)] = 1769,
  [SMALL_STATE(31)] = 1806,
  [SMALL_STATE(32)] = 1838,
  [SMALL_STATE(33)] = 1872,
  [SMALL_STATE(34)] = 1903,
  [SMALL_STATE(35)] = 1936,
  [SMALL_STATE(36)] = 1975,
  [SMALL_STATE(37)] = 2010,
  [SMALL_STATE(38)] = 2041,
  [SMALL_STATE(39)] = 2072,
  [SMALL_STATE(40)] = 2102,
  [SMALL_STATE(41)] = 2132,
  [SMALL_STATE(42)] = 2170,
  [SMALL_STATE(43)] = 2200,
  [SMALL_STATE(44)] = 2249,
  [SMALL_STATE(45)] = 2298,
  [SMALL_STATE(46)] = 2324,
  [SMALL_STATE(47)] = 2350,
  [SMALL_STATE(48)] = 2376,
  [SMALL_STATE(49)] = 2402,
  [SMALL_STATE(50)] = 2437,
  [SMALL_STATE(51)] = 2460,
  [SMALL_STATE(52)] = 2483,
  [SMALL_STATE(53)] = 2506,
  [SMALL_STATE(54)] = 2528,
  [SMALL_STATE(55)] = 2560,
  [SMALL_STATE(56)] = 2592,
  [SMALL_STATE(57)] = 2614,
  [SMALL_STATE(58)] = 2636,
  [SMALL_STATE(59)] = 2668,
  [SMALL_STATE(60)] = 2690,
  [SMALL_STATE(61)] = 2722,
  [SMALL_STATE(62)] = 2744,
  [SMALL_STATE(63)] = 2761,
  [SMALL_STATE(64)] = 2790,
  [SMALL_STATE(65)] = 2806,
  [SMALL_STATE(66)] = 2822,
  [SMALL_STATE(67)] = 2838,
  [SMALL_STATE(68)] = 2854,
  [SMALL_STATE(69)] = 2879,
  [SMALL_STATE(70)] = 2898,
  [SMALL_STATE(71)] = 2923,
  [SMALL_STATE(72)] = 2948,
  [SMALL_STATE(73)] = 2973,
  [SMALL_STATE(74)] = 2998,
  [SMALL_STATE(75)] = 3023,
  [SMALL_STATE(76)] = 3048,
  [SMALL_STATE(77)] = 3073,
  [SMALL_STATE(78)] = 3091,
  [SMALL_STATE(79)] = 3109,
  [SMALL_STATE(80)] = 3123,
  [SMALL_STATE(81)] = 3140,
  [SMALL_STATE(82)] = 3157,
  [SMALL_STATE(83)] = 3168,
  [SMALL_STATE(84)] = 3189,
  [SMALL_STATE(85)] = 3206,
  [SMALL_STATE(86)] = 3225,
  [SMALL_STATE(87)] = 3238,
  [SMALL_STATE(88)] = 3255,
  [SMALL_STATE(89)] = 3272,
  [SMALL_STATE(90)] = 3287,
  [SMALL_STATE(91)] = 3308,
  [SMALL_STATE(92)] = 3320,
  [SMALL_STATE(93)] = 3332,
  [SMALL_STATE(94)] = 3344,
  [SMALL_STATE(95)] = 3358,
  [SMALL_STATE(96)] = 3370,
  [SMALL_STATE(97)] = 3382,
  [SMALL_STATE(98)] = 3394,
  [SMALL_STATE(99)] = 3406,
  [SMALL_STATE(100)] = 3424,
  [SMALL_STATE(101)] = 3436,
  [SMALL_STATE(102)] = 3448,
  [SMALL_STATE(103)] = 3460,
  [SMALL_STATE(104)] = 3472,
  [SMALL_STATE(105)] = 3484,
  [SMALL_STATE(106)] = 3496,
  [SMALL_STATE(107)] = 3514,
  [SMALL_STATE(108)] = 3526,
  [SMALL_STATE(109)] = 3538,
  [SMALL_STATE(110)] = 3554,
  [SMALL_STATE(111)] = 3568,
  [SMALL_STATE(112)] = 3577,
  [SMALL_STATE(113)] = 3586,
  [SMALL_STATE(114)] = 3597,
  [SMALL_STATE(115)] = 3606,
  [SMALL_STATE(116)] = 3625,
  [SMALL_STATE(117)] = 3634,
  [SMALL_STATE(118)] = 3653,
  [SMALL_STATE(119)] = 3672,
  [SMALL_STATE(120)] = 3691,
  [SMALL_STATE(121)] = 3706,
  [SMALL_STATE(122)] = 3715,
  [SMALL_STATE(123)] = 3730,
  [SMALL_STATE(124)] = 3749,
  [SMALL_STATE(125)] = 3758,
  [SMALL_STATE(126)] = 3775,
  [SMALL_STATE(127)] = 3783,
  [SMALL_STATE(128)] = 3799,
  [SMALL_STATE(129)] = 3815,
  [SMALL_STATE(130)] = 3831,
  [SMALL_STATE(131)] = 3839,
  [SMALL_STATE(132)] = 3847,
  [SMALL_STATE(133)] = 3855,
  [SMALL_STATE(134)] = 3871,
  [SMALL_STATE(135)] = 3879,
  [SMALL_STATE(136)] = 3887,
  [SMALL_STATE(137)] = 3895,
  [SMALL_STATE(138)] = 3903,
  [SMALL_STATE(139)] = 3916,
  [SMALL_STATE(140)] = 3929,
  [SMALL_STATE(141)] = 3942,
  [SMALL_STATE(142)] = 3953,
  [SMALL_STATE(143)] = 3966,
  [SMALL_STATE(144)] = 3979,
  [SMALL_STATE(145)] = 3992,
  [SMALL_STATE(146)] = 4002,
  [SMALL_STATE(147)] = 4012,
  [SMALL_STATE(148)] = 4022,
  [SMALL_STATE(149)] = 4032,
  [SMALL_STATE(150)] = 4042,
  [SMALL_STATE(151)] = 4052,
  [SMALL_STATE(152)] = 4062,
  [SMALL_STATE(153)] = 4072,
  [SMALL_STATE(154)] = 4082,
  [SMALL_STATE(155)] = 4092,
  [SMALL_STATE(156)] = 4102,
  [SMALL_STATE(157)] = 4112,
  [SMALL_STATE(158)] = 4122,
  [SMALL_STATE(159)] = 4132,
  [SMALL_STATE(160)] = 4142,
  [SMALL_STATE(161)] = 4152,
  [SMALL_STATE(162)] = 4162,
  [SMALL_STATE(163)] = 4172,
  [SMALL_STATE(164)] = 4182,
  [SMALL_STATE(165)] = 4192,
  [SMALL_STATE(166)] = 4202,
  [SMALL_STATE(167)] = 4207,
  [SMALL_STATE(168)] = 4214,
  [SMALL_STATE(169)] = 4221,
  [SMALL_STATE(170)] = 4226,
  [SMALL_STATE(171)] = 4233,
  [SMALL_STATE(172)] = 4240,
  [SMALL_STATE(173)] = 4245,
  [SMALL_STATE(174)] = 4252,
  [SMALL_STATE(175)] = 4259,
  [SMALL_STATE(176)] = 4266,
  [SMALL_STATE(177)] = 4270,
  [SMALL_STATE(178)] = 4274,
  [SMALL_STATE(179)] = 4278,
  [SMALL_STATE(180)] = 4282,
  [SMALL_STATE(181)] = 4286,
  [SMALL_STATE(182)] = 4290,
  [SMALL_STATE(183)] = 4294,
  [SMALL_STATE(184)] = 4298,
  [SMALL_STATE(185)] = 4302,
  [SMALL_STATE(186)] = 4306,
  [SMALL_STATE(187)] = 4310,
  [SMALL_STATE(188)] = 4314,
  [SMALL_STATE(189)] = 4318,
  [SMALL_STATE(190)] = 4322,
  [SMALL_STATE(191)] = 4326,
  [SMALL_STATE(192)] = 4330,
  [SMALL_STATE(193)] = 4334,
  [SMALL_STATE(194)] = 4338,
  [SMALL_STATE(195)] = 4342,
  [SMALL_STATE(196)] = 4346,
  [SMALL_STATE(197)] = 4350,
  [SMALL_STATE(198)] = 4354,
  [SMALL_STATE(199)] = 4358,
  [SMALL_STATE(200)] = 4362,
  [SMALL_STATE(201)] = 4366,
  [SMALL_STATE(202)] = 4370,
  [SMALL_STATE(203)] = 4374,
  [SMALL_STATE(204)] = 4378,
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
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(193),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(182),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(51),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(51),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(187),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(86),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(77),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 4, .production_id = 11),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 7),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 7),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2), SHIFT_REPEAT(10),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_split_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 4, .production_id = 10),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split, 4, .production_id = 10),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 6, .production_id = 14),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 7),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 7),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 13),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 13),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(94),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 13),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 13),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 5),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 8),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 8),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 8),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 8),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 13),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 13),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 5, .production_id = 5),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 7, .production_id = 12),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 6, .production_id = 9),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(144),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(144),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(63),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(160),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2, .production_id = 6),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 4),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_metadata, 4, .production_id = 4),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [501] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
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
