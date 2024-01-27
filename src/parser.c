#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 5
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_SEMI = 1,
  anon_sym_singleprecision = 2,
  anon_sym_doubleprecision = 3,
  anon_sym_quadprecision = 4,
  anon_sym_fixedpointprecision = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_EQ = 8,
  anon_sym_DOT = 9,
  anon_sym_mem = 10,
  anon_sym_prefix = 11,
  anon_sym_int = 12,
  anon_sym_float = 13,
  anon_sym_DASH = 14,
  anon_sym_BSLASH = 15,
  anon_sym_COMMA = 16,
  anon_sym_TILDE = 17,
  anon_sym_COLON = 18,
  anon_sym_LT_COLON = 19,
  anon_sym_COLON_GT = 20,
  anon_sym_par = 21,
  anon_sym_seq = 22,
  anon_sym_sum = 23,
  anon_sym_prod = 24,
  anon_sym_PLUS = 25,
  anon_sym_STAR = 26,
  anon_sym_SLASH = 27,
  anon_sym_PERCENT = 28,
  anon_sym_CARET = 29,
  anon_sym_PIPE = 30,
  anon_sym_AMP = 31,
  anon_sym_xor = 32,
  anon_sym_LT_LT = 33,
  anon_sym_GT_GT = 34,
  anon_sym_LT = 35,
  anon_sym_LT_EQ = 36,
  anon_sym_GT = 37,
  anon_sym_GT_EQ = 38,
  anon_sym_EQ_EQ = 39,
  anon_sym_BANG_EQ = 40,
  anon_sym_AT = 41,
  sym_wire = 42,
  sym_cut = 43,
  sym_one_sample_delay_operator = 44,
  sym_int = 45,
  sym_real = 46,
  anon_sym_LTmdoc_GT = 47,
  anon_sym_LT_SLASHmdoc_GT = 48,
  sym__doc_char = 49,
  anon_sym_LTnotice_SLASH_GT = 50,
  anon_sym_LTnotice_SLASH_GT2 = 51,
  anon_sym_LTequation_GT = 52,
  anon_sym_LT_SLASHequation_GT = 53,
  anon_sym_LTdiagram_GT = 54,
  anon_sym_LT_SLASHdiagram_GT = 55,
  anon_sym_LTmetadata_GT = 56,
  anon_sym_LT_SLASHmetadata_GT = 57,
  anon_sym_LTlisting = 58,
  anon_sym_import = 59,
  anon_sym_declare = 60,
  sym_string = 61,
  anon_sym_COLON_COLON = 62,
  sym__id = 63,
  sym_comment = 64,
  sym_source_file = 65,
  sym__statement = 66,
  sym_variant = 67,
  sym_definition = 68,
  sym__expression = 69,
  sym__infix = 70,
  sym_binary_op = 71,
  sym_function_call = 72,
  sym_access = 73,
  sym__primitive = 74,
  sym_args = 75,
  sym_params = 76,
  sym__argument = 77,
  sym_recursive_arg = 78,
  sym_sequential_arg = 79,
  sym_split_arg = 80,
  sym_merge_arg = 81,
  sym_iteration = 82,
  sym_operator = 83,
  sym__number = 84,
  sym_documentation = 85,
  sym__doc_content = 86,
  sym__special_doc_tag = 87,
  sym_file_import = 88,
  sym_global_metadata = 89,
  sym_definition_metadata = 90,
  sym__binary_composition = 91,
  sym_recursive = 92,
  sym_sequential = 93,
  sym_split = 94,
  sym_merge = 95,
  sym_parallel = 96,
  sym_identifier = 97,
  aux_sym_source_file_repeat1 = 98,
  aux_sym__statement_repeat1 = 99,
  aux_sym_args_repeat1 = 100,
  aux_sym_params_repeat1 = 101,
  aux_sym_documentation_repeat1 = 102,
  aux_sym_identifier_repeat1 = 103,
  alias_sym_current_iteration = 104,
  alias_sym_function_name = 105,
  alias_sym_metadata_key = 106,
  alias_sym_numiter = 107,
  alias_sym_parameter = 108,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_singleprecision] = "singleprecision",
  [anon_sym_doubleprecision] = "doubleprecision",
  [anon_sym_quadprecision] = "quadprecision",
  [anon_sym_fixedpointprecision] = "fixedpointprecision",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_mem] = "mem",
  [anon_sym_prefix] = "prefix",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_DASH] = "-",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_COMMA] = ",",
  [anon_sym_TILDE] = "~",
  [anon_sym_COLON] = ":",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_par] = "par",
  [anon_sym_seq] = "seq",
  [anon_sym_sum] = "sum",
  [anon_sym_prod] = "prod",
  [anon_sym_PLUS] = "+",
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
  [sym_wire] = "wire",
  [sym_cut] = "cut",
  [sym_one_sample_delay_operator] = "one_sample_delay_operator",
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
  [sym_string] = "string",
  [anon_sym_COLON_COLON] = "::",
  [sym__id] = "_id",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_variant] = "variant",
  [sym_definition] = "definition",
  [sym__expression] = "_expression",
  [sym__infix] = "_infix",
  [sym_binary_op] = "binary_op",
  [sym_function_call] = "function_call",
  [sym_access] = "access",
  [sym__primitive] = "_primitive",
  [sym_args] = "args",
  [sym_params] = "params",
  [sym__argument] = "_argument",
  [sym_recursive_arg] = "recursive_arg",
  [sym_sequential_arg] = "sequential_arg",
  [sym_split_arg] = "split_arg",
  [sym_merge_arg] = "merge_arg",
  [sym_iteration] = "iteration",
  [sym_operator] = "operator",
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
  [sym_identifier] = "identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__statement_repeat1] = "_statement_repeat1",
  [aux_sym_args_repeat1] = "args_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_documentation_repeat1] = "documentation_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [alias_sym_current_iteration] = "current_iteration",
  [alias_sym_function_name] = "function_name",
  [alias_sym_metadata_key] = "metadata_key",
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
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_mem] = anon_sym_mem,
  [anon_sym_prefix] = anon_sym_prefix,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [anon_sym_par] = anon_sym_par,
  [anon_sym_seq] = anon_sym_seq,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_prod] = anon_sym_prod,
  [anon_sym_PLUS] = anon_sym_PLUS,
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
  [sym_wire] = sym_wire,
  [sym_cut] = sym_cut,
  [sym_one_sample_delay_operator] = sym_one_sample_delay_operator,
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
  [sym_string] = sym_string,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym__id] = sym__id,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_variant] = sym_variant,
  [sym_definition] = sym_definition,
  [sym__expression] = sym__expression,
  [sym__infix] = sym__infix,
  [sym_binary_op] = sym_binary_op,
  [sym_function_call] = sym_function_call,
  [sym_access] = sym_access,
  [sym__primitive] = sym__primitive,
  [sym_args] = sym_args,
  [sym_params] = sym_params,
  [sym__argument] = sym__argument,
  [sym_recursive_arg] = sym_recursive_arg,
  [sym_sequential_arg] = sym_sequential_arg,
  [sym_split_arg] = sym_split_arg,
  [sym_merge_arg] = sym_merge_arg,
  [sym_iteration] = sym_iteration,
  [sym_operator] = sym_operator,
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
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__statement_repeat1] = aux_sym__statement_repeat1,
  [aux_sym_args_repeat1] = aux_sym_args_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_documentation_repeat1] = aux_sym_documentation_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [alias_sym_current_iteration] = alias_sym_current_iteration,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_metadata_key] = alias_sym_metadata_key,
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
  [anon_sym_mem] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prefix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_PLUS] = {
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
  [sym_wire] = {
    .visible = true,
    .named = true,
  },
  [sym_cut] = {
    .visible = true,
    .named = true,
  },
  [sym_one_sample_delay_operator] = {
    .visible = true,
    .named = true,
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
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__infix] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_access] = {
    .visible = true,
    .named = true,
  },
  [sym__primitive] = {
    .visible = false,
    .named = true,
  },
  [sym_args] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_recursive_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_sequential_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_split_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_merge_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_iteration] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
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
  [aux_sym_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_documentation_repeat1] = {
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
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_metadata_key,
  },
  [2] = {
    [0] = alias_sym_parameter,
  },
  [4] = {
    [1] = alias_sym_function_name,
    [2] = alias_sym_metadata_key,
  },
  [5] = {
    [1] = alias_sym_parameter,
  },
  [8] = {
    [2] = alias_sym_current_iteration,
    [4] = alias_sym_numiter,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__argument, 2,
    sym__argument,
    alias_sym_numiter,
  sym_identifier, 5,
    sym_identifier,
    alias_sym_current_iteration,
    alias_sym_function_name,
    alias_sym_metadata_key,
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 20,
  [32] = 32,
  [33] = 33,
  [34] = 34,
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 22,
  [51] = 23,
  [52] = 24,
  [53] = 25,
  [54] = 54,
  [55] = 26,
  [56] = 56,
  [57] = 29,
  [58] = 58,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
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
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
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
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 106,
  [111] = 98,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      if (lookahead == '!') ADVANCE(143);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(123);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(137);
      if (lookahead == '@') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(110);
      if (lookahead == '^') ADVANCE(127);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == 'q') ADVANCE(256);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 'x') ADVANCE(225);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '~') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(143);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(135);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(137);
      if (lookahead == '@') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(110);
      if (lookahead == '^') ADVANCE(127);
      if (lookahead == '_') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'p') ADVANCE(169);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == 'x') ADVANCE(225);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(137);
      if (lookahead == '@') ADVANCE(141);
      if (lookahead == '^') ADVANCE(127);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(225);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '~') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(137);
      if (lookahead == '@') ADVANCE(141);
      if (lookahead == '^') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '~') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '&') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(114);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(137);
      if (lookahead == '@') ADVANCE(141);
      if (lookahead == '^') ADVANCE(127);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == '|') ADVANCE(128);
      if (lookahead == '~') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(99);
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(263);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(168);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(139);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(152);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(153);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(156);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 72:
      if (lookahead == 'q') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'q') ADVANCE(87);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 88:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 90:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 91:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(263);
      if (lookahead == '\r') ADVANCE(264);
      END_STATE();
    case 92:
      if (eof) ADVANCE(93);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'q') ADVANCE(256);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(92)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_prefix);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(168);
      if (lookahead == '>') ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(115);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(132);
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(138);
      if (lookahead == '>') ADVANCE(133);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_one_sample_delay_operator);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
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
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'u') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(263);
      if (lookahead == '\\') ADVANCE(91);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 92},
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
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 92},
  [40] = {.lex_state = 92},
  [41] = {.lex_state = 92},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 92},
  [46] = {.lex_state = 92},
  [47] = {.lex_state = 92},
  [48] = {.lex_state = 92},
  [49] = {.lex_state = 92},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 92},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
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
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_mem] = ACTIONS(1),
    [anon_sym_prefix] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [anon_sym_par] = ACTIONS(1),
    [anon_sym_seq] = ACTIONS(1),
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_prod] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
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
    [sym_wire] = ACTIONS(1),
    [sym_cut] = ACTIONS(1),
    [sym_one_sample_delay_operator] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym__id] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(99),
    [sym__statement] = STATE(40),
    [sym_variant] = STATE(41),
    [sym_definition] = STATE(100),
    [sym_documentation] = STATE(40),
    [sym_file_import] = STATE(100),
    [sym_global_metadata] = STATE(100),
    [sym_definition_metadata] = STATE(100),
    [sym_identifier] = STATE(88),
    [aux_sym_source_file_repeat1] = STATE(40),
    [aux_sym__statement_repeat1] = STATE(41),
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
  [0] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(71), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(21), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(27), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [73] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(63), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(21), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(27), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [146] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(68), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(21), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(27), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [219] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(73), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(21), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(27), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [292] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(61), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(21), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(27), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [365] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(60), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(21), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(27), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [438] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(56), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(21), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(27), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [511] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(59), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(21), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(27), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [584] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(58), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(21), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(27), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [657] = 11,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(69), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    ACTIONS(21), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(27), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [730] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(62), 1,
      sym__argument,
    STATE(90), 1,
      sym_args,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(72), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(32), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [806] = 12,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(65), 1,
      sym__argument,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(72), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(32), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [879] = 12,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(70), 1,
      sym__argument,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(72), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(32), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [952] = 12,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(66), 1,
      sym__argument,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(72), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(32), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1025] = 12,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(64), 1,
      sym__argument,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(72), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(32), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1098] = 12,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(74), 1,
      sym__argument,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(72), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(32), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1171] = 12,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(67), 1,
      sym__argument,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    STATE(72), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(37), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(32), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1244] = 10,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    ACTIONS(27), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(29), 4,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 8,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
    STATE(28), 9,
      sym__infix,
      sym_binary_op,
      sym_function_call,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_operator,
      sym__number,
      sym_identifier,
    ACTIONS(31), 13,
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
  [1308] = 2,
    ACTIONS(41), 16,
      anon_sym_LPAREN,
      anon_sym_BSLASH,
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
      anon_sym_COLON_COLON,
    ACTIONS(43), 18,
      anon_sym_mem,
      anon_sym_prefix,
      anon_sym_int,
      anon_sym_float,
      anon_sym_DASH,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
      anon_sym_PLUS,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
      sym_wire,
      sym_cut,
      sym_int,
      sym_real,
      sym__id,
  [1347] = 5,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(35), 1,
      sym__id,
    STATE(38), 1,
      sym_identifier,
    ACTIONS(43), 4,
      anon_sym_COLON,
      anon_sym_xor,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1389] = 4,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    STATE(22), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(47), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1428] = 4,
    ACTIONS(56), 1,
      anon_sym_COLON_COLON,
    STATE(22), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(54), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(52), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1467] = 4,
    ACTIONS(56), 1,
      anon_sym_COLON_COLON,
    STATE(22), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(60), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1506] = 4,
    ACTIONS(56), 1,
      anon_sym_COLON_COLON,
    STATE(23), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(60), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(58), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1545] = 4,
    ACTIONS(56), 1,
      anon_sym_COLON_COLON,
    STATE(24), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(64), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(62), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1584] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_DOT,
    ACTIONS(74), 1,
      anon_sym_COLON,
    ACTIONS(78), 1,
      sym_one_sample_delay_operator,
    STATE(19), 1,
      sym_operator,
    ACTIONS(76), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(72), 16,
      anon_sym_DASH,
      anon_sym_PLUS,
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
  [1630] = 3,
    STATE(19), 1,
      sym_operator,
    ACTIONS(82), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1666] = 2,
    ACTIONS(47), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
      anon_sym_COLON_COLON,
  [1700] = 2,
    ACTIONS(86), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1733] = 2,
    ACTIONS(43), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1766] = 8,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_DOT,
    ACTIONS(78), 1,
      sym_one_sample_delay_operator,
    ACTIONS(90), 1,
      anon_sym_COLON,
    STATE(19), 1,
      sym_operator,
    ACTIONS(76), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(72), 16,
      anon_sym_DASH,
      anon_sym_PLUS,
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
  [1811] = 2,
    ACTIONS(94), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(92), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1844] = 2,
    ACTIONS(98), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(96), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1877] = 2,
    ACTIONS(102), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(100), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1910] = 2,
    ACTIONS(106), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(104), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1943] = 2,
    ACTIONS(110), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(108), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [1976] = 2,
    ACTIONS(114), 3,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(112), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PLUS,
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
      sym_one_sample_delay_operator,
  [2009] = 12,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(124), 1,
      anon_sym_import,
    ACTIONS(127), 1,
      anon_sym_declare,
    ACTIONS(130), 1,
      anon_sym_COLON_COLON,
    ACTIONS(133), 1,
      sym__id,
    ACTIONS(136), 1,
      sym_comment,
    STATE(88), 1,
      sym_identifier,
    STATE(41), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(39), 3,
      sym__statement,
      sym_documentation,
      aux_sym_source_file_repeat1,
    ACTIONS(118), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(100), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [2055] = 12,
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
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      sym_comment,
    STATE(88), 1,
      sym_identifier,
    STATE(41), 2,
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
    STATE(100), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [2101] = 8,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_declare,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    STATE(88), 1,
      sym_identifier,
    STATE(49), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(5), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(109), 4,
      sym_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [2133] = 4,
    ACTIONS(143), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(145), 1,
      sym__doc_char,
    STATE(42), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(148), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2156] = 4,
    ACTIONS(151), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(153), 1,
      sym__doc_char,
    STATE(44), 3,
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
  [2179] = 4,
    ACTIONS(157), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(159), 1,
      sym__doc_char,
    STATE(42), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(161), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2202] = 2,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(165), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2218] = 2,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(169), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2234] = 2,
    ACTIONS(171), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(173), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2250] = 2,
    ACTIONS(175), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(177), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2266] = 4,
    ACTIONS(184), 1,
      anon_sym_COLON_COLON,
    STATE(49), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(182), 3,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
    ACTIONS(179), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2285] = 3,
    ACTIONS(186), 1,
      anon_sym_COLON_COLON,
    STATE(50), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(45), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2300] = 3,
    ACTIONS(189), 1,
      anon_sym_COLON_COLON,
    STATE(50), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(52), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2315] = 3,
    ACTIONS(189), 1,
      anon_sym_COLON_COLON,
    STATE(50), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(58), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2330] = 3,
    ACTIONS(189), 1,
      anon_sym_COLON_COLON,
    STATE(51), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(58), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2345] = 2,
    ACTIONS(193), 1,
      anon_sym_COLON_COLON,
    ACTIONS(191), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2358] = 3,
    ACTIONS(189), 1,
      anon_sym_COLON_COLON,
    STATE(52), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(62), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2373] = 4,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_TILDE,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(195), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2389] = 1,
    ACTIONS(45), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [2399] = 4,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_TILDE,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(203), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2415] = 2,
    ACTIONS(209), 1,
      anon_sym_COLON,
    ACTIONS(207), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2427] = 6,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_TILDE,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      anon_sym_LT_COLON,
    ACTIONS(215), 1,
      anon_sym_COLON_GT,
    ACTIONS(211), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2447] = 6,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_TILDE,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      anon_sym_LT_COLON,
    ACTIONS(215), 1,
      anon_sym_COLON_GT,
    ACTIONS(217), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2467] = 7,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_TILDE,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(227), 1,
      anon_sym_LT_COLON,
    ACTIONS(229), 1,
      anon_sym_COLON_GT,
    STATE(83), 1,
      aux_sym_args_repeat1,
  [2489] = 6,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_TILDE,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      anon_sym_LT_COLON,
    ACTIONS(215), 1,
      anon_sym_COLON_GT,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
  [2508] = 3,
    ACTIONS(223), 1,
      anon_sym_TILDE,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(233), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2521] = 2,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(235), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2532] = 5,
    ACTIONS(223), 1,
      anon_sym_TILDE,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(227), 1,
      anon_sym_LT_COLON,
    ACTIONS(229), 1,
      anon_sym_COLON_GT,
    ACTIONS(239), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2549] = 5,
    ACTIONS(223), 1,
      anon_sym_TILDE,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(227), 1,
      anon_sym_LT_COLON,
    ACTIONS(229), 1,
      anon_sym_COLON_GT,
    ACTIONS(241), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2566] = 6,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_TILDE,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      anon_sym_LT_COLON,
    ACTIONS(215), 1,
      anon_sym_COLON_GT,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
  [2585] = 6,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_TILDE,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      anon_sym_LT_COLON,
    ACTIONS(215), 1,
      anon_sym_COLON_GT,
    ACTIONS(245), 1,
      anon_sym_SEMI,
  [2604] = 5,
    ACTIONS(223), 1,
      anon_sym_TILDE,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(227), 1,
      anon_sym_LT_COLON,
    ACTIONS(229), 1,
      anon_sym_COLON_GT,
    ACTIONS(247), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2621] = 6,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_TILDE,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      anon_sym_LT_COLON,
    ACTIONS(215), 1,
      anon_sym_COLON_GT,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
  [2640] = 2,
    ACTIONS(90), 1,
      anon_sym_COLON,
    ACTIONS(88), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2651] = 6,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_TILDE,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      anon_sym_LT_COLON,
    ACTIONS(215), 1,
      anon_sym_COLON_GT,
    ACTIONS(251), 1,
      anon_sym_SEMI,
  [2670] = 5,
    ACTIONS(223), 1,
      anon_sym_TILDE,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(227), 1,
      anon_sym_LT_COLON,
    ACTIONS(229), 1,
      anon_sym_COLON_GT,
    ACTIONS(253), 1,
      anon_sym_COMMA,
  [2686] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(255), 1,
      sym_string,
    ACTIONS(257), 1,
      sym__id,
    STATE(96), 1,
      sym_identifier,
  [2699] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(257), 1,
      sym__id,
    STATE(82), 1,
      sym_identifier,
    STATE(91), 1,
      sym_params,
  [2712] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(257), 1,
      sym__id,
    STATE(82), 1,
      sym_identifier,
    STATE(105), 1,
      sym_params,
  [2725] = 3,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_params_repeat1,
  [2735] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(257), 1,
      sym__id,
    STATE(87), 1,
      sym_identifier,
  [2745] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(257), 1,
      sym__id,
    STATE(92), 1,
      sym_identifier,
  [2755] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(257), 1,
      sym__id,
    STATE(75), 1,
      sym_identifier,
  [2765] = 3,
    ACTIONS(261), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_params_repeat1,
  [2775] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_args_repeat1,
  [2785] = 3,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_params_repeat1,
  [2795] = 3,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_args_repeat1,
  [2805] = 3,
    ACTIONS(33), 1,
      anon_sym_COLON_COLON,
    ACTIONS(275), 1,
      sym__id,
    STATE(33), 1,
      sym_identifier,
  [2815] = 1,
    ACTIONS(277), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2820] = 2,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    ACTIONS(281), 1,
      anon_sym_EQ,
  [2827] = 1,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
  [2831] = 1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [2835] = 1,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
  [2839] = 1,
    ACTIONS(289), 1,
      anon_sym_COMMA,
  [2843] = 1,
    ACTIONS(291), 1,
      anon_sym_DOT,
  [2847] = 1,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
  [2851] = 1,
    ACTIONS(295), 1,
      sym_string,
  [2855] = 1,
    ACTIONS(297), 1,
      sym_string,
  [2859] = 1,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
  [2863] = 1,
    ACTIONS(301), 1,
      sym__id,
  [2867] = 1,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
  [2871] = 1,
    ACTIONS(305), 1,
      anon_sym_SEMI,
  [2875] = 1,
    ACTIONS(307), 1,
      anon_sym_EQ,
  [2879] = 1,
    ACTIONS(309), 1,
      anon_sym_SEMI,
  [2883] = 1,
    ACTIONS(311), 1,
      anon_sym_SEMI,
  [2887] = 1,
    ACTIONS(313), 1,
      anon_sym_LPAREN,
  [2891] = 1,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
  [2895] = 1,
    ACTIONS(317), 1,
      sym__id,
  [2899] = 1,
    ACTIONS(319), 1,
      anon_sym_SEMI,
  [2903] = 1,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
  [2907] = 1,
    ACTIONS(323), 1,
      anon_sym_SEMI,
  [2911] = 1,
    ACTIONS(325), 1,
      sym__id,
  [2915] = 1,
    ACTIONS(327), 1,
      sym__id,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 73,
  [SMALL_STATE(4)] = 146,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 292,
  [SMALL_STATE(7)] = 365,
  [SMALL_STATE(8)] = 438,
  [SMALL_STATE(9)] = 511,
  [SMALL_STATE(10)] = 584,
  [SMALL_STATE(11)] = 657,
  [SMALL_STATE(12)] = 730,
  [SMALL_STATE(13)] = 806,
  [SMALL_STATE(14)] = 879,
  [SMALL_STATE(15)] = 952,
  [SMALL_STATE(16)] = 1025,
  [SMALL_STATE(17)] = 1098,
  [SMALL_STATE(18)] = 1171,
  [SMALL_STATE(19)] = 1244,
  [SMALL_STATE(20)] = 1308,
  [SMALL_STATE(21)] = 1347,
  [SMALL_STATE(22)] = 1389,
  [SMALL_STATE(23)] = 1428,
  [SMALL_STATE(24)] = 1467,
  [SMALL_STATE(25)] = 1506,
  [SMALL_STATE(26)] = 1545,
  [SMALL_STATE(27)] = 1584,
  [SMALL_STATE(28)] = 1630,
  [SMALL_STATE(29)] = 1666,
  [SMALL_STATE(30)] = 1700,
  [SMALL_STATE(31)] = 1733,
  [SMALL_STATE(32)] = 1766,
  [SMALL_STATE(33)] = 1811,
  [SMALL_STATE(34)] = 1844,
  [SMALL_STATE(35)] = 1877,
  [SMALL_STATE(36)] = 1910,
  [SMALL_STATE(37)] = 1943,
  [SMALL_STATE(38)] = 1976,
  [SMALL_STATE(39)] = 2009,
  [SMALL_STATE(40)] = 2055,
  [SMALL_STATE(41)] = 2101,
  [SMALL_STATE(42)] = 2133,
  [SMALL_STATE(43)] = 2156,
  [SMALL_STATE(44)] = 2179,
  [SMALL_STATE(45)] = 2202,
  [SMALL_STATE(46)] = 2218,
  [SMALL_STATE(47)] = 2234,
  [SMALL_STATE(48)] = 2250,
  [SMALL_STATE(49)] = 2266,
  [SMALL_STATE(50)] = 2285,
  [SMALL_STATE(51)] = 2300,
  [SMALL_STATE(52)] = 2315,
  [SMALL_STATE(53)] = 2330,
  [SMALL_STATE(54)] = 2345,
  [SMALL_STATE(55)] = 2358,
  [SMALL_STATE(56)] = 2373,
  [SMALL_STATE(57)] = 2389,
  [SMALL_STATE(58)] = 2399,
  [SMALL_STATE(59)] = 2415,
  [SMALL_STATE(60)] = 2427,
  [SMALL_STATE(61)] = 2447,
  [SMALL_STATE(62)] = 2467,
  [SMALL_STATE(63)] = 2489,
  [SMALL_STATE(64)] = 2508,
  [SMALL_STATE(65)] = 2521,
  [SMALL_STATE(66)] = 2532,
  [SMALL_STATE(67)] = 2549,
  [SMALL_STATE(68)] = 2566,
  [SMALL_STATE(69)] = 2585,
  [SMALL_STATE(70)] = 2604,
  [SMALL_STATE(71)] = 2621,
  [SMALL_STATE(72)] = 2640,
  [SMALL_STATE(73)] = 2651,
  [SMALL_STATE(74)] = 2670,
  [SMALL_STATE(75)] = 2686,
  [SMALL_STATE(76)] = 2699,
  [SMALL_STATE(77)] = 2712,
  [SMALL_STATE(78)] = 2725,
  [SMALL_STATE(79)] = 2735,
  [SMALL_STATE(80)] = 2745,
  [SMALL_STATE(81)] = 2755,
  [SMALL_STATE(82)] = 2765,
  [SMALL_STATE(83)] = 2775,
  [SMALL_STATE(84)] = 2785,
  [SMALL_STATE(85)] = 2795,
  [SMALL_STATE(86)] = 2805,
  [SMALL_STATE(87)] = 2815,
  [SMALL_STATE(88)] = 2820,
  [SMALL_STATE(89)] = 2827,
  [SMALL_STATE(90)] = 2831,
  [SMALL_STATE(91)] = 2835,
  [SMALL_STATE(92)] = 2839,
  [SMALL_STATE(93)] = 2843,
  [SMALL_STATE(94)] = 2847,
  [SMALL_STATE(95)] = 2851,
  [SMALL_STATE(96)] = 2855,
  [SMALL_STATE(97)] = 2859,
  [SMALL_STATE(98)] = 2863,
  [SMALL_STATE(99)] = 2867,
  [SMALL_STATE(100)] = 2871,
  [SMALL_STATE(101)] = 2875,
  [SMALL_STATE(102)] = 2879,
  [SMALL_STATE(103)] = 2883,
  [SMALL_STATE(104)] = 2887,
  [SMALL_STATE(105)] = 2891,
  [SMALL_STATE(106)] = 2895,
  [SMALL_STATE(107)] = 2899,
  [SMALL_STATE(108)] = 2903,
  [SMALL_STATE(109)] = 2907,
  [SMALL_STATE(110)] = 2911,
  [SMALL_STATE(111)] = 2915,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(111),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 8),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 8),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__infix, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__infix, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(42),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(42),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(54),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(98),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 6),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 6),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 6),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 6),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 6),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 6),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 6),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 6),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 6),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 6, .production_id = 7),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2, .production_id = 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1, .production_id = 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_args, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(79),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_args_repeat1, 2), SHIFT_REPEAT(15),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2, .production_id = 5),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [303] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_metadata, 4, .production_id = 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
