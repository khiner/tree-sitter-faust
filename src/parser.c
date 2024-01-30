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
#define STATE_COUNT 207
#define LARGE_STATE_COUNT 38
#define SYMBOL_COUNT 167
#define ALIAS_COUNT 1
#define TOKEN_COUNT 100
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 24

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
  sym_rdtable = 78,
  sym_rwtable = 79,
  anon_sym_LTmdoc_GT = 80,
  anon_sym_LT_SLASHmdoc_GT = 81,
  sym__doc_char = 82,
  anon_sym_LTnotice_SLASH_GT = 83,
  anon_sym_LTnotice_SLASH_GT2 = 84,
  anon_sym_LTequation_GT = 85,
  anon_sym_LT_SLASHequation_GT = 86,
  anon_sym_LTdiagram_GT = 87,
  anon_sym_LT_SLASHdiagram_GT = 88,
  anon_sym_LTmetadata_GT = 89,
  anon_sym_LT_SLASHmetadata_GT = 90,
  anon_sym_LTlisting = 91,
  sym_single_precision = 92,
  sym_double_precision = 93,
  sym_quad_precision = 94,
  sym_fixed_point_precision = 95,
  sym_string = 96,
  anon_sym_COLON_COLON = 97,
  sym__id = 98,
  sym_comment = 99,
  sym_program = 100,
  sym__statement = 101,
  sym__definition = 102,
  sym_definition = 103,
  sym_function_definition = 104,
  sym__metadata_definition = 105,
  sym_global_metadata = 106,
  sym_function_metadata = 107,
  sym_file_import = 108,
  sym__expression = 109,
  sym__infix_expression = 110,
  sym_infix = 111,
  sym_partial = 112,
  sym_prefix = 113,
  sym_prim1 = 114,
  sym_prim2 = 115,
  sym_prim3 = 116,
  sym_prim5 = 117,
  sym_function_call = 118,
  sym_modifier = 119,
  sym_access = 120,
  sym__primitive = 121,
  sym_parameters = 122,
  sym_arguments = 123,
  sym__argument = 124,
  sym_recursive_arg = 125,
  sym_sequential_arg = 126,
  sym_split_arg = 127,
  sym_merge_arg = 128,
  sym_iteration = 129,
  sym_with_environment = 130,
  sym_environment = 131,
  sym_letrec_environment = 132,
  sym_rec_environment = 133,
  sym_recinition = 134,
  sym_substitution = 135,
  sym_substitutions = 136,
  sym_component = 137,
  sym__infix = 138,
  sym__prim1 = 139,
  sym__prim2 = 140,
  sym__prim3 = 141,
  sym__prim5 = 142,
  sym__modifier = 143,
  sym_one_sample_delay = 144,
  sym_sub = 145,
  sym__number = 146,
  sym_documentation = 147,
  sym__doc_content = 148,
  sym__special_doc_tag = 149,
  sym__binary_composition = 150,
  sym_recursive = 151,
  sym_sequential = 152,
  sym_split = 153,
  sym_merge = 154,
  sym_parallel = 155,
  sym_variants = 156,
  sym__variant = 157,
  sym_id = 158,
  aux_sym_program_repeat1 = 159,
  aux_sym_parameters_repeat1 = 160,
  aux_sym_arguments_repeat1 = 161,
  aux_sym_environment_repeat1 = 162,
  aux_sym_rec_environment_repeat1 = 163,
  aux_sym_documentation_repeat1 = 164,
  aux_sym_variants_repeat1 = 165,
  aux_sym_id_repeat1 = 166,
  alias_sym_parameter = 167,
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
  [sym_rdtable] = "rdtable",
  [sym_rwtable] = "rwtable",
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
  [sym_partial] = "partial",
  [sym_prefix] = "prefix",
  [sym_prim1] = "prim1",
  [sym_prim2] = "prim2",
  [sym_prim3] = "prim3",
  [sym_prim5] = "prim5",
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
  [sym__prim3] = "_prim3",
  [sym__prim5] = "_prim5",
  [sym__modifier] = "_modifier",
  [sym_one_sample_delay] = "one_sample_delay",
  [sym_sub] = "sub",
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
  [sym_rdtable] = sym_rdtable,
  [sym_rwtable] = sym_rwtable,
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
  [sym_partial] = sym_partial,
  [sym_prefix] = sym_prefix,
  [sym_prim1] = sym_prim1,
  [sym_prim2] = sym_prim2,
  [sym_prim3] = sym_prim3,
  [sym_prim5] = sym_prim5,
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
  [sym__prim3] = sym__prim3,
  [sym__prim5] = sym__prim5,
  [sym__modifier] = sym__modifier,
  [sym_one_sample_delay] = sym_one_sample_delay,
  [sym_sub] = sym_sub,
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
  [sym_rdtable] = {
    .visible = true,
    .named = true,
  },
  [sym_rwtable] = {
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
  [sym_partial] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix] = {
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
  [sym_prim3] = {
    .visible = true,
    .named = true,
  },
  [sym_prim5] = {
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
  [sym__prim3] = {
    .visible = false,
    .named = true,
  },
  [sym__prim5] = {
    .visible = false,
    .named = true,
  },
  [sym__modifier] = {
    .visible = false,
    .named = true,
  },
  [sym_one_sample_delay] = {
    .visible = true,
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
  field_filename = 7,
  field_function_name = 8,
  field_key = 9,
  field_left = 10,
  field_local_environment = 11,
  field_name = 12,
  field_num_iters = 13,
  field_operand = 14,
  field_operator = 15,
  field_primitive = 16,
  field_right = 17,
  field_type = 18,
  field_value = 19,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_callee] = "callee",
  [field_current_iter] = "current_iter",
  [field_definition] = "definition",
  [field_environment] = "environment",
  [field_expression] = "expression",
  [field_filename] = "filename",
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
  [8] = {.index = 12, .length = 1},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 2},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 3},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 1},
  [16] = {.index = 24, .length = 2},
  [17] = {.index = 26, .length = 2},
  [18] = {.index = 28, .length = 1},
  [19] = {.index = 29, .length = 2},
  [20] = {.index = 31, .length = 2},
  [21] = {.index = 33, .length = 3},
  [22] = {.index = 36, .length = 4},
  [23] = {.index = 40, .length = 2},
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
    {field_filename, 2},
  [13] =
    {field_left, 0},
    {field_right, 2},
  [15] =
    {field_expression, 0},
    {field_local_environment, 2},
  [17] =
    {field_definition, 2},
    {field_environment, 0},
  [19] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [22] =
    {field_filename, 3},
  [23] =
    {field_callee, 0},
  [24] =
    {field_operand, 2},
    {field_operator, 0},
  [26] =
    {field_argument, 2},
    {field_primitive, 0},
  [28] =
    {field_primitive, 0},
  [29] =
    {field_name, 0},
    {field_value, 5},
  [31] =
    {field_name, 1},
    {field_value, 6},
  [33] =
    {field_left, 2},
    {field_operator, 0},
    {field_right, 4},
  [36] =
    {field_current_iter, 2},
    {field_expression, 6},
    {field_num_iters, 4},
    {field_type, 0},
  [40] =
    {field_expression, 3},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_parameter,
  },
  [13] = {
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
  [31] = 31,
  [32] = 32,
  [33] = 29,
  [34] = 28,
  [35] = 30,
  [36] = 31,
  [37] = 32,
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
  [51] = 51,
  [52] = 44,
  [53] = 53,
  [54] = 40,
  [55] = 41,
  [56] = 42,
  [57] = 43,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 45,
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
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 99,
  [119] = 48,
  [120] = 46,
  [121] = 50,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 116,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 115,
  [131] = 49,
  [132] = 47,
  [133] = 133,
  [134] = 51,
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
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 201,
  [204] = 198,
  [205] = 170,
  [206] = 206,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(267);
      if (lookahead == '!') ADVANCE(385);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(313);
      if (lookahead == '&') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(271);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '+') ADVANCE(310);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == ';') ADVANCE(268);
      if (lookahead == '<') ADVANCE(321);
      if (lookahead == '=') ADVANCE(269);
      if (lookahead == '>') ADVANCE(324);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == '[') ADVANCE(305);
      if (lookahead == '\\') ADVANCE(281);
      if (lookahead == ']') ADVANCE(306);
      if (lookahead == '^') ADVANCE(314);
      if (lookahead == '_') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'q') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'w') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(181);
      if (lookahead == '{') ADVANCE(299);
      if (lookahead == '|') ADVANCE(315);
      if (lookahead == '}') ADVANCE(300);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '/') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(385);
      if (lookahead == '%') ADVANCE(313);
      if (lookahead == '&') ADVANCE(316);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '+') ADVANCE(310);
      if (lookahead == '-') ADVANCE(280);
      if (lookahead == '.') ADVANCE(262);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(322);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(324);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == '\\') ADVANCE(281);
      if (lookahead == '^') ADVANCE(314);
      if (lookahead == '_') ADVANCE(384);
      if (lookahead == 'a') ADVANCE(433);
      if (lookahead == 'c') ADVANCE(462);
      if (lookahead == 'e') ADVANCE(513);
      if (lookahead == 'f') ADVANCE(500);
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(531);
      if (lookahead == 'm') ADVANCE(421);
      if (lookahead == 'p') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 's') ADVANCE(453);
      if (lookahead == 't') ADVANCE(426);
      if (lookahead == 'x') ADVANCE(538);
      if (lookahead == '|') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(313);
      if (lookahead == '&') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(271);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '+') ADVANCE(309);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '-') ADVANCE(279);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == ';') ADVANCE(268);
      if (lookahead == '<') ADVANCE(321);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(324);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == '[') ADVANCE(305);
      if (lookahead == '^') ADVANCE(314);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead == 'w') ADVANCE(487);
      if (lookahead == 'x') ADVANCE(538);
      if (lookahead == '|') ADVANCE(315);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(313);
      if (lookahead == '&') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(271);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '+') ADVANCE(309);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '-') ADVANCE(279);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == ';') ADVANCE(268);
      if (lookahead == '<') ADVANCE(321);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(324);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == '[') ADVANCE(305);
      if (lookahead == '^') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(181);
      if (lookahead == '|') ADVANCE(315);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(313);
      if (lookahead == '&') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(271);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '+') ADVANCE(309);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '-') ADVANCE(279);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '<') ADVANCE(321);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(324);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == '[') ADVANCE(305);
      if (lookahead == '^') ADVANCE(314);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(538);
      if (lookahead == '|') ADVANCE(315);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '%') ADVANCE(313);
      if (lookahead == '&') ADVANCE(316);
      if (lookahead == '\'') ADVANCE(304);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(271);
      if (lookahead == '*') ADVANCE(311);
      if (lookahead == '+') ADVANCE(309);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == '-') ADVANCE(279);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == '/') ADVANCE(312);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == ';') ADVANCE(268);
      if (lookahead == '<') ADVANCE(321);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(324);
      if (lookahead == '@') ADVANCE(328);
      if (lookahead == '[') ADVANCE(305);
      if (lookahead == '^') ADVANCE(314);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(181);
      if (lookahead == '|') ADVANCE(315);
      if (lookahead == '~') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(271);
      if (lookahead == ',') ADVANCE(276);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '=') ADVANCE(269);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(417);
      if (lookahead == '\\') ADVANCE(264);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(594);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(593);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'l') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(333);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(418);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == ']') ADVANCE(306);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(530);
      if (lookahead == 'f') ADVANCE(476);
      if (lookahead == 'q') ADVANCE(585);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == '}') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(530);
      if (lookahead == 'f') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead == 'q') ADVANCE(585);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 19:
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(398);
      if (lookahead != 0) ADVANCE(399);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(327);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(326);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(396);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(397);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(404);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(400);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(405);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(402);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(406);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(401);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(403);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(407);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'v') ADVANCE(126);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(224);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(145);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(146);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == 'w') ADVANCE(249);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'q') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(331);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(408);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(377);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(193);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(196);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(349);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(413);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(415);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(329);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 199:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 204:
      if (lookahead == 'q') ADVANCE(291);
      END_STATE();
    case 205:
      if (lookahead == 'q') ADVANCE(255);
      END_STATE();
    case 206:
      if (lookahead == 'q') ADVANCE(256);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(347);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(307);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(203);
      END_STATE();
    case 252:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(170);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 257:
      if (lookahead == 'w') ADVANCE(363);
      END_STATE();
    case 258:
      if (lookahead == 'x') ADVANCE(367);
      END_STATE();
    case 259:
      if (lookahead == 'x') ADVANCE(375);
      END_STATE();
    case 260:
      if (lookahead == 'x') ADVANCE(98);
      END_STATE();
    case 261:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 262:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 264:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 265:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(594);
      if (lookahead == '\r') ADVANCE(595);
      END_STATE();
    case 266:
      if (eof) ADVANCE(267);
      if (lookahead == '.') ADVANCE(277);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(155);
      if (lookahead == '_') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(451);
      if (lookahead == 'f') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(502);
      if (lookahead == 'q') ADVANCE(585);
      if (lookahead == 's') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(266)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(418);
      if (lookahead == '>') ADVANCE(288);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(288);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_par);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_letrec);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_letrec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_add);
      if (lookahead == '.') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_mult);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_div);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_mod);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_pow);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_lshift);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_rshift);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == ':') ADVANCE(287);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '=') ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '<') ADVANCE(319);
      if (lookahead == '=') ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == '>') ADVANCE(320);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_delay);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_exp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(14);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_log10);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_log10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_sqrt);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_sqrt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_abs);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_abs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_floor);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_floor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_ceil);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_ceil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_rint);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_rint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_round);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_round);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_acos);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_acos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_asin);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_asin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(373);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_cos);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_cos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_sin);
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_tan);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_tan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_pow_fun);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_pow_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_min);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_fmod);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_fmod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_remainder);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_remainder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_atan2);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_atan2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_prefix_prim);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_prefix_prim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_attach);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_attach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_enable);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_enable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(327);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(390);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_rdtable);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_rdtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_rwtable);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_rwtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_single_precision);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_single_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_double_precision);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_double_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_quad_precision);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_quad_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '0') ADVANCE(334);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(503);
      if (lookahead == 'i') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(553);
      if (lookahead == 'o') ADVANCE(588);
      if (lookahead == 'r') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(576);
      if (lookahead == 'o') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(518);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'v') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(566);
      if (lookahead == 'c') ADVANCE(535);
      if (lookahead == 's') ADVANCE(486);
      if (lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead == 'o') ADVANCE(587);
      if (lookahead == 'w') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(437);
      if (lookahead == 'o') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(551);
      if (lookahead == 'i') ADVANCE(515);
      if (lookahead == 'q') ADVANCE(559);
      if (lookahead == 'u') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(529);
      if (lookahead == 'm') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(546);
      if (lookahead == 'n') ADVANCE(581);
      if (lookahead == 's') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead == 'x') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'q') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'w') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(594);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(594);
      if (lookahead == '\\') ADVANCE(265);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 266},
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
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 266},
  [85] = {.lex_state = 266},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 266},
  [99] = {.lex_state = 266},
  [100] = {.lex_state = 266},
  [101] = {.lex_state = 266},
  [102] = {.lex_state = 266},
  [103] = {.lex_state = 266},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 17},
  [116] = {.lex_state = 17},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 16},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 16},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 18},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 266},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 7},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 0},
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
    [sym_rdtable] = ACTIONS(1),
    [sym_rwtable] = ACTIONS(1),
    [sym_single_precision] = ACTIONS(1),
    [sym_double_precision] = ACTIONS(1),
    [sym_quad_precision] = ACTIONS(1),
    [sym_fixed_point_precision] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(199),
    [sym__statement] = STATE(85),
    [sym__definition] = STATE(85),
    [sym_definition] = STATE(198),
    [sym_function_definition] = STATE(198),
    [sym__metadata_definition] = STATE(85),
    [sym_global_metadata] = STATE(197),
    [sym_function_metadata] = STATE(197),
    [sym_file_import] = STATE(85),
    [sym_documentation] = STATE(85),
    [sym_variants] = STATE(149),
    [sym__variant] = STATE(116),
    [sym_id] = STATE(166),
    [aux_sym_program_repeat1] = STATE(85),
    [aux_sym_variants_repeat1] = STATE(116),
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
    [sym__expression] = STATE(109),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_prim3] = STATE(39),
    [sym_prim5] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(109),
    [sym_letrec_environment] = STATE(109),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(109),
    [sym_recursive] = STATE(109),
    [sym_sequential] = STATE(109),
    [sym_split] = STATE(109),
    [sym_merge] = STATE(109),
    [sym_parallel] = STATE(109),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [3] = {
    [sym__expression] = STATE(123),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_prim3] = STATE(39),
    [sym_prim5] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(123),
    [sym_letrec_environment] = STATE(123),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(123),
    [sym_recursive] = STATE(123),
    [sym_sequential] = STATE(123),
    [sym_split] = STATE(123),
    [sym_merge] = STATE(123),
    [sym_parallel] = STATE(123),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [4] = {
    [sym__expression] = STATE(129),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_prim3] = STATE(39),
    [sym_prim5] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(129),
    [sym_letrec_environment] = STATE(129),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(129),
    [sym_recursive] = STATE(129),
    [sym_sequential] = STATE(129),
    [sym_split] = STATE(129),
    [sym_merge] = STATE(129),
    [sym_parallel] = STATE(129),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [5] = {
    [sym__expression] = STATE(124),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_prim3] = STATE(39),
    [sym_prim5] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(124),
    [sym_letrec_environment] = STATE(124),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(124),
    [sym_recursive] = STATE(124),
    [sym_sequential] = STATE(124),
    [sym_split] = STATE(124),
    [sym_merge] = STATE(124),
    [sym_parallel] = STATE(124),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [6] = {
    [sym__expression] = STATE(110),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_prim3] = STATE(39),
    [sym_prim5] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(110),
    [sym_letrec_environment] = STATE(110),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(110),
    [sym_recursive] = STATE(110),
    [sym_sequential] = STATE(110),
    [sym_split] = STATE(110),
    [sym_merge] = STATE(110),
    [sym_parallel] = STATE(110),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [7] = {
    [sym__expression] = STATE(122),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_prim3] = STATE(39),
    [sym_prim5] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(122),
    [sym_letrec_environment] = STATE(122),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(122),
    [sym_recursive] = STATE(122),
    [sym_sequential] = STATE(122),
    [sym_split] = STATE(122),
    [sym_merge] = STATE(122),
    [sym_parallel] = STATE(122),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [8] = {
    [sym__expression] = STATE(108),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_prim3] = STATE(39),
    [sym_prim5] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(108),
    [sym_letrec_environment] = STATE(108),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(108),
    [sym_recursive] = STATE(108),
    [sym_sequential] = STATE(108),
    [sym_split] = STATE(108),
    [sym_merge] = STATE(108),
    [sym_parallel] = STATE(108),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [9] = {
    [sym__expression] = STATE(107),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_prim3] = STATE(39),
    [sym_prim5] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(107),
    [sym_letrec_environment] = STATE(107),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(107),
    [sym_recursive] = STATE(107),
    [sym_sequential] = STATE(107),
    [sym_split] = STATE(107),
    [sym_merge] = STATE(107),
    [sym_parallel] = STATE(107),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [10] = {
    [sym__expression] = STATE(106),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_prim3] = STATE(39),
    [sym_prim5] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(106),
    [sym_letrec_environment] = STATE(106),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(106),
    [sym_recursive] = STATE(106),
    [sym_sequential] = STATE(106),
    [sym_split] = STATE(106),
    [sym_merge] = STATE(106),
    [sym_parallel] = STATE(106),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [11] = {
    [sym__expression] = STATE(128),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_prim3] = STATE(39),
    [sym_prim5] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(128),
    [sym_letrec_environment] = STATE(128),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(128),
    [sym_recursive] = STATE(128),
    [sym_sequential] = STATE(128),
    [sym_split] = STATE(128),
    [sym_merge] = STATE(128),
    [sym_parallel] = STATE(128),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [12] = {
    [sym__expression] = STATE(117),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_prim3] = STATE(39),
    [sym_prim5] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(117),
    [sym_letrec_environment] = STATE(117),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(117),
    [sym_recursive] = STATE(117),
    [sym_sequential] = STATE(117),
    [sym_split] = STATE(117),
    [sym_merge] = STATE(117),
    [sym_parallel] = STATE(117),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [13] = {
    [sym__expression] = STATE(127),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_prim3] = STATE(39),
    [sym_prim5] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(127),
    [sym_letrec_environment] = STATE(127),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(127),
    [sym_recursive] = STATE(127),
    [sym_sequential] = STATE(127),
    [sym_split] = STATE(127),
    [sym_merge] = STATE(127),
    [sym_parallel] = STATE(127),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [14] = {
    [sym__expression] = STATE(125),
    [sym__infix_expression] = STATE(39),
    [sym_infix] = STATE(39),
    [sym_partial] = STATE(39),
    [sym_prefix] = STATE(39),
    [sym_prim1] = STATE(39),
    [sym_prim2] = STATE(39),
    [sym_prim3] = STATE(39),
    [sym_prim5] = STATE(39),
    [sym_function_call] = STATE(39),
    [sym_modifier] = STATE(39),
    [sym_access] = STATE(39),
    [sym__primitive] = STATE(39),
    [sym_iteration] = STATE(39),
    [sym_with_environment] = STATE(125),
    [sym_letrec_environment] = STATE(125),
    [sym_substitution] = STATE(39),
    [sym_component] = STATE(39),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(39),
    [sym__binary_composition] = STATE(125),
    [sym_recursive] = STATE(125),
    [sym_sequential] = STATE(125),
    [sym_split] = STATE(125),
    [sym_merge] = STATE(125),
    [sym_parallel] = STATE(125),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [15] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym_arguments] = STATE(179),
    [sym__argument] = STATE(133),
    [sym_recursive_arg] = STATE(133),
    [sym_sequential_arg] = STATE(133),
    [sym_split_arg] = STATE(133),
    [sym_merge_arg] = STATE(133),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [16] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym_arguments] = STATE(191),
    [sym__argument] = STATE(133),
    [sym_recursive_arg] = STATE(133),
    [sym_sequential_arg] = STATE(133),
    [sym_split_arg] = STATE(133),
    [sym_merge_arg] = STATE(133),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [17] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym_arguments] = STATE(183),
    [sym__argument] = STATE(133),
    [sym_recursive_arg] = STATE(133),
    [sym_sequential_arg] = STATE(133),
    [sym_split_arg] = STATE(133),
    [sym_merge_arg] = STATE(133),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [18] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym_arguments] = STATE(185),
    [sym__argument] = STATE(133),
    [sym_recursive_arg] = STATE(133),
    [sym_sequential_arg] = STATE(133),
    [sym_split_arg] = STATE(133),
    [sym_merge_arg] = STATE(133),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [19] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(138),
    [sym_recursive_arg] = STATE(138),
    [sym_sequential_arg] = STATE(138),
    [sym_split_arg] = STATE(138),
    [sym_merge_arg] = STATE(138),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [20] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(145),
    [sym_recursive_arg] = STATE(145),
    [sym_sequential_arg] = STATE(145),
    [sym_split_arg] = STATE(145),
    [sym_merge_arg] = STATE(145),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [21] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(144),
    [sym_recursive_arg] = STATE(144),
    [sym_sequential_arg] = STATE(144),
    [sym_split_arg] = STATE(144),
    [sym_merge_arg] = STATE(144),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [22] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(140),
    [sym_recursive_arg] = STATE(140),
    [sym_sequential_arg] = STATE(140),
    [sym_split_arg] = STATE(140),
    [sym_merge_arg] = STATE(140),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [23] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(141),
    [sym_recursive_arg] = STATE(141),
    [sym_sequential_arg] = STATE(141),
    [sym_split_arg] = STATE(141),
    [sym_merge_arg] = STATE(141),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [24] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(136),
    [sym_recursive_arg] = STATE(136),
    [sym_sequential_arg] = STATE(136),
    [sym_split_arg] = STATE(136),
    [sym_merge_arg] = STATE(136),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [25] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(135),
    [sym_recursive_arg] = STATE(135),
    [sym_sequential_arg] = STATE(135),
    [sym_split_arg] = STATE(135),
    [sym_merge_arg] = STATE(135),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [26] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(139),
    [sym_recursive_arg] = STATE(139),
    [sym_sequential_arg] = STATE(139),
    [sym_split_arg] = STATE(139),
    [sym_merge_arg] = STATE(139),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [27] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(137),
    [sym_recursive_arg] = STATE(137),
    [sym_sequential_arg] = STATE(137),
    [sym_split_arg] = STATE(137),
    [sym_merge_arg] = STATE(137),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [28] = {
    [sym__infix_expression] = STATE(40),
    [sym_infix] = STATE(40),
    [sym_partial] = STATE(40),
    [sym_prefix] = STATE(40),
    [sym_prim1] = STATE(40),
    [sym_prim2] = STATE(40),
    [sym_prim3] = STATE(40),
    [sym_prim5] = STATE(40),
    [sym_function_call] = STATE(40),
    [sym_modifier] = STATE(40),
    [sym_access] = STATE(40),
    [sym__primitive] = STATE(40),
    [sym_iteration] = STATE(40),
    [sym_substitution] = STATE(40),
    [sym_component] = STATE(40),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
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
    [sym_wire] = ACTIONS(57),
    [sym_cut] = ACTIONS(57),
    [sym_mem] = ACTIONS(57),
    [sym_int] = ACTIONS(57),
    [sym_real] = ACTIONS(59),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [29] = {
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_prim3] = STATE(41),
    [sym_prim5] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(41),
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
    [sym_wire] = ACTIONS(61),
    [sym_cut] = ACTIONS(61),
    [sym_mem] = ACTIONS(61),
    [sym_int] = ACTIONS(61),
    [sym_real] = ACTIONS(63),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [30] = {
    [sym__infix_expression] = STATE(52),
    [sym_infix] = STATE(52),
    [sym_partial] = STATE(52),
    [sym_prefix] = STATE(52),
    [sym_prim1] = STATE(52),
    [sym_prim2] = STATE(52),
    [sym_prim3] = STATE(52),
    [sym_prim5] = STATE(52),
    [sym_function_call] = STATE(52),
    [sym_modifier] = STATE(52),
    [sym_access] = STATE(52),
    [sym__primitive] = STATE(52),
    [sym_iteration] = STATE(52),
    [sym_substitution] = STATE(52),
    [sym_component] = STATE(52),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(52),
    [sym_id] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [31] = {
    [sym__infix_expression] = STATE(57),
    [sym_infix] = STATE(57),
    [sym_partial] = STATE(57),
    [sym_prefix] = STATE(57),
    [sym_prim1] = STATE(57),
    [sym_prim2] = STATE(57),
    [sym_prim3] = STATE(57),
    [sym_prim5] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_modifier] = STATE(57),
    [sym_access] = STATE(57),
    [sym__primitive] = STATE(57),
    [sym_iteration] = STATE(57),
    [sym_substitution] = STATE(57),
    [sym_component] = STATE(57),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(57),
    [sym_id] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [32] = {
    [sym__infix_expression] = STATE(56),
    [sym_infix] = STATE(56),
    [sym_partial] = STATE(56),
    [sym_prefix] = STATE(56),
    [sym_prim1] = STATE(56),
    [sym_prim2] = STATE(56),
    [sym_prim3] = STATE(56),
    [sym_prim5] = STATE(56),
    [sym_function_call] = STATE(56),
    [sym_modifier] = STATE(56),
    [sym_access] = STATE(56),
    [sym__primitive] = STATE(56),
    [sym_iteration] = STATE(56),
    [sym_substitution] = STATE(56),
    [sym_component] = STATE(56),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(56),
    [sym_id] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [33] = {
    [sym__infix_expression] = STATE(55),
    [sym_infix] = STATE(55),
    [sym_partial] = STATE(55),
    [sym_prefix] = STATE(55),
    [sym_prim1] = STATE(55),
    [sym_prim2] = STATE(55),
    [sym_prim3] = STATE(55),
    [sym_prim5] = STATE(55),
    [sym_function_call] = STATE(55),
    [sym_modifier] = STATE(55),
    [sym_access] = STATE(55),
    [sym__primitive] = STATE(55),
    [sym_iteration] = STATE(55),
    [sym_substitution] = STATE(55),
    [sym_component] = STATE(55),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(55),
    [sym_id] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [34] = {
    [sym__infix_expression] = STATE(54),
    [sym_infix] = STATE(54),
    [sym_partial] = STATE(54),
    [sym_prefix] = STATE(54),
    [sym_prim1] = STATE(54),
    [sym_prim2] = STATE(54),
    [sym_prim3] = STATE(54),
    [sym_prim5] = STATE(54),
    [sym_function_call] = STATE(54),
    [sym_modifier] = STATE(54),
    [sym_access] = STATE(54),
    [sym__primitive] = STATE(54),
    [sym_iteration] = STATE(54),
    [sym_substitution] = STATE(54),
    [sym_component] = STATE(54),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(54),
    [sym_id] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(51),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [35] = {
    [sym__infix_expression] = STATE(44),
    [sym_infix] = STATE(44),
    [sym_partial] = STATE(44),
    [sym_prefix] = STATE(44),
    [sym_prim1] = STATE(44),
    [sym_prim2] = STATE(44),
    [sym_prim3] = STATE(44),
    [sym_prim5] = STATE(44),
    [sym_function_call] = STATE(44),
    [sym_modifier] = STATE(44),
    [sym_access] = STATE(44),
    [sym__primitive] = STATE(44),
    [sym_iteration] = STATE(44),
    [sym_substitution] = STATE(44),
    [sym_component] = STATE(44),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(44),
    [sym_id] = STATE(44),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [36] = {
    [sym__infix_expression] = STATE(43),
    [sym_infix] = STATE(43),
    [sym_partial] = STATE(43),
    [sym_prefix] = STATE(43),
    [sym_prim1] = STATE(43),
    [sym_prim2] = STATE(43),
    [sym_prim3] = STATE(43),
    [sym_prim5] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_modifier] = STATE(43),
    [sym_access] = STATE(43),
    [sym__primitive] = STATE(43),
    [sym_iteration] = STATE(43),
    [sym_substitution] = STATE(43),
    [sym_component] = STATE(43),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
    [sym__number] = STATE(43),
    [sym_id] = STATE(43),
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
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
  [37] = {
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(65),
    [sym__prim1] = STATE(66),
    [sym__prim2] = STATE(67),
    [sym__prim3] = STATE(68),
    [sym__prim5] = STATE(69),
    [sym_sub] = STATE(65),
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
    [sym_wire] = ACTIONS(93),
    [sym_cut] = ACTIONS(93),
    [sym_mem] = ACTIONS(93),
    [sym_int] = ACTIONS(93),
    [sym_real] = ACTIONS(95),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [anon_sym_COLON_COLON] = ACTIONS(47),
    [sym__id] = ACTIONS(49),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(97), 17,
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
    ACTIONS(99), 45,
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
      sym_rdtable,
      sym_rwtable,
      sym__id,
  [67] = 16,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_pow,
    ACTIONS(125), 1,
      sym_delay,
    STATE(28), 1,
      sym_sub,
    STATE(80), 1,
      sym_substitutions,
    ACTIONS(115), 2,
      sym_add,
      sym_or,
    ACTIONS(121), 2,
      sym_lt,
      sym_gt,
    STATE(83), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(123), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(117), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(101), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [135] = 11,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(119), 1,
      sym_pow,
    ACTIONS(125), 1,
      sym_delay,
    STATE(28), 1,
      sym_sub,
    STATE(80), 1,
      sym_substitutions,
    STATE(83), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(117), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(127), 16,
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
  [193] = 10,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(119), 1,
      sym_pow,
    ACTIONS(125), 1,
      sym_delay,
    STATE(28), 1,
      sym_sub,
    STATE(80), 1,
      sym_substitutions,
    STATE(83), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(127), 23,
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
  [249] = 9,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(125), 1,
      sym_delay,
    STATE(28), 1,
      sym_sub,
    STATE(80), 1,
      sym_substitutions,
    STATE(83), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(127), 24,
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
  [303] = 13,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(119), 1,
      sym_pow,
    ACTIONS(125), 1,
      sym_delay,
    STATE(28), 1,
      sym_sub,
    STATE(80), 1,
      sym_substitutions,
    ACTIONS(115), 2,
      sym_add,
      sym_or,
    STATE(83), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(117), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(127), 13,
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
  [365] = 8,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_sub,
    STATE(80), 1,
      sym_substitutions,
    STATE(83), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(127), 25,
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
  [417] = 5,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(78), 1,
      sym_id,
    ACTIONS(99), 6,
      anon_sym_COLON,
      anon_sym_with,
      anon_sym_letrec,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(97), 25,
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
  [462] = 4,
    ACTIONS(135), 1,
      anon_sym_COLON_COLON,
    STATE(47), 1,
      aux_sym_id_repeat1,
    ACTIONS(133), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(131), 28,
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
  [504] = 4,
    ACTIONS(141), 1,
      anon_sym_COLON_COLON,
    STATE(47), 1,
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
  [546] = 4,
    ACTIONS(135), 1,
      anon_sym_COLON_COLON,
    STATE(49), 1,
      aux_sym_id_repeat1,
    ACTIONS(146), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(144), 28,
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
  [588] = 4,
    ACTIONS(135), 1,
      anon_sym_COLON_COLON,
    STATE(47), 1,
      aux_sym_id_repeat1,
    ACTIONS(150), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(148), 28,
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
  [630] = 4,
    ACTIONS(135), 1,
      anon_sym_COLON_COLON,
    STATE(46), 1,
      aux_sym_id_repeat1,
    ACTIONS(150), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(148), 28,
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
  [672] = 2,
    ACTIONS(139), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(137), 29,
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
  [709] = 8,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym_sub,
    STATE(80), 1,
      sym_substitutions,
    STATE(83), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(127), 22,
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
  [758] = 16,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_COLON,
    ACTIONS(160), 1,
      sym_pow,
    ACTIONS(166), 1,
      sym_delay,
    STATE(34), 1,
      sym_sub,
    STATE(80), 1,
      sym_substitutions,
    ACTIONS(156), 2,
      sym_add,
      sym_or,
    ACTIONS(162), 2,
      sym_lt,
      sym_gt,
    STATE(83), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(164), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(152), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(158), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [823] = 11,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      sym_pow,
    ACTIONS(166), 1,
      sym_delay,
    STATE(34), 1,
      sym_sub,
    STATE(80), 1,
      sym_substitutions,
    STATE(83), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(158), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(127), 13,
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
  [878] = 10,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      sym_pow,
    ACTIONS(166), 1,
      sym_delay,
    STATE(34), 1,
      sym_sub,
    STATE(80), 1,
      sym_substitutions,
    STATE(83), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(127), 20,
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
  [931] = 9,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(166), 1,
      sym_delay,
    STATE(34), 1,
      sym_sub,
    STATE(80), 1,
      sym_substitutions,
    STATE(83), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(127), 21,
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
  [982] = 13,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(160), 1,
      sym_pow,
    ACTIONS(166), 1,
      sym_delay,
    STATE(34), 1,
      sym_sub,
    STATE(80), 1,
      sym_substitutions,
    ACTIONS(156), 2,
      sym_add,
      sym_or,
    STATE(83), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(129), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(158), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(127), 10,
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
  [1041] = 2,
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
  [1077] = 2,
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
  [1113] = 2,
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
  [1149] = 2,
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
  [1185] = 2,
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
  [1221] = 5,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(49), 1,
      sym__id,
    STATE(78), 1,
      sym_id,
    ACTIONS(99), 4,
      anon_sym_COLON,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(97), 24,
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
  [1263] = 2,
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
  [1299] = 3,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(192), 27,
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
  [1337] = 3,
    ACTIONS(198), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(192), 27,
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
  [1375] = 3,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(192), 27,
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
  [1413] = 3,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(192), 27,
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
  [1451] = 3,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(192), 27,
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
  [1489] = 2,
    ACTIONS(208), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(206), 28,
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
  [1525] = 2,
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
  [1561] = 2,
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
  [1597] = 2,
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
  [1633] = 2,
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
  [1669] = 2,
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
  [1705] = 2,
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
  [1741] = 2,
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
  [1777] = 2,
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
  [1813] = 2,
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
  [1849] = 2,
    ACTIONS(248), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(246), 28,
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
  [1885] = 2,
    ACTIONS(252), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(250), 28,
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
  [1921] = 2,
    ACTIONS(256), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(254), 28,
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
  [1957] = 2,
    ACTIONS(260), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(258), 28,
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
  [1993] = 14,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 1,
      anon_sym_declare,
    ACTIONS(267), 1,
      anon_sym_import,
    ACTIONS(270), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(276), 1,
      anon_sym_COLON_COLON,
    ACTIONS(279), 1,
      sym__id,
    ACTIONS(282), 1,
      sym_comment,
    STATE(149), 1,
      sym_variants,
    STATE(166), 1,
      sym_id,
    STATE(116), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(197), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(198), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(273), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(84), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [2047] = 14,
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
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      sym_comment,
    STATE(149), 1,
      sym_variants,
    STATE(166), 1,
      sym_id,
    STATE(116), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(197), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(198), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(11), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(84), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [2101] = 9,
    ACTIONS(294), 1,
      anon_sym_COLON_COLON,
    ACTIONS(297), 1,
      sym__id,
    STATE(162), 1,
      sym_variants,
    STATE(166), 1,
      sym_id,
    ACTIONS(289), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(86), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(126), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(204), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(291), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2136] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_variants,
    STATE(166), 1,
      sym_id,
    STATE(86), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(126), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(204), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(302), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2170] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_variants,
    STATE(166), 1,
      sym_id,
    STATE(86), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(126), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(204), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(302), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2204] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      sym_variants,
    STATE(166), 1,
      sym_id,
    STATE(86), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(126), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(204), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(302), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2238] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_variants,
    STATE(166), 1,
      sym_id,
    STATE(87), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(126), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(204), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(302), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2272] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      sym_variants,
    STATE(166), 1,
      sym_id,
    STATE(89), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(126), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(204), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(302), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2306] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_variants,
    STATE(166), 1,
      sym_id,
    STATE(88), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(126), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(204), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(302), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2340] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_variants,
    STATE(166), 1,
      sym_id,
    STATE(86), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(126), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(204), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(302), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2374] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_variants,
    STATE(166), 1,
      sym_id,
    STATE(93), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(126), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(204), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(302), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2408] = 4,
    ACTIONS(316), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(318), 1,
      sym__doc_char,
    STATE(96), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(320), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2431] = 4,
    ACTIONS(322), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(324), 1,
      sym__doc_char,
    STATE(96), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(327), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2454] = 4,
    ACTIONS(330), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(332), 1,
      sym__doc_char,
    STATE(95), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(334), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2477] = 2,
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
  [2493] = 2,
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
  [2509] = 2,
    ACTIONS(344), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(346), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2525] = 2,
    ACTIONS(348), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(350), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2541] = 2,
    ACTIONS(352), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(354), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2557] = 2,
    ACTIONS(356), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(358), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2573] = 2,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(360), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2587] = 2,
    ACTIONS(366), 1,
      anon_sym_COLON,
    ACTIONS(364), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2601] = 4,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_TILDE,
    ACTIONS(374), 1,
      anon_sym_COLON,
    ACTIONS(368), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2619] = 2,
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
  [2633] = 4,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_TILDE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(380), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2651] = 6,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_TILDE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(386), 1,
      anon_sym_LT_COLON,
    ACTIONS(388), 1,
      anon_sym_COLON_GT,
    ACTIONS(384), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [2673] = 6,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_TILDE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(386), 1,
      anon_sym_LT_COLON,
    ACTIONS(388), 1,
      anon_sym_COLON_GT,
    ACTIONS(390), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [2695] = 2,
    ACTIONS(394), 1,
      anon_sym_COLON,
    ACTIONS(392), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2709] = 2,
    ACTIONS(398), 1,
      anon_sym_COLON,
    ACTIONS(396), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2723] = 2,
    ACTIONS(402), 1,
      anon_sym_COLON,
    ACTIONS(400), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2737] = 2,
    ACTIONS(406), 1,
      anon_sym_COLON,
    ACTIONS(404), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2751] = 4,
    ACTIONS(413), 1,
      anon_sym_COLON_COLON,
    ACTIONS(408), 2,
      anon_sym_import,
      sym__id,
    STATE(115), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(410), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2769] = 4,
    ACTIONS(419), 1,
      anon_sym_COLON_COLON,
    ACTIONS(415), 2,
      anon_sym_import,
      sym__id,
    STATE(115), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(417), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2787] = 8,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_TILDE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(386), 1,
      anon_sym_LT_COLON,
    ACTIONS(388), 1,
      anon_sym_COLON_GT,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 1,
      anon_sym_with,
    ACTIONS(425), 1,
      anon_sym_letrec,
  [2812] = 2,
    ACTIONS(340), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
    ACTIONS(342), 5,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2825] = 3,
    ACTIONS(427), 1,
      anon_sym_COLON_COLON,
    STATE(131), 1,
      aux_sym_id_repeat1,
    ACTIONS(144), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2840] = 3,
    ACTIONS(427), 1,
      anon_sym_COLON_COLON,
    STATE(132), 1,
      aux_sym_id_repeat1,
    ACTIONS(131), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2855] = 3,
    ACTIONS(427), 1,
      anon_sym_COLON_COLON,
    STATE(120), 1,
      aux_sym_id_repeat1,
    ACTIONS(148), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2870] = 8,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_TILDE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(386), 1,
      anon_sym_LT_COLON,
    ACTIONS(388), 1,
      anon_sym_COLON_GT,
    ACTIONS(423), 1,
      anon_sym_with,
    ACTIONS(425), 1,
      anon_sym_letrec,
    ACTIONS(429), 1,
      anon_sym_SEMI,
  [2895] = 8,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_TILDE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(386), 1,
      anon_sym_LT_COLON,
    ACTIONS(388), 1,
      anon_sym_COLON_GT,
    ACTIONS(423), 1,
      anon_sym_with,
    ACTIONS(425), 1,
      anon_sym_letrec,
    ACTIONS(431), 1,
      anon_sym_SEMI,
  [2920] = 8,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_TILDE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(386), 1,
      anon_sym_LT_COLON,
    ACTIONS(388), 1,
      anon_sym_COLON_GT,
    ACTIONS(423), 1,
      anon_sym_with,
    ACTIONS(425), 1,
      anon_sym_letrec,
    ACTIONS(433), 1,
      anon_sym_SEMI,
  [2945] = 8,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_TILDE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(386), 1,
      anon_sym_LT_COLON,
    ACTIONS(388), 1,
      anon_sym_COLON_GT,
    ACTIONS(423), 1,
      anon_sym_with,
    ACTIONS(425), 1,
      anon_sym_letrec,
    ACTIONS(435), 1,
      anon_sym_SEMI,
  [2970] = 4,
    ACTIONS(415), 1,
      sym__id,
    ACTIONS(419), 1,
      anon_sym_COLON_COLON,
    STATE(130), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(437), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2987] = 8,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_TILDE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(386), 1,
      anon_sym_LT_COLON,
    ACTIONS(388), 1,
      anon_sym_COLON_GT,
    ACTIONS(423), 1,
      anon_sym_with,
    ACTIONS(425), 1,
      anon_sym_letrec,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
  [3012] = 8,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_TILDE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(386), 1,
      anon_sym_LT_COLON,
    ACTIONS(388), 1,
      anon_sym_COLON_GT,
    ACTIONS(423), 1,
      anon_sym_with,
    ACTIONS(425), 1,
      anon_sym_letrec,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
  [3037] = 8,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_TILDE,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(386), 1,
      anon_sym_LT_COLON,
    ACTIONS(388), 1,
      anon_sym_COLON_GT,
    ACTIONS(423), 1,
      anon_sym_with,
    ACTIONS(425), 1,
      anon_sym_letrec,
    ACTIONS(443), 1,
      anon_sym_SEMI,
  [3062] = 4,
    ACTIONS(408), 1,
      sym__id,
    ACTIONS(413), 1,
      anon_sym_COLON_COLON,
    STATE(130), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(445), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [3079] = 3,
    ACTIONS(427), 1,
      anon_sym_COLON_COLON,
    STATE(132), 1,
      aux_sym_id_repeat1,
    ACTIONS(148), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3094] = 3,
    ACTIONS(448), 1,
      anon_sym_COLON_COLON,
    STATE(132), 1,
      aux_sym_id_repeat1,
    ACTIONS(137), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3109] = 7,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(459), 1,
      anon_sym_LT_COLON,
    ACTIONS(461), 1,
      anon_sym_COLON_GT,
    STATE(156), 1,
      aux_sym_arguments_repeat1,
  [3131] = 1,
    ACTIONS(137), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [3141] = 5,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(459), 1,
      anon_sym_LT_COLON,
    ACTIONS(461), 1,
      anon_sym_COLON_GT,
    ACTIONS(463), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3158] = 5,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(459), 1,
      anon_sym_LT_COLON,
    ACTIONS(461), 1,
      anon_sym_COLON_GT,
    ACTIONS(465), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3175] = 3,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(467), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3188] = 2,
    ACTIONS(471), 1,
      anon_sym_COLON,
    ACTIONS(469), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3199] = 5,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(459), 1,
      anon_sym_LT_COLON,
    ACTIONS(461), 1,
      anon_sym_COLON_GT,
    ACTIONS(473), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3216] = 6,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(459), 1,
      anon_sym_LT_COLON,
    ACTIONS(461), 1,
      anon_sym_COLON_GT,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    ACTIONS(477), 1,
      anon_sym_COMMA,
  [3235] = 5,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(459), 1,
      anon_sym_LT_COLON,
    ACTIONS(461), 1,
      anon_sym_COLON_GT,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
  [3251] = 3,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
    ACTIONS(481), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(142), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3263] = 4,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    ACTIONS(488), 1,
      anon_sym_where,
    ACTIONS(490), 1,
      anon_sym_SQUOTE,
    STATE(146), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3277] = 5,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(459), 1,
      anon_sym_LT_COLON,
    ACTIONS(461), 1,
      anon_sym_COLON_GT,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
  [3293] = 5,
    ACTIONS(455), 1,
      anon_sym_TILDE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(459), 1,
      anon_sym_LT_COLON,
    ACTIONS(461), 1,
      anon_sym_COLON_GT,
    ACTIONS(494), 1,
      anon_sym_COMMA,
  [3309] = 4,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(490), 1,
      anon_sym_SQUOTE,
    ACTIONS(496), 1,
      anon_sym_where,
    STATE(142), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3323] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(498), 1,
      sym_string,
    ACTIONS(500), 1,
      sym__id,
    STATE(202), 1,
      sym_id,
  [3336] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(500), 1,
      sym__id,
    STATE(153), 1,
      sym_id,
    STATE(186), 1,
      sym_parameters,
  [3349] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(502), 1,
      anon_sym_import,
    STATE(168), 1,
      sym_id,
  [3362] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(500), 1,
      sym__id,
    STATE(153), 1,
      sym_id,
    STATE(193), 1,
      sym_parameters,
  [3375] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(500), 1,
      sym__id,
    STATE(153), 1,
      sym_id,
    STATE(172), 1,
      sym_parameters,
  [3388] = 1,
    ACTIONS(504), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [3394] = 3,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_parameters_repeat1,
  [3404] = 3,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_parameters_repeat1,
  [3414] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(500), 1,
      sym__id,
    STATE(189), 1,
      sym_id,
  [3424] = 3,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_arguments_repeat1,
  [3434] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(500), 1,
      sym__id,
    STATE(181), 1,
      sym_id,
  [3444] = 3,
    ACTIONS(47), 1,
      anon_sym_COLON_COLON,
    ACTIONS(517), 1,
      sym__id,
    STATE(77), 1,
      sym_id,
  [3454] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(500), 1,
      sym__id,
    STATE(164), 1,
      sym_id,
  [3464] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(500), 1,
      sym__id,
    STATE(147), 1,
      sym_id,
  [3474] = 3,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_parameters_repeat1,
  [3484] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(500), 1,
      sym__id,
    STATE(168), 1,
      sym_id,
  [3494] = 3,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_arguments_repeat1,
  [3504] = 1,
    ACTIONS(524), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3509] = 2,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_environment,
  [3516] = 2,
    ACTIONS(528), 1,
      anon_sym_EQ,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
  [3523] = 2,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_rec_environment,
  [3530] = 2,
    ACTIONS(534), 1,
      anon_sym_EQ,
    ACTIONS(536), 1,
      anon_sym_LPAREN,
  [3537] = 2,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_environment,
  [3544] = 1,
    ACTIONS(538), 1,
      sym__id,
  [3548] = 1,
    ACTIONS(540), 1,
      anon_sym_SEMI,
  [3552] = 1,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
  [3556] = 1,
    ACTIONS(544), 1,
      anon_sym_EQ,
  [3560] = 1,
    ACTIONS(546), 1,
      anon_sym_SEMI,
  [3564] = 1,
    ACTIONS(548), 1,
      anon_sym_SEMI,
  [3568] = 1,
    ACTIONS(550), 1,
      anon_sym_DOT,
  [3572] = 1,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
  [3576] = 1,
    ACTIONS(554), 1,
      anon_sym_EQ,
  [3580] = 1,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
  [3584] = 1,
    ACTIONS(558), 1,
      sym_string,
  [3588] = 1,
    ACTIONS(560), 1,
      anon_sym_EQ,
  [3592] = 1,
    ACTIONS(562), 1,
      sym_string,
  [3596] = 1,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
  [3600] = 1,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
  [3604] = 1,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
  [3608] = 1,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
  [3612] = 1,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [3616] = 1,
    ACTIONS(574), 1,
      anon_sym_SEMI,
  [3620] = 1,
    ACTIONS(576), 1,
      anon_sym_COMMA,
  [3624] = 1,
    ACTIONS(578), 1,
      sym_string,
  [3628] = 1,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [3632] = 1,
    ACTIONS(582), 1,
      anon_sym_LPAREN,
  [3636] = 1,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
  [3640] = 1,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
  [3644] = 1,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
  [3648] = 1,
    ACTIONS(590), 1,
      anon_sym_LPAREN,
  [3652] = 1,
    ACTIONS(592), 1,
      anon_sym_SEMI,
  [3656] = 1,
    ACTIONS(594), 1,
      anon_sym_SEMI,
  [3660] = 1,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
  [3664] = 1,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
  [3668] = 1,
    ACTIONS(600), 1,
      sym__id,
  [3672] = 1,
    ACTIONS(602), 1,
      sym_string,
  [3676] = 1,
    ACTIONS(604), 1,
      sym__id,
  [3680] = 1,
    ACTIONS(606), 1,
      anon_sym_SEMI,
  [3684] = 1,
    ACTIONS(608), 1,
      sym__id,
  [3688] = 1,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(38)] = 0,
  [SMALL_STATE(39)] = 67,
  [SMALL_STATE(40)] = 135,
  [SMALL_STATE(41)] = 193,
  [SMALL_STATE(42)] = 249,
  [SMALL_STATE(43)] = 303,
  [SMALL_STATE(44)] = 365,
  [SMALL_STATE(45)] = 417,
  [SMALL_STATE(46)] = 462,
  [SMALL_STATE(47)] = 504,
  [SMALL_STATE(48)] = 546,
  [SMALL_STATE(49)] = 588,
  [SMALL_STATE(50)] = 630,
  [SMALL_STATE(51)] = 672,
  [SMALL_STATE(52)] = 709,
  [SMALL_STATE(53)] = 758,
  [SMALL_STATE(54)] = 823,
  [SMALL_STATE(55)] = 878,
  [SMALL_STATE(56)] = 931,
  [SMALL_STATE(57)] = 982,
  [SMALL_STATE(58)] = 1041,
  [SMALL_STATE(59)] = 1077,
  [SMALL_STATE(60)] = 1113,
  [SMALL_STATE(61)] = 1149,
  [SMALL_STATE(62)] = 1185,
  [SMALL_STATE(63)] = 1221,
  [SMALL_STATE(64)] = 1263,
  [SMALL_STATE(65)] = 1299,
  [SMALL_STATE(66)] = 1337,
  [SMALL_STATE(67)] = 1375,
  [SMALL_STATE(68)] = 1413,
  [SMALL_STATE(69)] = 1451,
  [SMALL_STATE(70)] = 1489,
  [SMALL_STATE(71)] = 1525,
  [SMALL_STATE(72)] = 1561,
  [SMALL_STATE(73)] = 1597,
  [SMALL_STATE(74)] = 1633,
  [SMALL_STATE(75)] = 1669,
  [SMALL_STATE(76)] = 1705,
  [SMALL_STATE(77)] = 1741,
  [SMALL_STATE(78)] = 1777,
  [SMALL_STATE(79)] = 1813,
  [SMALL_STATE(80)] = 1849,
  [SMALL_STATE(81)] = 1885,
  [SMALL_STATE(82)] = 1921,
  [SMALL_STATE(83)] = 1957,
  [SMALL_STATE(84)] = 1993,
  [SMALL_STATE(85)] = 2047,
  [SMALL_STATE(86)] = 2101,
  [SMALL_STATE(87)] = 2136,
  [SMALL_STATE(88)] = 2170,
  [SMALL_STATE(89)] = 2204,
  [SMALL_STATE(90)] = 2238,
  [SMALL_STATE(91)] = 2272,
  [SMALL_STATE(92)] = 2306,
  [SMALL_STATE(93)] = 2340,
  [SMALL_STATE(94)] = 2374,
  [SMALL_STATE(95)] = 2408,
  [SMALL_STATE(96)] = 2431,
  [SMALL_STATE(97)] = 2454,
  [SMALL_STATE(98)] = 2477,
  [SMALL_STATE(99)] = 2493,
  [SMALL_STATE(100)] = 2509,
  [SMALL_STATE(101)] = 2525,
  [SMALL_STATE(102)] = 2541,
  [SMALL_STATE(103)] = 2557,
  [SMALL_STATE(104)] = 2573,
  [SMALL_STATE(105)] = 2587,
  [SMALL_STATE(106)] = 2601,
  [SMALL_STATE(107)] = 2619,
  [SMALL_STATE(108)] = 2633,
  [SMALL_STATE(109)] = 2651,
  [SMALL_STATE(110)] = 2673,
  [SMALL_STATE(111)] = 2695,
  [SMALL_STATE(112)] = 2709,
  [SMALL_STATE(113)] = 2723,
  [SMALL_STATE(114)] = 2737,
  [SMALL_STATE(115)] = 2751,
  [SMALL_STATE(116)] = 2769,
  [SMALL_STATE(117)] = 2787,
  [SMALL_STATE(118)] = 2812,
  [SMALL_STATE(119)] = 2825,
  [SMALL_STATE(120)] = 2840,
  [SMALL_STATE(121)] = 2855,
  [SMALL_STATE(122)] = 2870,
  [SMALL_STATE(123)] = 2895,
  [SMALL_STATE(124)] = 2920,
  [SMALL_STATE(125)] = 2945,
  [SMALL_STATE(126)] = 2970,
  [SMALL_STATE(127)] = 2987,
  [SMALL_STATE(128)] = 3012,
  [SMALL_STATE(129)] = 3037,
  [SMALL_STATE(130)] = 3062,
  [SMALL_STATE(131)] = 3079,
  [SMALL_STATE(132)] = 3094,
  [SMALL_STATE(133)] = 3109,
  [SMALL_STATE(134)] = 3131,
  [SMALL_STATE(135)] = 3141,
  [SMALL_STATE(136)] = 3158,
  [SMALL_STATE(137)] = 3175,
  [SMALL_STATE(138)] = 3188,
  [SMALL_STATE(139)] = 3199,
  [SMALL_STATE(140)] = 3216,
  [SMALL_STATE(141)] = 3235,
  [SMALL_STATE(142)] = 3251,
  [SMALL_STATE(143)] = 3263,
  [SMALL_STATE(144)] = 3277,
  [SMALL_STATE(145)] = 3293,
  [SMALL_STATE(146)] = 3309,
  [SMALL_STATE(147)] = 3323,
  [SMALL_STATE(148)] = 3336,
  [SMALL_STATE(149)] = 3349,
  [SMALL_STATE(150)] = 3362,
  [SMALL_STATE(151)] = 3375,
  [SMALL_STATE(152)] = 3388,
  [SMALL_STATE(153)] = 3394,
  [SMALL_STATE(154)] = 3404,
  [SMALL_STATE(155)] = 3414,
  [SMALL_STATE(156)] = 3424,
  [SMALL_STATE(157)] = 3434,
  [SMALL_STATE(158)] = 3444,
  [SMALL_STATE(159)] = 3454,
  [SMALL_STATE(160)] = 3464,
  [SMALL_STATE(161)] = 3474,
  [SMALL_STATE(162)] = 3484,
  [SMALL_STATE(163)] = 3494,
  [SMALL_STATE(164)] = 3504,
  [SMALL_STATE(165)] = 3509,
  [SMALL_STATE(166)] = 3516,
  [SMALL_STATE(167)] = 3523,
  [SMALL_STATE(168)] = 3530,
  [SMALL_STATE(169)] = 3537,
  [SMALL_STATE(170)] = 3544,
  [SMALL_STATE(171)] = 3548,
  [SMALL_STATE(172)] = 3552,
  [SMALL_STATE(173)] = 3556,
  [SMALL_STATE(174)] = 3560,
  [SMALL_STATE(175)] = 3564,
  [SMALL_STATE(176)] = 3568,
  [SMALL_STATE(177)] = 3572,
  [SMALL_STATE(178)] = 3576,
  [SMALL_STATE(179)] = 3580,
  [SMALL_STATE(180)] = 3584,
  [SMALL_STATE(181)] = 3588,
  [SMALL_STATE(182)] = 3592,
  [SMALL_STATE(183)] = 3596,
  [SMALL_STATE(184)] = 3600,
  [SMALL_STATE(185)] = 3604,
  [SMALL_STATE(186)] = 3608,
  [SMALL_STATE(187)] = 3612,
  [SMALL_STATE(188)] = 3616,
  [SMALL_STATE(189)] = 3620,
  [SMALL_STATE(190)] = 3624,
  [SMALL_STATE(191)] = 3628,
  [SMALL_STATE(192)] = 3632,
  [SMALL_STATE(193)] = 3636,
  [SMALL_STATE(194)] = 3640,
  [SMALL_STATE(195)] = 3644,
  [SMALL_STATE(196)] = 3648,
  [SMALL_STATE(197)] = 3652,
  [SMALL_STATE(198)] = 3656,
  [SMALL_STATE(199)] = 3660,
  [SMALL_STATE(200)] = 3664,
  [SMALL_STATE(201)] = 3668,
  [SMALL_STATE(202)] = 3672,
  [SMALL_STATE(203)] = 3676,
  [SMALL_STATE(204)] = 3680,
  [SMALL_STATE(205)] = 3684,
  [SMALL_STATE(206)] = 3688,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 12),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 12),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(205),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim3, 4, .production_id = 18),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim3, 4, .production_id = 18),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4, .production_id = 16),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4, .production_id = 16),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6, .production_id = 21),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6, .production_id = 21),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim2, 4, .production_id = 18),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim2, 4, .production_id = 18),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim5, 4, .production_id = 18),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim5, 4, .production_id = 18),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 11),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 11),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim1, 4, .production_id = 17),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim1, 4, .production_id = 17),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 2, .production_id = 6),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 2, .production_id = 6),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 22),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 22),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2, .production_id = 7),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2, .production_id = 7),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(160),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(206),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(97),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(116),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(201),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(119),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(84),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(126),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(201),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(119),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(96),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(96),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 6, .production_id = 14),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 6, .production_id = 14),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_definition, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__metadata_definition, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 5, .production_id = 8),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 5, .production_id = 8),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 9),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 9),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 9),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 9),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 9),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 9),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 9),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 10),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 10),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 10),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 10),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(115),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 20),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 19),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, .production_id = 5),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(130),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(170),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 9),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 9),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 9),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 9),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 9),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(157),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 23),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(159),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(26),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 13),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [596] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
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
