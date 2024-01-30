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
#define STATE_COUNT 212
#define LARGE_STATE_COUNT 40
#define SYMBOL_COUNT 176
#define ALIAS_COUNT 1
#define TOKEN_COUNT 105
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 19
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 25

enum {
  anon_sym_SEMI = 1,
  anon_sym_EQ = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_declare = 5,
  anon_sym_import = 6,
  anon_sym_COMMA = 7,
  anon_sym_DOT = 8,
  anon_sym_environment = 9,
  anon_sym_BSLASH = 10,
  anon_sym_TILDE = 11,
  anon_sym_COLON = 12,
  anon_sym_LT_COLON = 13,
  anon_sym_COLON_GT = 14,
  sym_par = 15,
  sym_seq = 16,
  sym_sum = 17,
  sym_prod = 18,
  anon_sym_with = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  anon_sym_letrec = 22,
  anon_sym_where = 23,
  anon_sym_SQUOTE = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_component = 27,
  sym_add = 28,
  anon_sym_DASH = 29,
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
  sym_rdtable = 76,
  sym_rwtable = 77,
  sym_select2 = 78,
  sym_select3 = 79,
  sym_lowest = 80,
  sym_highest = 81,
  sym_assertbounds = 82,
  sym_int = 83,
  sym_real = 84,
  anon_sym_LTmdoc_GT = 85,
  anon_sym_LT_SLASHmdoc_GT = 86,
  sym__doc_char = 87,
  anon_sym_LTnotice_SLASH_GT = 88,
  anon_sym_LTnotice_SLASH_GT2 = 89,
  anon_sym_LTequation_GT = 90,
  anon_sym_LT_SLASHequation_GT = 91,
  anon_sym_LTdiagram_GT = 92,
  anon_sym_LT_SLASHdiagram_GT = 93,
  anon_sym_LTmetadata_GT = 94,
  anon_sym_LT_SLASHmetadata_GT = 95,
  anon_sym_LTlisting = 96,
  sym_single_precision = 97,
  sym_double_precision = 98,
  sym_quad_precision = 99,
  sym_fixed_point_precision = 100,
  sym_string = 101,
  anon_sym_COLON_COLON = 102,
  sym__id = 103,
  sym_comment = 104,
  sym_program = 105,
  sym__statement = 106,
  sym__definition = 107,
  sym_definition = 108,
  sym_function_definition = 109,
  sym__metadata_definition = 110,
  sym_global_metadata = 111,
  sym_function_metadata = 112,
  sym_file_import = 113,
  sym__expression = 114,
  sym__infix_expression = 115,
  sym_infix = 116,
  sym_partial = 117,
  sym_prefix = 118,
  sym_prim1 = 119,
  sym_prim2 = 120,
  sym_prim3 = 121,
  sym_prim4 = 122,
  sym_prim5 = 123,
  sym_function_call = 124,
  sym_modifier = 125,
  sym_access = 126,
  sym__primitive = 127,
  sym_lambda = 128,
  sym_parameters = 129,
  sym_arguments = 130,
  sym__argument = 131,
  sym_recursive_arg = 132,
  sym_sequential_arg = 133,
  sym_split_arg = 134,
  sym_merge_arg = 135,
  sym_iteration = 136,
  sym_with_environment = 137,
  sym_environment = 138,
  sym_letrec_environment = 139,
  sym_rec_environment = 140,
  sym_recinition = 141,
  sym_substitution = 142,
  sym_substitutions = 143,
  sym_component = 144,
  sym__infix = 145,
  sym__prim1 = 146,
  sym__prim2 = 147,
  sym__prim3 = 148,
  sym__prim4 = 149,
  sym__prim5 = 150,
  sym__modifier = 151,
  sym_one_sample_delay = 152,
  sym_sub = 153,
  sym__number = 154,
  sym_documentation = 155,
  sym__doc_content = 156,
  sym__special_doc_tag = 157,
  sym__binary_composition = 158,
  sym_recursive = 159,
  sym_sequential = 160,
  sym_split = 161,
  sym_merge = 162,
  sym_parallel = 163,
  sym_variants = 164,
  sym__variant = 165,
  sym_id = 166,
  sym_negate_id = 167,
  aux_sym_program_repeat1 = 168,
  aux_sym_parameters_repeat1 = 169,
  aux_sym_arguments_repeat1 = 170,
  aux_sym_environment_repeat1 = 171,
  aux_sym_rec_environment_repeat1 = 172,
  aux_sym_documentation_repeat1 = 173,
  aux_sym_variants_repeat1 = 174,
  aux_sym_id_repeat1 = 175,
  alias_sym_parameter = 176,
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
  [anon_sym_environment] = "environment",
  [anon_sym_BSLASH] = "\\",
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
  [anon_sym_DASH] = "-",
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
  [sym_rdtable] = "rdtable",
  [sym_rwtable] = "rwtable",
  [sym_select2] = "select2",
  [sym_select3] = "select3",
  [sym_lowest] = "lowest",
  [sym_highest] = "highest",
  [sym_assertbounds] = "assertbounds",
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
  [sym_lambda] = "lambda",
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
  [sym_negate_id] = "negate_id",
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
  [anon_sym_environment] = anon_sym_environment,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
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
  [anon_sym_DASH] = anon_sym_DASH,
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
  [sym_rdtable] = sym_rdtable,
  [sym_rwtable] = sym_rwtable,
  [sym_select2] = sym_select2,
  [sym_select3] = sym_select3,
  [sym_lowest] = sym_lowest,
  [sym_highest] = sym_highest,
  [sym_assertbounds] = sym_assertbounds,
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
  [sym_lambda] = sym_lambda,
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
  [sym_negate_id] = sym_negate_id,
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
  [anon_sym_environment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
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
  [sym_lowest] = {
    .visible = true,
    .named = true,
  },
  [sym_highest] = {
    .visible = true,
    .named = true,
  },
  [sym_assertbounds] = {
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
  [sym_lambda] = {
    .visible = true,
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
  [sym_negate_id] = {
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
  [22] = {.index = 36, .length = 1},
  [23] = {.index = 37, .length = 4},
  [24] = {.index = 41, .length = 2},
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
    {field_value, 6},
  [37] =
    {field_current_iter, 2},
    {field_expression, 6},
    {field_num_iters, 4},
    {field_type, 0},
  [41] =
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
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 31,
  [36] = 32,
  [37] = 33,
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
  [56] = 42,
  [57] = 43,
  [58] = 44,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 46,
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
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 48,
  [122] = 47,
  [123] = 123,
  [124] = 124,
  [125] = 110,
  [126] = 102,
  [127] = 127,
  [128] = 128,
  [129] = 50,
  [130] = 130,
  [131] = 131,
  [132] = 51,
  [133] = 49,
  [134] = 134,
  [135] = 135,
  [136] = 109,
  [137] = 137,
  [138] = 52,
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
  [207] = 207,
  [208] = 206,
  [209] = 203,
  [210] = 179,
  [211] = 211,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(289);
      if (lookahead == '!') ADVANCE(407);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(335);
      if (lookahead == '&') ADVANCE(338);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '*') ADVANCE(333);
      if (lookahead == '+') ADVANCE(330);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(332);
      if (lookahead == '.') ADVANCE(300);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(291);
      if (lookahead == '>') ADVANCE(346);
      if (lookahead == '@') ADVANCE(350);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == '\\') ADVANCE(303);
      if (lookahead == ']') ADVANCE(326);
      if (lookahead == '^') ADVANCE(336);
      if (lookahead == '_') ADVANCE(405);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'h') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == 'q') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(194);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '|') ADVANCE(337);
      if (lookahead == '}') ADVANCE(320);
      if (lookahead == '~') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '/') ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(407);
      if (lookahead == '%') ADVANCE(335);
      if (lookahead == '&') ADVANCE(338);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == '*') ADVANCE(333);
      if (lookahead == '+') ADVANCE(330);
      if (lookahead == '-') ADVANCE(332);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '<') ADVANCE(344);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(346);
      if (lookahead == '@') ADVANCE(350);
      if (lookahead == '\\') ADVANCE(303);
      if (lookahead == '^') ADVANCE(336);
      if (lookahead == '_') ADVANCE(406);
      if (lookahead == 'a') ADVANCE(466);
      if (lookahead == 'c') ADVANCE(500);
      if (lookahead == 'e') ADVANCE(557);
      if (lookahead == 'f') ADVANCE(542);
      if (lookahead == 'h') ADVANCE(522);
      if (lookahead == 'i') ADVANCE(564);
      if (lookahead == 'l') ADVANCE(574);
      if (lookahead == 'm') ADVANCE(454);
      if (lookahead == 'p') ADVANCE(457);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead == 's') ADVANCE(489);
      if (lookahead == 't') ADVANCE(459);
      if (lookahead == 'x') ADVANCE(583);
      if (lookahead == '|') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(335);
      if (lookahead == '&') ADVANCE(338);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '*') ADVANCE(333);
      if (lookahead == '+') ADVANCE(329);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(331);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(346);
      if (lookahead == '@') ADVANCE(350);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == '^') ADVANCE(336);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(501);
      if (lookahead == 'w') ADVANCE(531);
      if (lookahead == 'x') ADVANCE(583);
      if (lookahead == '|') ADVANCE(337);
      if (lookahead == '~') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(335);
      if (lookahead == '&') ADVANCE(338);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '*') ADVANCE(333);
      if (lookahead == '+') ADVANCE(329);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(331);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(346);
      if (lookahead == '@') ADVANCE(350);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == '^') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(194);
      if (lookahead == '|') ADVANCE(337);
      if (lookahead == '~') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(335);
      if (lookahead == '&') ADVANCE(338);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '*') ADVANCE(333);
      if (lookahead == '+') ADVANCE(329);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(331);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ':') ADVANCE(305);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(346);
      if (lookahead == '@') ADVANCE(350);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == '^') ADVANCE(336);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'x') ADVANCE(583);
      if (lookahead == '|') ADVANCE(337);
      if (lookahead == '~') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(21);
      if (lookahead == '%') ADVANCE(335);
      if (lookahead == '&') ADVANCE(338);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == '*') ADVANCE(333);
      if (lookahead == '+') ADVANCE(329);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == '-') ADVANCE(331);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(334);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == ';') ADVANCE(290);
      if (lookahead == '<') ADVANCE(343);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(346);
      if (lookahead == '@') ADVANCE(350);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == '^') ADVANCE(336);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(194);
      if (lookahead == '|') ADVANCE(337);
      if (lookahead == '~') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(292);
      if (lookahead == ')') ADVANCE(293);
      if (lookahead == ',') ADVANCE(298);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '=') ADVANCE(291);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(449);
      if (lookahead == '\\') ADVANCE(286);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(648);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(647);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(355);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(414);
      if (lookahead == '3') ADVANCE(416);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(450);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ']') ADVANCE(326);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(576);
      if (lookahead == 'f') ADVANCE(518);
      if (lookahead == 'q') ADVANCE(638);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead == '}') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(576);
      if (lookahead == 'f') ADVANCE(518);
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead == 'q') ADVANCE(638);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 20:
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(430);
      if (lookahead != 0) ADVANCE(431);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(349);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(348);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(428);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(429);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(436);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(432);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(437);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(434);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(438);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(433);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(435);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(439);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(280);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(134);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(208);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(156);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(158);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(321);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(254);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(96);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(391);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(315);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(275);
      if (lookahead == 'w') ADVANCE(270);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(273);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead == 'q') ADVANCE(226);
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(130);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(353);
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(440);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(232);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(317);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(399);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(281);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(363);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(403);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == 'q') ADVANCE(311);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(408);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(213);
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(211);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(210);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(373);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(445);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(443);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(447);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(180);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(263);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 207:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 208:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 209:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(233);
      END_STATE();
    case 215:
      if (lookahead == 'p') ADVANCE(235);
      END_STATE();
    case 216:
      if (lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 217:
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 218:
      if (lookahead == 'q') ADVANCE(276);
      END_STATE();
    case 219:
      if (lookahead == 'q') ADVANCE(278);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(339);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 232:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 233:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 239:
      if (lookahead == 's') ADVANCE(369);
      END_STATE();
    case 240:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 241:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 242:
      if (lookahead == 's') ADVANCE(253);
      END_STATE();
    case 243:
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 244:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 245:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 246:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 247:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 250:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 251:
      if (lookahead == 't') ADVANCE(383);
      END_STATE();
    case 252:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 253:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 254:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 255:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 256:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 257:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 258:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 259:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(185);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 279:
      if (lookahead == 'w') ADVANCE(385);
      END_STATE();
    case 280:
      if (lookahead == 'x') ADVANCE(389);
      END_STATE();
    case 281:
      if (lookahead == 'x') ADVANCE(397);
      END_STATE();
    case 282:
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 283:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 286:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 287:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(648);
      if (lookahead == '\r') ADVANCE(649);
      END_STATE();
    case 288:
      if (eof) ADVANCE(289);
      if (lookahead == '.') ADVANCE(299);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '<') ADVANCE(167);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(487);
      if (lookahead == 'f') ADVANCE(518);
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead == 'q') ADVANCE(638);
      if (lookahead == 's') ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(288)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(450);
      if (lookahead == '>') ADVANCE(308);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(308);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_par);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_letrec);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_letrec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_add);
      if (lookahead == '.') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_mult);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_div);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_mod);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_pow);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_lshift);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_rshift);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == ':') ADVANCE(307);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '=') ADVANCE(345);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '<') ADVANCE(341);
      if (lookahead == '=') ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(347);
      if (lookahead == '>') ADVANCE(342);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_delay);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_exp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(14);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_log10);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_log10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_sqrt);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_sqrt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_abs);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_abs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_floor);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_floor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_ceil);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_ceil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_rint);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_rint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_round);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_round);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_acos);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_acos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_asin);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_asin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(395);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_cos);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_cos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_sin);
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_tan);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_tan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_pow_fun);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_pow_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_min);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_fmod);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_fmod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_remainder);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_remainder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_atan2);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_atan2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_prefix_prim);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_prefix_prim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_attach);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_attach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_enable);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_enable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(349);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_rdtable);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_rdtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_rwtable);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_rwtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_select2);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_select2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_select3);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_select3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_lowest);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_lowest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_highest);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_highest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_assertbounds);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_assertbounds);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(426);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(283);
      if (lookahead == 'f') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(431);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_single_precision);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_single_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_double_precision);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_double_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_quad_precision);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_quad_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '0') ADVANCE(356);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '2') ADVANCE(415);
      if (lookahead == '3') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 'e') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(598);
      if (lookahead == 'o') ADVANCE(642);
      if (lookahead == 'r') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(625);
      if (lookahead == 'o') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead == 't') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == 'v') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(612);
      if (lookahead == 'c') ADVANCE(580);
      if (lookahead == 's') ADVANCE(529);
      if (lookahead == 't') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(633);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'i') ADVANCE(568);
      if (lookahead == 'o') ADVANCE(640);
      if (lookahead == 'w') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'o') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == 'i') ADVANCE(559);
      if (lookahead == 'q') ADVANCE(604);
      if (lookahead == 'u') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'o') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(524);
      if (lookahead == 'o') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(354);
      if (lookahead == 'w') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead == 's') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(496);
      if (lookahead == 'q') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead == 'm') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(592);
      if (lookahead == 'n') ADVANCE(634);
      if (lookahead == 's') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(462);
      if (lookahead == 'x') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'w') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(648);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(648);
      if (lookahead == '\\') ADVANCE(287);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 288},
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
  [64] = {.lex_state = 5},
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
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 288},
  [89] = {.lex_state = 288},
  [90] = {.lex_state = 17},
  [91] = {.lex_state = 17},
  [92] = {.lex_state = 17},
  [93] = {.lex_state = 17},
  [94] = {.lex_state = 17},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 20},
  [101] = {.lex_state = 20},
  [102] = {.lex_state = 288},
  [103] = {.lex_state = 288},
  [104] = {.lex_state = 288},
  [105] = {.lex_state = 288},
  [106] = {.lex_state = 288},
  [107] = {.lex_state = 288},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 18},
  [110] = {.lex_state = 18},
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
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 17},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 17},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 19},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 7},
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
  [179] = {.lex_state = 7},
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
  [193] = {.lex_state = 288},
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
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 7},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 7},
  [211] = {.lex_state = 0},
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
    [anon_sym_environment] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
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
    [anon_sym_DASH] = ACTIONS(1),
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
    [sym_rdtable] = ACTIONS(1),
    [sym_rwtable] = ACTIONS(1),
    [sym_select2] = ACTIONS(1),
    [sym_select3] = ACTIONS(1),
    [sym_lowest] = ACTIONS(1),
    [sym_highest] = ACTIONS(1),
    [sym_assertbounds] = ACTIONS(1),
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
    [sym_program] = STATE(204),
    [sym__statement] = STATE(89),
    [sym__definition] = STATE(89),
    [sym_definition] = STATE(203),
    [sym_function_definition] = STATE(203),
    [sym__metadata_definition] = STATE(89),
    [sym_global_metadata] = STATE(202),
    [sym_function_metadata] = STATE(202),
    [sym_file_import] = STATE(89),
    [sym_documentation] = STATE(89),
    [sym_variants] = STATE(152),
    [sym__variant] = STATE(109),
    [sym_id] = STATE(171),
    [aux_sym_program_repeat1] = STATE(89),
    [aux_sym_variants_repeat1] = STATE(109),
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
    [sym__expression] = STATE(114),
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
    [sym_lambda] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(114),
    [sym_letrec_environment] = STATE(114),
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
    [sym__binary_composition] = STATE(114),
    [sym_recursive] = STATE(114),
    [sym_sequential] = STATE(114),
    [sym_split] = STATE(114),
    [sym_merge] = STATE(114),
    [sym_parallel] = STATE(114),
    [sym_id] = STATE(41),
    [sym_negate_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [3] = {
    [sym__expression] = STATE(112),
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
    [sym_lambda] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(112),
    [sym_letrec_environment] = STATE(112),
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
    [sym__binary_composition] = STATE(112),
    [sym_recursive] = STATE(112),
    [sym_sequential] = STATE(112),
    [sym_split] = STATE(112),
    [sym_merge] = STATE(112),
    [sym_parallel] = STATE(112),
    [sym_id] = STATE(41),
    [sym_negate_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [4] = {
    [sym__expression] = STATE(123),
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
    [sym_lambda] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(123),
    [sym_letrec_environment] = STATE(123),
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
    [sym__binary_composition] = STATE(123),
    [sym_recursive] = STATE(123),
    [sym_sequential] = STATE(123),
    [sym_split] = STATE(123),
    [sym_merge] = STATE(123),
    [sym_parallel] = STATE(123),
    [sym_id] = STATE(41),
    [sym_negate_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [5] = {
    [sym__expression] = STATE(131),
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
    [sym_lambda] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(131),
    [sym_letrec_environment] = STATE(131),
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
    [sym__binary_composition] = STATE(131),
    [sym_recursive] = STATE(131),
    [sym_sequential] = STATE(131),
    [sym_split] = STATE(131),
    [sym_merge] = STATE(131),
    [sym_parallel] = STATE(131),
    [sym_id] = STATE(41),
    [sym_negate_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [6] = {
    [sym__expression] = STATE(115),
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
    [sym_lambda] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(115),
    [sym_letrec_environment] = STATE(115),
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
    [sym__binary_composition] = STATE(115),
    [sym_recursive] = STATE(115),
    [sym_sequential] = STATE(115),
    [sym_split] = STATE(115),
    [sym_merge] = STATE(115),
    [sym_parallel] = STATE(115),
    [sym_id] = STATE(41),
    [sym_negate_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [7] = {
    [sym__expression] = STATE(124),
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
    [sym_lambda] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(124),
    [sym_letrec_environment] = STATE(124),
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
    [sym__binary_composition] = STATE(124),
    [sym_recursive] = STATE(124),
    [sym_sequential] = STATE(124),
    [sym_split] = STATE(124),
    [sym_merge] = STATE(124),
    [sym_parallel] = STATE(124),
    [sym_id] = STATE(41),
    [sym_negate_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [8] = {
    [sym__expression] = STATE(113),
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
    [sym_lambda] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(113),
    [sym_letrec_environment] = STATE(113),
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
    [sym__binary_composition] = STATE(113),
    [sym_recursive] = STATE(113),
    [sym_sequential] = STATE(113),
    [sym_split] = STATE(113),
    [sym_merge] = STATE(113),
    [sym_parallel] = STATE(113),
    [sym_id] = STATE(41),
    [sym_negate_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [9] = {
    [sym__expression] = STATE(134),
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
    [sym_lambda] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(134),
    [sym_letrec_environment] = STATE(134),
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
    [sym__binary_composition] = STATE(134),
    [sym_recursive] = STATE(134),
    [sym_sequential] = STATE(134),
    [sym_split] = STATE(134),
    [sym_merge] = STATE(134),
    [sym_parallel] = STATE(134),
    [sym_id] = STATE(41),
    [sym_negate_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [10] = {
    [sym__expression] = STATE(111),
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
    [sym_lambda] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(111),
    [sym_letrec_environment] = STATE(111),
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
    [sym__binary_composition] = STATE(111),
    [sym_recursive] = STATE(111),
    [sym_sequential] = STATE(111),
    [sym_split] = STATE(111),
    [sym_merge] = STATE(111),
    [sym_parallel] = STATE(111),
    [sym_id] = STATE(41),
    [sym_negate_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [11] = {
    [sym__expression] = STATE(130),
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
    [sym_lambda] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(130),
    [sym_letrec_environment] = STATE(130),
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
    [sym__binary_composition] = STATE(130),
    [sym_recursive] = STATE(130),
    [sym_sequential] = STATE(130),
    [sym_split] = STATE(130),
    [sym_merge] = STATE(130),
    [sym_parallel] = STATE(130),
    [sym_id] = STATE(41),
    [sym_negate_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [12] = {
    [sym__expression] = STATE(127),
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
    [sym_lambda] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(127),
    [sym_letrec_environment] = STATE(127),
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
    [sym__binary_composition] = STATE(127),
    [sym_recursive] = STATE(127),
    [sym_sequential] = STATE(127),
    [sym_split] = STATE(127),
    [sym_merge] = STATE(127),
    [sym_parallel] = STATE(127),
    [sym_id] = STATE(41),
    [sym_negate_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [13] = {
    [sym__expression] = STATE(135),
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
    [sym_lambda] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(135),
    [sym_letrec_environment] = STATE(135),
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
    [sym__binary_composition] = STATE(135),
    [sym_recursive] = STATE(135),
    [sym_sequential] = STATE(135),
    [sym_split] = STATE(135),
    [sym_merge] = STATE(135),
    [sym_parallel] = STATE(135),
    [sym_id] = STATE(41),
    [sym_negate_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(47),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [14] = {
    [sym__expression] = STATE(128),
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
    [sym_lambda] = STATE(41),
    [sym_iteration] = STATE(41),
    [sym_with_environment] = STATE(128),
    [sym_letrec_environment] = STATE(128),
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
    [sym__binary_composition] = STATE(128),
    [sym_recursive] = STATE(128),
    [sym_sequential] = STATE(128),
    [sym_split] = STATE(128),
    [sym_merge] = STATE(128),
    [sym_parallel] = STATE(128),
    [sym_id] = STATE(41),
    [sym_negate_id] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(39),
    [sym_real] = ACTIONS(47),
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
    [sym_lambda] = STATE(53),
    [sym_arguments] = STATE(182),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
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
    [sym_lambda] = STATE(53),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
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
    [sym_lambda] = STATE(53),
    [sym_arguments] = STATE(190),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
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
    [sym_lambda] = STATE(53),
    [sym_arguments] = STATE(196),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
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
    [sym_lambda] = STATE(53),
    [sym_arguments] = STATE(189),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
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
    [sym_lambda] = STATE(53),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
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
    [sym_lambda] = STATE(53),
    [sym__argument] = STATE(150),
    [sym_recursive_arg] = STATE(150),
    [sym_sequential_arg] = STATE(150),
    [sym_split_arg] = STATE(150),
    [sym_merge_arg] = STATE(150),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
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
    [sym_lambda] = STATE(53),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
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
    [sym_lambda] = STATE(53),
    [sym__argument] = STATE(145),
    [sym_recursive_arg] = STATE(145),
    [sym_sequential_arg] = STATE(145),
    [sym_split_arg] = STATE(145),
    [sym_merge_arg] = STATE(145),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
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
    [sym_lambda] = STATE(53),
    [sym__argument] = STATE(144),
    [sym_recursive_arg] = STATE(144),
    [sym_sequential_arg] = STATE(144),
    [sym_split_arg] = STATE(144),
    [sym_merge_arg] = STATE(144),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
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
    [sym_lambda] = STATE(53),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
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
    [sym_lambda] = STATE(53),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
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
    [sym_lambda] = STATE(53),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
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
    [sym_lambda] = STATE(53),
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
    [sym_negate_id] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(55),
    [sym_real] = ACTIONS(57),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [29] = {
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
    [sym_lambda] = STATE(42),
    [sym_iteration] = STATE(42),
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
    [sym_id] = STATE(42),
    [sym_negate_id] = STATE(42),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(59),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [30] = {
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
    [sym_lambda] = STATE(56),
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
    [sym_negate_id] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(63),
    [sym_real] = ACTIONS(65),
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
    [sym_lambda] = STATE(54),
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
    [sym_negate_id] = STATE(54),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
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
    [sym_lambda] = STATE(58),
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
    [sym_negate_id] = STATE(58),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(71),
    [sym_real] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [33] = {
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
    [sym_lambda] = STATE(57),
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
    [sym_negate_id] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(75),
    [sym_real] = ACTIONS(77),
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
    [sym_lambda] = STATE(55),
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
    [sym_negate_id] = STATE(55),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(53),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(79),
    [sym_real] = ACTIONS(81),
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
    [sym_lambda] = STATE(45),
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
    [sym_negate_id] = STATE(45),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(83),
    [sym_real] = ACTIONS(85),
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
    [sym_lambda] = STATE(44),
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
    [sym_negate_id] = STATE(44),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(87),
    [sym_real] = ACTIONS(89),
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
    [sym_lambda] = STATE(43),
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
    [sym_negate_id] = STATE(43),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(91),
    [sym_real] = ACTIONS(93),
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
    [sym_lambda] = STATE(40),
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
    [sym_negate_id] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [sym_par] = ACTIONS(25),
    [sym_seq] = ACTIONS(25),
    [sym_sum] = ACTIONS(25),
    [sym_prod] = ACTIONS(25),
    [anon_sym_component] = ACTIONS(27),
    [sym_add] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [sym_mult] = ACTIONS(33),
    [sym_div] = ACTIONS(33),
    [sym_mod] = ACTIONS(33),
    [sym_pow] = ACTIONS(33),
    [sym_or] = ACTIONS(33),
    [sym_and] = ACTIONS(33),
    [sym_xor] = ACTIONS(29),
    [sym_lshift] = ACTIONS(33),
    [sym_rshift] = ACTIONS(33),
    [sym_lt] = ACTIONS(29),
    [sym_le] = ACTIONS(33),
    [sym_gt] = ACTIONS(29),
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
    [sym_rdtable] = ACTIONS(41),
    [sym_rwtable] = ACTIONS(43),
    [sym_select2] = ACTIONS(41),
    [sym_select3] = ACTIONS(45),
    [sym_lowest] = ACTIONS(35),
    [sym_highest] = ACTIONS(35),
    [sym_assertbounds] = ACTIONS(41),
    [sym_int] = ACTIONS(95),
    [sym_real] = ACTIONS(97),
    [anon_sym_COLON_COLON] = ACTIONS(49),
    [sym__id] = ACTIONS(51),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_environment] = ACTIONS(101),
    [anon_sym_BSLASH] = ACTIONS(99),
    [sym_par] = ACTIONS(101),
    [sym_seq] = ACTIONS(101),
    [sym_sum] = ACTIONS(101),
    [sym_prod] = ACTIONS(101),
    [anon_sym_component] = ACTIONS(101),
    [sym_add] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [sym_mult] = ACTIONS(99),
    [sym_div] = ACTIONS(99),
    [sym_mod] = ACTIONS(99),
    [sym_pow] = ACTIONS(99),
    [sym_or] = ACTIONS(99),
    [sym_and] = ACTIONS(99),
    [sym_xor] = ACTIONS(101),
    [sym_lshift] = ACTIONS(99),
    [sym_rshift] = ACTIONS(99),
    [sym_lt] = ACTIONS(101),
    [sym_le] = ACTIONS(99),
    [sym_gt] = ACTIONS(101),
    [sym_ge] = ACTIONS(99),
    [sym_eq] = ACTIONS(99),
    [sym_neq] = ACTIONS(99),
    [sym_delay] = ACTIONS(99),
    [sym_exp] = ACTIONS(101),
    [sym_log] = ACTIONS(101),
    [sym_log10] = ACTIONS(101),
    [sym_sqrt] = ACTIONS(101),
    [sym_abs] = ACTIONS(101),
    [sym_floor] = ACTIONS(101),
    [sym_ceil] = ACTIONS(101),
    [sym_rint] = ACTIONS(101),
    [sym_round] = ACTIONS(101),
    [sym_acos] = ACTIONS(101),
    [sym_asin] = ACTIONS(101),
    [sym_atan] = ACTIONS(101),
    [sym_cos] = ACTIONS(101),
    [sym_sin] = ACTIONS(101),
    [sym_tan] = ACTIONS(101),
    [sym_int_cast] = ACTIONS(101),
    [sym_float_cast] = ACTIONS(101),
    [sym_pow_fun] = ACTIONS(101),
    [sym_min] = ACTIONS(101),
    [sym_max] = ACTIONS(101),
    [sym_fmod] = ACTIONS(101),
    [sym_remainder] = ACTIONS(101),
    [sym_atan2] = ACTIONS(101),
    [sym_prefix_prim] = ACTIONS(101),
    [sym_attach] = ACTIONS(101),
    [sym_enable] = ACTIONS(101),
    [sym_control] = ACTIONS(101),
    [sym_wire] = ACTIONS(101),
    [sym_cut] = ACTIONS(101),
    [sym_mem] = ACTIONS(101),
    [sym_rdtable] = ACTIONS(101),
    [sym_rwtable] = ACTIONS(101),
    [sym_select2] = ACTIONS(101),
    [sym_select3] = ACTIONS(101),
    [sym_lowest] = ACTIONS(101),
    [sym_highest] = ACTIONS(101),
    [sym_assertbounds] = ACTIONS(101),
    [sym_int] = ACTIONS(101),
    [sym_real] = ACTIONS(99),
    [anon_sym_COLON_COLON] = ACTIONS(99),
    [sym__id] = ACTIONS(101),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
    STATE(77), 1,
      sym_substitutions,
    STATE(72), 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
      sym_or,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [58] = 16,
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
      anon_sym_COLON,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_DASH,
    STATE(38), 1,
      sym_sub,
    STATE(77), 1,
      sym_substitutions,
    ACTIONS(125), 2,
      sym_add,
      sym_or,
    ACTIONS(129), 2,
      sym_lt,
      sym_gt,
    STATE(72), 2,
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
  [126] = 10,
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
    STATE(77), 1,
      sym_substitutions,
    STATE(72), 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [182] = 9,
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
    STATE(77), 1,
      sym_substitutions,
    STATE(72), 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [236] = 13,
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
    ACTIONS(127), 1,
      anon_sym_DASH,
    STATE(38), 1,
      sym_sub,
    STATE(77), 1,
      sym_substitutions,
    ACTIONS(125), 2,
      sym_add,
      sym_or,
    STATE(72), 2,
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
  [298] = 8,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    STATE(38), 1,
      sym_sub,
    STATE(77), 1,
      sym_substitutions,
    STATE(72), 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [350] = 5,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 1,
      sym__id,
    STATE(85), 1,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [395] = 4,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [437] = 4,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [479] = 4,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [521] = 4,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [563] = 4,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [605] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [642] = 16,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_DASH,
    ACTIONS(156), 1,
      anon_sym_COLON,
    ACTIONS(162), 1,
      sym_pow,
    ACTIONS(168), 1,
      sym_delay,
    STATE(34), 1,
      sym_sub,
    STATE(77), 1,
      sym_substitutions,
    ACTIONS(158), 2,
      sym_add,
      sym_or,
    ACTIONS(164), 2,
      sym_lt,
      sym_gt,
    STATE(72), 2,
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
  [707] = 8,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym_sub,
    STATE(77), 1,
      sym_substitutions,
    STATE(72), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(109), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(103), 22,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [756] = 11,
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
    STATE(77), 1,
      sym_substitutions,
    STATE(72), 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
      sym_or,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [811] = 10,
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
    STATE(77), 1,
      sym_substitutions,
    STATE(72), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(109), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(103), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [864] = 9,
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
    STATE(77), 1,
      sym_substitutions,
    STATE(72), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(109), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(103), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [915] = 13,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      anon_sym_SQUOTE,
    ACTIONS(127), 1,
      anon_sym_DASH,
    ACTIONS(162), 1,
      sym_pow,
    ACTIONS(168), 1,
      sym_delay,
    STATE(34), 1,
      sym_sub,
    STATE(77), 1,
      sym_substitutions,
    ACTIONS(158), 2,
      sym_add,
      sym_or,
    STATE(72), 2,
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
  [974] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1010] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1046] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1082] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1118] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1154] = 5,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(51), 1,
      sym__id,
    STATE(85), 1,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1196] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1232] = 3,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(194), 27,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1270] = 3,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(194), 27,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1308] = 3,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(194), 27,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1346] = 3,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(194), 27,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1384] = 3,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(194), 27,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1422] = 3,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(194), 27,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1460] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1496] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1532] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1568] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1604] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1640] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1676] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1712] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1748] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1784] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1820] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1856] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1892] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1928] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [1964] = 2,
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
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [2000] = 2,
    ACTIONS(272), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(270), 28,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      sym_add,
      anon_sym_DASH,
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
  [2036] = 14,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 1,
      anon_sym_declare,
    ACTIONS(279), 1,
      anon_sym_import,
    ACTIONS(282), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(288), 1,
      anon_sym_COLON_COLON,
    ACTIONS(291), 1,
      sym__id,
    ACTIONS(294), 1,
      sym_comment,
    STATE(152), 1,
      sym_variants,
    STATE(171), 1,
      sym_id,
    STATE(109), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(202), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(203), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(285), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(88), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [2090] = 14,
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
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(299), 1,
      sym_comment,
    STATE(152), 1,
      sym_variants,
    STATE(171), 1,
      sym_id,
    STATE(109), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(202), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(203), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(11), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(88), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [2144] = 9,
    ACTIONS(306), 1,
      anon_sym_COLON_COLON,
    ACTIONS(309), 1,
      sym__id,
    STATE(167), 1,
      sym_variants,
    STATE(171), 1,
      sym_id,
    ACTIONS(301), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(90), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(136), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(209), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(303), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2179] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_variants,
    STATE(171), 1,
      sym_id,
    STATE(97), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(136), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(209), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(314), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2213] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      sym_variants,
    STATE(171), 1,
      sym_id,
    STATE(90), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(136), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(209), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(314), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2247] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      sym_variants,
    STATE(171), 1,
      sym_id,
    STATE(92), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(136), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(209), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(314), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2281] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_variants,
    STATE(171), 1,
      sym_id,
    STATE(90), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(136), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(209), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(314), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2315] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_variants,
    STATE(171), 1,
      sym_id,
    STATE(90), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(136), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(209), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(314), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2349] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_variants,
    STATE(171), 1,
      sym_id,
    STATE(94), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(136), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(209), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(314), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2383] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_variants,
    STATE(171), 1,
      sym_id,
    STATE(90), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(136), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(209), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(314), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2417] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_variants,
    STATE(171), 1,
      sym_id,
    STATE(95), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(136), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(209), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(314), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2451] = 4,
    ACTIONS(328), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(330), 1,
      sym__doc_char,
    STATE(99), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(333), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2474] = 4,
    ACTIONS(336), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(338), 1,
      sym__doc_char,
    STATE(101), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(340), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2497] = 4,
    ACTIONS(342), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(344), 1,
      sym__doc_char,
    STATE(99), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(346), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [2520] = 2,
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
  [2536] = 2,
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
  [2552] = 2,
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
  [2568] = 2,
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
  [2584] = 2,
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
  [2600] = 2,
    ACTIONS(368), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(370), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2616] = 2,
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
  [2630] = 4,
    ACTIONS(380), 1,
      anon_sym_COLON_COLON,
    ACTIONS(376), 2,
      anon_sym_import,
      sym__id,
    STATE(110), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(378), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2648] = 4,
    ACTIONS(387), 1,
      anon_sym_COLON_COLON,
    ACTIONS(382), 2,
      anon_sym_import,
      sym__id,
    STATE(110), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(384), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2666] = 4,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_TILDE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(389), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2684] = 2,
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
  [2698] = 4,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_TILDE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(401), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2716] = 6,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_TILDE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(407), 1,
      anon_sym_LT_COLON,
    ACTIONS(409), 1,
      anon_sym_COLON_GT,
    ACTIONS(405), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [2738] = 6,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_TILDE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(407), 1,
      anon_sym_LT_COLON,
    ACTIONS(409), 1,
      anon_sym_COLON_GT,
    ACTIONS(411), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_letrec,
  [2760] = 2,
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
  [2774] = 2,
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
  [2788] = 2,
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
  [2802] = 2,
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
  [2816] = 2,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(429), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [2830] = 3,
    ACTIONS(433), 1,
      anon_sym_COLON_COLON,
    STATE(129), 1,
      aux_sym_id_repeat1,
    ACTIONS(139), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2845] = 3,
    ACTIONS(433), 1,
      anon_sym_COLON_COLON,
    STATE(129), 1,
      aux_sym_id_repeat1,
    ACTIONS(133), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [2860] = 8,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_TILDE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(407), 1,
      anon_sym_LT_COLON,
    ACTIONS(409), 1,
      anon_sym_COLON_GT,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    ACTIONS(437), 1,
      anon_sym_with,
    ACTIONS(439), 1,
      anon_sym_letrec,
  [2885] = 8,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_TILDE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(407), 1,
      anon_sym_LT_COLON,
    ACTIONS(409), 1,
      anon_sym_COLON_GT,
    ACTIONS(437), 1,
      anon_sym_with,
    ACTIONS(439), 1,
      anon_sym_letrec,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
  [2910] = 4,
    ACTIONS(382), 1,
      sym__id,
    ACTIONS(387), 1,
      anon_sym_COLON_COLON,
    STATE(125), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(443), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [2927] = 2,
    ACTIONS(348), 3,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COLON_COLON,
    ACTIONS(350), 5,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [2940] = 8,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_TILDE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(407), 1,
      anon_sym_LT_COLON,
    ACTIONS(409), 1,
      anon_sym_COLON_GT,
    ACTIONS(437), 1,
      anon_sym_with,
    ACTIONS(439), 1,
      anon_sym_letrec,
    ACTIONS(446), 1,
      anon_sym_SEMI,
  [2965] = 8,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_TILDE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(407), 1,
      anon_sym_LT_COLON,
    ACTIONS(409), 1,
      anon_sym_COLON_GT,
    ACTIONS(437), 1,
      anon_sym_with,
    ACTIONS(439), 1,
      anon_sym_letrec,
    ACTIONS(448), 1,
      anon_sym_SEMI,
  [2990] = 3,
    ACTIONS(450), 1,
      anon_sym_COLON_COLON,
    STATE(129), 1,
      aux_sym_id_repeat1,
    ACTIONS(143), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3005] = 8,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_TILDE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(407), 1,
      anon_sym_LT_COLON,
    ACTIONS(409), 1,
      anon_sym_COLON_GT,
    ACTIONS(437), 1,
      anon_sym_with,
    ACTIONS(439), 1,
      anon_sym_letrec,
    ACTIONS(453), 1,
      anon_sym_SEMI,
  [3030] = 8,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_TILDE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(407), 1,
      anon_sym_LT_COLON,
    ACTIONS(409), 1,
      anon_sym_COLON_GT,
    ACTIONS(437), 1,
      anon_sym_with,
    ACTIONS(439), 1,
      anon_sym_letrec,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [3055] = 3,
    ACTIONS(433), 1,
      anon_sym_COLON_COLON,
    STATE(122), 1,
      aux_sym_id_repeat1,
    ACTIONS(150), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3070] = 3,
    ACTIONS(433), 1,
      anon_sym_COLON_COLON,
    STATE(121), 1,
      aux_sym_id_repeat1,
    ACTIONS(133), 6,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      sym__id,
  [3085] = 8,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_TILDE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(407), 1,
      anon_sym_LT_COLON,
    ACTIONS(409), 1,
      anon_sym_COLON_GT,
    ACTIONS(437), 1,
      anon_sym_with,
    ACTIONS(439), 1,
      anon_sym_letrec,
    ACTIONS(457), 1,
      anon_sym_SEMI,
  [3110] = 8,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_TILDE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(407), 1,
      anon_sym_LT_COLON,
    ACTIONS(409), 1,
      anon_sym_COLON_GT,
    ACTIONS(437), 1,
      anon_sym_with,
    ACTIONS(439), 1,
      anon_sym_letrec,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [3135] = 4,
    ACTIONS(376), 1,
      sym__id,
    ACTIONS(380), 1,
      anon_sym_COLON_COLON,
    STATE(125), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(461), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [3152] = 7,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_TILDE,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(471), 1,
      anon_sym_LT_COLON,
    ACTIONS(473), 1,
      anon_sym_COLON_GT,
    STATE(166), 1,
      aux_sym_arguments_repeat1,
  [3174] = 1,
    ACTIONS(143), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [3184] = 5,
    ACTIONS(467), 1,
      anon_sym_TILDE,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(471), 1,
      anon_sym_LT_COLON,
    ACTIONS(473), 1,
      anon_sym_COLON_GT,
    ACTIONS(475), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3201] = 5,
    ACTIONS(467), 1,
      anon_sym_TILDE,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(471), 1,
      anon_sym_LT_COLON,
    ACTIONS(473), 1,
      anon_sym_COLON_GT,
    ACTIONS(477), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3218] = 2,
    ACTIONS(481), 1,
      anon_sym_COLON,
    ACTIONS(479), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3229] = 6,
    ACTIONS(467), 1,
      anon_sym_TILDE,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(471), 1,
      anon_sym_LT_COLON,
    ACTIONS(473), 1,
      anon_sym_COLON_GT,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 1,
      anon_sym_COMMA,
  [3248] = 3,
    ACTIONS(467), 1,
      anon_sym_TILDE,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(487), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [3261] = 5,
    ACTIONS(467), 1,
      anon_sym_TILDE,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(471), 1,
      anon_sym_LT_COLON,
    ACTIONS(473), 1,
      anon_sym_COLON_GT,
    ACTIONS(489), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3278] = 5,
    ACTIONS(467), 1,
      anon_sym_TILDE,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(471), 1,
      anon_sym_LT_COLON,
    ACTIONS(473), 1,
      anon_sym_COLON_GT,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
  [3294] = 4,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(495), 1,
      anon_sym_where,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
    STATE(149), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3308] = 3,
    ACTIONS(501), 1,
      anon_sym_SQUOTE,
    ACTIONS(499), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(147), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3320] = 5,
    ACTIONS(467), 1,
      anon_sym_TILDE,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(471), 1,
      anon_sym_LT_COLON,
    ACTIONS(473), 1,
      anon_sym_COLON_GT,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
  [3336] = 4,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
    ACTIONS(506), 1,
      anon_sym_where,
    STATE(147), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [3350] = 5,
    ACTIONS(467), 1,
      anon_sym_TILDE,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(471), 1,
      anon_sym_LT_COLON,
    ACTIONS(473), 1,
      anon_sym_COLON_GT,
    ACTIONS(508), 1,
      anon_sym_COMMA,
  [3366] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(510), 1,
      sym__id,
    STATE(160), 1,
      sym_id,
    STATE(176), 1,
      sym_parameters,
  [3379] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(512), 1,
      anon_sym_import,
    STATE(173), 1,
      sym_id,
  [3392] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(510), 1,
      sym__id,
    STATE(160), 1,
      sym_id,
    STATE(191), 1,
      sym_parameters,
  [3405] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(510), 1,
      sym__id,
    STATE(160), 1,
      sym_id,
    STATE(198), 1,
      sym_parameters,
  [3418] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(510), 1,
      sym__id,
    ACTIONS(514), 1,
      sym_string,
    STATE(201), 1,
      sym_id,
  [3431] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(510), 1,
      sym__id,
    STATE(177), 1,
      sym_id,
  [3441] = 3,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_parameters_repeat1,
  [3451] = 3,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
  [3461] = 1,
    ACTIONS(524), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [3467] = 3,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_parameters_repeat1,
  [3477] = 3,
    ACTIONS(49), 1,
      anon_sym_COLON_COLON,
    ACTIONS(530), 1,
      sym__id,
    STATE(80), 1,
      sym_id,
  [3487] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(510), 1,
      sym__id,
    STATE(169), 1,
      sym_id,
  [3497] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(510), 1,
      sym__id,
    STATE(185), 1,
      sym_id,
  [3507] = 3,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_parameters_repeat1,
  [3517] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(510), 1,
      sym__id,
    STATE(155), 1,
      sym_id,
  [3527] = 3,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_arguments_repeat1,
  [3537] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(510), 1,
      sym__id,
    STATE(173), 1,
      sym_id,
  [3547] = 2,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_environment,
  [3554] = 1,
    ACTIONS(538), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3559] = 2,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
    STATE(116), 1,
      sym_environment,
  [3566] = 2,
    ACTIONS(540), 1,
      anon_sym_EQ,
    ACTIONS(542), 1,
      anon_sym_LPAREN,
  [3573] = 2,
    ACTIONS(544), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_rec_environment,
  [3580] = 2,
    ACTIONS(546), 1,
      anon_sym_EQ,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
  [3587] = 1,
    ACTIONS(550), 1,
      anon_sym_EQ,
  [3591] = 1,
    ACTIONS(552), 1,
      anon_sym_SEMI,
  [3595] = 1,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [3599] = 1,
    ACTIONS(556), 1,
      anon_sym_COMMA,
  [3603] = 1,
    ACTIONS(558), 1,
      anon_sym_SEMI,
  [3607] = 1,
    ACTIONS(560), 1,
      sym__id,
  [3611] = 1,
    ACTIONS(562), 1,
      anon_sym_SEMI,
  [3615] = 1,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
  [3619] = 1,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
  [3623] = 1,
    ACTIONS(568), 1,
      anon_sym_EQ,
  [3627] = 1,
    ACTIONS(570), 1,
      sym_string,
  [3631] = 1,
    ACTIONS(572), 1,
      anon_sym_EQ,
  [3635] = 1,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
  [3639] = 1,
    ACTIONS(576), 1,
      sym_string,
  [3643] = 1,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
  [3647] = 1,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [3651] = 1,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
  [3655] = 1,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
  [3659] = 1,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
  [3663] = 1,
    ACTIONS(588), 1,
      anon_sym_DOT,
  [3667] = 1,
    ACTIONS(590), 1,
      anon_sym_SEMI,
  [3671] = 1,
    ACTIONS(592), 1,
      sym_string,
  [3675] = 1,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
  [3679] = 1,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
  [3683] = 1,
    ACTIONS(598), 1,
      anon_sym_RPAREN,
  [3687] = 1,
    ACTIONS(600), 1,
      anon_sym_LPAREN,
  [3691] = 1,
    ACTIONS(602), 1,
      anon_sym_LPAREN,
  [3695] = 1,
    ACTIONS(604), 1,
      sym_string,
  [3699] = 1,
    ACTIONS(606), 1,
      anon_sym_SEMI,
  [3703] = 1,
    ACTIONS(608), 1,
      anon_sym_SEMI,
  [3707] = 1,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
  [3711] = 1,
    ACTIONS(612), 1,
      anon_sym_LPAREN,
  [3715] = 1,
    ACTIONS(614), 1,
      sym__id,
  [3719] = 1,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
  [3723] = 1,
    ACTIONS(618), 1,
      sym__id,
  [3727] = 1,
    ACTIONS(620), 1,
      anon_sym_SEMI,
  [3731] = 1,
    ACTIONS(622), 1,
      sym__id,
  [3735] = 1,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(40)] = 0,
  [SMALL_STATE(41)] = 58,
  [SMALL_STATE(42)] = 126,
  [SMALL_STATE(43)] = 182,
  [SMALL_STATE(44)] = 236,
  [SMALL_STATE(45)] = 298,
  [SMALL_STATE(46)] = 350,
  [SMALL_STATE(47)] = 395,
  [SMALL_STATE(48)] = 437,
  [SMALL_STATE(49)] = 479,
  [SMALL_STATE(50)] = 521,
  [SMALL_STATE(51)] = 563,
  [SMALL_STATE(52)] = 605,
  [SMALL_STATE(53)] = 642,
  [SMALL_STATE(54)] = 707,
  [SMALL_STATE(55)] = 756,
  [SMALL_STATE(56)] = 811,
  [SMALL_STATE(57)] = 864,
  [SMALL_STATE(58)] = 915,
  [SMALL_STATE(59)] = 974,
  [SMALL_STATE(60)] = 1010,
  [SMALL_STATE(61)] = 1046,
  [SMALL_STATE(62)] = 1082,
  [SMALL_STATE(63)] = 1118,
  [SMALL_STATE(64)] = 1154,
  [SMALL_STATE(65)] = 1196,
  [SMALL_STATE(66)] = 1232,
  [SMALL_STATE(67)] = 1270,
  [SMALL_STATE(68)] = 1308,
  [SMALL_STATE(69)] = 1346,
  [SMALL_STATE(70)] = 1384,
  [SMALL_STATE(71)] = 1422,
  [SMALL_STATE(72)] = 1460,
  [SMALL_STATE(73)] = 1496,
  [SMALL_STATE(74)] = 1532,
  [SMALL_STATE(75)] = 1568,
  [SMALL_STATE(76)] = 1604,
  [SMALL_STATE(77)] = 1640,
  [SMALL_STATE(78)] = 1676,
  [SMALL_STATE(79)] = 1712,
  [SMALL_STATE(80)] = 1748,
  [SMALL_STATE(81)] = 1784,
  [SMALL_STATE(82)] = 1820,
  [SMALL_STATE(83)] = 1856,
  [SMALL_STATE(84)] = 1892,
  [SMALL_STATE(85)] = 1928,
  [SMALL_STATE(86)] = 1964,
  [SMALL_STATE(87)] = 2000,
  [SMALL_STATE(88)] = 2036,
  [SMALL_STATE(89)] = 2090,
  [SMALL_STATE(90)] = 2144,
  [SMALL_STATE(91)] = 2179,
  [SMALL_STATE(92)] = 2213,
  [SMALL_STATE(93)] = 2247,
  [SMALL_STATE(94)] = 2281,
  [SMALL_STATE(95)] = 2315,
  [SMALL_STATE(96)] = 2349,
  [SMALL_STATE(97)] = 2383,
  [SMALL_STATE(98)] = 2417,
  [SMALL_STATE(99)] = 2451,
  [SMALL_STATE(100)] = 2474,
  [SMALL_STATE(101)] = 2497,
  [SMALL_STATE(102)] = 2520,
  [SMALL_STATE(103)] = 2536,
  [SMALL_STATE(104)] = 2552,
  [SMALL_STATE(105)] = 2568,
  [SMALL_STATE(106)] = 2584,
  [SMALL_STATE(107)] = 2600,
  [SMALL_STATE(108)] = 2616,
  [SMALL_STATE(109)] = 2630,
  [SMALL_STATE(110)] = 2648,
  [SMALL_STATE(111)] = 2666,
  [SMALL_STATE(112)] = 2684,
  [SMALL_STATE(113)] = 2698,
  [SMALL_STATE(114)] = 2716,
  [SMALL_STATE(115)] = 2738,
  [SMALL_STATE(116)] = 2760,
  [SMALL_STATE(117)] = 2774,
  [SMALL_STATE(118)] = 2788,
  [SMALL_STATE(119)] = 2802,
  [SMALL_STATE(120)] = 2816,
  [SMALL_STATE(121)] = 2830,
  [SMALL_STATE(122)] = 2845,
  [SMALL_STATE(123)] = 2860,
  [SMALL_STATE(124)] = 2885,
  [SMALL_STATE(125)] = 2910,
  [SMALL_STATE(126)] = 2927,
  [SMALL_STATE(127)] = 2940,
  [SMALL_STATE(128)] = 2965,
  [SMALL_STATE(129)] = 2990,
  [SMALL_STATE(130)] = 3005,
  [SMALL_STATE(131)] = 3030,
  [SMALL_STATE(132)] = 3055,
  [SMALL_STATE(133)] = 3070,
  [SMALL_STATE(134)] = 3085,
  [SMALL_STATE(135)] = 3110,
  [SMALL_STATE(136)] = 3135,
  [SMALL_STATE(137)] = 3152,
  [SMALL_STATE(138)] = 3174,
  [SMALL_STATE(139)] = 3184,
  [SMALL_STATE(140)] = 3201,
  [SMALL_STATE(141)] = 3218,
  [SMALL_STATE(142)] = 3229,
  [SMALL_STATE(143)] = 3248,
  [SMALL_STATE(144)] = 3261,
  [SMALL_STATE(145)] = 3278,
  [SMALL_STATE(146)] = 3294,
  [SMALL_STATE(147)] = 3308,
  [SMALL_STATE(148)] = 3320,
  [SMALL_STATE(149)] = 3336,
  [SMALL_STATE(150)] = 3350,
  [SMALL_STATE(151)] = 3366,
  [SMALL_STATE(152)] = 3379,
  [SMALL_STATE(153)] = 3392,
  [SMALL_STATE(154)] = 3405,
  [SMALL_STATE(155)] = 3418,
  [SMALL_STATE(156)] = 3431,
  [SMALL_STATE(157)] = 3441,
  [SMALL_STATE(158)] = 3451,
  [SMALL_STATE(159)] = 3461,
  [SMALL_STATE(160)] = 3467,
  [SMALL_STATE(161)] = 3477,
  [SMALL_STATE(162)] = 3487,
  [SMALL_STATE(163)] = 3497,
  [SMALL_STATE(164)] = 3507,
  [SMALL_STATE(165)] = 3517,
  [SMALL_STATE(166)] = 3527,
  [SMALL_STATE(167)] = 3537,
  [SMALL_STATE(168)] = 3547,
  [SMALL_STATE(169)] = 3554,
  [SMALL_STATE(170)] = 3559,
  [SMALL_STATE(171)] = 3566,
  [SMALL_STATE(172)] = 3573,
  [SMALL_STATE(173)] = 3580,
  [SMALL_STATE(174)] = 3587,
  [SMALL_STATE(175)] = 3591,
  [SMALL_STATE(176)] = 3595,
  [SMALL_STATE(177)] = 3599,
  [SMALL_STATE(178)] = 3603,
  [SMALL_STATE(179)] = 3607,
  [SMALL_STATE(180)] = 3611,
  [SMALL_STATE(181)] = 3615,
  [SMALL_STATE(182)] = 3619,
  [SMALL_STATE(183)] = 3623,
  [SMALL_STATE(184)] = 3627,
  [SMALL_STATE(185)] = 3631,
  [SMALL_STATE(186)] = 3635,
  [SMALL_STATE(187)] = 3639,
  [SMALL_STATE(188)] = 3643,
  [SMALL_STATE(189)] = 3647,
  [SMALL_STATE(190)] = 3651,
  [SMALL_STATE(191)] = 3655,
  [SMALL_STATE(192)] = 3659,
  [SMALL_STATE(193)] = 3663,
  [SMALL_STATE(194)] = 3667,
  [SMALL_STATE(195)] = 3671,
  [SMALL_STATE(196)] = 3675,
  [SMALL_STATE(197)] = 3679,
  [SMALL_STATE(198)] = 3683,
  [SMALL_STATE(199)] = 3687,
  [SMALL_STATE(200)] = 3691,
  [SMALL_STATE(201)] = 3695,
  [SMALL_STATE(202)] = 3699,
  [SMALL_STATE(203)] = 3703,
  [SMALL_STATE(204)] = 3707,
  [SMALL_STATE(205)] = 3711,
  [SMALL_STATE(206)] = 3715,
  [SMALL_STATE(207)] = 3719,
  [SMALL_STATE(208)] = 3723,
  [SMALL_STATE(209)] = 3727,
  [SMALL_STATE(210)] = 3731,
  [SMALL_STATE(211)] = 3735,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
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
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 12),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(210),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim5, 4, .production_id = 18),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim5, 4, .production_id = 18),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim1, 4, .production_id = 17),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim1, 4, .production_id = 17),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4, .production_id = 16),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4, .production_id = 16),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6, .production_id = 21),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6, .production_id = 21),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2, .production_id = 7),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2, .production_id = 7),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 15),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 2, .production_id = 6),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 2, .production_id = 6),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim2, 4, .production_id = 18),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim2, 4, .production_id = 18),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 11),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 11),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim3, 4, .production_id = 18),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim3, 4, .production_id = 18),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 23),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 23),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 8, .production_id = 22),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 8, .production_id = 22),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate_id, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate_id, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim4, 4, .production_id = 18),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim4, 4, .production_id = 18),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(165),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(211),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(100),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(109),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(206),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(132),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(88),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(136),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(206),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(132),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(99),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(99),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 6, .production_id = 14),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 6, .production_id = 14),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 5, .production_id = 8),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 5, .production_id = 8),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_definition, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__metadata_definition, 2),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(110),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 9),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 9),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 9),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 9),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 9),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 9),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 9),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 10),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 10),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 10),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 10),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(125),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 20),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 19),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(179),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, .production_id = 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 9),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 9),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 9),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 9),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 9),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(163),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [518] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(162),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(20),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 24),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 13),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [610] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
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
