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
#define STATE_COUNT 211
#define LARGE_STATE_COUNT 39
#define SYMBOL_COUNT 171
#define ALIAS_COUNT 1
#define TOKEN_COUNT 102
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
  sym_select2 = 80,
  sym_select3 = 81,
  anon_sym_LTmdoc_GT = 82,
  anon_sym_LT_SLASHmdoc_GT = 83,
  sym__doc_char = 84,
  anon_sym_LTnotice_SLASH_GT = 85,
  anon_sym_LTnotice_SLASH_GT2 = 86,
  anon_sym_LTequation_GT = 87,
  anon_sym_LT_SLASHequation_GT = 88,
  anon_sym_LTdiagram_GT = 89,
  anon_sym_LT_SLASHdiagram_GT = 90,
  anon_sym_LTmetadata_GT = 91,
  anon_sym_LT_SLASHmetadata_GT = 92,
  anon_sym_LTlisting = 93,
  sym_single_precision = 94,
  sym_double_precision = 95,
  sym_quad_precision = 96,
  sym_fixed_point_precision = 97,
  sym_string = 98,
  anon_sym_COLON_COLON = 99,
  sym__id = 100,
  sym_comment = 101,
  sym_program = 102,
  sym__statement = 103,
  sym__definition = 104,
  sym_definition = 105,
  sym_function_definition = 106,
  sym__metadata_definition = 107,
  sym_global_metadata = 108,
  sym_function_metadata = 109,
  sym_file_import = 110,
  sym__expression = 111,
  sym__infix_expression = 112,
  sym_infix = 113,
  sym_partial = 114,
  sym_prefix = 115,
  sym_prim1 = 116,
  sym_prim2 = 117,
  sym_prim3 = 118,
  sym_prim4 = 119,
  sym_prim5 = 120,
  sym_function_call = 121,
  sym_modifier = 122,
  sym_access = 123,
  sym__primitive = 124,
  sym_parameters = 125,
  sym_arguments = 126,
  sym__argument = 127,
  sym_recursive_arg = 128,
  sym_sequential_arg = 129,
  sym_split_arg = 130,
  sym_merge_arg = 131,
  sym_iteration = 132,
  sym_with_environment = 133,
  sym_environment = 134,
  sym_letrec_environment = 135,
  sym_rec_environment = 136,
  sym_recinition = 137,
  sym_substitution = 138,
  sym_substitutions = 139,
  sym_component = 140,
  sym__infix = 141,
  sym__prim1 = 142,
  sym__prim2 = 143,
  sym__prim3 = 144,
  sym__prim4 = 145,
  sym__prim5 = 146,
  sym__modifier = 147,
  sym_one_sample_delay = 148,
  sym_sub = 149,
  sym__number = 150,
  sym_documentation = 151,
  sym__doc_content = 152,
  sym__special_doc_tag = 153,
  sym__binary_composition = 154,
  sym_recursive = 155,
  sym_sequential = 156,
  sym_split = 157,
  sym_merge = 158,
  sym_parallel = 159,
  sym_variants = 160,
  sym__variant = 161,
  sym_id = 162,
  aux_sym_program_repeat1 = 163,
  aux_sym_parameters_repeat1 = 164,
  aux_sym_arguments_repeat1 = 165,
  aux_sym_environment_repeat1 = 166,
  aux_sym_rec_environment_repeat1 = 167,
  aux_sym_documentation_repeat1 = 168,
  aux_sym_variants_repeat1 = 169,
  aux_sym_id_repeat1 = 170,
  alias_sym_parameter = 171,
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
  [sym_select2] = "select2",
  [sym_select3] = "select3",
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
  [sym_prim4] = "prim4",
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
  [sym__prim4] = "_prim4",
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
  [sym_select2] = sym_select2,
  [sym_select3] = sym_select3,
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
  [sym_prim4] = sym_prim4,
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
  [sym__prim4] = sym__prim4,
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
  [sym_select2] = {
    .visible = true,
    .named = true,
  },
  [sym_select3] = {
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
  [sym_prim4] = {
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
  [sym__prim4] = {
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
  [34] = 34,
  [35] = 31,
  [36] = 32,
  [37] = 30,
  [38] = 34,
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
  [52] = 52,
  [53] = 53,
  [54] = 45,
  [55] = 40,
  [56] = 41,
  [57] = 43,
  [58] = 44,
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
  [75] = 46,
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
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 49,
  [122] = 108,
  [123] = 50,
  [124] = 48,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 47,
  [131] = 106,
  [132] = 51,
  [133] = 107,
  [134] = 134,
  [135] = 135,
  [136] = 52,
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
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 205,
  [208] = 202,
  [209] = 178,
  [210] = 210,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(271);
      if (lookahead == '!') ADVANCE(389);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == '&') ADVANCE(320);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ')') ADVANCE(275);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '/') ADVANCE(316);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == ';') ADVANCE(272);
      if (lookahead == '<') ADVANCE(325);
      if (lookahead == '=') ADVANCE(273);
      if (lookahead == '>') ADVANCE(328);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == '\\') ADVANCE(285);
      if (lookahead == ']') ADVANCE(310);
      if (lookahead == '^') ADVANCE(318);
      if (lookahead == '_') ADVANCE(387);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'q') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == 's') ADVANCE(87);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(185);
      if (lookahead == '{') ADVANCE(303);
      if (lookahead == '|') ADVANCE(319);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(389);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == '&') ADVANCE(320);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '+') ADVANCE(314);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(266);
      if (lookahead == '/') ADVANCE(316);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '<') ADVANCE(326);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(328);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(285);
      if (lookahead == '^') ADVANCE(318);
      if (lookahead == '_') ADVANCE(388);
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == 'c') ADVANCE(473);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead == 'f') ADVANCE(512);
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead == 'm') ADVANCE(430);
      if (lookahead == 'p') ADVANCE(433);
      if (lookahead == 'r') ADVANCE(458);
      if (lookahead == 's') ADVANCE(463);
      if (lookahead == 't') ADVANCE(435);
      if (lookahead == 'x') ADVANCE(550);
      if (lookahead == '|') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == '&') ADVANCE(320);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ')') ADVANCE(275);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '+') ADVANCE(313);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(316);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == ';') ADVANCE(272);
      if (lookahead == '<') ADVANCE(325);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(328);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == '^') ADVANCE(318);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(474);
      if (lookahead == 'w') ADVANCE(498);
      if (lookahead == 'x') ADVANCE(550);
      if (lookahead == '|') ADVANCE(319);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == '&') ADVANCE(320);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ')') ADVANCE(275);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '+') ADVANCE(313);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(316);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == ';') ADVANCE(272);
      if (lookahead == '<') ADVANCE(325);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(328);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == '^') ADVANCE(318);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(185);
      if (lookahead == '|') ADVANCE(319);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == '&') ADVANCE(320);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ')') ADVANCE(275);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '+') ADVANCE(313);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(316);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == '<') ADVANCE(325);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(328);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == '^') ADVANCE(318);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(550);
      if (lookahead == '|') ADVANCE(319);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == '&') ADVANCE(320);
      if (lookahead == '\'') ADVANCE(308);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ')') ADVANCE(275);
      if (lookahead == '*') ADVANCE(315);
      if (lookahead == '+') ADVANCE(313);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(316);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == ';') ADVANCE(272);
      if (lookahead == '<') ADVANCE(325);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(328);
      if (lookahead == '@') ADVANCE(332);
      if (lookahead == '[') ADVANCE(309);
      if (lookahead == '^') ADVANCE(318);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(125);
      if (lookahead == 'x') ADVANCE(185);
      if (lookahead == '|') ADVANCE(319);
      if (lookahead == '~') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ')') ADVANCE(275);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '=') ADVANCE(273);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(425);
      if (lookahead == '\\') ADVANCE(268);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(606);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(605);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(337);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(400);
      if (lookahead == '3') ADVANCE(402);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(426);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ']') ADVANCE(310);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(542);
      if (lookahead == 'f') ADVANCE(487);
      if (lookahead == 'q') ADVANCE(597);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(542);
      if (lookahead == 'f') ADVANCE(487);
      if (lookahead == 'i') ADVANCE(514);
      if (lookahead == 'q') ADVANCE(597);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(514);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(406);
      if (lookahead != 0) ADVANCE(407);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(331);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(330);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(404);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(405);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(412);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(408);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(413);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(410);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(414);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(409);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(411);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(415);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(262);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'v') ADVANCE(127);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(227);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(147);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(148);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(305);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 'w') ADVANCE(253);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(188);
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(202);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'q') ADVANCE(217);
      if (lookahead == 'u') ADVANCE(153);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(335);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(416);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(222);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(301);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(381);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(180);
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
      if (lookahead == 'i') ADVANCE(195);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(385);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'q') ADVANCE(295);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(390);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(297);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(245);
      if (lookahead == 's') ADVANCE(357);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(200);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(359);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(361);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(353);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(423);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(160);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(333);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(189);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 203:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(226);
      END_STATE();
    case 208:
      if (lookahead == 'q') ADVANCE(259);
      END_STATE();
    case 209:
      if (lookahead == 'q') ADVANCE(260);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(237);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(341);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 230:
      if (lookahead == 's') ADVANCE(250);
      END_STATE();
    case 231:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 256:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 257:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 258:
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 259:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 260:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 261:
      if (lookahead == 'w') ADVANCE(367);
      END_STATE();
    case 262:
      if (lookahead == 'x') ADVANCE(371);
      END_STATE();
    case 263:
      if (lookahead == 'x') ADVANCE(379);
      END_STATE();
    case 264:
      if (lookahead == 'x') ADVANCE(100);
      END_STATE();
    case 265:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 268:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 269:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(606);
      if (lookahead == '\r') ADVANCE(607);
      END_STATE();
    case 270:
      if (eof) ADVANCE(271);
      if (lookahead == '.') ADVANCE(281);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(461);
      if (lookahead == 'f') ADVANCE(487);
      if (lookahead == 'i') ADVANCE(514);
      if (lookahead == 'q') ADVANCE(597);
      if (lookahead == 's') ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(270)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == '>') ADVANCE(292);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_par);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_letrec);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_letrec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_add);
      if (lookahead == '.') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_mult);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_div);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_mod);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_pow);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_lshift);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_rshift);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == ':') ADVANCE(291);
      if (lookahead == '<') ADVANCE(323);
      if (lookahead == '=') ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '<') ADVANCE(323);
      if (lookahead == '=') ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(329);
      if (lookahead == '>') ADVANCE(324);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_delay);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_exp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(14);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_log10);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_log10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_sqrt);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_sqrt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_abs);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_abs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_floor);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_floor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_ceil);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_ceil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_rint);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_rint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_round);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_round);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_acos);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_acos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_asin);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_asin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(377);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_cos);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_cos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_sin);
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_tan);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_tan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_pow_fun);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_pow_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_min);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_fmod);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_fmod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_remainder);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_remainder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_atan2);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_atan2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_prefix_prim);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_prefix_prim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_attach);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_attach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_enable);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_enable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(331);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(394);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(392);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == 'f') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_rdtable);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_rdtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_rwtable);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_rwtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_select2);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_select2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_select3);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_select3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_single_precision);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_single_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_double_precision);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_double_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_quad_precision);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_quad_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '0') ADVANCE(338);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '2') ADVANCE(401);
      if (lookahead == '3') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead == 'i') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(600);
      if (lookahead == 'r') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(587);
      if (lookahead == 'o') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(530);
      if (lookahead == 't') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == 'v') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(577);
      if (lookahead == 'c') ADVANCE(547);
      if (lookahead == 's') ADVANCE(497);
      if (lookahead == 't') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(592);
      if (lookahead == 'e') ADVANCE(517);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'o') ADVANCE(599);
      if (lookahead == 'w') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead == 'o') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead == 'i') ADVANCE(527);
      if (lookahead == 'q') ADVANCE(570);
      if (lookahead == 'u') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead == 'o') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == 'o') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead == 'q') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(541);
      if (lookahead == 'm') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(558);
      if (lookahead == 'n') ADVANCE(593);
      if (lookahead == 's') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(438);
      if (lookahead == 'x') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'w') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(606);
      if (lookahead == '\\') ADVANCE(269);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 270},
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
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
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
  [63] = {.lex_state = 6},
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
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 270},
  [88] = {.lex_state = 270},
  [89] = {.lex_state = 17},
  [90] = {.lex_state = 17},
  [91] = {.lex_state = 17},
  [92] = {.lex_state = 17},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 270},
  [102] = {.lex_state = 270},
  [103] = {.lex_state = 270},
  [104] = {.lex_state = 270},
  [105] = {.lex_state = 270},
  [106] = {.lex_state = 270},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 18},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 17},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 17},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 17},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 19},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 270},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 7},
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
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 7},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 7},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 7},
  [210] = {.lex_state = 0},
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
    [sym_select2] = ACTIONS(1),
    [sym_select3] = ACTIONS(1),
    [sym_single_precision] = ACTIONS(1),
    [sym_double_precision] = ACTIONS(1),
    [sym_quad_precision] = ACTIONS(1),
    [sym_fixed_point_precision] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(203),
    [sym__statement] = STATE(88),
    [sym__definition] = STATE(88),
    [sym_definition] = STATE(202),
    [sym_function_definition] = STATE(202),
    [sym__metadata_definition] = STATE(88),
    [sym_global_metadata] = STATE(201),
    [sym_function_metadata] = STATE(201),
    [sym_file_import] = STATE(88),
    [sym_documentation] = STATE(88),
    [sym_variants] = STATE(152),
    [sym__variant] = STATE(107),
    [sym_id] = STATE(168),
    [aux_sym_program_repeat1] = STATE(88),
    [aux_sym_variants_repeat1] = STATE(107),
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
    [sym__expression] = STATE(112),
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim4] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_with_environment] = STATE(112),
    [sym_letrec_environment] = STATE(112),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(42),
    [sym__binary_composition] = STATE(112),
    [sym_recursive] = STATE(112),
    [sym_sequential] = STATE(112),
    [sym_split] = STATE(112),
    [sym_merge] = STATE(112),
    [sym_parallel] = STATE(112),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [3] = {
    [sym__expression] = STATE(110),
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim4] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_with_environment] = STATE(110),
    [sym_letrec_environment] = STATE(110),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(42),
    [sym__binary_composition] = STATE(110),
    [sym_recursive] = STATE(110),
    [sym_sequential] = STATE(110),
    [sym_split] = STATE(110),
    [sym_merge] = STATE(110),
    [sym_parallel] = STATE(110),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [4] = {
    [sym__expression] = STATE(120),
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim4] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_with_environment] = STATE(120),
    [sym_letrec_environment] = STATE(120),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(42),
    [sym__binary_composition] = STATE(120),
    [sym_recursive] = STATE(120),
    [sym_sequential] = STATE(120),
    [sym_split] = STATE(120),
    [sym_merge] = STATE(120),
    [sym_parallel] = STATE(120),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [5] = {
    [sym__expression] = STATE(127),
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim4] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_with_environment] = STATE(127),
    [sym_letrec_environment] = STATE(127),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(42),
    [sym__binary_composition] = STATE(127),
    [sym_recursive] = STATE(127),
    [sym_sequential] = STATE(127),
    [sym_split] = STATE(127),
    [sym_merge] = STATE(127),
    [sym_parallel] = STATE(127),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [6] = {
    [sym__expression] = STATE(113),
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim4] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_with_environment] = STATE(113),
    [sym_letrec_environment] = STATE(113),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(42),
    [sym__binary_composition] = STATE(113),
    [sym_recursive] = STATE(113),
    [sym_sequential] = STATE(113),
    [sym_split] = STATE(113),
    [sym_merge] = STATE(113),
    [sym_parallel] = STATE(113),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [7] = {
    [sym__expression] = STATE(129),
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim4] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_with_environment] = STATE(129),
    [sym_letrec_environment] = STATE(129),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(42),
    [sym__binary_composition] = STATE(129),
    [sym_recursive] = STATE(129),
    [sym_sequential] = STATE(129),
    [sym_split] = STATE(129),
    [sym_merge] = STATE(129),
    [sym_parallel] = STATE(129),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [8] = {
    [sym__expression] = STATE(111),
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim4] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_with_environment] = STATE(111),
    [sym_letrec_environment] = STATE(111),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(42),
    [sym__binary_composition] = STATE(111),
    [sym_recursive] = STATE(111),
    [sym_sequential] = STATE(111),
    [sym_split] = STATE(111),
    [sym_merge] = STATE(111),
    [sym_parallel] = STATE(111),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [9] = {
    [sym__expression] = STATE(135),
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim4] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_with_environment] = STATE(135),
    [sym_letrec_environment] = STATE(135),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(42),
    [sym__binary_composition] = STATE(135),
    [sym_recursive] = STATE(135),
    [sym_sequential] = STATE(135),
    [sym_split] = STATE(135),
    [sym_merge] = STATE(135),
    [sym_parallel] = STATE(135),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [10] = {
    [sym__expression] = STATE(109),
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim4] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_with_environment] = STATE(109),
    [sym_letrec_environment] = STATE(109),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(42),
    [sym__binary_composition] = STATE(109),
    [sym_recursive] = STATE(109),
    [sym_sequential] = STATE(109),
    [sym_split] = STATE(109),
    [sym_merge] = STATE(109),
    [sym_parallel] = STATE(109),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [11] = {
    [sym__expression] = STATE(128),
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim4] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_with_environment] = STATE(128),
    [sym_letrec_environment] = STATE(128),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(42),
    [sym__binary_composition] = STATE(128),
    [sym_recursive] = STATE(128),
    [sym_sequential] = STATE(128),
    [sym_split] = STATE(128),
    [sym_merge] = STATE(128),
    [sym_parallel] = STATE(128),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [12] = {
    [sym__expression] = STATE(125),
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim4] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_with_environment] = STATE(125),
    [sym_letrec_environment] = STATE(125),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(42),
    [sym__binary_composition] = STATE(125),
    [sym_recursive] = STATE(125),
    [sym_sequential] = STATE(125),
    [sym_split] = STATE(125),
    [sym_merge] = STATE(125),
    [sym_parallel] = STATE(125),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [13] = {
    [sym__expression] = STATE(134),
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim4] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_with_environment] = STATE(134),
    [sym_letrec_environment] = STATE(134),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(42),
    [sym__binary_composition] = STATE(134),
    [sym_recursive] = STATE(134),
    [sym_sequential] = STATE(134),
    [sym_split] = STATE(134),
    [sym_merge] = STATE(134),
    [sym_parallel] = STATE(134),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [14] = {
    [sym__expression] = STATE(126),
    [sym__infix_expression] = STATE(42),
    [sym_infix] = STATE(42),
    [sym_partial] = STATE(42),
    [sym_prefix] = STATE(42),
    [sym_prim1] = STATE(42),
    [sym_prim2] = STATE(42),
    [sym_prim3] = STATE(42),
    [sym_prim4] = STATE(42),
    [sym_prim5] = STATE(42),
    [sym_function_call] = STATE(42),
    [sym_modifier] = STATE(42),
    [sym_access] = STATE(42),
    [sym__primitive] = STATE(42),
    [sym_iteration] = STATE(42),
    [sym_with_environment] = STATE(126),
    [sym_letrec_environment] = STATE(126),
    [sym_substitution] = STATE(42),
    [sym_component] = STATE(42),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(42),
    [sym__binary_composition] = STATE(126),
    [sym_recursive] = STATE(126),
    [sym_sequential] = STATE(126),
    [sym_split] = STATE(126),
    [sym_merge] = STATE(126),
    [sym_parallel] = STATE(126),
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
    [sym_wire] = ACTIONS(39),
    [sym_cut] = ACTIONS(39),
    [sym_mem] = ACTIONS(39),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(41),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [15] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym_arguments] = STATE(188),
    [sym__argument] = STATE(137),
    [sym_recursive_arg] = STATE(137),
    [sym_sequential_arg] = STATE(137),
    [sym_split_arg] = STATE(137),
    [sym_merge_arg] = STATE(137),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [16] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym_arguments] = STATE(186),
    [sym__argument] = STATE(137),
    [sym_recursive_arg] = STATE(137),
    [sym_sequential_arg] = STATE(137),
    [sym_split_arg] = STATE(137),
    [sym_merge_arg] = STATE(137),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [17] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym_arguments] = STATE(184),
    [sym__argument] = STATE(137),
    [sym_recursive_arg] = STATE(137),
    [sym_sequential_arg] = STATE(137),
    [sym_split_arg] = STATE(137),
    [sym_merge_arg] = STATE(137),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [18] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym_arguments] = STATE(183),
    [sym__argument] = STATE(137),
    [sym_recursive_arg] = STATE(137),
    [sym_sequential_arg] = STATE(137),
    [sym_split_arg] = STATE(137),
    [sym_merge_arg] = STATE(137),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [19] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym_arguments] = STATE(185),
    [sym__argument] = STATE(137),
    [sym_recursive_arg] = STATE(137),
    [sym_sequential_arg] = STATE(137),
    [sym_split_arg] = STATE(137),
    [sym_merge_arg] = STATE(137),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [20] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(143),
    [sym_recursive_arg] = STATE(143),
    [sym_sequential_arg] = STATE(143),
    [sym_split_arg] = STATE(143),
    [sym_merge_arg] = STATE(143),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [21] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(149),
    [sym_recursive_arg] = STATE(149),
    [sym_sequential_arg] = STATE(149),
    [sym_split_arg] = STATE(149),
    [sym_merge_arg] = STATE(149),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [22] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(148),
    [sym_recursive_arg] = STATE(148),
    [sym_sequential_arg] = STATE(148),
    [sym_split_arg] = STATE(148),
    [sym_merge_arg] = STATE(148),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [23] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(147),
    [sym_recursive_arg] = STATE(147),
    [sym_sequential_arg] = STATE(147),
    [sym_split_arg] = STATE(147),
    [sym_merge_arg] = STATE(147),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [24] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
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
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [25] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
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
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [26] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
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
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [27] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
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
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [28] = {
    [sym__infix_expression] = STATE(53),
    [sym_infix] = STATE(53),
    [sym_partial] = STATE(53),
    [sym_prefix] = STATE(53),
    [sym_prim1] = STATE(53),
    [sym_prim2] = STATE(53),
    [sym_prim3] = STATE(53),
    [sym_prim4] = STATE(53),
    [sym_prim5] = STATE(53),
    [sym_function_call] = STATE(53),
    [sym_modifier] = STATE(53),
    [sym_access] = STATE(53),
    [sym__primitive] = STATE(53),
    [sym__argument] = STATE(142),
    [sym_recursive_arg] = STATE(142),
    [sym_sequential_arg] = STATE(142),
    [sym_split_arg] = STATE(142),
    [sym_merge_arg] = STATE(142),
    [sym_iteration] = STATE(53),
    [sym_substitution] = STATE(53),
    [sym_component] = STATE(53),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(53),
    [sym_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(55),
    [sym_cut] = ACTIONS(55),
    [sym_mem] = ACTIONS(55),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [29] = {
    [sym__infix_expression] = STATE(41),
    [sym_infix] = STATE(41),
    [sym_partial] = STATE(41),
    [sym_prefix] = STATE(41),
    [sym_prim1] = STATE(41),
    [sym_prim2] = STATE(41),
    [sym_prim3] = STATE(41),
    [sym_prim4] = STATE(41),
    [sym_prim5] = STATE(41),
    [sym_function_call] = STATE(41),
    [sym_modifier] = STATE(41),
    [sym_access] = STATE(41),
    [sym__primitive] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_substitution] = STATE(41),
    [sym_component] = STATE(41),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
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
    [sym_wire] = ACTIONS(59),
    [sym_cut] = ACTIONS(59),
    [sym_mem] = ACTIONS(59),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [30] = {
    [sym__infix_expression] = STATE(57),
    [sym_infix] = STATE(57),
    [sym_partial] = STATE(57),
    [sym_prefix] = STATE(57),
    [sym_prim1] = STATE(57),
    [sym_prim2] = STATE(57),
    [sym_prim3] = STATE(57),
    [sym_prim4] = STATE(57),
    [sym_prim5] = STATE(57),
    [sym_function_call] = STATE(57),
    [sym_modifier] = STATE(57),
    [sym_access] = STATE(57),
    [sym__primitive] = STATE(57),
    [sym_iteration] = STATE(57),
    [sym_substitution] = STATE(57),
    [sym_component] = STATE(57),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(57),
    [sym_id] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(63),
    [sym_cut] = ACTIONS(63),
    [sym_mem] = ACTIONS(63),
    [sym_int] = ACTIONS(63),
    [sym_real] = ACTIONS(65),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [31] = {
    [sym__infix_expression] = STATE(54),
    [sym_infix] = STATE(54),
    [sym_partial] = STATE(54),
    [sym_prefix] = STATE(54),
    [sym_prim1] = STATE(54),
    [sym_prim2] = STATE(54),
    [sym_prim3] = STATE(54),
    [sym_prim4] = STATE(54),
    [sym_prim5] = STATE(54),
    [sym_function_call] = STATE(54),
    [sym_modifier] = STATE(54),
    [sym_access] = STATE(54),
    [sym__primitive] = STATE(54),
    [sym_iteration] = STATE(54),
    [sym_substitution] = STATE(54),
    [sym_component] = STATE(54),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(54),
    [sym_id] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [32] = {
    [sym__infix_expression] = STATE(58),
    [sym_infix] = STATE(58),
    [sym_partial] = STATE(58),
    [sym_prefix] = STATE(58),
    [sym_prim1] = STATE(58),
    [sym_prim2] = STATE(58),
    [sym_prim3] = STATE(58),
    [sym_prim4] = STATE(58),
    [sym_prim5] = STATE(58),
    [sym_function_call] = STATE(58),
    [sym_modifier] = STATE(58),
    [sym_access] = STATE(58),
    [sym__primitive] = STATE(58),
    [sym_iteration] = STATE(58),
    [sym_substitution] = STATE(58),
    [sym_component] = STATE(58),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(58),
    [sym_id] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(71),
    [sym_cut] = ACTIONS(71),
    [sym_mem] = ACTIONS(71),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [33] = {
    [sym__infix_expression] = STATE(56),
    [sym_infix] = STATE(56),
    [sym_partial] = STATE(56),
    [sym_prefix] = STATE(56),
    [sym_prim1] = STATE(56),
    [sym_prim2] = STATE(56),
    [sym_prim3] = STATE(56),
    [sym_prim4] = STATE(56),
    [sym_prim5] = STATE(56),
    [sym_function_call] = STATE(56),
    [sym_modifier] = STATE(56),
    [sym_access] = STATE(56),
    [sym__primitive] = STATE(56),
    [sym_iteration] = STATE(56),
    [sym_substitution] = STATE(56),
    [sym_component] = STATE(56),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(56),
    [sym_id] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(75),
    [sym_cut] = ACTIONS(75),
    [sym_mem] = ACTIONS(75),
    [sym_int] = ACTIONS(75),
    [sym_real] = ACTIONS(77),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [34] = {
    [sym__infix_expression] = STATE(55),
    [sym_infix] = STATE(55),
    [sym_partial] = STATE(55),
    [sym_prefix] = STATE(55),
    [sym_prim1] = STATE(55),
    [sym_prim2] = STATE(55),
    [sym_prim3] = STATE(55),
    [sym_prim4] = STATE(55),
    [sym_prim5] = STATE(55),
    [sym_function_call] = STATE(55),
    [sym_modifier] = STATE(55),
    [sym_access] = STATE(55),
    [sym__primitive] = STATE(55),
    [sym_iteration] = STATE(55),
    [sym_substitution] = STATE(55),
    [sym_component] = STATE(55),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(55),
    [sym_id] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(53),
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
    [sym_wire] = ACTIONS(79),
    [sym_cut] = ACTIONS(79),
    [sym_mem] = ACTIONS(79),
    [sym_int] = ACTIONS(79),
    [sym_real] = ACTIONS(81),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [35] = {
    [sym__infix_expression] = STATE(45),
    [sym_infix] = STATE(45),
    [sym_partial] = STATE(45),
    [sym_prefix] = STATE(45),
    [sym_prim1] = STATE(45),
    [sym_prim2] = STATE(45),
    [sym_prim3] = STATE(45),
    [sym_prim4] = STATE(45),
    [sym_prim5] = STATE(45),
    [sym_function_call] = STATE(45),
    [sym_modifier] = STATE(45),
    [sym_access] = STATE(45),
    [sym__primitive] = STATE(45),
    [sym_iteration] = STATE(45),
    [sym_substitution] = STATE(45),
    [sym_component] = STATE(45),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
    [sym__number] = STATE(45),
    [sym_id] = STATE(45),
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
    [sym_wire] = ACTIONS(83),
    [sym_cut] = ACTIONS(83),
    [sym_mem] = ACTIONS(83),
    [sym_int] = ACTIONS(83),
    [sym_real] = ACTIONS(85),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [36] = {
    [sym__infix_expression] = STATE(44),
    [sym_infix] = STATE(44),
    [sym_partial] = STATE(44),
    [sym_prefix] = STATE(44),
    [sym_prim1] = STATE(44),
    [sym_prim2] = STATE(44),
    [sym_prim3] = STATE(44),
    [sym_prim4] = STATE(44),
    [sym_prim5] = STATE(44),
    [sym_function_call] = STATE(44),
    [sym_modifier] = STATE(44),
    [sym_access] = STATE(44),
    [sym__primitive] = STATE(44),
    [sym_iteration] = STATE(44),
    [sym_substitution] = STATE(44),
    [sym_component] = STATE(44),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
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
    [sym_wire] = ACTIONS(87),
    [sym_cut] = ACTIONS(87),
    [sym_mem] = ACTIONS(87),
    [sym_int] = ACTIONS(87),
    [sym_real] = ACTIONS(89),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [37] = {
    [sym__infix_expression] = STATE(43),
    [sym_infix] = STATE(43),
    [sym_partial] = STATE(43),
    [sym_prefix] = STATE(43),
    [sym_prim1] = STATE(43),
    [sym_prim2] = STATE(43),
    [sym_prim3] = STATE(43),
    [sym_prim4] = STATE(43),
    [sym_prim5] = STATE(43),
    [sym_function_call] = STATE(43),
    [sym_modifier] = STATE(43),
    [sym_access] = STATE(43),
    [sym__primitive] = STATE(43),
    [sym_iteration] = STATE(43),
    [sym_substitution] = STATE(43),
    [sym_component] = STATE(43),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
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
    [sym_wire] = ACTIONS(91),
    [sym_cut] = ACTIONS(91),
    [sym_mem] = ACTIONS(91),
    [sym_int] = ACTIONS(91),
    [sym_real] = ACTIONS(93),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [38] = {
    [sym__infix_expression] = STATE(40),
    [sym_infix] = STATE(40),
    [sym_partial] = STATE(40),
    [sym_prefix] = STATE(40),
    [sym_prim1] = STATE(40),
    [sym_prim2] = STATE(40),
    [sym_prim3] = STATE(40),
    [sym_prim4] = STATE(40),
    [sym_prim5] = STATE(40),
    [sym_function_call] = STATE(40),
    [sym_modifier] = STATE(40),
    [sym_access] = STATE(40),
    [sym__primitive] = STATE(40),
    [sym_iteration] = STATE(40),
    [sym_substitution] = STATE(40),
    [sym_component] = STATE(40),
    [sym__infix] = STATE(66),
    [sym__prim1] = STATE(67),
    [sym__prim2] = STATE(68),
    [sym__prim3] = STATE(69),
    [sym__prim4] = STATE(70),
    [sym__prim5] = STATE(71),
    [sym_sub] = STATE(66),
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
    [sym_wire] = ACTIONS(95),
    [sym_cut] = ACTIONS(95),
    [sym_mem] = ACTIONS(95),
    [sym_int] = ACTIONS(95),
    [sym_real] = ACTIONS(97),
    [sym_rdtable] = ACTIONS(43),
    [sym_rwtable] = ACTIONS(45),
    [sym_select2] = ACTIONS(43),
    [sym_select3] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(99), 17,
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
    ACTIONS(101), 47,
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
      sym_select2,
      sym_select3,
      sym__id,
  [69] = 11,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      sym_pow,
    ACTIONS(117), 1,
      sym_delay,
    STATE(38), 1,
      sym_sub,
    STATE(81), 1,
      sym_substitutions,
    STATE(85), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(109), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(113), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(103), 16,
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
  [127] = 10,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      sym_pow,
    ACTIONS(117), 1,
      sym_delay,
    STATE(38), 1,
      sym_sub,
    STATE(81), 1,
      sym_substitutions,
    STATE(85), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(109), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(103), 23,
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
  [183] = 16,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      sym_pow,
    ACTIONS(117), 1,
      sym_delay,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(123), 1,
      anon_sym_COLON,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_sub,
    STATE(81), 1,
      sym_substitutions,
    ACTIONS(127), 2,
      sym_add,
      sym_or,
    ACTIONS(129), 2,
      sym_lt,
      sym_gt,
    STATE(85), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(131), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(113), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(119), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [251] = 9,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      sym_delay,
    STATE(38), 1,
      sym_sub,
    STATE(81), 1,
      sym_substitutions,
    STATE(85), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(109), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(103), 24,
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
  [305] = 13,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(115), 1,
      sym_pow,
    ACTIONS(117), 1,
      sym_delay,
    ACTIONS(121), 1,
      anon_sym_DASH,
    STATE(38), 1,
      sym_sub,
    STATE(81), 1,
      sym_substitutions,
    ACTIONS(127), 2,
      sym_add,
      sym_or,
    STATE(85), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(109), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(113), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(103), 13,
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
  [367] = 8,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    STATE(38), 1,
      sym_sub,
    STATE(81), 1,
      sym_substitutions,
    STATE(85), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(109), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(103), 25,
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
  [419] = 5,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 1,
      sym__id,
    STATE(80), 1,
      sym_id,
    ACTIONS(101), 6,
      anon_sym_COLON,
      anon_sym_with,
      anon_sym_letrec,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(99), 25,
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
  [464] = 4,
    ACTIONS(137), 1,
      anon_sym_COLON_COLON,
    STATE(50), 1,
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
  [506] = 4,
    ACTIONS(137), 1,
      anon_sym_COLON_COLON,
    STATE(50), 1,
      aux_sym_id_repeat1,
    ACTIONS(141), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(139), 28,
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
  [548] = 4,
    ACTIONS(137), 1,
      anon_sym_COLON_COLON,
    STATE(48), 1,
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
  [590] = 4,
    ACTIONS(147), 1,
      anon_sym_COLON_COLON,
    STATE(50), 1,
      aux_sym_id_repeat1,
    ACTIONS(145), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(143), 28,
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
  [632] = 4,
    ACTIONS(137), 1,
      anon_sym_COLON_COLON,
    STATE(47), 1,
      aux_sym_id_repeat1,
    ACTIONS(152), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(150), 28,
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
  [674] = 2,
    ACTIONS(145), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(143), 29,
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
  [711] = 16,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(156), 1,
      anon_sym_COLON,
    ACTIONS(162), 1,
      sym_pow,
    ACTIONS(168), 1,
      sym_delay,
    STATE(34), 1,
      sym_sub,
    STATE(81), 1,
      sym_substitutions,
    ACTIONS(158), 2,
      sym_add,
      sym_or,
    ACTIONS(164), 2,
      sym_lt,
      sym_gt,
    STATE(85), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(166), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(154), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(160), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [776] = 8,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym_sub,
    STATE(81), 1,
      sym_substitutions,
    STATE(85), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(109), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(103), 22,
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
  [825] = 11,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 1,
      sym_pow,
    ACTIONS(168), 1,
      sym_delay,
    STATE(34), 1,
      sym_sub,
    STATE(81), 1,
      sym_substitutions,
    STATE(85), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(109), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(160), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(103), 13,
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
  [880] = 10,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(162), 1,
      sym_pow,
    ACTIONS(168), 1,
      sym_delay,
    STATE(34), 1,
      sym_sub,
    STATE(81), 1,
      sym_substitutions,
    STATE(85), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(109), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(103), 20,
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
  [933] = 9,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(168), 1,
      sym_delay,
    STATE(34), 1,
      sym_sub,
    STATE(81), 1,
      sym_substitutions,
    STATE(85), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(109), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(103), 21,
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
  [984] = 13,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      sym_pow,
    ACTIONS(168), 1,
      sym_delay,
    STATE(34), 1,
      sym_sub,
    STATE(81), 1,
      sym_substitutions,
    ACTIONS(158), 2,
      sym_add,
      sym_or,
    STATE(85), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(109), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(160), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(103), 10,
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
  [1043] = 2,
    ACTIONS(172), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(170), 28,
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
  [1079] = 2,
    ACTIONS(176), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(174), 28,
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
  [1115] = 2,
    ACTIONS(180), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(178), 28,
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
  [1151] = 2,
    ACTIONS(184), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(182), 28,
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
  [1187] = 2,
    ACTIONS(188), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(186), 28,
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
  [1223] = 2,
    ACTIONS(192), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(190), 28,
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
  [1259] = 2,
    ACTIONS(196), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(194), 28,
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
  [1295] = 3,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(198), 27,
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
  [1333] = 3,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(198), 27,
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
  [1371] = 3,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(198), 27,
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
  [1409] = 3,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(198), 27,
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
  [1447] = 3,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(198), 27,
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
  [1485] = 3,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(198), 27,
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
  [1523] = 2,
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
  [1559] = 2,
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
  [1595] = 2,
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
  [1631] = 5,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 1,
      sym__id,
    STATE(80), 1,
      sym_id,
    ACTIONS(101), 4,
      anon_sym_COLON,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(99), 24,
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
  [1673] = 2,
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
  [1709] = 2,
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
  [1745] = 2,
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
  [1781] = 2,
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
  [1817] = 2,
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
  [1853] = 2,
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
  [1889] = 2,
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
  [1925] = 2,
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
  [1961] = 2,
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
  [1997] = 2,
    ACTIONS(264), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(262), 28,
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
  [2033] = 2,
    ACTIONS(268), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(266), 28,
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
  [2069] = 14,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 1,
      anon_sym_declare,
    ACTIONS(275), 1,
      anon_sym_import,
    ACTIONS(278), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(284), 1,
      anon_sym_COLON_COLON,
    ACTIONS(287), 1,
      sym__id,
    ACTIONS(290), 1,
      sym_comment,
    STATE(152), 1,
      sym_variants,
    STATE(168), 1,
      sym_id,
    STATE(107), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(201), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(202), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(281), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(87), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [2123] = 14,
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
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(295), 1,
      sym_comment,
    STATE(152), 1,
      sym_variants,
    STATE(168), 1,
      sym_id,
    STATE(107), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(201), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(202), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(11), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(87), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [2177] = 9,
    ACTIONS(302), 1,
      anon_sym_COLON_COLON,
    ACTIONS(305), 1,
      sym__id,
    STATE(156), 1,
      sym_variants,
    STATE(168), 1,
      sym_id,
    ACTIONS(297), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(89), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(133), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(208), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(299), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2212] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym_variants,
    STATE(168), 1,
      sym_id,
    STATE(92), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(133), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(208), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(310), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2246] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_variants,
    STATE(168), 1,
      sym_id,
    STATE(89), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(133), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(208), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(310), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2280] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym_variants,
    STATE(168), 1,
      sym_id,
    STATE(89), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(133), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(208), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(310), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2314] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_variants,
    STATE(168), 1,
      sym_id,
    STATE(91), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(133), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(208), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(310), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2348] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_variants,
    STATE(168), 1,
      sym_id,
    STATE(89), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(133), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(208), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(310), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2382] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_variants,
    STATE(168), 1,
      sym_id,
    STATE(97), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(133), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(208), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(310), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2416] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_variants,
    STATE(168), 1,
      sym_id,
    STATE(94), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(133), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(208), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(310), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2450] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(156), 1,
      sym_variants,
    STATE(168), 1,
      sym_id,
    STATE(89), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(133), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(208), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(310), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2484] = 4,
    ACTIONS(324), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(326), 1,
      sym__doc_char,
    STATE(100), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(328), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2507] = 4,
    ACTIONS(330), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(332), 1,
      sym__doc_char,
    STATE(98), 3,
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
  [2530] = 4,
    ACTIONS(336), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(338), 1,
      sym__doc_char,
    STATE(100), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(341), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2553] = 2,
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
  [2569] = 2,
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
  [2585] = 2,
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
  [2601] = 2,
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
  [2617] = 2,
    ACTIONS(360), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(362), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2633] = 2,
    ACTIONS(364), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(366), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2649] = 4,
    ACTIONS(372), 1,
      anon_sym_COLON_COLON,
    ACTIONS(368), 2,
      anon_sym_import,
      sym__id,
    STATE(108), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(370), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2667] = 4,
    ACTIONS(379), 1,
      anon_sym_COLON_COLON,
    ACTIONS(374), 2,
      anon_sym_import,
      sym__id,
    STATE(108), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(376), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2685] = 4,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(381), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2703] = 2,
    ACTIONS(391), 1,
      anon_sym_COLON,
    ACTIONS(389), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2717] = 4,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(393), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2735] = 6,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_LT_COLON,
    ACTIONS(401), 1,
      anon_sym_COLON_GT,
    ACTIONS(397), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [2757] = 6,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_LT_COLON,
    ACTIONS(401), 1,
      anon_sym_COLON_GT,
    ACTIONS(403), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [2779] = 2,
    ACTIONS(407), 1,
      anon_sym_COLON,
    ACTIONS(405), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2793] = 2,
    ACTIONS(411), 1,
      anon_sym_COLON,
    ACTIONS(409), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2807] = 2,
    ACTIONS(415), 1,
      anon_sym_COLON,
    ACTIONS(413), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2821] = 2,
    ACTIONS(419), 1,
      anon_sym_COLON,
    ACTIONS(417), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2835] = 2,
    ACTIONS(423), 1,
      anon_sym_COLON,
    ACTIONS(421), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2849] = 2,
    ACTIONS(427), 1,
      anon_sym_COLON,
    ACTIONS(425), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2863] = 8,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_LT_COLON,
    ACTIONS(401), 1,
      anon_sym_COLON_GT,
    ACTIONS(429), 1,
      anon_sym_SEMI,
    ACTIONS(431), 1,
      anon_sym_with,
    ACTIONS(433), 1,
      anon_sym_letrec,
  [2888] = 3,
    ACTIONS(435), 1,
      anon_sym_COLON_COLON,
    STATE(124), 1,
      aux_sym_id_repeat1,
    ACTIONS(133), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2903] = 4,
    ACTIONS(374), 1,
      sym__id,
    ACTIONS(379), 1,
      anon_sym_COLON_COLON,
    STATE(122), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(437), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2920] = 3,
    ACTIONS(440), 1,
      anon_sym_COLON_COLON,
    STATE(123), 1,
      aux_sym_id_repeat1,
    ACTIONS(143), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2935] = 3,
    ACTIONS(435), 1,
      anon_sym_COLON_COLON,
    STATE(123), 1,
      aux_sym_id_repeat1,
    ACTIONS(139), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2950] = 8,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_LT_COLON,
    ACTIONS(401), 1,
      anon_sym_COLON_GT,
    ACTIONS(431), 1,
      anon_sym_with,
    ACTIONS(433), 1,
      anon_sym_letrec,
    ACTIONS(443), 1,
      anon_sym_SEMI,
  [2975] = 8,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_LT_COLON,
    ACTIONS(401), 1,
      anon_sym_COLON_GT,
    ACTIONS(431), 1,
      anon_sym_with,
    ACTIONS(433), 1,
      anon_sym_letrec,
    ACTIONS(445), 1,
      anon_sym_SEMI,
  [3000] = 8,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_LT_COLON,
    ACTIONS(401), 1,
      anon_sym_COLON_GT,
    ACTIONS(431), 1,
      anon_sym_with,
    ACTIONS(433), 1,
      anon_sym_letrec,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
  [3025] = 8,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_LT_COLON,
    ACTIONS(401), 1,
      anon_sym_COLON_GT,
    ACTIONS(431), 1,
      anon_sym_with,
    ACTIONS(433), 1,
      anon_sym_letrec,
    ACTIONS(449), 1,
      anon_sym_SEMI,
  [3050] = 8,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_LT_COLON,
    ACTIONS(401), 1,
      anon_sym_COLON_GT,
    ACTIONS(431), 1,
      anon_sym_with,
    ACTIONS(433), 1,
      anon_sym_letrec,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
  [3075] = 3,
    ACTIONS(435), 1,
      anon_sym_COLON_COLON,
    STATE(123), 1,
      aux_sym_id_repeat1,
    ACTIONS(133), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3090] = 2,
    ACTIONS(364), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
    ACTIONS(366), 5,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [3103] = 3,
    ACTIONS(435), 1,
      anon_sym_COLON_COLON,
    STATE(130), 1,
      aux_sym_id_repeat1,
    ACTIONS(150), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3118] = 4,
    ACTIONS(368), 1,
      sym__id,
    ACTIONS(372), 1,
      anon_sym_COLON_COLON,
    STATE(122), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(453), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [3135] = 8,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_LT_COLON,
    ACTIONS(401), 1,
      anon_sym_COLON_GT,
    ACTIONS(431), 1,
      anon_sym_with,
    ACTIONS(433), 1,
      anon_sym_letrec,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [3160] = 8,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_TILDE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(399), 1,
      anon_sym_LT_COLON,
    ACTIONS(401), 1,
      anon_sym_COLON_GT,
    ACTIONS(431), 1,
      anon_sym_with,
    ACTIONS(433), 1,
      anon_sym_letrec,
    ACTIONS(457), 1,
      anon_sym_SEMI,
  [3185] = 1,
    ACTIONS(143), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [3195] = 7,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      anon_sym_TILDE,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(467), 1,
      anon_sym_LT_COLON,
    ACTIONS(469), 1,
      anon_sym_COLON_GT,
    STATE(161), 1,
      aux_sym_arguments_repeat1,
  [3217] = 5,
    ACTIONS(463), 1,
      anon_sym_TILDE,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(467), 1,
      anon_sym_LT_COLON,
    ACTIONS(469), 1,
      anon_sym_COLON_GT,
    ACTIONS(471), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3234] = 5,
    ACTIONS(463), 1,
      anon_sym_TILDE,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(467), 1,
      anon_sym_LT_COLON,
    ACTIONS(469), 1,
      anon_sym_COLON_GT,
    ACTIONS(473), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3251] = 6,
    ACTIONS(463), 1,
      anon_sym_TILDE,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(467), 1,
      anon_sym_LT_COLON,
    ACTIONS(469), 1,
      anon_sym_COLON_GT,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    ACTIONS(477), 1,
      anon_sym_COMMA,
  [3270] = 3,
    ACTIONS(463), 1,
      anon_sym_TILDE,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(479), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3283] = 2,
    ACTIONS(483), 1,
      anon_sym_COLON,
    ACTIONS(481), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3294] = 5,
    ACTIONS(463), 1,
      anon_sym_TILDE,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(467), 1,
      anon_sym_LT_COLON,
    ACTIONS(469), 1,
      anon_sym_COLON_GT,
    ACTIONS(485), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3311] = 4,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    ACTIONS(487), 1,
      anon_sym_where,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    STATE(146), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3325] = 4,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    ACTIONS(493), 1,
      anon_sym_where,
    STATE(144), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3339] = 3,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(146), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3351] = 5,
    ACTIONS(463), 1,
      anon_sym_TILDE,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(467), 1,
      anon_sym_LT_COLON,
    ACTIONS(469), 1,
      anon_sym_COLON_GT,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
  [3367] = 5,
    ACTIONS(463), 1,
      anon_sym_TILDE,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(467), 1,
      anon_sym_LT_COLON,
    ACTIONS(469), 1,
      anon_sym_COLON_GT,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
  [3383] = 5,
    ACTIONS(463), 1,
      anon_sym_TILDE,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(467), 1,
      anon_sym_LT_COLON,
    ACTIONS(469), 1,
      anon_sym_COLON_GT,
    ACTIONS(504), 1,
      anon_sym_COMMA,
  [3399] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(506), 1,
      sym_string,
    ACTIONS(508), 1,
      sym__id,
    STATE(177), 1,
      sym_id,
  [3412] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(508), 1,
      sym__id,
    STATE(160), 1,
      sym_id,
    STATE(200), 1,
      sym_parameters,
  [3425] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(510), 1,
      anon_sym_import,
    STATE(169), 1,
      sym_id,
  [3438] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(508), 1,
      sym__id,
    STATE(160), 1,
      sym_id,
    STATE(191), 1,
      sym_parameters,
  [3451] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(508), 1,
      sym__id,
    STATE(160), 1,
      sym_id,
    STATE(196), 1,
      sym_parameters,
  [3464] = 1,
    ACTIONS(512), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [3470] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(508), 1,
      sym__id,
    STATE(169), 1,
      sym_id,
  [3480] = 3,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_parameters_repeat1,
  [3490] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(508), 1,
      sym__id,
    STATE(171), 1,
      sym_id,
  [3500] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(508), 1,
      sym__id,
    STATE(190), 1,
      sym_id,
  [3510] = 3,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_parameters_repeat1,
  [3520] = 3,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    STATE(163), 1,
      aux_sym_arguments_repeat1,
  [3530] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(508), 1,
      sym__id,
    STATE(180), 1,
      sym_id,
  [3540] = 3,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_arguments_repeat1,
  [3550] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(508), 1,
      sym__id,
    STATE(150), 1,
      sym_id,
  [3560] = 3,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_parameters_repeat1,
  [3570] = 3,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(530), 1,
      sym__id,
    STATE(79), 1,
      sym_id,
  [3580] = 2,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_environment,
  [3587] = 2,
    ACTIONS(534), 1,
      anon_sym_EQ,
    ACTIONS(536), 1,
      anon_sym_LPAREN,
  [3594] = 2,
    ACTIONS(538), 1,
      anon_sym_EQ,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
  [3601] = 2,
    ACTIONS(542), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_rec_environment,
  [3608] = 1,
    ACTIONS(544), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3613] = 2,
    ACTIONS(532), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_environment,
  [3620] = 1,
    ACTIONS(546), 1,
      anon_sym_SEMI,
  [3624] = 1,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
  [3628] = 1,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
  [3632] = 1,
    ACTIONS(552), 1,
      anon_sym_DOT,
  [3636] = 1,
    ACTIONS(554), 1,
      sym_string,
  [3640] = 1,
    ACTIONS(556), 1,
      sym__id,
  [3644] = 1,
    ACTIONS(558), 1,
      anon_sym_LPAREN,
  [3648] = 1,
    ACTIONS(560), 1,
      anon_sym_EQ,
  [3652] = 1,
    ACTIONS(562), 1,
      anon_sym_SEMI,
  [3656] = 1,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
  [3660] = 1,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
  [3664] = 1,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
  [3668] = 1,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
  [3672] = 1,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [3676] = 1,
    ACTIONS(574), 1,
      sym_string,
  [3680] = 1,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [3684] = 1,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
  [3688] = 1,
    ACTIONS(580), 1,
      anon_sym_COMMA,
  [3692] = 1,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
  [3696] = 1,
    ACTIONS(584), 1,
      anon_sym_EQ,
  [3700] = 1,
    ACTIONS(586), 1,
      anon_sym_EQ,
  [3704] = 1,
    ACTIONS(588), 1,
      sym_string,
  [3708] = 1,
    ACTIONS(590), 1,
      sym_string,
  [3712] = 1,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [3716] = 1,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
  [3720] = 1,
    ACTIONS(596), 1,
      anon_sym_SEMI,
  [3724] = 1,
    ACTIONS(598), 1,
      anon_sym_SEMI,
  [3728] = 1,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
  [3732] = 1,
    ACTIONS(602), 1,
      anon_sym_SEMI,
  [3736] = 1,
    ACTIONS(604), 1,
      anon_sym_SEMI,
  [3740] = 1,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
  [3744] = 1,
    ACTIONS(608), 1,
      anon_sym_LPAREN,
  [3748] = 1,
    ACTIONS(610), 1,
      sym__id,
  [3752] = 1,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
  [3756] = 1,
    ACTIONS(614), 1,
      sym__id,
  [3760] = 1,
    ACTIONS(616), 1,
      anon_sym_SEMI,
  [3764] = 1,
    ACTIONS(618), 1,
      sym__id,
  [3768] = 1,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(39)] = 0,
  [SMALL_STATE(40)] = 69,
  [SMALL_STATE(41)] = 127,
  [SMALL_STATE(42)] = 183,
  [SMALL_STATE(43)] = 251,
  [SMALL_STATE(44)] = 305,
  [SMALL_STATE(45)] = 367,
  [SMALL_STATE(46)] = 419,
  [SMALL_STATE(47)] = 464,
  [SMALL_STATE(48)] = 506,
  [SMALL_STATE(49)] = 548,
  [SMALL_STATE(50)] = 590,
  [SMALL_STATE(51)] = 632,
  [SMALL_STATE(52)] = 674,
  [SMALL_STATE(53)] = 711,
  [SMALL_STATE(54)] = 776,
  [SMALL_STATE(55)] = 825,
  [SMALL_STATE(56)] = 880,
  [SMALL_STATE(57)] = 933,
  [SMALL_STATE(58)] = 984,
  [SMALL_STATE(59)] = 1043,
  [SMALL_STATE(60)] = 1079,
  [SMALL_STATE(61)] = 1115,
  [SMALL_STATE(62)] = 1151,
  [SMALL_STATE(63)] = 1187,
  [SMALL_STATE(64)] = 1223,
  [SMALL_STATE(65)] = 1259,
  [SMALL_STATE(66)] = 1295,
  [SMALL_STATE(67)] = 1333,
  [SMALL_STATE(68)] = 1371,
  [SMALL_STATE(69)] = 1409,
  [SMALL_STATE(70)] = 1447,
  [SMALL_STATE(71)] = 1485,
  [SMALL_STATE(72)] = 1523,
  [SMALL_STATE(73)] = 1559,
  [SMALL_STATE(74)] = 1595,
  [SMALL_STATE(75)] = 1631,
  [SMALL_STATE(76)] = 1673,
  [SMALL_STATE(77)] = 1709,
  [SMALL_STATE(78)] = 1745,
  [SMALL_STATE(79)] = 1781,
  [SMALL_STATE(80)] = 1817,
  [SMALL_STATE(81)] = 1853,
  [SMALL_STATE(82)] = 1889,
  [SMALL_STATE(83)] = 1925,
  [SMALL_STATE(84)] = 1961,
  [SMALL_STATE(85)] = 1997,
  [SMALL_STATE(86)] = 2033,
  [SMALL_STATE(87)] = 2069,
  [SMALL_STATE(88)] = 2123,
  [SMALL_STATE(89)] = 2177,
  [SMALL_STATE(90)] = 2212,
  [SMALL_STATE(91)] = 2246,
  [SMALL_STATE(92)] = 2280,
  [SMALL_STATE(93)] = 2314,
  [SMALL_STATE(94)] = 2348,
  [SMALL_STATE(95)] = 2382,
  [SMALL_STATE(96)] = 2416,
  [SMALL_STATE(97)] = 2450,
  [SMALL_STATE(98)] = 2484,
  [SMALL_STATE(99)] = 2507,
  [SMALL_STATE(100)] = 2530,
  [SMALL_STATE(101)] = 2553,
  [SMALL_STATE(102)] = 2569,
  [SMALL_STATE(103)] = 2585,
  [SMALL_STATE(104)] = 2601,
  [SMALL_STATE(105)] = 2617,
  [SMALL_STATE(106)] = 2633,
  [SMALL_STATE(107)] = 2649,
  [SMALL_STATE(108)] = 2667,
  [SMALL_STATE(109)] = 2685,
  [SMALL_STATE(110)] = 2703,
  [SMALL_STATE(111)] = 2717,
  [SMALL_STATE(112)] = 2735,
  [SMALL_STATE(113)] = 2757,
  [SMALL_STATE(114)] = 2779,
  [SMALL_STATE(115)] = 2793,
  [SMALL_STATE(116)] = 2807,
  [SMALL_STATE(117)] = 2821,
  [SMALL_STATE(118)] = 2835,
  [SMALL_STATE(119)] = 2849,
  [SMALL_STATE(120)] = 2863,
  [SMALL_STATE(121)] = 2888,
  [SMALL_STATE(122)] = 2903,
  [SMALL_STATE(123)] = 2920,
  [SMALL_STATE(124)] = 2935,
  [SMALL_STATE(125)] = 2950,
  [SMALL_STATE(126)] = 2975,
  [SMALL_STATE(127)] = 3000,
  [SMALL_STATE(128)] = 3025,
  [SMALL_STATE(129)] = 3050,
  [SMALL_STATE(130)] = 3075,
  [SMALL_STATE(131)] = 3090,
  [SMALL_STATE(132)] = 3103,
  [SMALL_STATE(133)] = 3118,
  [SMALL_STATE(134)] = 3135,
  [SMALL_STATE(135)] = 3160,
  [SMALL_STATE(136)] = 3185,
  [SMALL_STATE(137)] = 3195,
  [SMALL_STATE(138)] = 3217,
  [SMALL_STATE(139)] = 3234,
  [SMALL_STATE(140)] = 3251,
  [SMALL_STATE(141)] = 3270,
  [SMALL_STATE(142)] = 3283,
  [SMALL_STATE(143)] = 3294,
  [SMALL_STATE(144)] = 3311,
  [SMALL_STATE(145)] = 3325,
  [SMALL_STATE(146)] = 3339,
  [SMALL_STATE(147)] = 3351,
  [SMALL_STATE(148)] = 3367,
  [SMALL_STATE(149)] = 3383,
  [SMALL_STATE(150)] = 3399,
  [SMALL_STATE(151)] = 3412,
  [SMALL_STATE(152)] = 3425,
  [SMALL_STATE(153)] = 3438,
  [SMALL_STATE(154)] = 3451,
  [SMALL_STATE(155)] = 3464,
  [SMALL_STATE(156)] = 3470,
  [SMALL_STATE(157)] = 3480,
  [SMALL_STATE(158)] = 3490,
  [SMALL_STATE(159)] = 3500,
  [SMALL_STATE(160)] = 3510,
  [SMALL_STATE(161)] = 3520,
  [SMALL_STATE(162)] = 3530,
  [SMALL_STATE(163)] = 3540,
  [SMALL_STATE(164)] = 3550,
  [SMALL_STATE(165)] = 3560,
  [SMALL_STATE(166)] = 3570,
  [SMALL_STATE(167)] = 3580,
  [SMALL_STATE(168)] = 3587,
  [SMALL_STATE(169)] = 3594,
  [SMALL_STATE(170)] = 3601,
  [SMALL_STATE(171)] = 3608,
  [SMALL_STATE(172)] = 3613,
  [SMALL_STATE(173)] = 3620,
  [SMALL_STATE(174)] = 3624,
  [SMALL_STATE(175)] = 3628,
  [SMALL_STATE(176)] = 3632,
  [SMALL_STATE(177)] = 3636,
  [SMALL_STATE(178)] = 3640,
  [SMALL_STATE(179)] = 3644,
  [SMALL_STATE(180)] = 3648,
  [SMALL_STATE(181)] = 3652,
  [SMALL_STATE(182)] = 3656,
  [SMALL_STATE(183)] = 3660,
  [SMALL_STATE(184)] = 3664,
  [SMALL_STATE(185)] = 3668,
  [SMALL_STATE(186)] = 3672,
  [SMALL_STATE(187)] = 3676,
  [SMALL_STATE(188)] = 3680,
  [SMALL_STATE(189)] = 3684,
  [SMALL_STATE(190)] = 3688,
  [SMALL_STATE(191)] = 3692,
  [SMALL_STATE(192)] = 3696,
  [SMALL_STATE(193)] = 3700,
  [SMALL_STATE(194)] = 3704,
  [SMALL_STATE(195)] = 3708,
  [SMALL_STATE(196)] = 3712,
  [SMALL_STATE(197)] = 3716,
  [SMALL_STATE(198)] = 3720,
  [SMALL_STATE(199)] = 3724,
  [SMALL_STATE(200)] = 3728,
  [SMALL_STATE(201)] = 3732,
  [SMALL_STATE(202)] = 3736,
  [SMALL_STATE(203)] = 3740,
  [SMALL_STATE(204)] = 3744,
  [SMALL_STATE(205)] = 3748,
  [SMALL_STATE(206)] = 3752,
  [SMALL_STATE(207)] = 3756,
  [SMALL_STATE(208)] = 3760,
  [SMALL_STATE(209)] = 3764,
  [SMALL_STATE(210)] = 3768,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 12),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 12),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(209),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim3, 4, .production_id = 18),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim3, 4, .production_id = 18),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6, .production_id = 21),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6, .production_id = 21),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim5, 4, .production_id = 18),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim5, 4, .production_id = 18),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim4, 4, .production_id = 18),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim4, 4, .production_id = 18),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim2, 4, .production_id = 18),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim2, 4, .production_id = 18),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim1, 4, .production_id = 17),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim1, 4, .production_id = 17),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4, .production_id = 16),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4, .production_id = 16),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 11),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 11),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 2, .production_id = 6),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 2, .production_id = 6),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 8),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 8),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 22),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 22),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2, .production_id = 7),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2, .production_id = 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(164),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(210),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(99),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(107),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(205),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(132),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(87),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(133),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(205),
  [305] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(132),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(100),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(100),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 5, .production_id = 8),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 5, .production_id = 8),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_definition, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__metadata_definition, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 6, .production_id = 14),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 6, .production_id = 14),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants, 1),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(108),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 9),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 9),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 9),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 9),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 9),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 9),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 9),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 10),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 10),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 10),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 10),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(122),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(178),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 20),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 19),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, .production_id = 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 9),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 9),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 9),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 9),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 9),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(162),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 23),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(20),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(158),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 13),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [606] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
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
