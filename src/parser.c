#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
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
  anon_sym_EQ = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_DOT = 9,
  anon_sym_DASH = 10,
  anon_sym_BSLASH = 11,
  anon_sym_COMMA = 12,
  anon_sym_TILDE = 13,
  anon_sym_COLON = 14,
  anon_sym_LT_COLON = 15,
  anon_sym_COLON_GT = 16,
  anon_sym_par = 17,
  anon_sym_seq = 18,
  anon_sym_sum = 19,
  anon_sym_prod = 20,
  sym_add = 21,
  sym_mult = 22,
  sym_div = 23,
  sym_mod = 24,
  sym_exp = 25,
  sym_or = 26,
  sym_and = 27,
  sym_xor = 28,
  sym_lshift = 29,
  sym_rshift = 30,
  sym_lt = 31,
  sym_le = 32,
  sym_gt = 33,
  sym_ge = 34,
  sym_eq = 35,
  sym_neq = 36,
  sym_delay = 37,
  sym_int_cast = 38,
  sym_float_cast = 39,
  sym_wire = 40,
  sym_cut = 41,
  sym_one_sample_delay = 42,
  sym_mem = 43,
  sym_prefix_primitive = 44,
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
  sym_function_definition = 69,
  sym__expression = 70,
  sym__infix = 71,
  sym_infix_op = 72,
  sym_prefix_op = 73,
  sym_modifier_op = 74,
  sym_access = 75,
  sym__primitive = 76,
  sym_parameters = 77,
  sym__args = 78,
  sym__argument = 79,
  sym_recursive_arg = 80,
  sym_sequential_arg = 81,
  sym_split_arg = 82,
  sym_merge_arg = 83,
  sym_iteration = 84,
  sym_op = 85,
  sym__modifier = 86,
  sym_sub = 87,
  sym__number = 88,
  sym_documentation = 89,
  sym__doc_content = 90,
  sym__special_doc_tag = 91,
  sym_file_import = 92,
  sym_global_metadata = 93,
  sym_definition_metadata = 94,
  sym__binary_composition = 95,
  sym_recursive = 96,
  sym_sequential = 97,
  sym_split = 98,
  sym_merge = 99,
  sym_parallel = 100,
  sym_identifier = 101,
  aux_sym_source_file_repeat1 = 102,
  aux_sym__statement_repeat1 = 103,
  aux_sym_parameters_repeat1 = 104,
  aux_sym__args_repeat1 = 105,
  aux_sym_documentation_repeat1 = 106,
  aux_sym_identifier_repeat1 = 107,
  alias_sym_current_iteration = 108,
  alias_sym_function_name = 109,
  alias_sym_metadata_key = 110,
  alias_sym_numiter = 111,
  alias_sym_parameter = 112,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_singleprecision] = "singleprecision",
  [anon_sym_doubleprecision] = "doubleprecision",
  [anon_sym_quadprecision] = "quadprecision",
  [anon_sym_fixedpointprecision] = "fixedpointprecision",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
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
  [sym_add] = "add",
  [sym_mult] = "mult",
  [sym_div] = "div",
  [sym_mod] = "mod",
  [sym_exp] = "exp",
  [sym_or] = "or",
  [sym_and] = "and",
  [sym_xor] = "xor",
  [sym_lshift] = "lshift",
  [sym_rshift] = "rshift",
  [sym_lt] = "lt",
  [sym_le] = "le",
  [sym_gt] = "gt",
  [sym_ge] = "ge",
  [sym_eq] = "eq",
  [sym_neq] = "neq",
  [sym_delay] = "delay",
  [sym_int_cast] = "int_cast",
  [sym_float_cast] = "float_cast",
  [sym_wire] = "wire",
  [sym_cut] = "cut",
  [sym_one_sample_delay] = "one_sample_delay",
  [sym_mem] = "mem",
  [sym_prefix_primitive] = "prefix_primitive",
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
  [sym_function_definition] = "function_definition",
  [sym__expression] = "_expression",
  [sym__infix] = "_infix",
  [sym_infix_op] = "infix_op",
  [sym_prefix_op] = "prefix_op",
  [sym_modifier_op] = "modifier_op",
  [sym_access] = "access",
  [sym__primitive] = "_primitive",
  [sym_parameters] = "parameters",
  [sym__args] = "_args",
  [sym__argument] = "_argument",
  [sym_recursive_arg] = "recursive_arg",
  [sym_sequential_arg] = "sequential_arg",
  [sym_split_arg] = "split_arg",
  [sym_merge_arg] = "merge_arg",
  [sym_iteration] = "iteration",
  [sym_op] = "op",
  [sym__modifier] = "_modifier",
  [sym_sub] = "sub",
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
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym__args_repeat1] = "_args_repeat1",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_add] = sym_add,
  [sym_mult] = sym_mult,
  [sym_div] = sym_div,
  [sym_mod] = sym_mod,
  [sym_exp] = sym_exp,
  [sym_or] = sym_or,
  [sym_and] = sym_and,
  [sym_xor] = sym_xor,
  [sym_lshift] = sym_lshift,
  [sym_rshift] = sym_rshift,
  [sym_lt] = sym_lt,
  [sym_le] = sym_le,
  [sym_gt] = sym_gt,
  [sym_ge] = sym_ge,
  [sym_eq] = sym_eq,
  [sym_neq] = sym_neq,
  [sym_delay] = sym_delay,
  [sym_int_cast] = sym_int_cast,
  [sym_float_cast] = sym_float_cast,
  [sym_wire] = sym_wire,
  [sym_cut] = sym_cut,
  [sym_one_sample_delay] = sym_one_sample_delay,
  [sym_mem] = sym_mem,
  [sym_prefix_primitive] = sym_prefix_primitive,
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
  [sym_function_definition] = sym_function_definition,
  [sym__expression] = sym__expression,
  [sym__infix] = sym__infix,
  [sym_infix_op] = sym_infix_op,
  [sym_prefix_op] = sym_prefix_op,
  [sym_modifier_op] = sym_modifier_op,
  [sym_access] = sym_access,
  [sym__primitive] = sym__primitive,
  [sym_parameters] = sym_parameters,
  [sym__args] = sym__args,
  [sym__argument] = sym__argument,
  [sym_recursive_arg] = sym_recursive_arg,
  [sym_sequential_arg] = sym_sequential_arg,
  [sym_split_arg] = sym_split_arg,
  [sym_merge_arg] = sym_merge_arg,
  [sym_iteration] = sym_iteration,
  [sym_op] = sym_op,
  [sym__modifier] = sym__modifier,
  [sym_sub] = sym_sub,
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
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym__args_repeat1] = aux_sym__args_repeat1,
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
  [anon_sym_EQ] = {
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
  [anon_sym_DOT] = {
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
  [sym_add] = {
    .visible = true,
    .named = true,
  },
  [sym_mult] = {
    .visible = true,
    .named = true,
  },
  [sym_div] = {
    .visible = true,
    .named = true,
  },
  [sym_mod] = {
    .visible = true,
    .named = true,
  },
  [sym_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_xor] = {
    .visible = true,
    .named = true,
  },
  [sym_lshift] = {
    .visible = true,
    .named = true,
  },
  [sym_rshift] = {
    .visible = true,
    .named = true,
  },
  [sym_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_le] = {
    .visible = true,
    .named = true,
  },
  [sym_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_ge] = {
    .visible = true,
    .named = true,
  },
  [sym_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_neq] = {
    .visible = true,
    .named = true,
  },
  [sym_delay] = {
    .visible = true,
    .named = true,
  },
  [sym_int_cast] = {
    .visible = true,
    .named = true,
  },
  [sym_float_cast] = {
    .visible = true,
    .named = true,
  },
  [sym_wire] = {
    .visible = true,
    .named = true,
  },
  [sym_cut] = {
    .visible = true,
    .named = true,
  },
  [sym_one_sample_delay] = {
    .visible = true,
    .named = true,
  },
  [sym_mem] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_primitive] = {
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
  [sym_function_definition] = {
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
  [sym_infix_op] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_op] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier_op] = {
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
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__args] = {
    .visible = false,
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
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym__modifier] = {
    .visible = false,
    .named = true,
  },
  [sym_sub] = {
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
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__args_repeat1] = {
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
  [2] = {.index = 0, .length = 2},
  [5] = {.index = 2, .length = 2},
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
  [3] = {
    [0] = alias_sym_parameter,
  },
  [4] = {
    [1] = alias_sym_function_name,
    [2] = alias_sym_metadata_key,
  },
  [6] = {
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 21,
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
  [50] = 50,
  [51] = 29,
  [52] = 28,
  [53] = 53,
  [54] = 26,
  [55] = 30,
  [56] = 25,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 31,
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
  [110] = 110,
  [111] = 95,
  [112] = 101,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(100);
      if (lookahead == '!') ADVANCE(149);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == 'q') ADVANCE(261);
      if (lookahead == 's') ADVANCE(189);
      if (lookahead == 'x') ADVANCE(230);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(149);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == 's') ADVANCE(190);
      if (lookahead == 'x') ADVANCE(230);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(124);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'x') ADVANCE(230);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(124);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(116);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '&') ADVANCE(131);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(124);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == ':') ADVANCE(117);
      if (lookahead == ';') ADVANCE(101);
      if (lookahead == '<') ADVANCE(136);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(139);
      if (lookahead == '@') ADVANCE(143);
      if (lookahead == '^') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(70);
      if (lookahead == '|') ADVANCE(130);
      if (lookahead == '~') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(107);
      if (lookahead == ')') ADVANCE(108);
      if (lookahead == ',') ADVANCE(114);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '=') ADVANCE(106);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(267);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(266);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(173);
      END_STATE();
    case 14:
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0) ADVANCE(160);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(141);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(157);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(165);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(161);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(166);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(163);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(167);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(164);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(168);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(79);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'q') ADVANCE(92);
      END_STATE();
    case 77:
      if (lookahead == 'q') ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 94:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 97:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 98:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(267);
      if (lookahead == '\r') ADVANCE(268);
      END_STATE();
    case 99:
      if (eof) ADVANCE(100);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '_') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'q') ADVANCE(261);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(99)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_singleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_doubleprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_quadprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_fixedpointprecision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == '>') ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_add);
      if (lookahead == '.') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_mult);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_div);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_mod);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_lshift);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_rshift);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '<') ADVANCE(134);
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(135);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_delay);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(142);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_one_sample_delay);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_prefix_primitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'u') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'u') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 99},
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
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 99},
  [41] = {.lex_state = 99},
  [42] = {.lex_state = 99},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 99},
  [47] = {.lex_state = 99},
  [48] = {.lex_state = 99},
  [49] = {.lex_state = 99},
  [50] = {.lex_state = 99},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 99},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 6},
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
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 99},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_singleprecision] = ACTIONS(1),
    [anon_sym_doubleprecision] = ACTIONS(1),
    [anon_sym_quadprecision] = ACTIONS(1),
    [anon_sym_fixedpointprecision] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [sym_add] = ACTIONS(1),
    [sym_mult] = ACTIONS(1),
    [sym_div] = ACTIONS(1),
    [sym_mod] = ACTIONS(1),
    [sym_exp] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym_and] = ACTIONS(1),
    [sym_xor] = ACTIONS(1),
    [sym_lshift] = ACTIONS(1),
    [sym_rshift] = ACTIONS(1),
    [sym_lt] = ACTIONS(1),
    [sym_le] = ACTIONS(1),
    [sym_gt] = ACTIONS(1),
    [sym_ge] = ACTIONS(1),
    [sym_neq] = ACTIONS(1),
    [sym_delay] = ACTIONS(1),
    [sym_int_cast] = ACTIONS(1),
    [sym_float_cast] = ACTIONS(1),
    [sym_wire] = ACTIONS(1),
    [sym_cut] = ACTIONS(1),
    [sym_one_sample_delay] = ACTIONS(1),
    [sym_mem] = ACTIONS(1),
    [sym_prefix_primitive] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [sym__id] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(99),
    [sym__statement] = STATE(40),
    [sym_variant] = STATE(42),
    [sym_definition] = STATE(100),
    [sym_function_definition] = STATE(100),
    [sym_documentation] = STATE(40),
    [sym_file_import] = STATE(100),
    [sym_global_metadata] = STATE(100),
    [sym_definition_metadata] = STATE(100),
    [sym_identifier] = STATE(88),
    [aux_sym_source_file_repeat1] = STATE(40),
    [aux_sym__statement_repeat1] = STATE(42),
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
  [0] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym_real,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(36), 1,
      sym_sub,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(31), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(62), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(24), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [79] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym_real,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(36), 1,
      sym_sub,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(31), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(74), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(24), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [158] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym_real,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(36), 1,
      sym_sub,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(31), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(64), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(24), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [237] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym_real,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(36), 1,
      sym_sub,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(31), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(65), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(24), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [316] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym_real,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(36), 1,
      sym_sub,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(31), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(61), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(24), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [395] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym_real,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(36), 1,
      sym_sub,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(31), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(57), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(24), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [474] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym_real,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(36), 1,
      sym_sub,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(31), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(58), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(24), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [553] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym_real,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(36), 1,
      sym_sub,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(31), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(60), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(24), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [632] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym_real,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(36), 1,
      sym_sub,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(31), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(67), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(24), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [711] = 13,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      sym_real,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(36), 1,
      sym_sub,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(31), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(72), 7,
      sym__expression,
      sym__binary_composition,
      sym_recursive,
      sym_sequential,
      sym_split,
      sym_merge,
      sym_parallel,
    STATE(24), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [790] = 15,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    ACTIONS(41), 1,
      sym_real,
    STATE(36), 1,
      sym_sub,
    STATE(59), 1,
      sym__argument,
    STATE(103), 1,
      sym__args,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(73), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(39), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(27), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [872] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    ACTIONS(41), 1,
      sym_real,
    STATE(36), 1,
      sym_sub,
    STATE(71), 1,
      sym__argument,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(73), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(39), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(27), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [951] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    ACTIONS(41), 1,
      sym_real,
    STATE(36), 1,
      sym_sub,
    STATE(70), 1,
      sym__argument,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(73), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(39), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(27), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1030] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    ACTIONS(41), 1,
      sym_real,
    STATE(36), 1,
      sym_sub,
    STATE(69), 1,
      sym__argument,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(73), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(39), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(27), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1109] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    ACTIONS(41), 1,
      sym_real,
    STATE(36), 1,
      sym_sub,
    STATE(68), 1,
      sym__argument,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(73), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(39), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(27), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1188] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    ACTIONS(41), 1,
      sym_real,
    STATE(36), 1,
      sym_sub,
    STATE(66), 1,
      sym__argument,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(73), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(39), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(27), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1267] = 14,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    ACTIONS(41), 1,
      sym_real,
    STATE(36), 1,
      sym_sub,
    STATE(75), 1,
      sym__argument,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    STATE(73), 4,
      sym_recursive_arg,
      sym_sequential_arg,
      sym_split_arg,
      sym_merge_arg,
    ACTIONS(39), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(27), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1346] = 12,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    ACTIONS(45), 1,
      sym_real,
    STATE(36), 1,
      sym_sub,
    ACTIONS(25), 4,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
    ACTIONS(43), 5,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
    ACTIONS(27), 6,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    STATE(23), 10,
      sym__infix,
      sym_infix_op,
      sym_prefix_op,
      sym_modifier_op,
      sym_access,
      sym__primitive,
      sym_iteration,
      sym_op,
      sym__number,
      sym_identifier,
    ACTIONS(29), 13,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1416] = 2,
    ACTIONS(47), 17,
      anon_sym_LPAREN,
      anon_sym_BSLASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_real,
      anon_sym_COLON_COLON,
    ACTIONS(49), 17,
      anon_sym_DASH,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
      sym__id,
  [1455] = 2,
    ACTIONS(51), 17,
      anon_sym_LPAREN,
      anon_sym_BSLASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_real,
      anon_sym_COLON_COLON,
    ACTIONS(53), 17,
      anon_sym_DASH,
      anon_sym_par,
      anon_sym_seq,
      anon_sym_sum,
      anon_sym_prod,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_prefix_primitive,
      sym_int,
      sym__id,
  [1494] = 5,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(37), 1,
      sym__id,
    STATE(39), 1,
      sym_identifier,
    ACTIONS(49), 6,
      anon_sym_COLON,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_int_cast,
      sym_float_cast,
    ACTIONS(47), 24,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_one_sample_delay,
  [1538] = 5,
    STATE(19), 1,
      sym_op,
    STATE(21), 1,
      sym_sub,
    STATE(34), 1,
      sym__modifier,
    ACTIONS(57), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(55), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [1582] = 11,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      anon_sym_COLON,
    ACTIONS(73), 1,
      sym_one_sample_delay,
    STATE(19), 1,
      sym_op,
    STATE(21), 1,
      sym_sub,
    STATE(34), 1,
      sym__modifier,
    ACTIONS(71), 2,
      sym_lt,
      sym_gt,
    ACTIONS(59), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(69), 17,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
  [1638] = 4,
    ACTIONS(79), 1,
      anon_sym_COLON_COLON,
    STATE(29), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(77), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(75), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [1679] = 4,
    ACTIONS(79), 1,
      anon_sym_COLON_COLON,
    STATE(30), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(83), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(81), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [1720] = 11,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(65), 1,
      anon_sym_DASH,
    ACTIONS(73), 1,
      sym_one_sample_delay,
    ACTIONS(87), 1,
      anon_sym_COLON,
    STATE(19), 1,
      sym_op,
    STATE(21), 1,
      sym_sub,
    STATE(34), 1,
      sym__modifier,
    ACTIONS(71), 2,
      sym_lt,
      sym_gt,
    ACTIONS(85), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(69), 17,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
  [1775] = 4,
    ACTIONS(79), 1,
      anon_sym_COLON_COLON,
    STATE(25), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(91), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(89), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [1816] = 4,
    ACTIONS(97), 1,
      anon_sym_COLON_COLON,
    STATE(29), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(95), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(93), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [1857] = 4,
    ACTIONS(79), 1,
      anon_sym_COLON_COLON,
    STATE(29), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(91), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(89), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [1898] = 2,
    ACTIONS(95), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(93), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
      anon_sym_COLON_COLON,
  [1934] = 2,
    ACTIONS(102), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(100), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [1969] = 2,
    ACTIONS(106), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(104), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [2004] = 2,
    ACTIONS(110), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(108), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [2039] = 2,
    ACTIONS(114), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(112), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [2074] = 2,
    ACTIONS(53), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(51), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [2109] = 2,
    ACTIONS(118), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(116), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [2144] = 2,
    ACTIONS(122), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(120), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [2179] = 2,
    ACTIONS(126), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(124), 27,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_exp,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
      sym_int_cast,
      sym_float_cast,
      sym_one_sample_delay,
  [2214] = 12,
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
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      sym_comment,
    STATE(88), 1,
      sym_identifier,
    STATE(42), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(41), 3,
      sym__statement,
      sym_documentation,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(100), 5,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [2261] = 12,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(143), 1,
      anon_sym_declare,
    ACTIONS(146), 1,
      anon_sym_COLON_COLON,
    ACTIONS(149), 1,
      sym__id,
    ACTIONS(152), 1,
      sym_comment,
    STATE(88), 1,
      sym_identifier,
    STATE(42), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    STATE(41), 3,
      sym__statement,
      sym_documentation,
      aux_sym_source_file_repeat1,
    ACTIONS(134), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(100), 5,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [2308] = 8,
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
    STATE(50), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(5), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
    STATE(110), 5,
      sym_definition,
      sym_function_definition,
      sym_file_import,
      sym_global_metadata,
      sym_definition_metadata,
  [2341] = 4,
    ACTIONS(155), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(157), 1,
      sym__doc_char,
    STATE(43), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(160), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2364] = 4,
    ACTIONS(163), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(165), 1,
      sym__doc_char,
    STATE(43), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(167), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2387] = 4,
    ACTIONS(169), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(171), 1,
      sym__doc_char,
    STATE(44), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(173), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2410] = 2,
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
  [2426] = 2,
    ACTIONS(179), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(181), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2442] = 2,
    ACTIONS(183), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(185), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2458] = 2,
    ACTIONS(187), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(189), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2474] = 4,
    ACTIONS(196), 1,
      anon_sym_COLON_COLON,
    STATE(50), 2,
      sym_variant,
      aux_sym__statement_repeat1,
    ACTIONS(194), 3,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
    ACTIONS(191), 4,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
  [2493] = 3,
    ACTIONS(198), 1,
      anon_sym_COLON_COLON,
    STATE(51), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(93), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2508] = 3,
    ACTIONS(201), 1,
      anon_sym_COLON_COLON,
    STATE(56), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(89), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2523] = 2,
    ACTIONS(205), 1,
      anon_sym_COLON_COLON,
    ACTIONS(203), 7,
      anon_sym_singleprecision,
      anon_sym_doubleprecision,
      anon_sym_quadprecision,
      anon_sym_fixedpointprecision,
      anon_sym_import,
      anon_sym_declare,
      sym__id,
  [2536] = 3,
    ACTIONS(201), 1,
      anon_sym_COLON_COLON,
    STATE(55), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(81), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2551] = 3,
    ACTIONS(201), 1,
      anon_sym_COLON_COLON,
    STATE(51), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(89), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2566] = 3,
    ACTIONS(201), 1,
      anon_sym_COLON_COLON,
    STATE(51), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(75), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2581] = 6,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_TILDE,
    ACTIONS(213), 1,
      anon_sym_COLON,
    ACTIONS(215), 1,
      anon_sym_LT_COLON,
    ACTIONS(217), 1,
      anon_sym_COLON_GT,
    ACTIONS(207), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2601] = 4,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_TILDE,
    ACTIONS(213), 1,
      anon_sym_COLON,
    ACTIONS(219), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2617] = 7,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_TILDE,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(229), 1,
      anon_sym_LT_COLON,
    ACTIONS(231), 1,
      anon_sym_COLON_GT,
    STATE(86), 1,
      aux_sym__args_repeat1,
  [2639] = 2,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(233), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2651] = 6,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_TILDE,
    ACTIONS(213), 1,
      anon_sym_COLON,
    ACTIONS(215), 1,
      anon_sym_LT_COLON,
    ACTIONS(217), 1,
      anon_sym_COLON_GT,
    ACTIONS(237), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2671] = 4,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_TILDE,
    ACTIONS(241), 1,
      anon_sym_COLON,
    ACTIONS(239), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2687] = 1,
    ACTIONS(93), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [2697] = 6,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_TILDE,
    ACTIONS(213), 1,
      anon_sym_COLON,
    ACTIONS(215), 1,
      anon_sym_LT_COLON,
    ACTIONS(217), 1,
      anon_sym_COLON_GT,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
  [2716] = 6,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_TILDE,
    ACTIONS(213), 1,
      anon_sym_COLON,
    ACTIONS(215), 1,
      anon_sym_LT_COLON,
    ACTIONS(217), 1,
      anon_sym_COLON_GT,
    ACTIONS(245), 1,
      anon_sym_SEMI,
  [2735] = 5,
    ACTIONS(225), 1,
      anon_sym_TILDE,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(229), 1,
      anon_sym_LT_COLON,
    ACTIONS(231), 1,
      anon_sym_COLON_GT,
    ACTIONS(247), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2752] = 6,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_TILDE,
    ACTIONS(213), 1,
      anon_sym_COLON,
    ACTIONS(215), 1,
      anon_sym_LT_COLON,
    ACTIONS(217), 1,
      anon_sym_COLON_GT,
    ACTIONS(249), 1,
      anon_sym_SEMI,
  [2771] = 2,
    ACTIONS(253), 1,
      anon_sym_COLON,
    ACTIONS(251), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2782] = 3,
    ACTIONS(225), 1,
      anon_sym_TILDE,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(255), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2795] = 5,
    ACTIONS(225), 1,
      anon_sym_TILDE,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(229), 1,
      anon_sym_LT_COLON,
    ACTIONS(231), 1,
      anon_sym_COLON_GT,
    ACTIONS(257), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2812] = 5,
    ACTIONS(225), 1,
      anon_sym_TILDE,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(229), 1,
      anon_sym_LT_COLON,
    ACTIONS(231), 1,
      anon_sym_COLON_GT,
    ACTIONS(259), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2829] = 6,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_TILDE,
    ACTIONS(213), 1,
      anon_sym_COLON,
    ACTIONS(215), 1,
      anon_sym_LT_COLON,
    ACTIONS(217), 1,
      anon_sym_COLON_GT,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
  [2848] = 2,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(85), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [2859] = 6,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    ACTIONS(211), 1,
      anon_sym_TILDE,
    ACTIONS(213), 1,
      anon_sym_COLON,
    ACTIONS(215), 1,
      anon_sym_LT_COLON,
    ACTIONS(217), 1,
      anon_sym_COLON_GT,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
  [2878] = 5,
    ACTIONS(225), 1,
      anon_sym_TILDE,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(229), 1,
      anon_sym_LT_COLON,
    ACTIONS(231), 1,
      anon_sym_COLON_GT,
    ACTIONS(265), 1,
      anon_sym_COMMA,
  [2894] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(267), 1,
      sym_string,
    ACTIONS(269), 1,
      sym__id,
    STATE(107), 1,
      sym_identifier,
  [2907] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(269), 1,
      sym__id,
    STATE(79), 1,
      sym_identifier,
    STATE(104), 1,
      sym_parameters,
  [2920] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(269), 1,
      sym__id,
    STATE(79), 1,
      sym_identifier,
    STATE(98), 1,
      sym_parameters,
  [2933] = 3,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_parameters_repeat1,
  [2943] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(269), 1,
      sym__id,
    STATE(89), 1,
      sym_identifier,
  [2953] = 3,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_parameters_repeat1,
  [2963] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(269), 1,
      sym__id,
    STATE(92), 1,
      sym_identifier,
  [2973] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_parameters_repeat1,
  [2983] = 3,
    ACTIONS(35), 1,
      anon_sym_COLON_COLON,
    ACTIONS(282), 1,
      sym__id,
    STATE(37), 1,
      sym_identifier,
  [2993] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(269), 1,
      sym__id,
    STATE(76), 1,
      sym_identifier,
  [3003] = 3,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym__args_repeat1,
  [3013] = 3,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym__args_repeat1,
  [3023] = 2,
    ACTIONS(289), 1,
      anon_sym_EQ,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
  [3030] = 1,
    ACTIONS(293), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3035] = 1,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
  [3039] = 1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
  [3043] = 1,
    ACTIONS(299), 1,
      anon_sym_COMMA,
  [3047] = 1,
    ACTIONS(301), 1,
      anon_sym_EQ,
  [3051] = 1,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
  [3055] = 1,
    ACTIONS(305), 1,
      sym__id,
  [3059] = 1,
    ACTIONS(307), 1,
      anon_sym_DOT,
  [3063] = 1,
    ACTIONS(309), 1,
      sym_string,
  [3067] = 1,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
  [3071] = 1,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
  [3075] = 1,
    ACTIONS(315), 1,
      anon_sym_SEMI,
  [3079] = 1,
    ACTIONS(317), 1,
      sym__id,
  [3083] = 1,
    ACTIONS(319), 1,
      anon_sym_SEMI,
  [3087] = 1,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
  [3091] = 1,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
  [3095] = 1,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
  [3099] = 1,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
  [3103] = 1,
    ACTIONS(329), 1,
      sym_string,
  [3107] = 1,
    ACTIONS(331), 1,
      anon_sym_SEMI,
  [3111] = 1,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
  [3115] = 1,
    ACTIONS(335), 1,
      anon_sym_SEMI,
  [3119] = 1,
    ACTIONS(337), 1,
      sym__id,
  [3123] = 1,
    ACTIONS(339), 1,
      sym__id,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 237,
  [SMALL_STATE(6)] = 316,
  [SMALL_STATE(7)] = 395,
  [SMALL_STATE(8)] = 474,
  [SMALL_STATE(9)] = 553,
  [SMALL_STATE(10)] = 632,
  [SMALL_STATE(11)] = 711,
  [SMALL_STATE(12)] = 790,
  [SMALL_STATE(13)] = 872,
  [SMALL_STATE(14)] = 951,
  [SMALL_STATE(15)] = 1030,
  [SMALL_STATE(16)] = 1109,
  [SMALL_STATE(17)] = 1188,
  [SMALL_STATE(18)] = 1267,
  [SMALL_STATE(19)] = 1346,
  [SMALL_STATE(20)] = 1416,
  [SMALL_STATE(21)] = 1455,
  [SMALL_STATE(22)] = 1494,
  [SMALL_STATE(23)] = 1538,
  [SMALL_STATE(24)] = 1582,
  [SMALL_STATE(25)] = 1638,
  [SMALL_STATE(26)] = 1679,
  [SMALL_STATE(27)] = 1720,
  [SMALL_STATE(28)] = 1775,
  [SMALL_STATE(29)] = 1816,
  [SMALL_STATE(30)] = 1857,
  [SMALL_STATE(31)] = 1898,
  [SMALL_STATE(32)] = 1934,
  [SMALL_STATE(33)] = 1969,
  [SMALL_STATE(34)] = 2004,
  [SMALL_STATE(35)] = 2039,
  [SMALL_STATE(36)] = 2074,
  [SMALL_STATE(37)] = 2109,
  [SMALL_STATE(38)] = 2144,
  [SMALL_STATE(39)] = 2179,
  [SMALL_STATE(40)] = 2214,
  [SMALL_STATE(41)] = 2261,
  [SMALL_STATE(42)] = 2308,
  [SMALL_STATE(43)] = 2341,
  [SMALL_STATE(44)] = 2364,
  [SMALL_STATE(45)] = 2387,
  [SMALL_STATE(46)] = 2410,
  [SMALL_STATE(47)] = 2426,
  [SMALL_STATE(48)] = 2442,
  [SMALL_STATE(49)] = 2458,
  [SMALL_STATE(50)] = 2474,
  [SMALL_STATE(51)] = 2493,
  [SMALL_STATE(52)] = 2508,
  [SMALL_STATE(53)] = 2523,
  [SMALL_STATE(54)] = 2536,
  [SMALL_STATE(55)] = 2551,
  [SMALL_STATE(56)] = 2566,
  [SMALL_STATE(57)] = 2581,
  [SMALL_STATE(58)] = 2601,
  [SMALL_STATE(59)] = 2617,
  [SMALL_STATE(60)] = 2639,
  [SMALL_STATE(61)] = 2651,
  [SMALL_STATE(62)] = 2671,
  [SMALL_STATE(63)] = 2687,
  [SMALL_STATE(64)] = 2697,
  [SMALL_STATE(65)] = 2716,
  [SMALL_STATE(66)] = 2735,
  [SMALL_STATE(67)] = 2752,
  [SMALL_STATE(68)] = 2771,
  [SMALL_STATE(69)] = 2782,
  [SMALL_STATE(70)] = 2795,
  [SMALL_STATE(71)] = 2812,
  [SMALL_STATE(72)] = 2829,
  [SMALL_STATE(73)] = 2848,
  [SMALL_STATE(74)] = 2859,
  [SMALL_STATE(75)] = 2878,
  [SMALL_STATE(76)] = 2894,
  [SMALL_STATE(77)] = 2907,
  [SMALL_STATE(78)] = 2920,
  [SMALL_STATE(79)] = 2933,
  [SMALL_STATE(80)] = 2943,
  [SMALL_STATE(81)] = 2953,
  [SMALL_STATE(82)] = 2963,
  [SMALL_STATE(83)] = 2973,
  [SMALL_STATE(84)] = 2983,
  [SMALL_STATE(85)] = 2993,
  [SMALL_STATE(86)] = 3003,
  [SMALL_STATE(87)] = 3013,
  [SMALL_STATE(88)] = 3023,
  [SMALL_STATE(89)] = 3030,
  [SMALL_STATE(90)] = 3035,
  [SMALL_STATE(91)] = 3039,
  [SMALL_STATE(92)] = 3043,
  [SMALL_STATE(93)] = 3047,
  [SMALL_STATE(94)] = 3051,
  [SMALL_STATE(95)] = 3055,
  [SMALL_STATE(96)] = 3059,
  [SMALL_STATE(97)] = 3063,
  [SMALL_STATE(98)] = 3067,
  [SMALL_STATE(99)] = 3071,
  [SMALL_STATE(100)] = 3075,
  [SMALL_STATE(101)] = 3079,
  [SMALL_STATE(102)] = 3083,
  [SMALL_STATE(103)] = 3087,
  [SMALL_STATE(104)] = 3091,
  [SMALL_STATE(105)] = 3095,
  [SMALL_STATE(106)] = 3099,
  [SMALL_STATE(107)] = 3103,
  [SMALL_STATE(108)] = 3107,
  [SMALL_STATE(109)] = 3111,
  [SMALL_STATE(110)] = 3115,
  [SMALL_STATE(111)] = 3119,
  [SMALL_STATE(112)] = 3123,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_op, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_op, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_op, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(112),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_op, 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_op, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier_op, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier_op, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 8),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 8),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(43),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(43),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(53),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_repeat1, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(101),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variant, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 7),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 5),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(80),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__args, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__args_repeat1, 2), SHIFT_REPEAT(17),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 6),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition_metadata, 4, .production_id = 4),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [313] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
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
