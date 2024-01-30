#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 199
#define LARGE_STATE_COUNT 36
#define SYMBOL_COUNT 161
#define ALIAS_COUNT 1
#define TOKEN_COUNT 98
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 18
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 22

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_declare = 5,
  anon_sym_import = 6,
  anon_sym_COMMA = 7,
  anon_sym_DOT = 8,
  anon_sym_DASH = 9,
  anon_sym_BSLASH = 10,
  anon_sym_environment = 11,
  anon_sym_TILDE = 12,
  anon_sym_COLON = 13,
  anon_sym_LT_COLON = 14,
  anon_sym_COLON_GT = 15,
  sym_par = 16,
  sym_seq = 17,
  sym_sum = 18,
  sym_prod = 19,
  anon_sym_with = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_letrec = 23,
  anon_sym_where = 24,
  anon_sym_SQUOTE = 25,
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_component = 28,
  sym_add = 29,
  sym_mult = 30,
  sym_div = 31,
  sym_mod = 32,
  sym_pow = 33,
  sym_or = 34,
  sym_and = 35,
  sym_xor = 36,
  sym_lshift = 37,
  sym_rshift = 38,
  sym_lt = 39,
  sym_le = 40,
  sym_gt = 41,
  sym_ge = 42,
  sym_eq = 43,
  sym_neq = 44,
  sym_delay = 45,
  sym_exp = 46,
  sym_log = 47,
  sym_log10 = 48,
  sym_sqrt = 49,
  sym_abs = 50,
  sym_floor = 51,
  sym_ceil = 52,
  sym_rint = 53,
  sym_round = 54,
  sym_acos = 55,
  sym_asin = 56,
  sym_atan = 57,
  sym_cos = 58,
  sym_sin = 59,
  sym_tan = 60,
  sym_int_cast = 61,
  sym_float_cast = 62,
  sym_pow_fun = 63,
  sym_min = 64,
  sym_max = 65,
  sym_fmod = 66,
  sym_remainder = 67,
  sym_atan2 = 68,
  sym_prefix_prim = 69,
  sym_attach = 70,
  sym_enable = 71,
  sym_control = 72,
  sym_wire = 73,
  sym_cut = 74,
  sym_mem = 75,
  sym_int = 76,
  sym_real = 77,
  anon_sym_LTmdoc_GT = 78,
  anon_sym_LT_SLASHmdoc_GT = 79,
  sym__doc_char = 80,
  anon_sym_LTnotice_SLASH_GT = 81,
  anon_sym_LTnotice_SLASH_GT2 = 82,
  anon_sym_LTequation_GT = 83,
  anon_sym_LT_SLASHequation_GT = 84,
  anon_sym_LTdiagram_GT = 85,
  anon_sym_LT_SLASHdiagram_GT = 86,
  anon_sym_LTmetadata_GT = 87,
  anon_sym_LT_SLASHmetadata_GT = 88,
  anon_sym_LTlisting = 89,
  sym_single_precision = 90,
  sym_double_precision = 91,
  sym_quad_precision = 92,
  sym_fixed_point_precision = 93,
  sym_string = 94,
  anon_sym_COLON_COLON = 95,
  sym__id = 96,
  sym_comment = 97,
  sym_program = 98,
  sym__statement = 99,
  sym__definition = 100,
  sym_definition = 101,
  sym_function_definition = 102,
  sym__metadata_definition = 103,
  sym_global_metadata = 104,
  sym_function_metadata = 105,
  sym_file_import = 106,
  sym__expression = 107,
  sym__infix_expression = 108,
  sym_infix = 109,
  sym_prefix = 110,
  sym_partial = 111,
  sym_prim1 = 112,
  sym_prim2 = 113,
  sym_function_call = 114,
  sym_modifier = 115,
  sym_access = 116,
  sym__primitive = 117,
  sym_parameters = 118,
  sym_arguments = 119,
  sym__argument = 120,
  sym_recursive_arg = 121,
  sym_sequential_arg = 122,
  sym_split_arg = 123,
  sym_merge_arg = 124,
  sym_iteration = 125,
  sym_with_environment = 126,
  sym_environment = 127,
  sym_letrec_environment = 128,
  sym_rec_environment = 129,
  sym_recinition = 130,
  sym_substitution = 131,
  sym_substitutions = 132,
  sym_component = 133,
  sym__infix = 134,
  sym__prim1 = 135,
  sym__prim2 = 136,
  sym__modifier = 137,
  sym_sub = 138,
  sym_one_sample_delay = 139,
  sym__number = 140,
  sym_documentation = 141,
  sym__doc_content = 142,
  sym__special_doc_tag = 143,
  sym__binary_composition = 144,
  sym_recursive = 145,
  sym_sequential = 146,
  sym_split = 147,
  sym_merge = 148,
  sym_parallel = 149,
  sym_variants = 150,
  sym__variant = 151,
  sym_id = 152,
  aux_sym_program_repeat1 = 153,
  aux_sym_parameters_repeat1 = 154,
  aux_sym_arguments_repeat1 = 155,
  aux_sym_environment_repeat1 = 156,
  aux_sym_rec_environment_repeat1 = 157,
  aux_sym_documentation_repeat1 = 158,
  aux_sym_variants_repeat1 = 159,
  aux_sym_id_repeat1 = 160,
  alias_sym_parameter = 161,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_declare] = "declare",
  [anon_sym_import] = "import",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_environment] = "environment",
  [anon_sym_TILDE] = "~",
  [anon_sym_COLON] = ":",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_COLON_GT] = ":>",
  [sym_par] = "par",
  [sym_seq] = "seq",
  [sym_sum] = "sum",
  [sym_prod] = "prod",
  [anon_sym_with] = "with",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_letrec] = "letrec",
  [anon_sym_where] = "where",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_component] = "component",
  [sym_add] = "add",
  [sym_mult] = "mult",
  [sym_div] = "div",
  [sym_mod] = "mod",
  [sym_pow] = "pow",
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
  [sym_exp] = "exp",
  [sym_log] = "log",
  [sym_log10] = "log10",
  [sym_sqrt] = "sqrt",
  [sym_abs] = "abs",
  [sym_floor] = "floor",
  [sym_ceil] = "ceil",
  [sym_rint] = "rint",
  [sym_round] = "round",
  [sym_acos] = "acos",
  [sym_asin] = "asin",
  [sym_atan] = "atan",
  [sym_cos] = "cos",
  [sym_sin] = "sin",
  [sym_tan] = "tan",
  [sym_int_cast] = "int_cast",
  [sym_float_cast] = "float_cast",
  [sym_pow_fun] = "pow_fun",
  [sym_min] = "min",
  [sym_max] = "max",
  [sym_fmod] = "fmod",
  [sym_remainder] = "remainder",
  [sym_atan2] = "atan2",
  [sym_prefix_prim] = "prefix_prim",
  [sym_attach] = "attach",
  [sym_enable] = "enable",
  [sym_control] = "control",
  [sym_wire] = "wire",
  [sym_cut] = "cut",
  [sym_mem] = "mem",
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
  [sym_single_precision] = "single_precision",
  [sym_double_precision] = "double_precision",
  [sym_quad_precision] = "quad_precision",
  [sym_fixed_point_precision] = "fixed_point_precision",
  [sym_string] = "string",
  [anon_sym_COLON_COLON] = "::",
  [sym__id] = "_id",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__definition] = "_definition",
  [sym_definition] = "definition",
  [sym_function_definition] = "function_definition",
  [sym__metadata_definition] = "_metadata_definition",
  [sym_global_metadata] = "global_metadata",
  [sym_function_metadata] = "function_metadata",
  [sym_file_import] = "file_import",
  [sym__expression] = "_expression",
  [sym__infix_expression] = "_infix_expression",
  [sym_infix] = "infix",
  [sym_prefix] = "prefix",
  [sym_partial] = "partial",
  [sym_prim1] = "prim1",
  [sym_prim2] = "prim2",
  [sym_function_call] = "function_call",
  [sym_modifier] = "modifier",
  [sym_access] = "access",
  [sym__primitive] = "_primitive",
  [sym_parameters] = "parameters",
  [sym_arguments] = "arguments",
  [sym__argument] = "_argument",
  [sym_recursive_arg] = "recursive_arg",
  [sym_sequential_arg] = "sequential_arg",
  [sym_split_arg] = "split_arg",
  [sym_merge_arg] = "merge_arg",
  [sym_iteration] = "iteration",
  [sym_with_environment] = "with_environment",
  [sym_environment] = "environment",
  [sym_letrec_environment] = "letrec_environment",
  [sym_rec_environment] = "rec_environment",
  [sym_recinition] = "recinition",
  [sym_substitution] = "substitution",
  [sym_substitutions] = "substitutions",
  [sym_component] = "component",
  [sym__infix] = "_infix",
  [sym__prim1] = "_prim1",
  [sym__prim2] = "_prim2",
  [sym__modifier] = "_modifier",
  [sym_sub] = "sub",
  [sym_one_sample_delay] = "one_sample_delay",
  [sym__number] = "_number",
  [sym_documentation] = "documentation",
  [sym__doc_content] = "_doc_content",
  [sym__special_doc_tag] = "_special_doc_tag",
  [sym__binary_composition] = "_binary_composition",
  [sym_recursive] = "recursive",
  [sym_sequential] = "sequential",
  [sym_split] = "split",
  [sym_merge] = "merge",
  [sym_parallel] = "parallel",
  [sym_variants] = "variants",
  [sym__variant] = "_variant",
  [sym_id] = "id",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_environment_repeat1] = "environment_repeat1",
  [aux_sym_rec_environment_repeat1] = "rec_environment_repeat1",
  [aux_sym_documentation_repeat1] = "documentation_repeat1",
  [aux_sym_variants_repeat1] = "variants_repeat1",
  [aux_sym_id_repeat1] = "id_repeat1",
  [alias_sym_parameter] = "parameter",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_declare] = anon_sym_declare,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_environment] = anon_sym_environment,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [sym_par] = sym_par,
  [sym_seq] = sym_seq,
  [sym_sum] = sym_sum,
  [sym_prod] = sym_prod,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_letrec] = anon_sym_letrec,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_component] = anon_sym_component,
  [sym_add] = sym_add,
  [sym_mult] = sym_mult,
  [sym_div] = sym_div,
  [sym_mod] = sym_mod,
  [sym_pow] = sym_pow,
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
  [sym_exp] = sym_exp,
  [sym_log] = sym_log,
  [sym_log10] = sym_log10,
  [sym_sqrt] = sym_sqrt,
  [sym_abs] = sym_abs,
  [sym_floor] = sym_floor,
  [sym_ceil] = sym_ceil,
  [sym_rint] = sym_rint,
  [sym_round] = sym_round,
  [sym_acos] = sym_acos,
  [sym_asin] = sym_asin,
  [sym_atan] = sym_atan,
  [sym_cos] = sym_cos,
  [sym_sin] = sym_sin,
  [sym_tan] = sym_tan,
  [sym_int_cast] = sym_int_cast,
  [sym_float_cast] = sym_float_cast,
  [sym_pow_fun] = sym_pow_fun,
  [sym_min] = sym_min,
  [sym_max] = sym_max,
  [sym_fmod] = sym_fmod,
  [sym_remainder] = sym_remainder,
  [sym_atan2] = sym_atan2,
  [sym_prefix_prim] = sym_prefix_prim,
  [sym_attach] = sym_attach,
  [sym_enable] = sym_enable,
  [sym_control] = sym_control,
  [sym_wire] = sym_wire,
  [sym_cut] = sym_cut,
  [sym_mem] = sym_mem,
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
  [sym_single_precision] = sym_single_precision,
  [sym_double_precision] = sym_double_precision,
  [sym_quad_precision] = sym_quad_precision,
  [sym_fixed_point_precision] = sym_fixed_point_precision,
  [sym_string] = sym_string,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym__id] = sym__id,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__definition] = sym__definition,
  [sym_definition] = sym_definition,
  [sym_function_definition] = sym_function_definition,
  [sym__metadata_definition] = sym__metadata_definition,
  [sym_global_metadata] = sym_global_metadata,
  [sym_function_metadata] = sym_function_metadata,
  [sym_file_import] = sym_file_import,
  [sym__expression] = sym__expression,
  [sym__infix_expression] = sym__infix_expression,
  [sym_infix] = sym_infix,
  [sym_prefix] = sym_prefix,
  [sym_partial] = sym_partial,
  [sym_prim1] = sym_prim1,
  [sym_prim2] = sym_prim2,
  [sym_function_call] = sym_function_call,
  [sym_modifier] = sym_modifier,
  [sym_access] = sym_access,
  [sym__primitive] = sym__primitive,
  [sym_parameters] = sym_parameters,
  [sym_arguments] = sym_arguments,
  [sym__argument] = sym__argument,
  [sym_recursive_arg] = sym_recursive_arg,
  [sym_sequential_arg] = sym_sequential_arg,
  [sym_split_arg] = sym_split_arg,
  [sym_merge_arg] = sym_merge_arg,
  [sym_iteration] = sym_iteration,
  [sym_with_environment] = sym_with_environment,
  [sym_environment] = sym_environment,
  [sym_letrec_environment] = sym_letrec_environment,
  [sym_rec_environment] = sym_rec_environment,
  [sym_recinition] = sym_recinition,
  [sym_substitution] = sym_substitution,
  [sym_substitutions] = sym_substitutions,
  [sym_component] = sym_component,
  [sym__infix] = sym__infix,
  [sym__prim1] = sym__prim1,
  [sym__prim2] = sym__prim2,
  [sym__modifier] = sym__modifier,
  [sym_sub] = sym_sub,
  [sym_one_sample_delay] = sym_one_sample_delay,
  [sym__number] = sym__number,
  [sym_documentation] = sym_documentation,
  [sym__doc_content] = sym__doc_content,
  [sym__special_doc_tag] = sym__special_doc_tag,
  [sym__binary_composition] = sym__binary_composition,
  [sym_recursive] = sym_recursive,
  [sym_sequential] = sym_sequential,
  [sym_split] = sym_split,
  [sym_merge] = sym_merge,
  [sym_parallel] = sym_parallel,
  [sym_variants] = sym_variants,
  [sym__variant] = sym__variant,
  [sym_id] = sym_id,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_environment_repeat1] = aux_sym_environment_repeat1,
  [aux_sym_rec_environment_repeat1] = aux_sym_rec_environment_repeat1,
  [aux_sym_documentation_repeat1] = aux_sym_documentation_repeat1,
  [aux_sym_variants_repeat1] = aux_sym_variants_repeat1,
  [aux_sym_id_repeat1] = aux_sym_id_repeat1,
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_declare] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_environment] = {
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
  [sym_par] = {
    .visible = true,
    .named = true,
  },
  [sym_seq] = {
    .visible = true,
    .named = true,
  },
  [sym_sum] = {
    .visible = true,
    .named = true,
  },
  [sym_prod] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_letrec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_component] = {
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
  [sym_pow] = {
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
  [sym_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_log] = {
    .visible = true,
    .named = true,
  },
  [sym_log10] = {
    .visible = true,
    .named = true,
  },
  [sym_sqrt] = {
    .visible = true,
    .named = true,
  },
  [sym_abs] = {
    .visible = true,
    .named = true,
  },
  [sym_floor] = {
    .visible = true,
    .named = true,
  },
  [sym_ceil] = {
    .visible = true,
    .named = true,
  },
  [sym_rint] = {
    .visible = true,
    .named = true,
  },
  [sym_round] = {
    .visible = true,
    .named = true,
  },
  [sym_acos] = {
    .visible = true,
    .named = true,
  },
  [sym_asin] = {
    .visible = true,
    .named = true,
  },
  [sym_atan] = {
    .visible = true,
    .named = true,
  },
  [sym_cos] = {
    .visible = true,
    .named = true,
  },
  [sym_sin] = {
    .visible = true,
    .named = true,
  },
  [sym_tan] = {
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
  [sym_pow_fun] = {
    .visible = true,
    .named = true,
  },
  [sym_min] = {
    .visible = true,
    .named = true,
  },
  [sym_max] = {
    .visible = true,
    .named = true,
  },
  [sym_fmod] = {
    .visible = true,
    .named = true,
  },
  [sym_remainder] = {
    .visible = true,
    .named = true,
  },
  [sym_atan2] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_prim] = {
    .visible = true,
    .named = true,
  },
  [sym_attach] = {
    .visible = true,
    .named = true,
  },
  [sym_enable] = {
    .visible = true,
    .named = true,
  },
  [sym_control] = {
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
  [sym_mem] = {
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
  [sym_single_precision] = {
    .visible = true,
    .named = true,
  },
  [sym_double_precision] = {
    .visible = true,
    .named = true,
  },
  [sym_quad_precision] = {
    .visible = true,
    .named = true,
  },
  [sym_fixed_point_precision] = {
    .visible = true,
    .named = true,
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
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
  [sym__metadata_definition] = {
    .visible = false,
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
  [sym_file_import] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__infix_expression] = {
    .visible = false,
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
  [sym_prim1] = {
    .visible = true,
    .named = true,
  },
  [sym_prim2] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
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
  [sym_arguments] = {
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
  [sym_with_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_letrec_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_rec_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_recinition] = {
    .visible = true,
    .named = true,
  },
  [sym_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym_substitutions] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym__infix] = {
    .visible = false,
    .named = true,
  },
  [sym__prim1] = {
    .visible = false,
    .named = true,
  },
  [sym__prim2] = {
    .visible = false,
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
  [sym_one_sample_delay] = {
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
  [sym_variants] = {
    .visible = true,
    .named = true,
  },
  [sym__variant] = {
    .visible = false,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_environment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rec_environment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_documentation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variants_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_id_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_parameter] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_argument = 1,
  field_callee = 2,
  field_current_iter = 3,
  field_definition = 4,
  field_environment = 5,
  field_expression = 6,
  field_function_name = 7,
  field_key = 8,
  field_left = 9,
  field_local_environment = 10,
  field_name = 11,
  field_num_iters = 12,
  field_operand = 13,
  field_operator = 14,
  field_primitive = 15,
  field_right = 16,
  field_type = 17,
  field_value = 18,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_callee] = "callee",
  [field_current_iter] = "current_iter",
  [field_definition] = "definition",
  [field_environment] = "environment",
  [field_expression] = "expression",
  [field_function_name] = "function_name",
  [field_key] = "key",
  [field_left] = "left",
  [field_local_environment] = "local_environment",
  [field_name] = "name",
  [field_num_iters] = "num_iters",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_primitive] = "primitive",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 1},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 1},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 1},
  [17] = {.index = 27, .length = 2},
  [18] = {.index = 29, .length = 2},
  [19] = {.index = 31, .length = 3},
  [20] = {.index = 34, .length = 4},
  [21] = {.index = 38, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 1},
    {field_value, 2},
  [2] =
    {field_name, 0},
    {field_value, 2},
  [4] =
    {field_function_name, 1},
    {field_key, 2},
    {field_value, 3},
  [7] =
    {field_name, 1},
    {field_value, 3},
  [9] =
    {field_expression, 0},
  [10] =
    {field_operand, 0},
    {field_operator, 1},
  [12] =
    {field_left, 0},
    {field_right, 2},
  [14] =
    {field_expression, 0},
    {field_local_environment, 2},
  [16] =
    {field_definition, 2},
    {field_environment, 0},
  [18] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [21] =
    {field_callee, 0},
  [22] =
    {field_operand, 2},
    {field_operator, 0},
  [24] =
    {field_argument, 2},
    {field_primitive, 0},
  [26] =
    {field_primitive, 0},
  [27] =
    {field_name, 0},
    {field_value, 5},
  [29] =
    {field_name, 1},
    {field_value, 6},
  [31] =
    {field_left, 2},
    {field_operator, 0},
    {field_right, 4},
  [34] =
    {field_current_iter, 2},
    {field_expression, 6},
    {field_num_iters, 4},
    {field_type, 0},
  [38] =
    {field_expression, 3},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_parameter,
  },
  [12] = {
    [1] = alias_sym_parameter,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_id, 2,
    sym_id,
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
  [31] = 28,
  [32] = 27,
  [33] = 29,
  [34] = 26,
  [35] = 30,
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
  [49] = 39,
  [50] = 40,
  [51] = 37,
  [52] = 52,
  [53] = 38,
  [54] = 42,
  [55] = 55,
  [56] = 56,
  [57] = 57,
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
  [70] = 43,
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
  [111] = 111,
  [112] = 95,
  [113] = 48,
  [114] = 45,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 47,
  [121] = 121,
  [122] = 106,
  [123] = 123,
  [124] = 44,
  [125] = 46,
  [126] = 108,
  [127] = 55,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
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
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 194,
  [196] = 191,
  [197] = 184,
  [198] = 198,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(257);
      if (lookahead == '!') ADVANCE(375);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(303);
      if (lookahead == '&') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(261);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead == '+') ADVANCE(300);
      if (lookahead == ',') ADVANCE(266);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '<') ADVANCE(311);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '>') ADVANCE(314);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == ']') ADVANCE(296);
      if (lookahead == '^') ADVANCE(304);
      if (lookahead == '_') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'c') ADVANCE(86);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'q') ADVANCE(243);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(173);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(375);
      if (lookahead == '%') ADVANCE(303);
      if (lookahead == '&') ADVANCE(306);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead == '+') ADVANCE(300);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '.') ADVANCE(252);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(312);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(314);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '\\') ADVANCE(271);
      if (lookahead == '^') ADVANCE(304);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(442);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead == 'f') ADVANCE(478);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(509);
      if (lookahead == 'm') ADVANCE(407);
      if (lookahead == 'p') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(439);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == 't') ADVANCE(412);
      if (lookahead == 'x') ADVANCE(516);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(303);
      if (lookahead == '&') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(261);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(266);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '<') ADVANCE(311);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(314);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == '^') ADVANCE(304);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'w') ADVANCE(467);
      if (lookahead == 'x') ADVANCE(516);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(303);
      if (lookahead == '&') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(261);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(266);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '<') ADVANCE(311);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(314);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == '^') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(173);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(303);
      if (lookahead == '&') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(261);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(266);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '<') ADVANCE(311);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(314);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == '^') ADVANCE(304);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(516);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(303);
      if (lookahead == '&') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(261);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(266);
      if (lookahead == '-') ADVANCE(269);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == ':') ADVANCE(276);
      if (lookahead == ';') ADVANCE(258);
      if (lookahead == '<') ADVANCE(311);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(314);
      if (lookahead == '@') ADVANCE(318);
      if (lookahead == '[') ADVANCE(295);
      if (lookahead == '^') ADVANCE(304);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(173);
      if (lookahead == '|') ADVANCE(305);
      if (lookahead == '~') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == ')') ADVANCE(261);
      if (lookahead == ',') ADVANCE(266);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '=') ADVANCE(259);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(403);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(570);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(569);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(323);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(404);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ']') ADVANCE(296);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(456);
      if (lookahead == 'q') ADVANCE(561);
      if (lookahead == 's') ADVANCE(457);
      if (lookahead == '}') ADVANCE(290);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead == 'q') ADVANCE(561);
      if (lookahead == 's') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0) ADVANCE(385);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(317);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(316);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(382);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(383);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(390);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(386);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(391);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(388);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(392);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(387);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(389);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(393);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(248);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'v') ADVANCE(120);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(137);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(359);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(151);
      if (lookahead == 'q') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(114);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(321);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(394);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(210);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(287);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(367);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(331);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(371);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(376);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(188);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(339);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(234);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(319);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(211);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 193:
      if (lookahead == 'p') ADVANCE(213);
      END_STATE();
    case 194:
      if (lookahead == 'p') ADVANCE(214);
      END_STATE();
    case 195:
      if (lookahead == 'p') ADVANCE(215);
      END_STATE();
    case 196:
      if (lookahead == 'q') ADVANCE(281);
      END_STATE();
    case 197:
      if (lookahead == 'q') ADVANCE(244);
      END_STATE();
    case 198:
      if (lookahead == 'q') ADVANCE(246);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(327);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(237);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(128);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 247:
      if (lookahead == 'w') ADVANCE(353);
      END_STATE();
    case 248:
      if (lookahead == 'x') ADVANCE(357);
      END_STATE();
    case 249:
      if (lookahead == 'x') ADVANCE(365);
      END_STATE();
    case 250:
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 251:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 254:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 255:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(570);
      if (lookahead == '\r') ADVANCE(571);
      END_STATE();
    case 256:
      if (eof) ADVANCE(257);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(432);
      if (lookahead == 'f') ADVANCE(456);
      if (lookahead == 'i') ADVANCE(480);
      if (lookahead == 'q') ADVANCE(561);
      if (lookahead == 's') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(256)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(404);
      if (lookahead == '>') ADVANCE(278);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_par);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_letrec);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_letrec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_add);
      if (lookahead == '.') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_mult);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_div);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_mod);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_pow);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_lshift);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_rshift);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == ':') ADVANCE(277);
      if (lookahead == '<') ADVANCE(309);
      if (lookahead == '=') ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '<') ADVANCE(309);
      if (lookahead == '=') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(315);
      if (lookahead == '>') ADVANCE(310);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_delay);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_exp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(14);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_log10);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_log10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_sqrt);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_sqrt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_abs);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_abs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_floor);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_floor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_ceil);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_ceil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_rint);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_rint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_round);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_round);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_acos);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_acos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_asin);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_asin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(363);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_cos);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_cos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_sin);
      if (lookahead == 'g') ADVANCE(139);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_tan);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_tan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_pow_fun);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_pow_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_min);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_fmod);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_fmod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_remainder);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_remainder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_atan2);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_atan2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_prefix_prim);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_prefix_prim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_attach);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_attach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_enable);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_enable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(317);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'f') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_single_precision);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_single_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_double_precision);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_double_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_quad_precision);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_quad_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '0') ADVANCE(324);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(531);
      if (lookahead == 'o') ADVANCE(564);
      if (lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(554);
      if (lookahead == 'o') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(496);
      if (lookahead == 't') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(418);
      if (lookahead == 'v') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(544);
      if (lookahead == 'c') ADVANCE(513);
      if (lookahead == 's') ADVANCE(466);
      if (lookahead == 't') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(419);
      if (lookahead == 'o') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(529);
      if (lookahead == 'i') ADVANCE(493);
      if (lookahead == 'q') ADVANCE(537);
      if (lookahead == 'u') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(451);
      if (lookahead == 'o') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(483);
      if (lookahead == 'i') ADVANCE(501);
      if (lookahead == 'o') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(507);
      if (lookahead == 'm') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(524);
      if (lookahead == 'n') ADVANCE(558);
      if (lookahead == 's') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == 'x') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'w') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(568);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(570);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(570);
      if (lookahead == '\\') ADVANCE(255);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 256},
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
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 256},
  [79] = {.lex_state = 256},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 19},
  [90] = {.lex_state = 19},
  [91] = {.lex_state = 19},
  [92] = {.lex_state = 256},
  [93] = {.lex_state = 256},
  [94] = {.lex_state = 256},
  [95] = {.lex_state = 256},
  [96] = {.lex_state = 256},
  [97] = {.lex_state = 256},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 17},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 16},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 16},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 18},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
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
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 256},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 7},
  [195] = {.lex_state = 7},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 7},
  [198] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_declare] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_environment] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [sym_par] = ACTIONS(1),
    [sym_seq] = ACTIONS(1),
    [sym_sum] = ACTIONS(1),
    [sym_prod] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_letrec] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_component] = ACTIONS(1),
    [sym_add] = ACTIONS(1),
    [sym_mult] = ACTIONS(1),
    [sym_div] = ACTIONS(1),
    [sym_mod] = ACTIONS(1),
    [sym_pow] = ACTIONS(1),
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
    [sym_exp] = ACTIONS(1),
    [sym_log] = ACTIONS(1),
    [sym_log10] = ACTIONS(1),
    [sym_sqrt] = ACTIONS(1),
    [sym_abs] = ACTIONS(1),
    [sym_floor] = ACTIONS(1),
    [sym_ceil] = ACTIONS(1),
    [sym_rint] = ACTIONS(1),
    [sym_round] = ACTIONS(1),
    [sym_acos] = ACTIONS(1),
    [sym_asin] = ACTIONS(1),
    [sym_atan] = ACTIONS(1),
    [sym_cos] = ACTIONS(1),
    [sym_sin] = ACTIONS(1),
    [sym_tan] = ACTIONS(1),
    [sym_int_cast] = ACTIONS(1),
    [sym_float_cast] = ACTIONS(1),
    [sym_pow_fun] = ACTIONS(1),
    [sym_min] = ACTIONS(1),
    [sym_max] = ACTIONS(1),
    [sym_fmod] = ACTIONS(1),
    [sym_remainder] = ACTIONS(1),
    [sym_atan2] = ACTIONS(1),
    [sym_prefix_prim] = ACTIONS(1),
    [sym_attach] = ACTIONS(1),
    [sym_enable] = ACTIONS(1),
    [sym_control] = ACTIONS(1),
    [sym_wire] = ACTIONS(1),
    [sym_cut] = ACTIONS(1),
    [sym_mem] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
    [sym_single_precision] = ACTIONS(1),
    [sym_double_precision] = ACTIONS(1),
    [sym_quad_precision] = ACTIONS(1),
    [sym_fixed_point_precision] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(192),
    [sym__statement] = STATE(79),
    [sym__definition] = STATE(79),
    [sym_definition] = STATE(191),
    [sym_function_definition] = STATE(191),
    [sym__metadata_definition] = STATE(79),
    [sym_global_metadata] = STATE(190),
    [sym_function_metadata] = STATE(190),
    [sym_file_import] = STATE(79),
    [sym_documentation] = STATE(79),
    [sym_variants] = STATE(144),
    [sym__variant] = STATE(106),
    [sym_id] = STATE(158),
    [aux_sym_program_repeat1] = STATE(79),
    [aux_sym_variants_repeat1] = STATE(106),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_declare] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_LTmdoc_GT] = ACTIONS(9),
    [sym_single_precision] = ACTIONS(11),
    [sym_double_precision] = ACTIONS(11),
    [sym_quad_precision] = ACTIONS(11),
    [sym_fixed_point_precision] = ACTIONS(11),
    [anon_sym_COLON_COLON] = ACTIONS(13),
    [sym__id] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
  },
  [2] = {
    [sym__expression] = STATE(111),
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(111),
    [sym_letrec_environment] = STATE(111),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(41),
    [sym__binary_composition] = STATE(111),
    [sym_recursive] = STATE(111),
    [sym_sequential] = STATE(111),
    [sym_split] = STATE(111),
    [sym_merge] = STATE(111),
    [sym_parallel] = STATE(111),
    [sym_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [3] = {
    [sym__expression] = STATE(99),
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(99),
    [sym_letrec_environment] = STATE(99),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(41),
    [sym__binary_composition] = STATE(99),
    [sym_recursive] = STATE(99),
    [sym_sequential] = STATE(99),
    [sym_split] = STATE(99),
    [sym_merge] = STATE(99),
    [sym_parallel] = STATE(99),
    [sym_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [4] = {
    [sym__expression] = STATE(100),
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(100),
    [sym_letrec_environment] = STATE(100),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(41),
    [sym__binary_composition] = STATE(100),
    [sym_recursive] = STATE(100),
    [sym_sequential] = STATE(100),
    [sym_split] = STATE(100),
    [sym_merge] = STATE(100),
    [sym_parallel] = STATE(100),
    [sym_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [5] = {
    [sym__expression] = STATE(101),
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(101),
    [sym_letrec_environment] = STATE(101),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(41),
    [sym__binary_composition] = STATE(101),
    [sym_recursive] = STATE(101),
    [sym_sequential] = STATE(101),
    [sym_split] = STATE(101),
    [sym_merge] = STATE(101),
    [sym_parallel] = STATE(101),
    [sym_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [6] = {
    [sym__expression] = STATE(102),
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(102),
    [sym_letrec_environment] = STATE(102),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(41),
    [sym__binary_composition] = STATE(102),
    [sym_recursive] = STATE(102),
    [sym_sequential] = STATE(102),
    [sym_split] = STATE(102),
    [sym_merge] = STATE(102),
    [sym_parallel] = STATE(102),
    [sym_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [7] = {
    [sym__expression] = STATE(103),
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(103),
    [sym_letrec_environment] = STATE(103),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(41),
    [sym__binary_composition] = STATE(103),
    [sym_recursive] = STATE(103),
    [sym_sequential] = STATE(103),
    [sym_split] = STATE(103),
    [sym_merge] = STATE(103),
    [sym_parallel] = STATE(103),
    [sym_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [8] = {
    [sym__expression] = STATE(116),
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(116),
    [sym_letrec_environment] = STATE(116),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(41),
    [sym__binary_composition] = STATE(116),
    [sym_recursive] = STATE(116),
    [sym_sequential] = STATE(116),
    [sym_split] = STATE(116),
    [sym_merge] = STATE(116),
    [sym_parallel] = STATE(116),
    [sym_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [9] = {
    [sym__expression] = STATE(123),
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(123),
    [sym_letrec_environment] = STATE(123),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(41),
    [sym__binary_composition] = STATE(123),
    [sym_recursive] = STATE(123),
    [sym_sequential] = STATE(123),
    [sym_split] = STATE(123),
    [sym_merge] = STATE(123),
    [sym_parallel] = STATE(123),
    [sym_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [10] = {
    [sym__expression] = STATE(118),
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(118),
    [sym_letrec_environment] = STATE(118),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(41),
    [sym__binary_composition] = STATE(118),
    [sym_recursive] = STATE(118),
    [sym_sequential] = STATE(118),
    [sym_split] = STATE(118),
    [sym_merge] = STATE(118),
    [sym_parallel] = STATE(118),
    [sym_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [11] = {
    [sym__expression] = STATE(121),
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(121),
    [sym_letrec_environment] = STATE(121),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(41),
    [sym__binary_composition] = STATE(121),
    [sym_recursive] = STATE(121),
    [sym_sequential] = STATE(121),
    [sym_split] = STATE(121),
    [sym_merge] = STATE(121),
    [sym_parallel] = STATE(121),
    [sym_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [12] = {
    [sym__expression] = STATE(119),
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(119),
    [sym_letrec_environment] = STATE(119),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(41),
    [sym__binary_composition] = STATE(119),
    [sym_recursive] = STATE(119),
    [sym_sequential] = STATE(119),
    [sym_split] = STATE(119),
    [sym_merge] = STATE(119),
    [sym_parallel] = STATE(119),
    [sym_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [13] = {
    [sym__expression] = STATE(115),
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(115),
    [sym_letrec_environment] = STATE(115),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(41),
    [sym__binary_composition] = STATE(115),
    [sym_recursive] = STATE(115),
    [sym_sequential] = STATE(115),
    [sym_split] = STATE(115),
    [sym_merge] = STATE(115),
    [sym_parallel] = STATE(115),
    [sym_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [14] = {
    [sym__expression] = STATE(117),
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(117),
    [sym_letrec_environment] = STATE(117),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(41),
    [sym__binary_composition] = STATE(117),
    [sym_recursive] = STATE(117),
    [sym_sequential] = STATE(117),
    [sym_split] = STATE(117),
    [sym_merge] = STATE(117),
    [sym_parallel] = STATE(117),
    [sym_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [15] = {
    [sym__infix_expression] = STATE(52),
    [sym_infix] = STATE(52),
    [sym_prefix] = STATE(52),
    [sym_partial] = STATE(52),
    [sym_prim1] = STATE(52),
    [sym_prim2] = STATE(52),
    [sym_function_call] = STATE(52),
    [sym_modifier] = STATE(52),
    [sym_access] = STATE(52),
    [sym__primitive] = STATE(52),
    [sym_arguments] = STATE(168),
    [sym__argument] = STATE(128),
    [sym_recursive_arg] = STATE(128),
    [sym_sequential_arg] = STATE(128),
    [sym_split_arg] = STATE(128),
    [sym_merge_arg] = STATE(128),
    [sym_iteration] = STATE(52),
    [sym_substitution] = STATE(52),
    [sym_component] = STATE(52),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(52),
    [sym_id] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [16] = {
    [sym__infix_expression] = STATE(52),
    [sym_infix] = STATE(52),
    [sym_prefix] = STATE(52),
    [sym_partial] = STATE(52),
    [sym_prim1] = STATE(52),
    [sym_prim2] = STATE(52),
    [sym_function_call] = STATE(52),
    [sym_modifier] = STATE(52),
    [sym_access] = STATE(52),
    [sym__primitive] = STATE(52),
    [sym_arguments] = STATE(188),
    [sym__argument] = STATE(128),
    [sym_recursive_arg] = STATE(128),
    [sym_sequential_arg] = STATE(128),
    [sym_split_arg] = STATE(128),
    [sym_merge_arg] = STATE(128),
    [sym_iteration] = STATE(52),
    [sym_substitution] = STATE(52),
    [sym_component] = STATE(52),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(52),
    [sym_id] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [17] = {
    [sym__infix_expression] = STATE(52),
    [sym_infix] = STATE(52),
    [sym_prefix] = STATE(52),
    [sym_partial] = STATE(52),
    [sym_prim1] = STATE(52),
    [sym_prim2] = STATE(52),
    [sym_function_call] = STATE(52),
    [sym_modifier] = STATE(52),
    [sym_access] = STATE(52),
    [sym__primitive] = STATE(52),
    [sym__argument] = STATE(135),
    [sym_recursive_arg] = STATE(135),
    [sym_sequential_arg] = STATE(135),
    [sym_split_arg] = STATE(135),
    [sym_merge_arg] = STATE(135),
    [sym_iteration] = STATE(52),
    [sym_substitution] = STATE(52),
    [sym_component] = STATE(52),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(52),
    [sym_id] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [18] = {
    [sym__infix_expression] = STATE(52),
    [sym_infix] = STATE(52),
    [sym_prefix] = STATE(52),
    [sym_partial] = STATE(52),
    [sym_prim1] = STATE(52),
    [sym_prim2] = STATE(52),
    [sym_function_call] = STATE(52),
    [sym_modifier] = STATE(52),
    [sym_access] = STATE(52),
    [sym__primitive] = STATE(52),
    [sym__argument] = STATE(129),
    [sym_recursive_arg] = STATE(129),
    [sym_sequential_arg] = STATE(129),
    [sym_split_arg] = STATE(129),
    [sym_merge_arg] = STATE(129),
    [sym_iteration] = STATE(52),
    [sym_substitution] = STATE(52),
    [sym_component] = STATE(52),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(52),
    [sym_id] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [19] = {
    [sym__infix_expression] = STATE(52),
    [sym_infix] = STATE(52),
    [sym_prefix] = STATE(52),
    [sym_partial] = STATE(52),
    [sym_prim1] = STATE(52),
    [sym_prim2] = STATE(52),
    [sym_function_call] = STATE(52),
    [sym_modifier] = STATE(52),
    [sym_access] = STATE(52),
    [sym__primitive] = STATE(52),
    [sym__argument] = STATE(136),
    [sym_recursive_arg] = STATE(136),
    [sym_sequential_arg] = STATE(136),
    [sym_split_arg] = STATE(136),
    [sym_merge_arg] = STATE(136),
    [sym_iteration] = STATE(52),
    [sym_substitution] = STATE(52),
    [sym_component] = STATE(52),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(52),
    [sym_id] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [20] = {
    [sym__infix_expression] = STATE(52),
    [sym_infix] = STATE(52),
    [sym_prefix] = STATE(52),
    [sym_partial] = STATE(52),
    [sym_prim1] = STATE(52),
    [sym_prim2] = STATE(52),
    [sym_function_call] = STATE(52),
    [sym_modifier] = STATE(52),
    [sym_access] = STATE(52),
    [sym__primitive] = STATE(52),
    [sym__argument] = STATE(132),
    [sym_recursive_arg] = STATE(132),
    [sym_sequential_arg] = STATE(132),
    [sym_split_arg] = STATE(132),
    [sym_merge_arg] = STATE(132),
    [sym_iteration] = STATE(52),
    [sym_substitution] = STATE(52),
    [sym_component] = STATE(52),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(52),
    [sym_id] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [21] = {
    [sym__infix_expression] = STATE(52),
    [sym_infix] = STATE(52),
    [sym_prefix] = STATE(52),
    [sym_partial] = STATE(52),
    [sym_prim1] = STATE(52),
    [sym_prim2] = STATE(52),
    [sym_function_call] = STATE(52),
    [sym_modifier] = STATE(52),
    [sym_access] = STATE(52),
    [sym__primitive] = STATE(52),
    [sym__argument] = STATE(130),
    [sym_recursive_arg] = STATE(130),
    [sym_sequential_arg] = STATE(130),
    [sym_split_arg] = STATE(130),
    [sym_merge_arg] = STATE(130),
    [sym_iteration] = STATE(52),
    [sym_substitution] = STATE(52),
    [sym_component] = STATE(52),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(52),
    [sym_id] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [22] = {
    [sym__infix_expression] = STATE(52),
    [sym_infix] = STATE(52),
    [sym_prefix] = STATE(52),
    [sym_partial] = STATE(52),
    [sym_prim1] = STATE(52),
    [sym_prim2] = STATE(52),
    [sym_function_call] = STATE(52),
    [sym_modifier] = STATE(52),
    [sym_access] = STATE(52),
    [sym__primitive] = STATE(52),
    [sym__argument] = STATE(133),
    [sym_recursive_arg] = STATE(133),
    [sym_sequential_arg] = STATE(133),
    [sym_split_arg] = STATE(133),
    [sym_merge_arg] = STATE(133),
    [sym_iteration] = STATE(52),
    [sym_substitution] = STATE(52),
    [sym_component] = STATE(52),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(52),
    [sym_id] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [23] = {
    [sym__infix_expression] = STATE(52),
    [sym_infix] = STATE(52),
    [sym_prefix] = STATE(52),
    [sym_partial] = STATE(52),
    [sym_prim1] = STATE(52),
    [sym_prim2] = STATE(52),
    [sym_function_call] = STATE(52),
    [sym_modifier] = STATE(52),
    [sym_access] = STATE(52),
    [sym__primitive] = STATE(52),
    [sym__argument] = STATE(140),
    [sym_recursive_arg] = STATE(140),
    [sym_sequential_arg] = STATE(140),
    [sym_split_arg] = STATE(140),
    [sym_merge_arg] = STATE(140),
    [sym_iteration] = STATE(52),
    [sym_substitution] = STATE(52),
    [sym_component] = STATE(52),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(52),
    [sym_id] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [24] = {
    [sym__infix_expression] = STATE(52),
    [sym_infix] = STATE(52),
    [sym_prefix] = STATE(52),
    [sym_partial] = STATE(52),
    [sym_prim1] = STATE(52),
    [sym_prim2] = STATE(52),
    [sym_function_call] = STATE(52),
    [sym_modifier] = STATE(52),
    [sym_access] = STATE(52),
    [sym__primitive] = STATE(52),
    [sym__argument] = STATE(131),
    [sym_recursive_arg] = STATE(131),
    [sym_sequential_arg] = STATE(131),
    [sym_split_arg] = STATE(131),
    [sym_merge_arg] = STATE(131),
    [sym_iteration] = STATE(52),
    [sym_substitution] = STATE(52),
    [sym_component] = STATE(52),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(52),
    [sym_id] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [25] = {
    [sym__infix_expression] = STATE(52),
    [sym_infix] = STATE(52),
    [sym_prefix] = STATE(52),
    [sym_partial] = STATE(52),
    [sym_prim1] = STATE(52),
    [sym_prim2] = STATE(52),
    [sym_function_call] = STATE(52),
    [sym_modifier] = STATE(52),
    [sym_access] = STATE(52),
    [sym__primitive] = STATE(52),
    [sym__argument] = STATE(134),
    [sym_recursive_arg] = STATE(134),
    [sym_sequential_arg] = STATE(134),
    [sym_split_arg] = STATE(134),
    [sym_merge_arg] = STATE(134),
    [sym_iteration] = STATE(52),
    [sym_substitution] = STATE(52),
    [sym_component] = STATE(52),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(52),
    [sym_id] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [26] = {
    [sym__infix_expression] = STATE(51),
    [sym_infix] = STATE(51),
    [sym_prefix] = STATE(51),
    [sym_partial] = STATE(51),
    [sym_prim1] = STATE(51),
    [sym_prim2] = STATE(51),
    [sym_function_call] = STATE(51),
    [sym_modifier] = STATE(51),
    [sym_access] = STATE(51),
    [sym__primitive] = STATE(51),
    [sym_iteration] = STATE(51),
    [sym_substitution] = STATE(51),
    [sym_component] = STATE(51),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(51),
    [sym_id] = STATE(51),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(53),
    [sym_cut] = ACTIONS(53),
    [sym_mem] = ACTIONS(53),
    [sym_int] = ACTIONS(53),
    [sym_real] = ACTIONS(55),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [27] = {
    [sym__infix_expression] = STATE(50),
    [sym_infix] = STATE(50),
    [sym_prefix] = STATE(50),
    [sym_partial] = STATE(50),
    [sym_prim1] = STATE(50),
    [sym_prim2] = STATE(50),
    [sym_function_call] = STATE(50),
    [sym_modifier] = STATE(50),
    [sym_access] = STATE(50),
    [sym__primitive] = STATE(50),
    [sym_iteration] = STATE(50),
    [sym_substitution] = STATE(50),
    [sym_component] = STATE(50),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(50),
    [sym_id] = STATE(50),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [28] = {
    [sym__infix_expression] = STATE(49),
    [sym_infix] = STATE(49),
    [sym_prefix] = STATE(49),
    [sym_partial] = STATE(49),
    [sym_prim1] = STATE(49),
    [sym_prim2] = STATE(49),
    [sym_function_call] = STATE(49),
    [sym_modifier] = STATE(49),
    [sym_access] = STATE(49),
    [sym__primitive] = STATE(49),
    [sym_iteration] = STATE(49),
    [sym_substitution] = STATE(49),
    [sym_component] = STATE(49),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(49),
    [sym_id] = STATE(49),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(61),
    [sym_cut] = ACTIONS(61),
    [sym_mem] = ACTIONS(61),
    [sym_int] = ACTIONS(61),
    [sym_real] = ACTIONS(63),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [29] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(65),
    [sym_cut] = ACTIONS(65),
    [sym_mem] = ACTIONS(65),
    [sym_int] = ACTIONS(65),
    [sym_real] = ACTIONS(67),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [30] = {
    [sym__infix_expression] = STATE(54),
    [sym_infix] = STATE(54),
    [sym_prefix] = STATE(54),
    [sym_partial] = STATE(54),
    [sym_prim1] = STATE(54),
    [sym_prim2] = STATE(54),
    [sym_function_call] = STATE(54),
    [sym_modifier] = STATE(54),
    [sym_access] = STATE(54),
    [sym__primitive] = STATE(54),
    [sym_iteration] = STATE(54),
    [sym_substitution] = STATE(54),
    [sym_component] = STATE(54),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(54),
    [sym_id] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(47),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [31] = {
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(39),
    [sym_id] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(73),
    [sym_cut] = ACTIONS(73),
    [sym_mem] = ACTIONS(73),
    [sym_int] = ACTIONS(73),
    [sym_real] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [32] = {
    [sym__infix_expression] = STATE(40),
    [sym_infix] = STATE(40),
    [sym_prefix] = STATE(40),
    [sym_partial] = STATE(40),
    [sym_prim1] = STATE(40),
    [sym_prim2] = STATE(40),
    [sym_function_call] = STATE(40),
    [sym_modifier] = STATE(40),
    [sym_access] = STATE(40),
    [sym__primitive] = STATE(40),
    [sym_iteration] = STATE(40),
    [sym_substitution] = STATE(40),
    [sym_component] = STATE(40),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(40),
    [sym_id] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(77),
    [sym_cut] = ACTIONS(77),
    [sym_mem] = ACTIONS(77),
    [sym_int] = ACTIONS(77),
    [sym_real] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [33] = {
    [sym__infix_expression] = STATE(38),
    [sym_infix] = STATE(38),
    [sym_prefix] = STATE(38),
    [sym_partial] = STATE(38),
    [sym_prim1] = STATE(38),
    [sym_prim2] = STATE(38),
    [sym_function_call] = STATE(38),
    [sym_modifier] = STATE(38),
    [sym_access] = STATE(38),
    [sym__primitive] = STATE(38),
    [sym_iteration] = STATE(38),
    [sym_substitution] = STATE(38),
    [sym_component] = STATE(38),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(38),
    [sym_id] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(81),
    [sym_cut] = ACTIONS(81),
    [sym_mem] = ACTIONS(81),
    [sym_int] = ACTIONS(81),
    [sym_real] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [34] = {
    [sym__infix_expression] = STATE(37),
    [sym_infix] = STATE(37),
    [sym_prefix] = STATE(37),
    [sym_partial] = STATE(37),
    [sym_prim1] = STATE(37),
    [sym_prim2] = STATE(37),
    [sym_function_call] = STATE(37),
    [sym_modifier] = STATE(37),
    [sym_access] = STATE(37),
    [sym__primitive] = STATE(37),
    [sym_iteration] = STATE(37),
    [sym_substitution] = STATE(37),
    [sym_component] = STATE(37),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(37),
    [sym_id] = STATE(37),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(85),
    [sym_cut] = ACTIONS(85),
    [sym_mem] = ACTIONS(85),
    [sym_int] = ACTIONS(85),
    [sym_real] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
  [35] = {
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(67),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(65),
    [sym_sub] = STATE(67),
    [sym__number] = STATE(42),
    [sym_id] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_environment] = ACTIONS(25),
    [sym_par] = ACTIONS(27),
    [sym_seq] = ACTIONS(27),
    [sym_sum] = ACTIONS(27),
    [sym_prod] = ACTIONS(27),
    [anon_sym_component] = ACTIONS(29),
    [sym_add] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(31),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(31),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(31),
    [sym_ge] = ACTIONS(33),
    [sym_eq] = ACTIONS(33),
    [sym_neq] = ACTIONS(33),
    [sym_delay] = ACTIONS(33),
    [sym_exp] = ACTIONS(35),
    [sym_log] = ACTIONS(35),
    [sym_log10] = ACTIONS(35),
    [sym_sqrt] = ACTIONS(35),
    [sym_abs] = ACTIONS(35),
    [sym_floor] = ACTIONS(35),
    [sym_ceil] = ACTIONS(35),
    [sym_rint] = ACTIONS(35),
    [sym_round] = ACTIONS(35),
    [sym_acos] = ACTIONS(35),
    [sym_asin] = ACTIONS(35),
    [sym_atan] = ACTIONS(35),
    [sym_cos] = ACTIONS(35),
    [sym_sin] = ACTIONS(35),
    [sym_tan] = ACTIONS(35),
    [sym_int_cast] = ACTIONS(35),
    [sym_float_cast] = ACTIONS(35),
    [sym_pow_fun] = ACTIONS(37),
    [sym_min] = ACTIONS(37),
    [sym_max] = ACTIONS(37),
    [sym_fmod] = ACTIONS(37),
    [sym_remainder] = ACTIONS(37),
    [sym_atan2] = ACTIONS(37),
    [sym_prefix_prim] = ACTIONS(37),
    [sym_attach] = ACTIONS(37),
    [sym_enable] = ACTIONS(37),
    [sym_control] = ACTIONS(37),
    [sym_wire] = ACTIONS(89),
    [sym_cut] = ACTIONS(89),
    [sym_mem] = ACTIONS(89),
    [sym_int] = ACTIONS(89),
    [sym_real] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [sym__id] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(93), 17,
      anon_sym_LPAREN,
      anon_sym_BSLASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
    ACTIONS(95), 43,
      anon_sym_DASH,
      anon_sym_environment,
      sym_par,
      sym_seq,
      sym_sum,
      sym_prod,
      anon_sym_component,
      sym_add,
      sym_xor,
      sym_lt,
      sym_gt,
      sym_exp,
      sym_log,
      sym_log10,
      sym_sqrt,
      sym_abs,
      sym_floor,
      sym_ceil,
      sym_rint,
      sym_round,
      sym_acos,
      sym_asin,
      sym_atan,
      sym_cos,
      sym_sin,
      sym_tan,
      sym_int_cast,
      sym_float_cast,
      sym_pow_fun,
      sym_min,
      sym_max,
      sym_fmod,
      sym_remainder,
      sym_atan2,
      sym_prefix_prim,
      sym_attach,
      sym_enable,
      sym_control,
      sym_wire,
      sym_cut,
      sym_mem,
      sym_int,
      sym__id,
  [65] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_pow,
    ACTIONS(109), 1,
      sym_delay,
    STATE(35), 1,
      sym_sub,
    STATE(56), 1,
      sym_substitutions,
    STATE(76), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(97), 23,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [121] = 9,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      sym_delay,
    STATE(35), 1,
      sym_sub,
    STATE(56), 1,
      sym_substitutions,
    STATE(76), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(97), 24,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [175] = 8,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_sub,
    STATE(56), 1,
      sym_substitutions,
    STATE(76), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(97), 25,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [227] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_pow,
    ACTIONS(109), 1,
      sym_delay,
    ACTIONS(111), 1,
      anon_sym_DASH,
    STATE(35), 1,
      sym_sub,
    STATE(56), 1,
      sym_substitutions,
    ACTIONS(113), 2,
      sym_add,
      sym_or,
    STATE(76), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(115), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(97), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [289] = 16,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_pow,
    ACTIONS(109), 1,
      sym_delay,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      anon_sym_COLON,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_sub,
    STATE(56), 1,
      sym_substitutions,
    ACTIONS(113), 2,
      sym_add,
      sym_or,
    ACTIONS(123), 2,
      sym_lt,
      sym_gt,
    STATE(76), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(125), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(115), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(117), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [357] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      sym_pow,
    ACTIONS(109), 1,
      sym_delay,
    STATE(35), 1,
      sym_sub,
    STATE(56), 1,
      sym_substitutions,
    STATE(76), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(115), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(97), 16,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
      sym_add,
      sym_or,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [415] = 5,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(45), 1,
      sym__id,
    STATE(59), 1,
      sym_id,
    ACTIONS(95), 6,
      anon_sym_COLON,
      anon_sym_with,
      anon_sym_letrec,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(93), 25,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [460] = 4,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    STATE(47), 1,
      aux_sym_id_repeat1,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(127), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [502] = 4,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    STATE(46), 1,
      aux_sym_id_repeat1,
    ACTIONS(135), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(133), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [544] = 4,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    STATE(48), 1,
      aux_sym_id_repeat1,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(127), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [586] = 4,
    ACTIONS(131), 1,
      anon_sym_COLON_COLON,
    STATE(48), 1,
      aux_sym_id_repeat1,
    ACTIONS(139), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(137), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [628] = 4,
    ACTIONS(145), 1,
      anon_sym_COLON_COLON,
    STATE(48), 1,
      aux_sym_id_repeat1,
    ACTIONS(143), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(141), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [670] = 8,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    STATE(30), 1,
      sym_sub,
    STATE(56), 1,
      sym_substitutions,
    STATE(76), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(97), 22,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [719] = 13,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_pow,
    ACTIONS(154), 1,
      sym_delay,
    STATE(30), 1,
      sym_sub,
    STATE(56), 1,
      sym_substitutions,
    ACTIONS(148), 2,
      sym_add,
      sym_or,
    STATE(76), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(150), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(97), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [778] = 10,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      sym_pow,
    ACTIONS(154), 1,
      sym_delay,
    STATE(30), 1,
      sym_sub,
    STATE(56), 1,
      sym_substitutions,
    STATE(76), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(97), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [831] = 16,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 1,
      sym_pow,
    ACTIONS(154), 1,
      sym_delay,
    ACTIONS(158), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym_sub,
    STATE(56), 1,
      sym_substitutions,
    ACTIONS(148), 2,
      sym_add,
      sym_or,
    ACTIONS(160), 2,
      sym_lt,
      sym_gt,
    STATE(76), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(162), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(156), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(150), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [896] = 9,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(154), 1,
      sym_delay,
    STATE(30), 1,
      sym_sub,
    STATE(56), 1,
      sym_substitutions,
    STATE(76), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(97), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [947] = 11,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      sym_pow,
    ACTIONS(154), 1,
      sym_delay,
    STATE(30), 1,
      sym_sub,
    STATE(56), 1,
      sym_substitutions,
    STATE(76), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(103), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(150), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(97), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
      sym_add,
      sym_or,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1002] = 2,
    ACTIONS(143), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(141), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
      anon_sym_COLON_COLON,
  [1039] = 2,
    ACTIONS(166), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(164), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1075] = 2,
    ACTIONS(170), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(168), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1111] = 2,
    ACTIONS(174), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(172), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1147] = 2,
    ACTIONS(178), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(176), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1183] = 2,
    ACTIONS(182), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(180), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1219] = 2,
    ACTIONS(186), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(184), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1255] = 2,
    ACTIONS(190), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(188), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1291] = 2,
    ACTIONS(194), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(192), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1327] = 2,
    ACTIONS(198), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(196), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1363] = 3,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(200), 27,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1401] = 3,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(200), 27,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1439] = 3,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(200), 27,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1477] = 2,
    ACTIONS(212), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(210), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1513] = 2,
    ACTIONS(216), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(214), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1549] = 5,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(45), 1,
      sym__id,
    STATE(59), 1,
      sym_id,
    ACTIONS(95), 4,
      anon_sym_COLON,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(93), 24,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_or,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1591] = 2,
    ACTIONS(220), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(218), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1627] = 2,
    ACTIONS(224), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(222), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1663] = 2,
    ACTIONS(228), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(226), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1699] = 2,
    ACTIONS(232), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(230), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1735] = 2,
    ACTIONS(236), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(234), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1771] = 2,
    ACTIONS(240), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(238), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1807] = 2,
    ACTIONS(244), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(242), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1843] = 14,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 1,
      anon_sym_declare,
    ACTIONS(251), 1,
      anon_sym_import,
    ACTIONS(254), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(260), 1,
      anon_sym_COLON_COLON,
    ACTIONS(263), 1,
      sym__id,
    ACTIONS(266), 1,
      sym_comment,
    STATE(144), 1,
      sym_variants,
    STATE(158), 1,
      sym_id,
    STATE(106), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(190), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(191), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(257), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(78), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [1897] = 14,
    ACTIONS(5), 1,
      anon_sym_declare,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 1,
      sym_comment,
    STATE(144), 1,
      sym_variants,
    STATE(158), 1,
      sym_id,
    STATE(106), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(190), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(191), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(11), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(78), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [1951] = 9,
    ACTIONS(278), 1,
      anon_sym_COLON_COLON,
    ACTIONS(281), 1,
      sym__id,
    STATE(149), 1,
      sym_variants,
    STATE(158), 1,
      sym_id,
    ACTIONS(273), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(80), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(122), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(196), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(275), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [1986] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_variants,
    STATE(158), 1,
      sym_id,
    STATE(80), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(122), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(196), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2020] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      sym_variants,
    STATE(158), 1,
      sym_id,
    STATE(83), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(122), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(196), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2054] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      sym_variants,
    STATE(158), 1,
      sym_id,
    STATE(80), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(122), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(196), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2088] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_variants,
    STATE(158), 1,
      sym_id,
    STATE(81), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(122), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(196), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2122] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_variants,
    STATE(158), 1,
      sym_id,
    STATE(87), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(122), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(196), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2156] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_variants,
    STATE(158), 1,
      sym_id,
    STATE(80), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(122), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(196), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2190] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_variants,
    STATE(158), 1,
      sym_id,
    STATE(80), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(122), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(196), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2224] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_variants,
    STATE(158), 1,
      sym_id,
    STATE(86), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(122), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(196), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(286), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2258] = 4,
    ACTIONS(300), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(302), 1,
      sym__doc_char,
    STATE(91), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(304), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2281] = 4,
    ACTIONS(306), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(308), 1,
      sym__doc_char,
    STATE(90), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(311), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2304] = 4,
    ACTIONS(314), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(316), 1,
      sym__doc_char,
    STATE(90), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(318), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2327] = 2,
    ACTIONS(320), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(322), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2343] = 2,
    ACTIONS(324), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(326), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2359] = 2,
    ACTIONS(328), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(330), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2375] = 2,
    ACTIONS(332), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(334), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2391] = 2,
    ACTIONS(336), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(338), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2407] = 2,
    ACTIONS(340), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(342), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2423] = 2,
    ACTIONS(346), 1,
      anon_sym_COLON,
    ACTIONS(344), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2437] = 4,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_TILDE,
    ACTIONS(354), 1,
      anon_sym_COLON,
    ACTIONS(348), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2455] = 2,
    ACTIONS(358), 1,
      anon_sym_COLON,
    ACTIONS(356), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2469] = 4,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_TILDE,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(360), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2487] = 6,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_TILDE,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_LT_COLON,
    ACTIONS(368), 1,
      anon_sym_COLON_GT,
    ACTIONS(364), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [2509] = 6,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_TILDE,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_LT_COLON,
    ACTIONS(368), 1,
      anon_sym_COLON_GT,
    ACTIONS(370), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [2531] = 2,
    ACTIONS(374), 1,
      anon_sym_COLON,
    ACTIONS(372), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2545] = 2,
    ACTIONS(378), 1,
      anon_sym_COLON,
    ACTIONS(376), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2559] = 4,
    ACTIONS(384), 1,
      anon_sym_COLON_COLON,
    ACTIONS(380), 2,
      anon_sym_import,
      sym__id,
    STATE(108), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(382), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2577] = 2,
    ACTIONS(388), 1,
      anon_sym_COLON,
    ACTIONS(386), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2591] = 4,
    ACTIONS(395), 1,
      anon_sym_COLON_COLON,
    ACTIONS(390), 2,
      anon_sym_import,
      sym__id,
    STATE(108), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(392), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2609] = 2,
    ACTIONS(399), 1,
      anon_sym_COLON,
    ACTIONS(397), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2623] = 2,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(401), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2637] = 8,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_TILDE,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_LT_COLON,
    ACTIONS(368), 1,
      anon_sym_COLON_GT,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    ACTIONS(407), 1,
      anon_sym_with,
    ACTIONS(409), 1,
      anon_sym_letrec,
  [2662] = 2,
    ACTIONS(332), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
    ACTIONS(334), 5,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2675] = 3,
    ACTIONS(411), 1,
      anon_sym_COLON_COLON,
    STATE(113), 1,
      aux_sym_id_repeat1,
    ACTIONS(141), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2690] = 3,
    ACTIONS(414), 1,
      anon_sym_COLON_COLON,
    STATE(125), 1,
      aux_sym_id_repeat1,
    ACTIONS(133), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2705] = 8,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_TILDE,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_LT_COLON,
    ACTIONS(368), 1,
      anon_sym_COLON_GT,
    ACTIONS(407), 1,
      anon_sym_with,
    ACTIONS(409), 1,
      anon_sym_letrec,
    ACTIONS(416), 1,
      anon_sym_SEMI,
  [2730] = 8,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_TILDE,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_LT_COLON,
    ACTIONS(368), 1,
      anon_sym_COLON_GT,
    ACTIONS(407), 1,
      anon_sym_with,
    ACTIONS(409), 1,
      anon_sym_letrec,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
  [2755] = 8,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_TILDE,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_LT_COLON,
    ACTIONS(368), 1,
      anon_sym_COLON_GT,
    ACTIONS(407), 1,
      anon_sym_with,
    ACTIONS(409), 1,
      anon_sym_letrec,
    ACTIONS(420), 1,
      anon_sym_SEMI,
  [2780] = 8,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_TILDE,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_LT_COLON,
    ACTIONS(368), 1,
      anon_sym_COLON_GT,
    ACTIONS(407), 1,
      anon_sym_with,
    ACTIONS(409), 1,
      anon_sym_letrec,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
  [2805] = 8,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_TILDE,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_LT_COLON,
    ACTIONS(368), 1,
      anon_sym_COLON_GT,
    ACTIONS(407), 1,
      anon_sym_with,
    ACTIONS(409), 1,
      anon_sym_letrec,
    ACTIONS(424), 1,
      anon_sym_SEMI,
  [2830] = 3,
    ACTIONS(414), 1,
      anon_sym_COLON_COLON,
    STATE(113), 1,
      aux_sym_id_repeat1,
    ACTIONS(137), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2845] = 8,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_TILDE,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_LT_COLON,
    ACTIONS(368), 1,
      anon_sym_COLON_GT,
    ACTIONS(407), 1,
      anon_sym_with,
    ACTIONS(409), 1,
      anon_sym_letrec,
    ACTIONS(426), 1,
      anon_sym_SEMI,
  [2870] = 4,
    ACTIONS(380), 1,
      sym__id,
    ACTIONS(384), 1,
      anon_sym_COLON_COLON,
    STATE(126), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(428), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2887] = 8,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_TILDE,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      anon_sym_LT_COLON,
    ACTIONS(368), 1,
      anon_sym_COLON_GT,
    ACTIONS(407), 1,
      anon_sym_with,
    ACTIONS(409), 1,
      anon_sym_letrec,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
  [2912] = 3,
    ACTIONS(414), 1,
      anon_sym_COLON_COLON,
    STATE(120), 1,
      aux_sym_id_repeat1,
    ACTIONS(127), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2927] = 3,
    ACTIONS(414), 1,
      anon_sym_COLON_COLON,
    STATE(113), 1,
      aux_sym_id_repeat1,
    ACTIONS(127), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2942] = 4,
    ACTIONS(390), 1,
      sym__id,
    ACTIONS(395), 1,
      anon_sym_COLON_COLON,
    STATE(126), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(432), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2959] = 1,
    ACTIONS(141), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [2969] = 7,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      anon_sym_TILDE,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_LT_COLON,
    ACTIONS(445), 1,
      anon_sym_COLON_GT,
    STATE(152), 1,
      aux_sym_arguments_repeat1,
  [2991] = 5,
    ACTIONS(439), 1,
      anon_sym_TILDE,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_LT_COLON,
    ACTIONS(445), 1,
      anon_sym_COLON_GT,
    ACTIONS(447), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3008] = 5,
    ACTIONS(439), 1,
      anon_sym_TILDE,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_LT_COLON,
    ACTIONS(445), 1,
      anon_sym_COLON_GT,
    ACTIONS(449), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3025] = 3,
    ACTIONS(439), 1,
      anon_sym_TILDE,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(451), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3038] = 2,
    ACTIONS(455), 1,
      anon_sym_COLON,
    ACTIONS(453), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3049] = 5,
    ACTIONS(439), 1,
      anon_sym_TILDE,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_LT_COLON,
    ACTIONS(445), 1,
      anon_sym_COLON_GT,
    ACTIONS(457), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3066] = 6,
    ACTIONS(439), 1,
      anon_sym_TILDE,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_LT_COLON,
    ACTIONS(445), 1,
      anon_sym_COLON_GT,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(461), 1,
      anon_sym_COMMA,
  [3085] = 5,
    ACTIONS(439), 1,
      anon_sym_TILDE,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_LT_COLON,
    ACTIONS(445), 1,
      anon_sym_COLON_GT,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
  [3101] = 5,
    ACTIONS(439), 1,
      anon_sym_TILDE,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_LT_COLON,
    ACTIONS(445), 1,
      anon_sym_COLON_GT,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
  [3117] = 4,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    ACTIONS(467), 1,
      anon_sym_where,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
    STATE(139), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3131] = 4,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    ACTIONS(473), 1,
      anon_sym_where,
    STATE(137), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3145] = 3,
    ACTIONS(477), 1,
      anon_sym_SQUOTE,
    ACTIONS(475), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(139), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3157] = 5,
    ACTIONS(439), 1,
      anon_sym_TILDE,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_LT_COLON,
    ACTIONS(445), 1,
      anon_sym_COLON_GT,
    ACTIONS(480), 1,
      anon_sym_COMMA,
  [3173] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      sym__id,
    STATE(147), 1,
      sym_id,
    STATE(178), 1,
      sym_parameters,
  [3186] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      sym__id,
    STATE(147), 1,
      sym_id,
    STATE(171), 1,
      sym_parameters,
  [3199] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      sym__id,
    STATE(147), 1,
      sym_id,
    STATE(187), 1,
      sym_parameters,
  [3212] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(484), 1,
      anon_sym_import,
    STATE(163), 1,
      sym_id,
  [3225] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      sym__id,
    ACTIONS(486), 1,
      sym_string,
    STATE(174), 1,
      sym_id,
  [3238] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      sym__id,
    STATE(189), 1,
      sym_id,
  [3248] = 3,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_parameters_repeat1,
  [3258] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      sym__id,
    STATE(159), 1,
      sym_id,
  [3268] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      sym__id,
    STATE(163), 1,
      sym_id,
  [3278] = 1,
    ACTIONS(492), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [3284] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      sym__id,
    STATE(145), 1,
      sym_id,
  [3294] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_arguments_repeat1,
  [3304] = 3,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_parameters_repeat1,
  [3314] = 3,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_parameters_repeat1,
  [3324] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(482), 1,
      sym__id,
    STATE(164), 1,
      sym_id,
  [3334] = 3,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_arguments_repeat1,
  [3344] = 3,
    ACTIONS(43), 1,
      anon_sym_COLON_COLON,
    ACTIONS(506), 1,
      sym__id,
    STATE(57), 1,
      sym_id,
  [3354] = 2,
    ACTIONS(508), 1,
      anon_sym_EQ,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
  [3361] = 1,
    ACTIONS(512), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3366] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_environment,
  [3373] = 2,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_rec_environment,
  [3380] = 2,
    ACTIONS(514), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_environment,
  [3387] = 2,
    ACTIONS(518), 1,
      anon_sym_EQ,
    ACTIONS(520), 1,
      anon_sym_LPAREN,
  [3394] = 1,
    ACTIONS(522), 1,
      anon_sym_EQ,
  [3398] = 1,
    ACTIONS(524), 1,
      anon_sym_LPAREN,
  [3402] = 1,
    ACTIONS(526), 1,
      sym_string,
  [3406] = 1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
  [3410] = 1,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [3414] = 1,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
  [3418] = 1,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
  [3422] = 1,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
  [3426] = 1,
    ACTIONS(538), 1,
      anon_sym_SEMI,
  [3430] = 1,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
  [3434] = 1,
    ACTIONS(542), 1,
      sym_string,
  [3438] = 1,
    ACTIONS(544), 1,
      anon_sym_SEMI,
  [3442] = 1,
    ACTIONS(546), 1,
      anon_sym_SEMI,
  [3446] = 1,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
  [3450] = 1,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
  [3454] = 1,
    ACTIONS(552), 1,
      sym_string,
  [3458] = 1,
    ACTIONS(554), 1,
      anon_sym_EQ,
  [3462] = 1,
    ACTIONS(556), 1,
      anon_sym_SEMI,
  [3466] = 1,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
  [3470] = 1,
    ACTIONS(560), 1,
      anon_sym_DOT,
  [3474] = 1,
    ACTIONS(562), 1,
      sym__id,
  [3478] = 1,
    ACTIONS(564), 1,
      anon_sym_EQ,
  [3482] = 1,
    ACTIONS(566), 1,
      sym_string,
  [3486] = 1,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
  [3490] = 1,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
  [3494] = 1,
    ACTIONS(572), 1,
      anon_sym_COMMA,
  [3498] = 1,
    ACTIONS(574), 1,
      anon_sym_SEMI,
  [3502] = 1,
    ACTIONS(576), 1,
      anon_sym_SEMI,
  [3506] = 1,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
  [3510] = 1,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [3514] = 1,
    ACTIONS(582), 1,
      sym__id,
  [3518] = 1,
    ACTIONS(584), 1,
      sym__id,
  [3522] = 1,
    ACTIONS(586), 1,
      anon_sym_SEMI,
  [3526] = 1,
    ACTIONS(588), 1,
      sym__id,
  [3530] = 1,
    ACTIONS(590), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(36)] = 0,
  [SMALL_STATE(37)] = 65,
  [SMALL_STATE(38)] = 121,
  [SMALL_STATE(39)] = 175,
  [SMALL_STATE(40)] = 227,
  [SMALL_STATE(41)] = 289,
  [SMALL_STATE(42)] = 357,
  [SMALL_STATE(43)] = 415,
  [SMALL_STATE(44)] = 460,
  [SMALL_STATE(45)] = 502,
  [SMALL_STATE(46)] = 544,
  [SMALL_STATE(47)] = 586,
  [SMALL_STATE(48)] = 628,
  [SMALL_STATE(49)] = 670,
  [SMALL_STATE(50)] = 719,
  [SMALL_STATE(51)] = 778,
  [SMALL_STATE(52)] = 831,
  [SMALL_STATE(53)] = 896,
  [SMALL_STATE(54)] = 947,
  [SMALL_STATE(55)] = 1002,
  [SMALL_STATE(56)] = 1039,
  [SMALL_STATE(57)] = 1075,
  [SMALL_STATE(58)] = 1111,
  [SMALL_STATE(59)] = 1147,
  [SMALL_STATE(60)] = 1183,
  [SMALL_STATE(61)] = 1219,
  [SMALL_STATE(62)] = 1255,
  [SMALL_STATE(63)] = 1291,
  [SMALL_STATE(64)] = 1327,
  [SMALL_STATE(65)] = 1363,
  [SMALL_STATE(66)] = 1401,
  [SMALL_STATE(67)] = 1439,
  [SMALL_STATE(68)] = 1477,
  [SMALL_STATE(69)] = 1513,
  [SMALL_STATE(70)] = 1549,
  [SMALL_STATE(71)] = 1591,
  [SMALL_STATE(72)] = 1627,
  [SMALL_STATE(73)] = 1663,
  [SMALL_STATE(74)] = 1699,
  [SMALL_STATE(75)] = 1735,
  [SMALL_STATE(76)] = 1771,
  [SMALL_STATE(77)] = 1807,
  [SMALL_STATE(78)] = 1843,
  [SMALL_STATE(79)] = 1897,
  [SMALL_STATE(80)] = 1951,
  [SMALL_STATE(81)] = 1986,
  [SMALL_STATE(82)] = 2020,
  [SMALL_STATE(83)] = 2054,
  [SMALL_STATE(84)] = 2088,
  [SMALL_STATE(85)] = 2122,
  [SMALL_STATE(86)] = 2156,
  [SMALL_STATE(87)] = 2190,
  [SMALL_STATE(88)] = 2224,
  [SMALL_STATE(89)] = 2258,
  [SMALL_STATE(90)] = 2281,
  [SMALL_STATE(91)] = 2304,
  [SMALL_STATE(92)] = 2327,
  [SMALL_STATE(93)] = 2343,
  [SMALL_STATE(94)] = 2359,
  [SMALL_STATE(95)] = 2375,
  [SMALL_STATE(96)] = 2391,
  [SMALL_STATE(97)] = 2407,
  [SMALL_STATE(98)] = 2423,
  [SMALL_STATE(99)] = 2437,
  [SMALL_STATE(100)] = 2455,
  [SMALL_STATE(101)] = 2469,
  [SMALL_STATE(102)] = 2487,
  [SMALL_STATE(103)] = 2509,
  [SMALL_STATE(104)] = 2531,
  [SMALL_STATE(105)] = 2545,
  [SMALL_STATE(106)] = 2559,
  [SMALL_STATE(107)] = 2577,
  [SMALL_STATE(108)] = 2591,
  [SMALL_STATE(109)] = 2609,
  [SMALL_STATE(110)] = 2623,
  [SMALL_STATE(111)] = 2637,
  [SMALL_STATE(112)] = 2662,
  [SMALL_STATE(113)] = 2675,
  [SMALL_STATE(114)] = 2690,
  [SMALL_STATE(115)] = 2705,
  [SMALL_STATE(116)] = 2730,
  [SMALL_STATE(117)] = 2755,
  [SMALL_STATE(118)] = 2780,
  [SMALL_STATE(119)] = 2805,
  [SMALL_STATE(120)] = 2830,
  [SMALL_STATE(121)] = 2845,
  [SMALL_STATE(122)] = 2870,
  [SMALL_STATE(123)] = 2887,
  [SMALL_STATE(124)] = 2912,
  [SMALL_STATE(125)] = 2927,
  [SMALL_STATE(126)] = 2942,
  [SMALL_STATE(127)] = 2959,
  [SMALL_STATE(128)] = 2969,
  [SMALL_STATE(129)] = 2991,
  [SMALL_STATE(130)] = 3008,
  [SMALL_STATE(131)] = 3025,
  [SMALL_STATE(132)] = 3038,
  [SMALL_STATE(133)] = 3049,
  [SMALL_STATE(134)] = 3066,
  [SMALL_STATE(135)] = 3085,
  [SMALL_STATE(136)] = 3101,
  [SMALL_STATE(137)] = 3117,
  [SMALL_STATE(138)] = 3131,
  [SMALL_STATE(139)] = 3145,
  [SMALL_STATE(140)] = 3157,
  [SMALL_STATE(141)] = 3173,
  [SMALL_STATE(142)] = 3186,
  [SMALL_STATE(143)] = 3199,
  [SMALL_STATE(144)] = 3212,
  [SMALL_STATE(145)] = 3225,
  [SMALL_STATE(146)] = 3238,
  [SMALL_STATE(147)] = 3248,
  [SMALL_STATE(148)] = 3258,
  [SMALL_STATE(149)] = 3268,
  [SMALL_STATE(150)] = 3278,
  [SMALL_STATE(151)] = 3284,
  [SMALL_STATE(152)] = 3294,
  [SMALL_STATE(153)] = 3304,
  [SMALL_STATE(154)] = 3314,
  [SMALL_STATE(155)] = 3324,
  [SMALL_STATE(156)] = 3334,
  [SMALL_STATE(157)] = 3344,
  [SMALL_STATE(158)] = 3354,
  [SMALL_STATE(159)] = 3361,
  [SMALL_STATE(160)] = 3366,
  [SMALL_STATE(161)] = 3373,
  [SMALL_STATE(162)] = 3380,
  [SMALL_STATE(163)] = 3387,
  [SMALL_STATE(164)] = 3394,
  [SMALL_STATE(165)] = 3398,
  [SMALL_STATE(166)] = 3402,
  [SMALL_STATE(167)] = 3406,
  [SMALL_STATE(168)] = 3410,
  [SMALL_STATE(169)] = 3414,
  [SMALL_STATE(170)] = 3418,
  [SMALL_STATE(171)] = 3422,
  [SMALL_STATE(172)] = 3426,
  [SMALL_STATE(173)] = 3430,
  [SMALL_STATE(174)] = 3434,
  [SMALL_STATE(175)] = 3438,
  [SMALL_STATE(176)] = 3442,
  [SMALL_STATE(177)] = 3446,
  [SMALL_STATE(178)] = 3450,
  [SMALL_STATE(179)] = 3454,
  [SMALL_STATE(180)] = 3458,
  [SMALL_STATE(181)] = 3462,
  [SMALL_STATE(182)] = 3466,
  [SMALL_STATE(183)] = 3470,
  [SMALL_STATE(184)] = 3474,
  [SMALL_STATE(185)] = 3478,
  [SMALL_STATE(186)] = 3482,
  [SMALL_STATE(187)] = 3486,
  [SMALL_STATE(188)] = 3490,
  [SMALL_STATE(189)] = 3494,
  [SMALL_STATE(190)] = 3498,
  [SMALL_STATE(191)] = 3502,
  [SMALL_STATE(192)] = 3506,
  [SMALL_STATE(193)] = 3510,
  [SMALL_STATE(194)] = 3514,
  [SMALL_STATE(195)] = 3518,
  [SMALL_STATE(196)] = 3522,
  [SMALL_STATE(197)] = 3526,
  [SMALL_STATE(198)] = 3530,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 11),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 11),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(197),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 2, .production_id = 6),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 2, .production_id = 6),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 10),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 10),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4, .production_id = 14),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4, .production_id = 14),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim1, 4, .production_id = 15),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim1, 4, .production_id = 15),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 13),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 13),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim2, 4, .production_id = 16),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim2, 4, .production_id = 16),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 20),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 20),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2, .production_id = 7),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2, .production_id = 7),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6, .production_id = 19),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6, .production_id = 19),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(151),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(198),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(89),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(106),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(194),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(114),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(78),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(122),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(194),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(114),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(90),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(90),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 5),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_definition, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__metadata_definition, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 6),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 6),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 8),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 8),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 8),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 8),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 8),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 8),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 8),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 9),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 9),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 9),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 9),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(108),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 17),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(184),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 18),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, .production_id = 5),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(126),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 8),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 8),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 8),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 8),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 8),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(155),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 21),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(148),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(22),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 12),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [578] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
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
