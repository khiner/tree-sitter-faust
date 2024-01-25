#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 196
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 6
#define TOKEN_COUNT 61
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
  sym_string = 57,
  anon_sym_COLON_COLON = 58,
  sym__id = 59,
  sym_comment = 60,
  sym_source_file = 61,
  sym__statement = 62,
  sym_variant = 63,
  sym_definition = 64,
  sym_function_call = 65,
  sym_argument = 66,
  sym__expression = 67,
  sym_iteration = 68,
  sym_binary_operation = 69,
  sym_core = 70,
  sym_infix = 71,
  sym_prefix = 72,
  sym_partial = 73,
  sym_one_sample_delay = 74,
  sym_binary_operator = 75,
  sym__object = 76,
  sym__number = 77,
  sym_documentation = 78,
  sym__doc_content = 79,
  sym__special_doc_tag = 80,
  sym_file_import = 81,
  sym_global_metadata = 82,
  sym_definition_metadata = 83,
  sym__binary_composition = 84,
  sym_recursive = 85,
  sym_sequential = 86,
  sym_split = 87,
  sym_merge = 88,
  sym_parallel = 89,
  sym_variable = 90,
  sym_identifier = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym__statement_repeat1 = 93,
  aux_sym_definition_repeat1 = 94,
  aux_sym_function_call_repeat1 = 95,
  aux_sym_one_sample_delay_repeat1 = 96,
  aux_sym_documentation_repeat1 = 97,
  aux_sym_split_repeat1 = 98,
  aux_sym_identifier_repeat1 = 99,
  alias_sym_current_iteration = 100,
  alias_sym_function_name = 101,
  alias_sym_metadata_key = 102,
  alias_sym_module_name = 103,
  alias_sym_numiter = 104,
  alias_sym_parameter = 105,
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
  [sym_string] = "string",
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
  [sym_variable] = "variable",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__statement_repeat1] = "_statement_repeat1",
  [aux_sym_definition_repeat1] = "definition_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_one_sample_delay_repeat1] = "one_sample_delay_repeat1",
  [aux_sym_documentation_repeat1] = "documentation_repeat1",
  [aux_sym_split_repeat1] = "split_repeat1",
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
  [sym_string] = sym_string,
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
  [sym_variable] = sym_variable,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__statement_repeat1] = aux_sym__statement_repeat1,
  [aux_sym_definition_repeat1] = aux_sym_definition_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_one_sample_delay_repeat1] = aux_sym_one_sample_delay_repeat1,
  [aux_sym_documentation_repeat1] = aux_sym_documentation_repeat1,
  [aux_sym_split_repeat1] = aux_sym_split_repeat1,
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
  [sym_string] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 3,
  [15] = 15,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 22,
  [26] = 26,
  [27] = 18,
  [28] = 28,
  [29] = 19,
  [30] = 20,
  [31] = 31,
  [32] = 23,
  [33] = 33,
  [34] = 28,
  [35] = 26,
  [36] = 31,
  [37] = 33,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 41,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 20,
  [50] = 18,
  [51] = 19,
  [52] = 22,
  [53] = 21,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 23,
  [58] = 56,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 67,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 70,
  [75] = 68,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 65,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 86,
  [90] = 72,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 66,
  [95] = 95,
  [96] = 96,
  [97] = 91,
  [98] = 98,
  [99] = 79,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 77,
  [108] = 81,
  [109] = 109,
  [110] = 106,
  [111] = 105,
  [112] = 96,
  [113] = 113,
  [114] = 76,
  [115] = 84,
  [116] = 102,
  [117] = 95,
  [118] = 118,
  [119] = 98,
  [120] = 120,
  [121] = 88,
  [122] = 93,
  [123] = 101,
  [124] = 92,
  [125] = 100,
  [126] = 104,
  [127] = 127,
  [128] = 95,
  [129] = 129,
  [130] = 87,
  [131] = 103,
  [132] = 129,
  [133] = 133,
  [134] = 26,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 136,
  [144] = 138,
  [145] = 138,
  [146] = 142,
  [147] = 147,
  [148] = 140,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 141,
  [153] = 151,
  [154] = 154,
  [155] = 155,
  [156] = 137,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 157,
  [161] = 158,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 167,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 169,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 179,
  [182] = 182,
  [183] = 166,
  [184] = 167,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 177,
  [189] = 166,
  [190] = 180,
  [191] = 191,
  [192] = 185,
  [193] = 171,
  [194] = 194,
  [195] = 195,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      if (lookahead == '!') ADVANCE(116);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(124);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(139);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(110);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == '_') ADVANCE(115);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 'q') ADVANCE(250);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == 'x') ADVANCE(223);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '~') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(116);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == '_') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == 'x') ADVANCE(223);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(74);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '~') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(74);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '~') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(74);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '~') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '\'') ADVANCE(121);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(140);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(74);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '~') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == '<') ADVANCE(141);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '@') ADVANCE(147);
      if (lookahead == '^') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(74);
      if (lookahead == '|') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == '~') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(96);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(107);
      if (lookahead == ',') ADVANCE(106);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(100);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '~') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(256);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(255);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(174);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(171);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(145);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(156);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(164);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(166);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(155);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 47:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 78:
      if (lookahead == 'q') ADVANCE(92);
      END_STATE();
    case 79:
      if (lookahead == 'q') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 94:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 96:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 97:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(256);
      if (lookahead == '\r') ADVANCE(257);
      END_STATE();
    case 98:
      if (eof) ADVANCE(99);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '<') ADVANCE(67);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'q') ADVANCE(250);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(146);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(174);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '>') ADVANCE(172);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(172);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_one_sample_delay_operator);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(256);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == ':') ADVANCE(171);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(171);
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
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'u') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(97);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 98},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 98},
  [40] = {.lex_state = 98},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 98},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 98},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 98},
  [62] = {.lex_state = 98},
  [63] = {.lex_state = 98},
  [64] = {.lex_state = 98},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 98},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 8},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 8},
  [167] = {.lex_state = 8},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 5},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 5},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
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
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym__id] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(187),
    [sym__statement] = STATE(40),
    [sym_variant] = STATE(45),
    [sym_definition] = STATE(186),
    [sym_documentation] = STATE(40),
    [sym_file_import] = STATE(186),
    [sym_global_metadata] = STATE(186),
    [sym_definition_metadata] = STATE(186),
    [sym_variable] = STATE(162),
    [sym_identifier] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(40),
    [aux_sym__statement_repeat1] = STATE(45),
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
      sym_string,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(35), 1,
      sym_identifier,
    STATE(38), 1,
      sym__object,
    STATE(185), 1,
      sym_binary_operator,
    ACTIONS(23), 2,
      sym_wire,
      sym_cut,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(37), 2,
      sym__number,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(124), 4,
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
  [81] = 15,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_string,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(26), 1,
      sym_identifier,
    STATE(28), 1,
      sym__object,
    STATE(192), 1,
      sym_binary_operator,
    ACTIONS(41), 2,
      sym_wire,
      sym_cut,
    ACTIONS(43), 2,
      sym_int,
      sym_real,
    STATE(33), 2,
      sym__number,
      sym_variable,
    ACTIONS(39), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(92), 4,
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
    STATE(81), 11,
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
  [162] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(35), 1,
      sym_identifier,
    STATE(38), 1,
      sym__object,
    STATE(185), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(51), 2,
      sym_wire,
      sym_cut,
    STATE(37), 2,
      sym__number,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(124), 4,
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
    STATE(132), 11,
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
  [243] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(34), 1,
      sym__object,
    STATE(35), 1,
      sym_identifier,
    STATE(185), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(53), 2,
      sym_wire,
      sym_cut,
    STATE(37), 2,
      sym__number,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(124), 4,
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
    STATE(113), 11,
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
  [324] = 15,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_string,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(26), 1,
      sym_identifier,
    STATE(28), 1,
      sym__object,
    STATE(192), 1,
      sym_binary_operator,
    ACTIONS(43), 2,
      sym_int,
      sym_real,
    ACTIONS(55), 2,
      sym_wire,
      sym_cut,
    STATE(33), 2,
      sym__number,
      sym_variable,
    ACTIONS(39), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(92), 4,
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
  [405] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(34), 1,
      sym__object,
    STATE(35), 1,
      sym_identifier,
    STATE(185), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(57), 2,
      sym_wire,
      sym_cut,
    STATE(37), 2,
      sym__number,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(124), 4,
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
  [486] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(34), 1,
      sym__object,
    STATE(35), 1,
      sym_identifier,
    STATE(185), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(59), 2,
      sym_wire,
      sym_cut,
    STATE(37), 2,
      sym__number,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(124), 4,
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
    STATE(114), 11,
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
  [567] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(34), 1,
      sym__object,
    STATE(35), 1,
      sym_identifier,
    STATE(185), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(61), 2,
      sym_wire,
      sym_cut,
    STATE(37), 2,
      sym__number,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(124), 4,
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
  [648] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(34), 1,
      sym__object,
    STATE(35), 1,
      sym_identifier,
    STATE(185), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(63), 2,
      sym_wire,
      sym_cut,
    STATE(37), 2,
      sym__number,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(124), 4,
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
  [729] = 15,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_string,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(26), 1,
      sym_identifier,
    STATE(28), 1,
      sym__object,
    STATE(192), 1,
      sym_binary_operator,
    ACTIONS(43), 2,
      sym_int,
      sym_real,
    ACTIONS(65), 2,
      sym_wire,
      sym_cut,
    STATE(33), 2,
      sym__number,
      sym_variable,
    ACTIONS(39), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(92), 4,
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
    STATE(76), 11,
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
  [810] = 15,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_string,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(26), 1,
      sym_identifier,
    STATE(28), 1,
      sym__object,
    STATE(192), 1,
      sym_binary_operator,
    ACTIONS(43), 2,
      sym_int,
      sym_real,
    ACTIONS(67), 2,
      sym_wire,
      sym_cut,
    STATE(33), 2,
      sym__number,
      sym_variable,
    ACTIONS(39), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(92), 4,
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
    STATE(82), 11,
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
  [891] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(34), 1,
      sym__object,
    STATE(35), 1,
      sym_identifier,
    STATE(185), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(69), 2,
      sym_wire,
      sym_cut,
    STATE(37), 2,
      sym__number,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(124), 4,
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
  [972] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(34), 1,
      sym__object,
    STATE(35), 1,
      sym_identifier,
    STATE(185), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(71), 2,
      sym_wire,
      sym_cut,
    STATE(37), 2,
      sym__number,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(124), 4,
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
  [1053] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(34), 1,
      sym__object,
    STATE(35), 1,
      sym_identifier,
    STATE(185), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(73), 2,
      sym_wire,
      sym_cut,
    STATE(37), 2,
      sym__number,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(124), 4,
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
  [1134] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(34), 1,
      sym__object,
    STATE(35), 1,
      sym_identifier,
    STATE(185), 1,
      sym_binary_operator,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    ACTIONS(75), 2,
      sym_wire,
      sym_cut,
    STATE(37), 2,
      sym__number,
      sym_variable,
    ACTIONS(21), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(124), 4,
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
    STATE(109), 11,
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
  [1215] = 15,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_string,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(26), 1,
      sym_identifier,
    STATE(28), 1,
      sym__object,
    STATE(192), 1,
      sym_binary_operator,
    ACTIONS(43), 2,
      sym_int,
      sym_real,
    ACTIONS(77), 2,
      sym_wire,
      sym_cut,
    STATE(33), 2,
      sym__number,
      sym_variable,
    ACTIONS(39), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(92), 4,
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
    STATE(77), 11,
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
  [1296] = 4,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    STATE(20), 1,
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
  [1335] = 4,
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
  [1374] = 4,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    STATE(22), 1,
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
  [1413] = 4,
    ACTIONS(83), 1,
      anon_sym_COLON_COLON,
    STATE(22), 1,
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
  [1452] = 4,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    STATE(22), 1,
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
  [1491] = 2,
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
  [1525] = 4,
    ACTIONS(100), 1,
      anon_sym_COLON_COLON,
    STATE(25), 1,
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
  [1562] = 4,
    ACTIONS(102), 1,
      anon_sym_COLON_COLON,
    STATE(25), 1,
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
  [1599] = 4,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 3,
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
  [1636] = 4,
    ACTIONS(100), 1,
      anon_sym_COLON_COLON,
    STATE(30), 1,
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
  [1673] = 7,
    ACTIONS(115), 1,
      anon_sym_COLON,
    ACTIONS(117), 1,
      sym_one_sample_delay_operator,
    STATE(72), 1,
      aux_sym_one_sample_delay_repeat1,
    STATE(73), 1,
      sym_binary_operator,
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
  [1716] = 4,
    ACTIONS(100), 1,
      anon_sym_COLON_COLON,
    STATE(24), 1,
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
  [1753] = 4,
    ACTIONS(100), 1,
      anon_sym_COLON_COLON,
    STATE(25), 1,
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
  [1790] = 3,
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
  [1824] = 2,
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
  [1856] = 2,
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
  [1887] = 6,
    ACTIONS(129), 1,
      sym_one_sample_delay_operator,
    STATE(71), 1,
      sym_binary_operator,
    STATE(90), 1,
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
  [1926] = 4,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      anon_sym_DOT,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 22,
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
  [1961] = 3,
    ACTIONS(135), 1,
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
  [1994] = 2,
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
  [2024] = 6,
    ACTIONS(129), 1,
      sym_one_sample_delay_operator,
    STATE(71), 1,
      sym_binary_operator,
    STATE(90), 1,
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
  [2062] = 13,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(145), 1,
      anon_sym_import,
    ACTIONS(148), 1,
      anon_sym_declare,
    ACTIONS(151), 1,
      anon_sym_COLON_COLON,
    ACTIONS(154), 1,
      sym__id,
    ACTIONS(157), 1,
      sym_comment,
    STATE(65), 1,
      sym_identifier,
    STATE(162), 1,
      sym_variable,
    STATE(45), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(39), 3,
      sym__statement,
      sym_documentation,
      aux_sym_source_file_repeat1,
    ACTIONS(139), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(186), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [2111] = 13,
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
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      sym_comment,
    STATE(65), 1,
      sym_identifier,
    STATE(162), 1,
      sym_variable,
    STATE(45), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(39), 3,
      sym__statement,
      sym_documentation,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(186), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [2160] = 3,
    STATE(103), 1,
      sym_binary_operator,
    ACTIONS(166), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(164), 16,
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
  [2186] = 3,
    STATE(123), 1,
      sym_binary_operator,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(168), 16,
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
  [2212] = 3,
    STATE(101), 1,
      sym_binary_operator,
    ACTIONS(166), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(164), 16,
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
  [2238] = 3,
    STATE(131), 1,
      sym_binary_operator,
    ACTIONS(170), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(168), 16,
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
  [2264] = 9,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(65), 1,
      sym_identifier,
    STATE(162), 1,
      sym_variable,
    STATE(64), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(5), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(165), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [2299] = 4,
    ACTIONS(172), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(174), 1,
      sym__doc_char,
    STATE(47), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(176), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2322] = 4,
    ACTIONS(178), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(180), 1,
      sym__doc_char,
    STATE(47), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(183), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2345] = 4,
    ACTIONS(186), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(188), 1,
      sym__doc_char,
    STATE(46), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(190), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2368] = 4,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(192), 1,
      anon_sym_COLON_COLON,
    STATE(52), 1,
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
      sym_string,
      sym__id,
  [2390] = 4,
    ACTIONS(81), 1,
      anon_sym_COLON,
    ACTIONS(192), 1,
      anon_sym_COLON_COLON,
    STATE(49), 1,
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
      sym_string,
      sym__id,
  [2412] = 4,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(192), 1,
      anon_sym_COLON_COLON,
    STATE(53), 1,
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
      sym_string,
      sym__id,
  [2434] = 4,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(194), 1,
      anon_sym_COLON_COLON,
    STATE(52), 1,
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
      sym_string,
      sym__id,
  [2456] = 4,
    ACTIONS(91), 1,
      anon_sym_COLON,
    ACTIONS(192), 1,
      anon_sym_COLON_COLON,
    STATE(52), 1,
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
      sym_string,
      sym__id,
  [2478] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_identifier,
    STATE(151), 1,
      sym_argument,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(37), 2,
      sym__number,
      sym_variable,
    STATE(164), 2,
      sym_function_call,
      sym__object,
  [2509] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_identifier,
    STATE(153), 1,
      sym_argument,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(37), 2,
      sym__number,
      sym_variable,
    STATE(164), 2,
      sym_function_call,
      sym__object,
  [2540] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_identifier,
    STATE(152), 1,
      sym_argument,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(37), 2,
      sym__number,
      sym_variable,
    STATE(164), 2,
      sym_function_call,
      sym__object,
  [2571] = 2,
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
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [2588] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      sym_string,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_identifier,
    STATE(141), 1,
      sym_argument,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(37), 2,
      sym__number,
      sym_variable,
    STATE(164), 2,
      sym_function_call,
      sym__object,
  [2619] = 2,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(207), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2635] = 8,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      sym_string,
    STATE(134), 1,
      sym_identifier,
    STATE(159), 1,
      sym_argument,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(37), 2,
      sym__number,
      sym_variable,
    STATE(164), 2,
      sym_function_call,
      sym__object,
  [2663] = 2,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(211), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2679] = 2,
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
  [2695] = 2,
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
  [2711] = 4,
    ACTIONS(226), 1,
      anon_sym_COLON_COLON,
    STATE(64), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(224), 3,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
    ACTIONS(221), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2730] = 2,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(105), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [2744] = 4,
    ACTIONS(232), 1,
      anon_sym_COLON,
    ACTIONS(234), 1,
      sym_one_sample_delay_operator,
    STATE(66), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(230), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2762] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      sym_string,
    STATE(65), 1,
      sym_identifier,
    STATE(179), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(37), 2,
      sym__number,
      sym_variable,
  [2786] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      sym_string,
    STATE(65), 1,
      sym_identifier,
    STATE(157), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(37), 2,
      sym__number,
      sym_variable,
  [2810] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      sym_string,
    STATE(65), 1,
      sym_identifier,
    STATE(181), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(37), 2,
      sym__number,
      sym_variable,
  [2834] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      sym_string,
    STATE(65), 1,
      sym_identifier,
    STATE(175), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(37), 2,
      sym__number,
      sym_variable,
  [2858] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      sym_string,
    STATE(65), 1,
      sym_identifier,
    STATE(122), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(37), 2,
      sym__number,
      sym_variable,
  [2882] = 4,
    ACTIONS(239), 1,
      anon_sym_COLON,
    ACTIONS(241), 1,
      sym_one_sample_delay_operator,
    STATE(66), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(237), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2900] = 7,
    ACTIONS(45), 1,
      sym_string,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(83), 1,
      sym_identifier,
    STATE(93), 1,
      sym__object,
    ACTIONS(43), 2,
      sym_int,
      sym_real,
    STATE(33), 2,
      sym__number,
      sym_variable,
  [2924] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      sym_string,
    STATE(65), 1,
      sym_identifier,
    STATE(169), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(37), 2,
      sym__number,
      sym_variable,
  [2948] = 7,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(31), 1,
      sym_string,
    STATE(65), 1,
      sym_identifier,
    STATE(160), 1,
      sym__object,
    ACTIONS(29), 2,
      sym_int,
      sym_real,
    STATE(37), 2,
      sym__number,
      sym_variable,
  [2972] = 6,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(249), 1,
      anon_sym_TILDE,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    STATE(86), 1,
      aux_sym_split_repeat1,
    ACTIONS(243), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [2993] = 4,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    STATE(86), 1,
      aux_sym_split_repeat1,
    ACTIONS(253), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [3010] = 2,
    ACTIONS(257), 1,
      anon_sym_COLON_COLON,
    ACTIONS(255), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [3023] = 1,
    ACTIONS(119), 8,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3034] = 4,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_COLON,
    STATE(80), 1,
      aux_sym_split_repeat1,
    ACTIONS(259), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3051] = 5,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    STATE(86), 1,
      aux_sym_split_repeat1,
    ACTIONS(266), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [3070] = 6,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(249), 1,
      anon_sym_TILDE,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    STATE(86), 1,
      aux_sym_split_repeat1,
    ACTIONS(259), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COLON_GT,
  [3091] = 3,
    ACTIONS(111), 1,
      anon_sym_COLON,
    ACTIONS(268), 1,
      anon_sym_DOT,
    ACTIONS(105), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3106] = 4,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    STATE(86), 1,
      aux_sym_split_repeat1,
    ACTIONS(270), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_COLON_GT,
  [3123] = 4,
    ACTIONS(274), 1,
      anon_sym_COLON,
    ACTIONS(276), 1,
      anon_sym_COLON_GT,
    STATE(80), 1,
      aux_sym_split_repeat1,
    ACTIONS(272), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3140] = 4,
    ACTIONS(280), 1,
      anon_sym_COLON,
    ACTIONS(282), 1,
      anon_sym_COLON_GT,
    STATE(80), 1,
      aux_sym_split_repeat1,
    ACTIONS(278), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3157] = 2,
    ACTIONS(286), 1,
      anon_sym_COLON,
    ACTIONS(284), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3169] = 2,
    ACTIONS(290), 1,
      anon_sym_COLON,
    ACTIONS(288), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3181] = 4,
    ACTIONS(276), 1,
      anon_sym_COLON_GT,
    ACTIONS(280), 1,
      anon_sym_COLON,
    STATE(80), 1,
      aux_sym_split_repeat1,
    ACTIONS(278), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3197] = 3,
    ACTIONS(292), 1,
      sym_one_sample_delay_operator,
    STATE(94), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(237), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3211] = 5,
    ACTIONS(276), 1,
      anon_sym_COLON_GT,
    ACTIONS(280), 1,
      anon_sym_COLON,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_split_repeat1,
    ACTIONS(278), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3229] = 2,
    ACTIONS(298), 1,
      anon_sym_COLON,
    ACTIONS(296), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3241] = 2,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(300), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3253] = 3,
    ACTIONS(304), 1,
      sym_one_sample_delay_operator,
    STATE(94), 1,
      aux_sym_one_sample_delay_repeat1,
    ACTIONS(230), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3267] = 2,
    ACTIONS(309), 1,
      anon_sym_COLON,
    ACTIONS(307), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3279] = 2,
    ACTIONS(313), 1,
      anon_sym_COLON,
    ACTIONS(311), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3291] = 5,
    ACTIONS(276), 1,
      anon_sym_COLON_GT,
    ACTIONS(280), 1,
      anon_sym_COLON,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      aux_sym_split_repeat1,
    ACTIONS(278), 3,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3309] = 2,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(317), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3321] = 2,
    ACTIONS(123), 1,
      anon_sym_COLON,
    ACTIONS(119), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3333] = 2,
    ACTIONS(323), 1,
      anon_sym_COLON,
    ACTIONS(321), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3345] = 2,
    ACTIONS(327), 1,
      anon_sym_COLON,
    ACTIONS(325), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3357] = 2,
    ACTIONS(331), 1,
      anon_sym_COLON,
    ACTIONS(329), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3369] = 2,
    ACTIONS(335), 1,
      anon_sym_COLON,
    ACTIONS(333), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3381] = 2,
    ACTIONS(339), 1,
      anon_sym_COLON,
    ACTIONS(337), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3393] = 2,
    ACTIONS(343), 1,
      anon_sym_COLON,
    ACTIONS(341), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3405] = 2,
    ACTIONS(347), 1,
      anon_sym_COLON,
    ACTIONS(345), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3417] = 4,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    ACTIONS(349), 1,
      anon_sym_COLON,
    STATE(89), 1,
      aux_sym_split_repeat1,
    ACTIONS(253), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
  [3432] = 5,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    ACTIONS(349), 1,
      anon_sym_COLON,
    STATE(89), 1,
      aux_sym_split_repeat1,
    ACTIONS(266), 2,
      anon_sym_SEMI,
      anon_sym_TILDE,
  [3449] = 6,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(351), 1,
      anon_sym_SEMI,
    ACTIONS(353), 1,
      anon_sym_TILDE,
    STATE(89), 1,
      aux_sym_split_repeat1,
  [3468] = 1,
    ACTIONS(345), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3477] = 1,
    ACTIONS(341), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3486] = 1,
    ACTIONS(311), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3495] = 6,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(353), 1,
      anon_sym_TILDE,
    ACTIONS(355), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_split_repeat1,
  [3514] = 6,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(353), 1,
      anon_sym_TILDE,
    STATE(89), 1,
      aux_sym_split_repeat1,
  [3533] = 4,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    ACTIONS(349), 1,
      anon_sym_COLON,
    STATE(89), 1,
      aux_sym_split_repeat1,
    ACTIONS(270), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_TILDE,
  [3548] = 1,
    ACTIONS(329), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3557] = 2,
    ACTIONS(307), 3,
      anon_sym_LPAREN,
      sym_string,
      anon_sym_COLON_COLON,
    ACTIONS(309), 3,
      sym_int,
      sym_real,
      sym__id,
  [3568] = 6,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(353), 1,
      anon_sym_TILDE,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_split_repeat1,
  [3587] = 1,
    ACTIONS(317), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3596] = 6,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(353), 1,
      anon_sym_TILDE,
    ACTIONS(359), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_split_repeat1,
  [3615] = 1,
    ACTIONS(288), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3624] = 1,
    ACTIONS(300), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3632] = 1,
    ACTIONS(325), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3640] = 1,
    ACTIONS(296), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3648] = 1,
    ACTIONS(321), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3656] = 1,
    ACTIONS(337), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3664] = 5,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(353), 1,
      anon_sym_TILDE,
    STATE(85), 1,
      aux_sym_split_repeat1,
  [3680] = 1,
    ACTIONS(307), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3688] = 5,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(353), 1,
      anon_sym_TILDE,
    STATE(97), 1,
      aux_sym_split_repeat1,
  [3704] = 1,
    ACTIONS(284), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3712] = 1,
    ACTIONS(333), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
  [3720] = 5,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_LT_COLON,
    ACTIONS(349), 1,
      anon_sym_COLON,
    ACTIONS(353), 1,
      anon_sym_TILDE,
    STATE(91), 1,
      aux_sym_split_repeat1,
  [3736] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 1,
      sym__id,
    STATE(154), 1,
      sym_identifier,
  [3749] = 3,
    ACTIONS(131), 1,
      anon_sym_LPAREN,
    ACTIONS(365), 1,
      anon_sym_DOT,
    ACTIONS(105), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3760] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(363), 1,
      sym__id,
    ACTIONS(367), 1,
      sym_string,
    STATE(174), 1,
      sym_identifier,
  [3773] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_function_call_repeat1,
  [3783] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_function_call_repeat1,
  [3793] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(363), 1,
      sym__id,
    STATE(36), 1,
      sym_identifier,
  [3803] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(363), 1,
      sym__id,
    STATE(163), 1,
      sym_identifier,
  [3813] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(363), 1,
      sym__id,
    STATE(171), 1,
      sym_identifier,
  [3823] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_function_call_repeat1,
  [3833] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(363), 1,
      sym__id,
    STATE(79), 1,
      sym_identifier,
  [3843] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_function_call_repeat1,
  [3853] = 3,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(379), 1,
      sym__id,
    STATE(36), 1,
      sym_identifier,
  [3863] = 3,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(381), 1,
      sym__id,
    STATE(31), 1,
      sym_identifier,
  [3873] = 3,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(381), 1,
      sym__id,
    STATE(99), 1,
      sym_identifier,
  [3883] = 3,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_definition_repeat1,
  [3893] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(363), 1,
      sym__id,
    STATE(193), 1,
      sym_identifier,
  [3903] = 3,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_function_call_repeat1,
  [3913] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(363), 1,
      sym__id,
    STATE(135), 1,
      sym_identifier,
  [3923] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_function_call_repeat1,
  [3933] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_function_call_repeat1,
  [3943] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_function_call_repeat1,
  [3953] = 3,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      aux_sym_definition_repeat1,
  [3963] = 3,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_definition_repeat1,
  [3973] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_function_call_repeat1,
  [3983] = 2,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
  [3990] = 2,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      anon_sym_COLON,
  [3997] = 1,
    ACTIONS(391), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4002] = 2,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
  [4009] = 2,
    ACTIONS(413), 1,
      anon_sym_COLON,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
  [4016] = 2,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(423), 1,
      anon_sym_EQ,
  [4023] = 1,
    ACTIONS(425), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4028] = 1,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4033] = 1,
    ACTIONS(429), 1,
      anon_sym_SEMI,
  [4037] = 1,
    ACTIONS(431), 1,
      sym__id,
  [4041] = 1,
    ACTIONS(433), 1,
      sym__id,
  [4045] = 1,
    ACTIONS(435), 1,
      anon_sym_LPAREN,
  [4049] = 1,
    ACTIONS(437), 1,
      anon_sym_COMMA,
  [4053] = 1,
    ACTIONS(439), 1,
      sym__id,
  [4057] = 1,
    ACTIONS(441), 1,
      anon_sym_COMMA,
  [4061] = 1,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
  [4065] = 1,
    ACTIONS(445), 1,
      anon_sym_SEMI,
  [4069] = 1,
    ACTIONS(447), 1,
      sym_string,
  [4073] = 1,
    ACTIONS(449), 1,
      anon_sym_COMMA,
  [4077] = 1,
    ACTIONS(451), 1,
      anon_sym_EQ,
  [4081] = 1,
    ACTIONS(413), 1,
      anon_sym_COLON,
  [4085] = 1,
    ACTIONS(453), 1,
      sym_string,
  [4089] = 1,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [4093] = 1,
    ACTIONS(457), 1,
      anon_sym_COLON,
  [4097] = 1,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [4101] = 1,
    ACTIONS(461), 1,
      anon_sym_EQ,
  [4105] = 1,
    ACTIONS(463), 1,
      sym__id,
  [4109] = 1,
    ACTIONS(465), 1,
      sym__id,
  [4113] = 1,
    ACTIONS(467), 1,
      anon_sym_LPAREN,
  [4117] = 1,
    ACTIONS(469), 1,
      anon_sym_SEMI,
  [4121] = 1,
    ACTIONS(471), 1,
      ts_builtin_sym_end,
  [4125] = 1,
    ACTIONS(473), 1,
      anon_sym_COLON,
  [4129] = 1,
    ACTIONS(475), 1,
      sym__id,
  [4133] = 1,
    ACTIONS(477), 1,
      anon_sym_COLON,
  [4137] = 1,
    ACTIONS(479), 1,
      anon_sym_SEMI,
  [4141] = 1,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
  [4145] = 1,
    ACTIONS(483), 1,
      anon_sym_COMMA,
  [4149] = 1,
    ACTIONS(485), 1,
      anon_sym_SEMI,
  [4153] = 1,
    ACTIONS(487), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 81,
  [SMALL_STATE(4)] = 162,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 324,
  [SMALL_STATE(7)] = 405,
  [SMALL_STATE(8)] = 486,
  [SMALL_STATE(9)] = 567,
  [SMALL_STATE(10)] = 648,
  [SMALL_STATE(11)] = 729,
  [SMALL_STATE(12)] = 810,
  [SMALL_STATE(13)] = 891,
  [SMALL_STATE(14)] = 972,
  [SMALL_STATE(15)] = 1053,
  [SMALL_STATE(16)] = 1134,
  [SMALL_STATE(17)] = 1215,
  [SMALL_STATE(18)] = 1296,
  [SMALL_STATE(19)] = 1335,
  [SMALL_STATE(20)] = 1374,
  [SMALL_STATE(21)] = 1413,
  [SMALL_STATE(22)] = 1452,
  [SMALL_STATE(23)] = 1491,
  [SMALL_STATE(24)] = 1525,
  [SMALL_STATE(25)] = 1562,
  [SMALL_STATE(26)] = 1599,
  [SMALL_STATE(27)] = 1636,
  [SMALL_STATE(28)] = 1673,
  [SMALL_STATE(29)] = 1716,
  [SMALL_STATE(30)] = 1753,
  [SMALL_STATE(31)] = 1790,
  [SMALL_STATE(32)] = 1824,
  [SMALL_STATE(33)] = 1856,
  [SMALL_STATE(34)] = 1887,
  [SMALL_STATE(35)] = 1926,
  [SMALL_STATE(36)] = 1961,
  [SMALL_STATE(37)] = 1994,
  [SMALL_STATE(38)] = 2024,
  [SMALL_STATE(39)] = 2062,
  [SMALL_STATE(40)] = 2111,
  [SMALL_STATE(41)] = 2160,
  [SMALL_STATE(42)] = 2186,
  [SMALL_STATE(43)] = 2212,
  [SMALL_STATE(44)] = 2238,
  [SMALL_STATE(45)] = 2264,
  [SMALL_STATE(46)] = 2299,
  [SMALL_STATE(47)] = 2322,
  [SMALL_STATE(48)] = 2345,
  [SMALL_STATE(49)] = 2368,
  [SMALL_STATE(50)] = 2390,
  [SMALL_STATE(51)] = 2412,
  [SMALL_STATE(52)] = 2434,
  [SMALL_STATE(53)] = 2456,
  [SMALL_STATE(54)] = 2478,
  [SMALL_STATE(55)] = 2509,
  [SMALL_STATE(56)] = 2540,
  [SMALL_STATE(57)] = 2571,
  [SMALL_STATE(58)] = 2588,
  [SMALL_STATE(59)] = 2619,
  [SMALL_STATE(60)] = 2635,
  [SMALL_STATE(61)] = 2663,
  [SMALL_STATE(62)] = 2679,
  [SMALL_STATE(63)] = 2695,
  [SMALL_STATE(64)] = 2711,
  [SMALL_STATE(65)] = 2730,
  [SMALL_STATE(66)] = 2744,
  [SMALL_STATE(67)] = 2762,
  [SMALL_STATE(68)] = 2786,
  [SMALL_STATE(69)] = 2810,
  [SMALL_STATE(70)] = 2834,
  [SMALL_STATE(71)] = 2858,
  [SMALL_STATE(72)] = 2882,
  [SMALL_STATE(73)] = 2900,
  [SMALL_STATE(74)] = 2924,
  [SMALL_STATE(75)] = 2948,
  [SMALL_STATE(76)] = 2972,
  [SMALL_STATE(77)] = 2993,
  [SMALL_STATE(78)] = 3010,
  [SMALL_STATE(79)] = 3023,
  [SMALL_STATE(80)] = 3034,
  [SMALL_STATE(81)] = 3051,
  [SMALL_STATE(82)] = 3070,
  [SMALL_STATE(83)] = 3091,
  [SMALL_STATE(84)] = 3106,
  [SMALL_STATE(85)] = 3123,
  [SMALL_STATE(86)] = 3140,
  [SMALL_STATE(87)] = 3157,
  [SMALL_STATE(88)] = 3169,
  [SMALL_STATE(89)] = 3181,
  [SMALL_STATE(90)] = 3197,
  [SMALL_STATE(91)] = 3211,
  [SMALL_STATE(92)] = 3229,
  [SMALL_STATE(93)] = 3241,
  [SMALL_STATE(94)] = 3253,
  [SMALL_STATE(95)] = 3267,
  [SMALL_STATE(96)] = 3279,
  [SMALL_STATE(97)] = 3291,
  [SMALL_STATE(98)] = 3309,
  [SMALL_STATE(99)] = 3321,
  [SMALL_STATE(100)] = 3333,
  [SMALL_STATE(101)] = 3345,
  [SMALL_STATE(102)] = 3357,
  [SMALL_STATE(103)] = 3369,
  [SMALL_STATE(104)] = 3381,
  [SMALL_STATE(105)] = 3393,
  [SMALL_STATE(106)] = 3405,
  [SMALL_STATE(107)] = 3417,
  [SMALL_STATE(108)] = 3432,
  [SMALL_STATE(109)] = 3449,
  [SMALL_STATE(110)] = 3468,
  [SMALL_STATE(111)] = 3477,
  [SMALL_STATE(112)] = 3486,
  [SMALL_STATE(113)] = 3495,
  [SMALL_STATE(114)] = 3514,
  [SMALL_STATE(115)] = 3533,
  [SMALL_STATE(116)] = 3548,
  [SMALL_STATE(117)] = 3557,
  [SMALL_STATE(118)] = 3568,
  [SMALL_STATE(119)] = 3587,
  [SMALL_STATE(120)] = 3596,
  [SMALL_STATE(121)] = 3615,
  [SMALL_STATE(122)] = 3624,
  [SMALL_STATE(123)] = 3632,
  [SMALL_STATE(124)] = 3640,
  [SMALL_STATE(125)] = 3648,
  [SMALL_STATE(126)] = 3656,
  [SMALL_STATE(127)] = 3664,
  [SMALL_STATE(128)] = 3680,
  [SMALL_STATE(129)] = 3688,
  [SMALL_STATE(130)] = 3704,
  [SMALL_STATE(131)] = 3712,
  [SMALL_STATE(132)] = 3720,
  [SMALL_STATE(133)] = 3736,
  [SMALL_STATE(134)] = 3749,
  [SMALL_STATE(135)] = 3760,
  [SMALL_STATE(136)] = 3773,
  [SMALL_STATE(137)] = 3783,
  [SMALL_STATE(138)] = 3793,
  [SMALL_STATE(139)] = 3803,
  [SMALL_STATE(140)] = 3813,
  [SMALL_STATE(141)] = 3823,
  [SMALL_STATE(142)] = 3833,
  [SMALL_STATE(143)] = 3843,
  [SMALL_STATE(144)] = 3853,
  [SMALL_STATE(145)] = 3863,
  [SMALL_STATE(146)] = 3873,
  [SMALL_STATE(147)] = 3883,
  [SMALL_STATE(148)] = 3893,
  [SMALL_STATE(149)] = 3903,
  [SMALL_STATE(150)] = 3913,
  [SMALL_STATE(151)] = 3923,
  [SMALL_STATE(152)] = 3933,
  [SMALL_STATE(153)] = 3943,
  [SMALL_STATE(154)] = 3953,
  [SMALL_STATE(155)] = 3963,
  [SMALL_STATE(156)] = 3973,
  [SMALL_STATE(157)] = 3983,
  [SMALL_STATE(158)] = 3990,
  [SMALL_STATE(159)] = 3997,
  [SMALL_STATE(160)] = 4002,
  [SMALL_STATE(161)] = 4009,
  [SMALL_STATE(162)] = 4016,
  [SMALL_STATE(163)] = 4023,
  [SMALL_STATE(164)] = 4028,
  [SMALL_STATE(165)] = 4033,
  [SMALL_STATE(166)] = 4037,
  [SMALL_STATE(167)] = 4041,
  [SMALL_STATE(168)] = 4045,
  [SMALL_STATE(169)] = 4049,
  [SMALL_STATE(170)] = 4053,
  [SMALL_STATE(171)] = 4057,
  [SMALL_STATE(172)] = 4061,
  [SMALL_STATE(173)] = 4065,
  [SMALL_STATE(174)] = 4069,
  [SMALL_STATE(175)] = 4073,
  [SMALL_STATE(176)] = 4077,
  [SMALL_STATE(177)] = 4081,
  [SMALL_STATE(178)] = 4085,
  [SMALL_STATE(179)] = 4089,
  [SMALL_STATE(180)] = 4093,
  [SMALL_STATE(181)] = 4097,
  [SMALL_STATE(182)] = 4101,
  [SMALL_STATE(183)] = 4105,
  [SMALL_STATE(184)] = 4109,
  [SMALL_STATE(185)] = 4113,
  [SMALL_STATE(186)] = 4117,
  [SMALL_STATE(187)] = 4121,
  [SMALL_STATE(188)] = 4125,
  [SMALL_STATE(189)] = 4129,
  [SMALL_STATE(190)] = 4133,
  [SMALL_STATE(191)] = 4137,
  [SMALL_STATE(192)] = 4141,
  [SMALL_STATE(193)] = 4145,
  [SMALL_STATE(194)] = 4149,
  [SMALL_STATE(195)] = 4153,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(184),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(167),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(189),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(47),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(47),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(170),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(78),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(66),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 6, .production_id = 14),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 7),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_split_repeat1, 2), SHIFT_REPEAT(12),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_split_repeat1, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 7),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 4, .production_id = 11),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 4, .production_id = 10),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_split, 4, .production_id = 10),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 4),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 8),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 8),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_one_sample_delay_repeat1, 2), SHIFT_REPEAT(94),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operator, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 8),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, .production_id = 8),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 7, .production_id = 13),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 7, .production_id = 13),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 7),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 7),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 13),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 6, .production_id = 13),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 5),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 5),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 13),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 13),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, .production_id = 8),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 6, .production_id = 9),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 5, .production_id = 5),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 7, .production_id = 12),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2), SHIFT_REPEAT(139),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(60),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2, .production_id = 6),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [471] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_metadata, 4, .production_id = 4),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
