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
#define STATE_COUNT 425
#define LARGE_STATE_COUNT 67
#define SYMBOL_COUNT 205
#define ALIAS_COUNT 3
#define TOKEN_COUNT 114
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 21
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 39

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
  anon_sym_LBRACK = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_RBRACK = 13,
  anon_sym_COLON = 14,
  anon_sym_case = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_EQ_GT = 18,
  anon_sym_TILDE = 19,
  anon_sym_LT_COLON = 20,
  anon_sym_COLON_GT = 21,
  sym_par = 22,
  sym_seq = 23,
  sym_sum = 24,
  sym_prod = 25,
  anon_sym_with = 26,
  anon_sym_letrec = 27,
  anon_sym_where = 28,
  anon_sym_SQUOTE = 29,
  anon_sym_ffunction = 30,
  anon_sym_fconstant = 31,
  anon_sym_fvariable = 32,
  anon_sym_PIPE = 33,
  sym_add = 34,
  anon_sym_DASH = 35,
  sym_mult = 36,
  sym_div = 37,
  sym_mod = 38,
  sym_pow = 39,
  sym_and = 40,
  sym_xor = 41,
  sym_lshift = 42,
  sym_rshift = 43,
  sym_lt = 44,
  sym_le = 45,
  sym_gt = 46,
  sym_ge = 47,
  sym_eq = 48,
  sym_neq = 49,
  sym_delay = 50,
  sym_exp = 51,
  sym_log = 52,
  sym_log10 = 53,
  sym_sqrt = 54,
  sym_abs = 55,
  sym_floor = 56,
  sym_ceil = 57,
  sym_rint = 58,
  sym_round = 59,
  sym_acos = 60,
  sym_asin = 61,
  sym_atan = 62,
  sym_cos = 63,
  sym_sin = 64,
  sym_tan = 65,
  sym_int_cast = 66,
  sym_float_cast = 67,
  sym_any_cast = 68,
  sym_pow_fun = 69,
  sym_min = 70,
  sym_max = 71,
  sym_fmod = 72,
  sym_remainder = 73,
  sym_atan2 = 74,
  sym_prefix_prim = 75,
  sym_attach = 76,
  sym_enable = 77,
  sym_control = 78,
  sym_wire = 79,
  sym_cut = 80,
  sym_mem = 81,
  anon_sym_component = 82,
  anon_sym_library = 83,
  sym_rdtable = 84,
  sym_rwtable = 85,
  sym_select2 = 86,
  sym_select3 = 87,
  sym_lowest = 88,
  sym_highest = 89,
  sym_assertbounds = 90,
  sym_int = 91,
  sym_real = 92,
  anon_sym_LTmdoc_GT = 93,
  anon_sym_LT_SLASHmdoc_GT = 94,
  sym__doc_char = 95,
  anon_sym_LTnotice_SLASH_GT = 96,
  anon_sym_LTnotice_SLASH_GT2 = 97,
  anon_sym_LTequation_GT = 98,
  anon_sym_LT_SLASHequation_GT = 99,
  anon_sym_LTdiagram_GT = 100,
  anon_sym_LT_SLASHdiagram_GT = 101,
  anon_sym_LTmetadata_GT = 102,
  anon_sym_LT_SLASHmetadata_GT = 103,
  anon_sym_LTlisting = 104,
  sym_single_precision = 105,
  sym_double_precision = 106,
  sym_quad_precision = 107,
  sym_fixed_point_precision = 108,
  sym_string = 109,
  sym_fstring = 110,
  anon_sym_COLON_COLON = 111,
  sym__id = 112,
  sym_comment = 113,
  sym_program = 114,
  sym__statement = 115,
  sym__definition = 116,
  sym_definition = 117,
  sym_function_definition = 118,
  sym__metadata_definition = 119,
  sym_global_metadata = 120,
  sym_function_metadata = 121,
  sym_file_import = 122,
  sym__expression = 123,
  sym__infix_expression = 124,
  sym_infix = 125,
  sym_partial = 126,
  sym_prefix = 127,
  sym_prim1 = 128,
  sym_prim2 = 129,
  sym_prim3 = 130,
  sym_prim4 = 131,
  sym_prim5 = 132,
  sym_function_call = 133,
  sym_modifier = 134,
  sym_access = 135,
  sym__primitive = 136,
  sym_lambda = 137,
  sym_modulation = 138,
  sym_modulators = 139,
  sym_modulator = 140,
  sym_parameters = 141,
  sym_arguments = 142,
  sym__argument = 143,
  sym_pattern = 144,
  sym_rules = 145,
  sym_rule = 146,
  sym_recursive_arg = 147,
  sym_sequential_arg = 148,
  sym_split_arg = 149,
  sym_merge_arg = 150,
  sym_iteration = 151,
  sym_with_environment = 152,
  sym_environment = 153,
  sym_letrec_environment = 154,
  sym_rec_environment = 155,
  sym_recinition = 156,
  sym_substitution = 157,
  sym_substitutions = 158,
  sym_ffunction = 159,
  sym_fconst = 160,
  sym_fvariable = 161,
  sym_signature = 162,
  sym_parameter_types = 163,
  sym__include_file = 164,
  sym_function_names = 165,
  sym__func_name = 166,
  sym__type = 167,
  sym__infix = 168,
  sym__prim1 = 169,
  sym__prim2 = 170,
  sym__prim3 = 171,
  sym__prim4 = 172,
  sym__prim5 = 173,
  sym__modifier = 174,
  sym_one_sample_delay = 175,
  sym_sub = 176,
  sym_or = 177,
  sym_component = 178,
  sym_library = 179,
  sym__number = 180,
  sym_documentation = 181,
  sym__doc_content = 182,
  sym__special_doc_tag = 183,
  sym__binary_composition = 184,
  sym_recursive = 185,
  sym_sequential = 186,
  sym_split = 187,
  sym_merge = 188,
  sym_parallel = 189,
  sym_variants = 190,
  sym__variant = 191,
  sym_id = 192,
  sym_negate_id = 193,
  aux_sym_program_repeat1 = 194,
  aux_sym_modulators_repeat1 = 195,
  aux_sym_parameters_repeat1 = 196,
  aux_sym_arguments_repeat1 = 197,
  aux_sym_rules_repeat1 = 198,
  aux_sym_environment_repeat1 = 199,
  aux_sym_rec_environment_repeat1 = 200,
  aux_sym_parameter_types_repeat1 = 201,
  aux_sym_documentation_repeat1 = 202,
  aux_sym_variants_repeat1 = 203,
  aux_sym_id_repeat1 = 204,
  alias_sym_float = 205,
  alias_sym_function_name = 206,
  alias_sym_parameter = 207,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_case] = "case",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_TILDE] = "~",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_COLON_GT] = ":>",
  [sym_par] = "par",
  [sym_seq] = "seq",
  [sym_sum] = "sum",
  [sym_prod] = "prod",
  [anon_sym_with] = "with",
  [anon_sym_letrec] = "letrec",
  [anon_sym_where] = "where",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_ffunction] = "ffunction",
  [anon_sym_fconstant] = "fconstant",
  [anon_sym_fvariable] = "fvariable",
  [anon_sym_PIPE] = "|",
  [sym_add] = "add",
  [anon_sym_DASH] = "-",
  [sym_mult] = "mult",
  [sym_div] = "div",
  [sym_mod] = "mod",
  [sym_pow] = "pow",
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
  [sym_any_cast] = "any",
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
  [anon_sym_component] = "component",
  [anon_sym_library] = "library",
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
  [sym_fstring] = "fstring",
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
  [sym_modulation] = "modulation",
  [sym_modulators] = "modulators",
  [sym_modulator] = "modulator",
  [sym_parameters] = "parameters",
  [sym_arguments] = "arguments",
  [sym__argument] = "_argument",
  [sym_pattern] = "pattern",
  [sym_rules] = "rules",
  [sym_rule] = "rule",
  [sym_recursive_arg] = "recursive",
  [sym_sequential_arg] = "sequential",
  [sym_split_arg] = "split",
  [sym_merge_arg] = "merge",
  [sym_iteration] = "iteration",
  [sym_with_environment] = "with_environment",
  [sym_environment] = "environment",
  [sym_letrec_environment] = "letrec_environment",
  [sym_rec_environment] = "rec_environment",
  [sym_recinition] = "recinition",
  [sym_substitution] = "substitution",
  [sym_substitutions] = "substitutions",
  [sym_ffunction] = "ffunction",
  [sym_fconst] = "fconst",
  [sym_fvariable] = "fvariable",
  [sym_signature] = "signature",
  [sym_parameter_types] = "parameter_types",
  [sym__include_file] = "_include_file",
  [sym_function_names] = "function_names",
  [sym__func_name] = "_func_name",
  [sym__type] = "_type",
  [sym__infix] = "_infix",
  [sym__prim1] = "_prim1",
  [sym__prim2] = "_prim2",
  [sym__prim3] = "_prim3",
  [sym__prim4] = "_prim4",
  [sym__prim5] = "_prim5",
  [sym__modifier] = "_modifier",
  [sym_one_sample_delay] = "one_sample_delay",
  [sym_sub] = "sub",
  [sym_or] = "or",
  [sym_component] = "component",
  [sym_library] = "library",
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
  [aux_sym_modulators_repeat1] = "modulators_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_rules_repeat1] = "rules_repeat1",
  [aux_sym_environment_repeat1] = "environment_repeat1",
  [aux_sym_rec_environment_repeat1] = "rec_environment_repeat1",
  [aux_sym_parameter_types_repeat1] = "parameter_types_repeat1",
  [aux_sym_documentation_repeat1] = "documentation_repeat1",
  [aux_sym_variants_repeat1] = "variants_repeat1",
  [aux_sym_id_repeat1] = "id_repeat1",
  [alias_sym_float] = "float",
  [alias_sym_function_name] = "function_name",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_COLON_GT] = anon_sym_COLON_GT,
  [sym_par] = sym_par,
  [sym_seq] = sym_seq,
  [sym_sum] = sym_sum,
  [sym_prod] = sym_prod,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_letrec] = anon_sym_letrec,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_ffunction] = anon_sym_ffunction,
  [anon_sym_fconstant] = anon_sym_fconstant,
  [anon_sym_fvariable] = anon_sym_fvariable,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_add] = sym_add,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_mult] = sym_mult,
  [sym_div] = sym_div,
  [sym_mod] = sym_mod,
  [sym_pow] = sym_pow,
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
  [sym_any_cast] = sym_any_cast,
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
  [anon_sym_component] = anon_sym_component,
  [anon_sym_library] = anon_sym_library,
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
  [sym_fstring] = sym_fstring,
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
  [sym_modulation] = sym_modulation,
  [sym_modulators] = sym_modulators,
  [sym_modulator] = sym_modulator,
  [sym_parameters] = sym_parameters,
  [sym_arguments] = sym_arguments,
  [sym__argument] = sym__argument,
  [sym_pattern] = sym_pattern,
  [sym_rules] = sym_rules,
  [sym_rule] = sym_rule,
  [sym_recursive_arg] = sym_recursive,
  [sym_sequential_arg] = sym_sequential,
  [sym_split_arg] = sym_split,
  [sym_merge_arg] = sym_merge,
  [sym_iteration] = sym_iteration,
  [sym_with_environment] = sym_with_environment,
  [sym_environment] = sym_environment,
  [sym_letrec_environment] = sym_letrec_environment,
  [sym_rec_environment] = sym_rec_environment,
  [sym_recinition] = sym_recinition,
  [sym_substitution] = sym_substitution,
  [sym_substitutions] = sym_substitutions,
  [sym_ffunction] = sym_ffunction,
  [sym_fconst] = sym_fconst,
  [sym_fvariable] = sym_fvariable,
  [sym_signature] = sym_signature,
  [sym_parameter_types] = sym_parameter_types,
  [sym__include_file] = sym__include_file,
  [sym_function_names] = sym_function_names,
  [sym__func_name] = sym__func_name,
  [sym__type] = sym__type,
  [sym__infix] = sym__infix,
  [sym__prim1] = sym__prim1,
  [sym__prim2] = sym__prim2,
  [sym__prim3] = sym__prim3,
  [sym__prim4] = sym__prim4,
  [sym__prim5] = sym__prim5,
  [sym__modifier] = sym__modifier,
  [sym_one_sample_delay] = sym_one_sample_delay,
  [sym_sub] = sym_sub,
  [sym_or] = sym_or,
  [sym_component] = sym_component,
  [sym_library] = sym_library,
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
  [aux_sym_modulators_repeat1] = aux_sym_modulators_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_rules_repeat1] = aux_sym_rules_repeat1,
  [aux_sym_environment_repeat1] = aux_sym_environment_repeat1,
  [aux_sym_rec_environment_repeat1] = aux_sym_rec_environment_repeat1,
  [aux_sym_parameter_types_repeat1] = aux_sym_parameter_types_repeat1,
  [aux_sym_documentation_repeat1] = aux_sym_documentation_repeat1,
  [aux_sym_variants_repeat1] = aux_sym_variants_repeat1,
  [aux_sym_id_repeat1] = aux_sym_id_repeat1,
  [alias_sym_float] = alias_sym_float,
  [alias_sym_function_name] = alias_sym_function_name,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
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
  [anon_sym_EQ_GT] = {
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
  [anon_sym_ffunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fconstant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fvariable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [sym_any_cast] = {
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
  [anon_sym_component] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_library] = {
    .visible = true,
    .named = false,
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
  [sym_fstring] = {
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
  [sym_modulation] = {
    .visible = true,
    .named = true,
  },
  [sym_modulators] = {
    .visible = true,
    .named = true,
  },
  [sym_modulator] = {
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
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
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
  [sym_ffunction] = {
    .visible = true,
    .named = true,
  },
  [sym_fconst] = {
    .visible = true,
    .named = true,
  },
  [sym_fvariable] = {
    .visible = true,
    .named = true,
  },
  [sym_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_types] = {
    .visible = true,
    .named = true,
  },
  [sym__include_file] = {
    .visible = false,
    .named = true,
  },
  [sym_function_names] = {
    .visible = true,
    .named = true,
  },
  [sym__func_name] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
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
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_library] = {
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
  [aux_sym_modulators_repeat1] = {
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
  [aux_sym_rules_repeat1] = {
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
  [aux_sym_parameter_types_repeat1] = {
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
  [alias_sym_float] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
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
  field_include_file = 9,
  field_key = 10,
  field_left = 11,
  field_library_file = 12,
  field_local_environment = 13,
  field_name = 14,
  field_num_iters = 15,
  field_operand = 16,
  field_operator = 17,
  field_primitive = 18,
  field_right = 19,
  field_type = 20,
  field_value = 21,
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
  [field_include_file] = "include_file",
  [field_key] = "key",
  [field_left] = "left",
  [field_library_file] = "library_file",
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
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 1},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 19, .length = 2},
  [15] = {.index = 21, .length = 3},
  [17] = {.index = 24, .length = 1},
  [19] = {.index = 25, .length = 1},
  [20] = {.index = 26, .length = 2},
  [21] = {.index = 28, .length = 2},
  [22] = {.index = 30, .length = 1},
  [23] = {.index = 31, .length = 2},
  [24] = {.index = 33, .length = 2},
  [25] = {.index = 35, .length = 1},
  [26] = {.index = 36, .length = 1},
  [27] = {.index = 37, .length = 1},
  [30] = {.index = 38, .length = 3},
  [31] = {.index = 41, .length = 3},
  [32] = {.index = 44, .length = 1},
  [33] = {.index = 45, .length = 1},
  [34] = {.index = 46, .length = 4},
  [35] = {.index = 50, .length = 2},
  [38] = {.index = 52, .length = 2},
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
    {field_name, 0},
  [10] =
    {field_expression, 0},
  [11] =
    {field_operand, 0},
    {field_operator, 1},
  [13] =
    {field_filename, 2},
  [14] =
    {field_type, 0},
  [15] =
    {field_left, 0},
    {field_right, 2},
  [17] =
    {field_expression, 0},
    {field_local_environment, 2},
  [19] =
    {field_definition, 2},
    {field_environment, 0},
  [21] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [24] =
    {field_filename, 3},
  [25] =
    {field_callee, 0},
  [26] =
    {field_operand, 2},
    {field_operator, 0},
  [28] =
    {field_argument, 2},
    {field_primitive, 0},
  [30] =
    {field_primitive, 0},
  [31] =
    {field_name, 0},
    {field_value, 5},
  [33] =
    {field_name, 1},
    {field_value, 6},
  [35] =
    {field_expression, 3},
  [36] =
    {field_include_file, 0},
  [37] =
    {field_type, 0, .inherited = true},
  [38] =
    {field_left, 2},
    {field_operator, 0},
    {field_right, 4},
  [41] =
    {field_include_file, 5, .inherited = true},
    {field_name, 3},
    {field_type, 2, .inherited = true},
  [44] =
    {field_value, 6},
  [45] =
    {field_expression, 4},
  [46] =
    {field_current_iter, 2},
    {field_expression, 6},
    {field_num_iters, 4},
    {field_type, 0},
  [50] =
    {field_include_file, 4, .inherited = true},
    {field_library_file, 6},
  [52] =
    {field_expression, 3},
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_parameter,
  },
  [10] = {
    [0] = sym_int,
  },
  [11] = {
    [0] = alias_sym_float,
  },
  [16] = {
    [1] = alias_sym_parameter,
  },
  [18] = {
    [0] = alias_sym_function_name,
  },
  [28] = {
    [0] = sym_int,
  },
  [29] = {
    [0] = alias_sym_float,
  },
  [36] = {
    [1] = sym_int,
  },
  [37] = {
    [1] = alias_sym_float,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_id, 3,
    sym_id,
    alias_sym_function_name,
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
  [9] = 3,
  [10] = 10,
  [11] = 4,
  [12] = 12,
  [13] = 13,
  [14] = 8,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 6,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 24,
  [26] = 22,
  [27] = 21,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 28,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 32,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 35,
  [43] = 37,
  [44] = 44,
  [45] = 45,
  [46] = 41,
  [47] = 40,
  [48] = 38,
  [49] = 39,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 50,
  [56] = 51,
  [57] = 57,
  [58] = 57,
  [59] = 52,
  [60] = 54,
  [61] = 57,
  [62] = 54,
  [63] = 51,
  [64] = 50,
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
  [79] = 71,
  [80] = 68,
  [81] = 71,
  [82] = 72,
  [83] = 83,
  [84] = 72,
  [85] = 83,
  [86] = 70,
  [87] = 68,
  [88] = 67,
  [89] = 89,
  [90] = 67,
  [91] = 70,
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
  [113] = 66,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 73,
  [128] = 73,
  [129] = 77,
  [130] = 76,
  [131] = 78,
  [132] = 74,
  [133] = 75,
  [134] = 89,
  [135] = 96,
  [136] = 97,
  [137] = 116,
  [138] = 103,
  [139] = 92,
  [140] = 120,
  [141] = 93,
  [142] = 126,
  [143] = 66,
  [144] = 109,
  [145] = 111,
  [146] = 112,
  [147] = 99,
  [148] = 94,
  [149] = 117,
  [150] = 118,
  [151] = 119,
  [152] = 110,
  [153] = 121,
  [154] = 106,
  [155] = 107,
  [156] = 125,
  [157] = 104,
  [158] = 105,
  [159] = 115,
  [160] = 124,
  [161] = 98,
  [162] = 114,
  [163] = 95,
  [164] = 123,
  [165] = 101,
  [166] = 122,
  [167] = 100,
  [168] = 108,
  [169] = 102,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 174,
  [179] = 176,
  [180] = 180,
  [181] = 181,
  [182] = 173,
  [183] = 175,
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
  [205] = 77,
  [206] = 76,
  [207] = 207,
  [208] = 78,
  [209] = 209,
  [210] = 74,
  [211] = 75,
  [212] = 191,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 219,
  [221] = 218,
  [222] = 222,
  [223] = 216,
  [224] = 209,
  [225] = 207,
  [226] = 226,
  [227] = 226,
  [228] = 89,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 232,
  [238] = 234,
  [239] = 239,
  [240] = 239,
  [241] = 233,
  [242] = 242,
  [243] = 243,
  [244] = 242,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 249,
  [251] = 251,
  [252] = 251,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 255,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 264,
  [266] = 256,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 281,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 279,
  [296] = 278,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 298,
  [301] = 301,
  [302] = 290,
  [303] = 275,
  [304] = 291,
  [305] = 305,
  [306] = 306,
  [307] = 306,
  [308] = 301,
  [309] = 299,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 311,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 331,
  [354] = 354,
  [355] = 350,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 336,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 346,
  [373] = 345,
  [374] = 374,
  [375] = 375,
  [376] = 344,
  [377] = 377,
  [378] = 350,
  [379] = 379,
  [380] = 380,
  [381] = 358,
  [382] = 360,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 361,
  [388] = 388,
  [389] = 354,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 331,
  [395] = 395,
  [396] = 351,
  [397] = 397,
  [398] = 377,
  [399] = 332,
  [400] = 339,
  [401] = 380,
  [402] = 375,
  [403] = 359,
  [404] = 404,
  [405] = 356,
  [406] = 397,
  [407] = 369,
  [408] = 368,
  [409] = 393,
  [410] = 410,
  [411] = 330,
  [412] = 367,
  [413] = 413,
  [414] = 371,
  [415] = 395,
  [416] = 413,
  [417] = 384,
  [418] = 383,
  [419] = 419,
  [420] = 363,
  [421] = 362,
  [422] = 392,
  [423] = 374,
  [424] = 404,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(326);
      if (lookahead == '!') ADVANCE(456);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '%') ADVANCE(384);
      if (lookahead == '&') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(377);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '.') ADVANCE(337);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == ';') ADVANCE(327);
      if (lookahead == '<') ADVANCE(391);
      if (lookahead == '=') ADVANCE(328);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '@') ADVANCE(398);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(340);
      if (lookahead == ']') ADVANCE(343);
      if (lookahead == '^') ADVANCE(385);
      if (lookahead == '_') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'h') ADVANCE(145);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(117);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'q') ADVANCE(308);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(141);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == '{') ADVANCE(349);
      if (lookahead == '|') ADVANCE(375);
      if (lookahead == '}') ADVANCE(350);
      if (lookahead == '~') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(456);
      if (lookahead == '%') ADVANCE(384);
      if (lookahead == '&') ADVANCE(386);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(377);
      if (lookahead == '-') ADVANCE(380);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '<') ADVANCE(392);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '@') ADVANCE(398);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(340);
      if (lookahead == '^') ADVANCE(385);
      if (lookahead == '_') ADVANCE(455);
      if (lookahead == 'a') ADVANCE(525);
      if (lookahead == 'c') ADVANCE(512);
      if (lookahead == 'e') ADVANCE(624);
      if (lookahead == 'f') ADVANCE(536);
      if (lookahead == 'h') ADVANCE(587);
      if (lookahead == 'i') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead == 'm') ADVANCE(508);
      if (lookahead == 'p') ADVANCE(511);
      if (lookahead == 'r') ADVANCE(546);
      if (lookahead == 's') ADVANCE(552);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead == 'x') ADVANCE(652);
      if (lookahead == '|') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(384);
      if (lookahead == '&') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == ';') ADVANCE(327);
      if (lookahead == '<') ADVANCE(391);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '@') ADVANCE(398);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == ']') ADVANCE(343);
      if (lookahead == '^') ADVANCE(385);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(564);
      if (lookahead == 'w') ADVANCE(596);
      if (lookahead == 'x') ADVANCE(652);
      if (lookahead == '|') ADVANCE(375);
      if (lookahead == '~') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(384);
      if (lookahead == '&') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == ';') ADVANCE(327);
      if (lookahead == '<') ADVANCE(391);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '@') ADVANCE(398);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == ']') ADVANCE(343);
      if (lookahead == '^') ADVANCE(385);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'w') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == '|') ADVANCE(375);
      if (lookahead == '~') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(384);
      if (lookahead == '&') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == '<') ADVANCE(391);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '@') ADVANCE(398);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == '^') ADVANCE(385);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(652);
      if (lookahead == '|') ADVANCE(375);
      if (lookahead == '~') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(384);
      if (lookahead == '&') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(378);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == ';') ADVANCE(327);
      if (lookahead == '<') ADVANCE(391);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '@') ADVANCE(398);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == ']') ADVANCE(343);
      if (lookahead == '^') ADVANCE(385);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'w') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == '|') ADVANCE(375);
      if (lookahead == '~') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(384);
      if (lookahead == '&') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == ':') ADVANCE(346);
      if (lookahead == '<') ADVANCE(391);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '@') ADVANCE(398);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == '^') ADVANCE(385);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == '|') ADVANCE(375);
      if (lookahead == '~') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(384);
      if (lookahead == '&') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == '<') ADVANCE(391);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '@') ADVANCE(398);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == '^') ADVANCE(385);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(652);
      if (lookahead == '|') ADVANCE(375);
      if (lookahead == '~') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(384);
      if (lookahead == '&') ADVANCE(386);
      if (lookahead == '\'') ADVANCE(368);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(376);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(381);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(383);
      if (lookahead == ':') ADVANCE(345);
      if (lookahead == '<') ADVANCE(391);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(394);
      if (lookahead == '@') ADVANCE(398);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == '^') ADVANCE(385);
      if (lookahead == 'x') ADVANCE(218);
      if (lookahead == '|') ADVANCE(375);
      if (lookahead == '~') ADVANCE(352);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(329);
      if (lookahead == ')') ADVANCE(330);
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(328);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '|') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == ']') ADVANCE(343);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(646);
      if (lookahead == 'f') ADVANCE(582);
      if (lookahead == 'q') ADVANCE(718);
      if (lookahead == 's') ADVANCE(583);
      if (lookahead == '}') ADVANCE(350);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(502);
      if (lookahead == '\\') ADVANCE(323);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(730);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(729);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(335);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '>') ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(403);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(467);
      if (lookahead == '3') ADVANCE(469);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(504);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(646);
      if (lookahead == 'f') ADVANCE(582);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == 'q') ADVANCE(718);
      if (lookahead == 's') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 25:
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(483);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(397);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(396);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(342);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(351);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(481);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(482);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(489);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(485);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(490);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(487);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(491);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(486);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(488);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(492);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'o') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'v') ADVANCE(153);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(303);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(262);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(235);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(175);
      END_STATE();
    case 77:
      if (lookahead == 'b') ADVANCE(176);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(365);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(216);
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(294);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(168);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(440);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(311);
      if (lookahead == 'w') ADVANCE(304);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(305);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 103:
      if (lookahead == 'd') ADVANCE(156);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(307);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'q') ADVANCE(253);
      if (lookahead == 'u') ADVANCE(181);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(450);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 135:
      if (lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(401);
      if (lookahead == 'w') ADVANCE(126);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(493);
      END_STATE();
    case 139:
      if (lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(363);
      END_STATE();
    case 143:
      if (lookahead == 'h') ADVANCE(448);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(316);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(263);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead == 'q') ADVANCE(357);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(133);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(457);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(359);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == 'n') ADVANCE(295);
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(236);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(436);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(419);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(421);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(496);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(494);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(500);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(399);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 238:
      if (lookahead == 'p') ADVANCE(234);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 240:
      if (lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(264);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(265);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(266);
      END_STATE();
    case 244:
      if (lookahead == 'q') ADVANCE(309);
      END_STATE();
    case 245:
      if (lookahead == 'q') ADVANCE(313);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(355);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(387);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(409);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(417);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(475);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(299);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(286);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(413);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(471);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(473);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(459);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 303:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 304:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 305:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 306:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 307:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 308:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 309:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 310:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 311:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 312:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 313:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 314:
      if (lookahead == 'w') ADVANCE(434);
      END_STATE();
    case 315:
      if (lookahead == 'x') ADVANCE(438);
      END_STATE();
    case 316:
      if (lookahead == 'x') ADVANCE(446);
      END_STATE();
    case 317:
      if (lookahead == 'x') ADVANCE(125);
      END_STATE();
    case 318:
      if (lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 319:
      if (lookahead == 'y') ADVANCE(461);
      END_STATE();
    case 320:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      END_STATE();
    case 321:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 322:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      END_STATE();
    case 323:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 324:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(730);
      if (lookahead == '\r') ADVANCE(731);
      END_STATE();
    case 325:
      if (eof) ADVANCE(326);
      if (lookahead == '.') ADVANCE(336);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '<') ADVANCE(187);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(550);
      if (lookahead == 'f') ADVANCE(582);
      if (lookahead == 'i') ADVANCE(613);
      if (lookahead == 'q') ADVANCE(718);
      if (lookahead == 's') ADVANCE(583);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(325)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(504);
      if (lookahead == '>') ADVANCE(354);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(354);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_par);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_letrec);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_letrec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_ffunction);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_ffunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_fconstant);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_fconstant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_fvariable);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_fvariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_add);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == '>') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(342);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_mult);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_div);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_mod);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_pow);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_lshift);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_rshift);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == ':') ADVANCE(353);
      if (lookahead == '<') ADVANCE(389);
      if (lookahead == '=') ADVANCE(393);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '<') ADVANCE(389);
      if (lookahead == '=') ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(395);
      if (lookahead == '>') ADVANCE(390);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_delay);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_exp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(20);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_log10);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_log10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_sqrt);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_sqrt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_abs);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_abs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_floor);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_floor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_ceil);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_ceil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_rint);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_rint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_round);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_round);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_acos);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_acos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_asin);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_asin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(444);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_cos);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_cos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_sin);
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_tan);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_tan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_any_cast);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_pow_fun);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_pow_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_min);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_fmod);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_fmod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_remainder);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_remainder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_atan2);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_atan2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_prefix_prim);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_prefix_prim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_attach);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_attach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_enable);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_enable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(397);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_library);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_library);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_rdtable);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_rdtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_rwtable);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_rwtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_select2);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_select2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_select3);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_select3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_lowest);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_lowest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_highest);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_highest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_assertbounds);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_assertbounds);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(479);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead == 'f') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(480);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(484);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_single_precision);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_single_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_double_precision);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_double_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_quad_precision);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_quad_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_fstring);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '0') ADVANCE(404);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '2') ADVANCE(468);
      if (lookahead == '3') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(725);
      if (lookahead == 'e') ADVANCE(614);
      if (lookahead == 'i') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == 'o') ADVANCE(723);
      if (lookahead == 'r') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(692);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'o') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(702);
      if (lookahead == 'o') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(629);
      if (lookahead == 't') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead == 'v') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(687);
      if (lookahead == 'c') ADVANCE(653);
      if (lookahead == 's') ADVANCE(594);
      if (lookahead == 't') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(656);
      if (lookahead == 'f') ADVANCE(720);
      if (lookahead == 'l') ADVANCE(645);
      if (lookahead == 'm') ADVANCE(649);
      if (lookahead == 'v') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'i') ADVANCE(638);
      if (lookahead == 'o') ADVANCE(721);
      if (lookahead == 'w') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead == 'i') ADVANCE(626);
      if (lookahead == 'q') ADVANCE(677);
      if (lookahead == 'u') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(575);
      if (lookahead == 'o') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(402);
      if (lookahead == 'w') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(526);
      if (lookahead == 'o') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 's') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(565);
      if (lookahead == 'q') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(665);
      if (lookahead == 'n') ADVANCE(713);
      if (lookahead == 's') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(520);
      if (lookahead == 'x') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'w') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'y') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(728);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(730);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(730);
      if (lookahead == '\\') ADVANCE(324);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 325},
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
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
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
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 9},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 325},
  [171] = {.lex_state = 325},
  [172] = {.lex_state = 11},
  [173] = {.lex_state = 11},
  [174] = {.lex_state = 11},
  [175] = {.lex_state = 11},
  [176] = {.lex_state = 11},
  [177] = {.lex_state = 11},
  [178] = {.lex_state = 11},
  [179] = {.lex_state = 11},
  [180] = {.lex_state = 11},
  [181] = {.lex_state = 11},
  [182] = {.lex_state = 11},
  [183] = {.lex_state = 11},
  [184] = {.lex_state = 11},
  [185] = {.lex_state = 25},
  [186] = {.lex_state = 25},
  [187] = {.lex_state = 25},
  [188] = {.lex_state = 325},
  [189] = {.lex_state = 325},
  [190] = {.lex_state = 325},
  [191] = {.lex_state = 325},
  [192] = {.lex_state = 325},
  [193] = {.lex_state = 325},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 23},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 23},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 11},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 6},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 11},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 7},
  [237] = {.lex_state = 7},
  [238] = {.lex_state = 7},
  [239] = {.lex_state = 6},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 7},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 10},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 6},
  [253] = {.lex_state = 10},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 10},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 10},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 10},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 24},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 10},
  [268] = {.lex_state = 10},
  [269] = {.lex_state = 10},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 11},
  [279] = {.lex_state = 11},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 10},
  [282] = {.lex_state = 10},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 10},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 11},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 16},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 11},
  [296] = {.lex_state = 11},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 10},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 11},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 10},
  [307] = {.lex_state = 10},
  [308] = {.lex_state = 10},
  [309] = {.lex_state = 10},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 10},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 10},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 10},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 10},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 10},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 10},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 325},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 10},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 325},
  [394] = {.lex_state = 10},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 325},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(1),
    [sym_par] = ACTIONS(1),
    [sym_seq] = ACTIONS(1),
    [sym_sum] = ACTIONS(1),
    [sym_prod] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_letrec] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_ffunction] = ACTIONS(1),
    [anon_sym_fconstant] = ACTIONS(1),
    [anon_sym_fvariable] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_add] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_mult] = ACTIONS(1),
    [sym_div] = ACTIONS(1),
    [sym_mod] = ACTIONS(1),
    [sym_pow] = ACTIONS(1),
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
    [sym_any_cast] = ACTIONS(1),
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
    [anon_sym_component] = ACTIONS(1),
    [anon_sym_library] = ACTIONS(1),
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
    [sym_program] = STATE(390),
    [sym__statement] = STATE(171),
    [sym__definition] = STATE(171),
    [sym_definition] = STATE(389),
    [sym_function_definition] = STATE(389),
    [sym__metadata_definition] = STATE(171),
    [sym_global_metadata] = STATE(388),
    [sym_function_metadata] = STATE(388),
    [sym_file_import] = STATE(171),
    [sym_documentation] = STATE(171),
    [sym_variants] = STATE(261),
    [sym__variant] = STATE(207),
    [sym_id] = STATE(320),
    [aux_sym_program_repeat1] = STATE(171),
    [aux_sym_variants_repeat1] = STATE(207),
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
    [sym__expression] = STATE(229),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(229),
    [sym_letrec_environment] = STATE(229),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(229),
    [sym_recursive] = STATE(229),
    [sym_sequential] = STATE(229),
    [sym_split] = STATE(229),
    [sym_merge] = STATE(229),
    [sym_parallel] = STATE(229),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [3] = {
    [sym__expression] = STATE(218),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(218),
    [sym_letrec_environment] = STATE(218),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(218),
    [sym_recursive] = STATE(218),
    [sym_sequential] = STATE(218),
    [sym_split] = STATE(218),
    [sym_merge] = STATE(218),
    [sym_parallel] = STATE(218),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [4] = {
    [sym__expression] = STATE(216),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(216),
    [sym_letrec_environment] = STATE(216),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(216),
    [sym_recursive] = STATE(216),
    [sym_sequential] = STATE(216),
    [sym_split] = STATE(216),
    [sym_merge] = STATE(216),
    [sym_parallel] = STATE(216),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [5] = {
    [sym__expression] = STATE(222),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(222),
    [sym_letrec_environment] = STATE(222),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(222),
    [sym_recursive] = STATE(222),
    [sym_sequential] = STATE(222),
    [sym_split] = STATE(222),
    [sym_merge] = STATE(222),
    [sym_parallel] = STATE(222),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [6] = {
    [sym__expression] = STATE(220),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(220),
    [sym_letrec_environment] = STATE(220),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(220),
    [sym_recursive] = STATE(220),
    [sym_sequential] = STATE(220),
    [sym_split] = STATE(220),
    [sym_merge] = STATE(220),
    [sym_parallel] = STATE(220),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [7] = {
    [sym__expression] = STATE(215),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(215),
    [sym_letrec_environment] = STATE(215),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(215),
    [sym_recursive] = STATE(215),
    [sym_sequential] = STATE(215),
    [sym_split] = STATE(215),
    [sym_merge] = STATE(215),
    [sym_parallel] = STATE(215),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [8] = {
    [sym__expression] = STATE(226),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(226),
    [sym_letrec_environment] = STATE(226),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(226),
    [sym_recursive] = STATE(226),
    [sym_sequential] = STATE(226),
    [sym_split] = STATE(226),
    [sym_merge] = STATE(226),
    [sym_parallel] = STATE(226),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [9] = {
    [sym__expression] = STATE(221),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(221),
    [sym_letrec_environment] = STATE(221),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(221),
    [sym_recursive] = STATE(221),
    [sym_sequential] = STATE(221),
    [sym_split] = STATE(221),
    [sym_merge] = STATE(221),
    [sym_parallel] = STATE(221),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [10] = {
    [sym__expression] = STATE(202),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(202),
    [sym_letrec_environment] = STATE(202),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(202),
    [sym_recursive] = STATE(202),
    [sym_sequential] = STATE(202),
    [sym_split] = STATE(202),
    [sym_merge] = STATE(202),
    [sym_parallel] = STATE(202),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [11] = {
    [sym__expression] = STATE(223),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(223),
    [sym_letrec_environment] = STATE(223),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(223),
    [sym_recursive] = STATE(223),
    [sym_sequential] = STATE(223),
    [sym_split] = STATE(223),
    [sym_merge] = STATE(223),
    [sym_parallel] = STATE(223),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [12] = {
    [sym__expression] = STATE(204),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(204),
    [sym_letrec_environment] = STATE(204),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(204),
    [sym_recursive] = STATE(204),
    [sym_sequential] = STATE(204),
    [sym_split] = STATE(204),
    [sym_merge] = STATE(204),
    [sym_parallel] = STATE(204),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [13] = {
    [sym__expression] = STATE(214),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(214),
    [sym_letrec_environment] = STATE(214),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(214),
    [sym_recursive] = STATE(214),
    [sym_sequential] = STATE(214),
    [sym_split] = STATE(214),
    [sym_merge] = STATE(214),
    [sym_parallel] = STATE(214),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [14] = {
    [sym__expression] = STATE(227),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(227),
    [sym_letrec_environment] = STATE(227),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(227),
    [sym_recursive] = STATE(227),
    [sym_sequential] = STATE(227),
    [sym_split] = STATE(227),
    [sym_merge] = STATE(227),
    [sym_parallel] = STATE(227),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [15] = {
    [sym__expression] = STATE(213),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(213),
    [sym_letrec_environment] = STATE(213),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(213),
    [sym_recursive] = STATE(213),
    [sym_sequential] = STATE(213),
    [sym_split] = STATE(213),
    [sym_merge] = STATE(213),
    [sym_parallel] = STATE(213),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [16] = {
    [sym__expression] = STATE(217),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(217),
    [sym_letrec_environment] = STATE(217),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(217),
    [sym_recursive] = STATE(217),
    [sym_sequential] = STATE(217),
    [sym_split] = STATE(217),
    [sym_merge] = STATE(217),
    [sym_parallel] = STATE(217),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [17] = {
    [sym__expression] = STATE(203),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(203),
    [sym_letrec_environment] = STATE(203),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(203),
    [sym_recursive] = STATE(203),
    [sym_sequential] = STATE(203),
    [sym_split] = STATE(203),
    [sym_merge] = STATE(203),
    [sym_parallel] = STATE(203),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [18] = {
    [sym__expression] = STATE(199),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(199),
    [sym_letrec_environment] = STATE(199),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(199),
    [sym_recursive] = STATE(199),
    [sym_sequential] = STATE(199),
    [sym_split] = STATE(199),
    [sym_merge] = STATE(199),
    [sym_parallel] = STATE(199),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [19] = {
    [sym__expression] = STATE(219),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(219),
    [sym_letrec_environment] = STATE(219),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(219),
    [sym_recursive] = STATE(219),
    [sym_sequential] = STATE(219),
    [sym_split] = STATE(219),
    [sym_merge] = STATE(219),
    [sym_parallel] = STATE(219),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [20] = {
    [sym__expression] = STATE(201),
    [sym__infix_expression] = STATE(69),
    [sym_infix] = STATE(69),
    [sym_partial] = STATE(69),
    [sym_prefix] = STATE(69),
    [sym_prim1] = STATE(69),
    [sym_prim2] = STATE(69),
    [sym_prim3] = STATE(69),
    [sym_prim4] = STATE(69),
    [sym_prim5] = STATE(69),
    [sym_function_call] = STATE(69),
    [sym_modifier] = STATE(69),
    [sym_access] = STATE(69),
    [sym__primitive] = STATE(69),
    [sym_lambda] = STATE(69),
    [sym_modulation] = STATE(69),
    [sym_pattern] = STATE(69),
    [sym_iteration] = STATE(69),
    [sym_with_environment] = STATE(201),
    [sym_letrec_environment] = STATE(201),
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(69),
    [sym_library] = STATE(69),
    [sym__number] = STATE(69),
    [sym__binary_composition] = STATE(201),
    [sym_recursive] = STATE(201),
    [sym_sequential] = STATE(201),
    [sym_split] = STATE(201),
    [sym_merge] = STATE(201),
    [sym_parallel] = STATE(201),
    [sym_id] = STATE(69),
    [sym_negate_id] = STATE(69),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(61),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [21] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym_arguments] = STATE(368),
    [sym__argument] = STATE(231),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(231),
    [sym_sequential_arg] = STATE(231),
    [sym_split_arg] = STATE(231),
    [sym_merge_arg] = STATE(231),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [22] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym_arguments] = STATE(369),
    [sym__argument] = STATE(231),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(231),
    [sym_sequential_arg] = STATE(231),
    [sym_split_arg] = STATE(231),
    [sym_merge_arg] = STATE(231),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [23] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym_arguments] = STATE(391),
    [sym__argument] = STATE(231),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(231),
    [sym_sequential_arg] = STATE(231),
    [sym_split_arg] = STATE(231),
    [sym_merge_arg] = STATE(231),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [24] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym_arguments] = STATE(336),
    [sym__argument] = STATE(231),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(231),
    [sym_sequential_arg] = STATE(231),
    [sym_split_arg] = STATE(231),
    [sym_merge_arg] = STATE(231),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [25] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym_arguments] = STATE(364),
    [sym__argument] = STATE(231),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(231),
    [sym_sequential_arg] = STATE(231),
    [sym_split_arg] = STATE(231),
    [sym_merge_arg] = STATE(231),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [26] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym_arguments] = STATE(407),
    [sym__argument] = STATE(231),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(231),
    [sym_sequential_arg] = STATE(231),
    [sym_split_arg] = STATE(231),
    [sym_merge_arg] = STATE(231),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [27] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym_arguments] = STATE(408),
    [sym__argument] = STATE(231),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(231),
    [sym_sequential_arg] = STATE(231),
    [sym_split_arg] = STATE(231),
    [sym_merge_arg] = STATE(231),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [28] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym_arguments] = STATE(411),
    [sym__argument] = STATE(231),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(231),
    [sym_sequential_arg] = STATE(231),
    [sym_split_arg] = STATE(231),
    [sym_merge_arg] = STATE(231),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [29] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym_arguments] = STATE(412),
    [sym__argument] = STATE(231),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(231),
    [sym_sequential_arg] = STATE(231),
    [sym_split_arg] = STATE(231),
    [sym_merge_arg] = STATE(231),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [30] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym_arguments] = STATE(367),
    [sym__argument] = STATE(231),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(231),
    [sym_sequential_arg] = STATE(231),
    [sym_split_arg] = STATE(231),
    [sym_merge_arg] = STATE(231),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [31] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym_arguments] = STATE(330),
    [sym__argument] = STATE(231),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(231),
    [sym_sequential_arg] = STATE(231),
    [sym_split_arg] = STATE(231),
    [sym_merge_arg] = STATE(231),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [32] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym__argument] = STATE(230),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(230),
    [sym_sequential_arg] = STATE(230),
    [sym_split_arg] = STATE(230),
    [sym_merge_arg] = STATE(230),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [33] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [34] = {
    [sym__infix_expression] = STATE(85),
    [sym_infix] = STATE(85),
    [sym_partial] = STATE(85),
    [sym_prefix] = STATE(85),
    [sym_prim1] = STATE(85),
    [sym_prim2] = STATE(85),
    [sym_prim3] = STATE(85),
    [sym_prim4] = STATE(85),
    [sym_prim5] = STATE(85),
    [sym_function_call] = STATE(85),
    [sym_modifier] = STATE(85),
    [sym_access] = STATE(85),
    [sym__primitive] = STATE(85),
    [sym_lambda] = STATE(85),
    [sym_modulation] = STATE(85),
    [sym__argument] = STATE(241),
    [sym_pattern] = STATE(85),
    [sym_recursive_arg] = STATE(241),
    [sym_sequential_arg] = STATE(241),
    [sym_split_arg] = STATE(241),
    [sym_merge_arg] = STATE(241),
    [sym_iteration] = STATE(85),
    [sym_substitution] = STATE(85),
    [sym_ffunction] = STATE(85),
    [sym_fconst] = STATE(85),
    [sym_fvariable] = STATE(85),
    [sym__infix] = STATE(148),
    [sym__prim1] = STATE(138),
    [sym__prim2] = STATE(154),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(152),
    [sym__prim5] = STATE(145),
    [sym_sub] = STATE(148),
    [sym_or] = STATE(148),
    [sym_component] = STATE(85),
    [sym_library] = STATE(85),
    [sym__number] = STATE(85),
    [sym_id] = STATE(85),
    [sym_negate_id] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_environment] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [sym_par] = ACTIONS(83),
    [sym_seq] = ACTIONS(83),
    [sym_sum] = ACTIONS(83),
    [sym_prod] = ACTIONS(83),
    [anon_sym_ffunction] = ACTIONS(85),
    [anon_sym_fconstant] = ACTIONS(87),
    [anon_sym_fvariable] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [sym_add] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(95),
    [sym_mult] = ACTIONS(97),
    [sym_div] = ACTIONS(97),
    [sym_mod] = ACTIONS(97),
    [sym_pow] = ACTIONS(97),
    [sym_and] = ACTIONS(97),
    [sym_xor] = ACTIONS(93),
    [sym_lshift] = ACTIONS(97),
    [sym_rshift] = ACTIONS(97),
    [sym_lt] = ACTIONS(93),
    [sym_le] = ACTIONS(97),
    [sym_gt] = ACTIONS(93),
    [sym_ge] = ACTIONS(97),
    [sym_eq] = ACTIONS(97),
    [sym_neq] = ACTIONS(97),
    [sym_delay] = ACTIONS(97),
    [sym_exp] = ACTIONS(99),
    [sym_log] = ACTIONS(99),
    [sym_log10] = ACTIONS(99),
    [sym_sqrt] = ACTIONS(99),
    [sym_abs] = ACTIONS(99),
    [sym_floor] = ACTIONS(99),
    [sym_ceil] = ACTIONS(99),
    [sym_rint] = ACTIONS(99),
    [sym_round] = ACTIONS(99),
    [sym_acos] = ACTIONS(99),
    [sym_asin] = ACTIONS(99),
    [sym_atan] = ACTIONS(99),
    [sym_cos] = ACTIONS(99),
    [sym_sin] = ACTIONS(99),
    [sym_tan] = ACTIONS(99),
    [sym_int_cast] = ACTIONS(99),
    [sym_float_cast] = ACTIONS(99),
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
    [sym_wire] = ACTIONS(103),
    [sym_cut] = ACTIONS(103),
    [sym_mem] = ACTIONS(103),
    [anon_sym_component] = ACTIONS(105),
    [anon_sym_library] = ACTIONS(107),
    [sym_rdtable] = ACTIONS(109),
    [sym_rwtable] = ACTIONS(111),
    [sym_select2] = ACTIONS(109),
    [sym_select3] = ACTIONS(113),
    [sym_lowest] = ACTIONS(99),
    [sym_highest] = ACTIONS(99),
    [sym_assertbounds] = ACTIONS(109),
    [sym_int] = ACTIONS(103),
    [sym_real] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [sym__id] = ACTIONS(119),
  },
  [35] = {
    [sym__infix_expression] = STATE(85),
    [sym_infix] = STATE(85),
    [sym_partial] = STATE(85),
    [sym_prefix] = STATE(85),
    [sym_prim1] = STATE(85),
    [sym_prim2] = STATE(85),
    [sym_prim3] = STATE(85),
    [sym_prim4] = STATE(85),
    [sym_prim5] = STATE(85),
    [sym_function_call] = STATE(85),
    [sym_modifier] = STATE(85),
    [sym_access] = STATE(85),
    [sym__primitive] = STATE(85),
    [sym_lambda] = STATE(85),
    [sym_modulation] = STATE(85),
    [sym__argument] = STATE(237),
    [sym_pattern] = STATE(85),
    [sym_recursive_arg] = STATE(237),
    [sym_sequential_arg] = STATE(237),
    [sym_split_arg] = STATE(237),
    [sym_merge_arg] = STATE(237),
    [sym_iteration] = STATE(85),
    [sym_substitution] = STATE(85),
    [sym_ffunction] = STATE(85),
    [sym_fconst] = STATE(85),
    [sym_fvariable] = STATE(85),
    [sym__infix] = STATE(148),
    [sym__prim1] = STATE(138),
    [sym__prim2] = STATE(154),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(152),
    [sym__prim5] = STATE(145),
    [sym_sub] = STATE(148),
    [sym_or] = STATE(148),
    [sym_component] = STATE(85),
    [sym_library] = STATE(85),
    [sym__number] = STATE(85),
    [sym_id] = STATE(85),
    [sym_negate_id] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_environment] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [sym_par] = ACTIONS(83),
    [sym_seq] = ACTIONS(83),
    [sym_sum] = ACTIONS(83),
    [sym_prod] = ACTIONS(83),
    [anon_sym_ffunction] = ACTIONS(85),
    [anon_sym_fconstant] = ACTIONS(87),
    [anon_sym_fvariable] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [sym_add] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(95),
    [sym_mult] = ACTIONS(97),
    [sym_div] = ACTIONS(97),
    [sym_mod] = ACTIONS(97),
    [sym_pow] = ACTIONS(97),
    [sym_and] = ACTIONS(97),
    [sym_xor] = ACTIONS(93),
    [sym_lshift] = ACTIONS(97),
    [sym_rshift] = ACTIONS(97),
    [sym_lt] = ACTIONS(93),
    [sym_le] = ACTIONS(97),
    [sym_gt] = ACTIONS(93),
    [sym_ge] = ACTIONS(97),
    [sym_eq] = ACTIONS(97),
    [sym_neq] = ACTIONS(97),
    [sym_delay] = ACTIONS(97),
    [sym_exp] = ACTIONS(99),
    [sym_log] = ACTIONS(99),
    [sym_log10] = ACTIONS(99),
    [sym_sqrt] = ACTIONS(99),
    [sym_abs] = ACTIONS(99),
    [sym_floor] = ACTIONS(99),
    [sym_ceil] = ACTIONS(99),
    [sym_rint] = ACTIONS(99),
    [sym_round] = ACTIONS(99),
    [sym_acos] = ACTIONS(99),
    [sym_asin] = ACTIONS(99),
    [sym_atan] = ACTIONS(99),
    [sym_cos] = ACTIONS(99),
    [sym_sin] = ACTIONS(99),
    [sym_tan] = ACTIONS(99),
    [sym_int_cast] = ACTIONS(99),
    [sym_float_cast] = ACTIONS(99),
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
    [sym_wire] = ACTIONS(103),
    [sym_cut] = ACTIONS(103),
    [sym_mem] = ACTIONS(103),
    [anon_sym_component] = ACTIONS(105),
    [anon_sym_library] = ACTIONS(107),
    [sym_rdtable] = ACTIONS(109),
    [sym_rwtable] = ACTIONS(111),
    [sym_select2] = ACTIONS(109),
    [sym_select3] = ACTIONS(113),
    [sym_lowest] = ACTIONS(99),
    [sym_highest] = ACTIONS(99),
    [sym_assertbounds] = ACTIONS(109),
    [sym_int] = ACTIONS(103),
    [sym_real] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [sym__id] = ACTIONS(119),
  },
  [36] = {
    [sym__infix_expression] = STATE(85),
    [sym_infix] = STATE(85),
    [sym_partial] = STATE(85),
    [sym_prefix] = STATE(85),
    [sym_prim1] = STATE(85),
    [sym_prim2] = STATE(85),
    [sym_prim3] = STATE(85),
    [sym_prim4] = STATE(85),
    [sym_prim5] = STATE(85),
    [sym_function_call] = STATE(85),
    [sym_modifier] = STATE(85),
    [sym_access] = STATE(85),
    [sym__primitive] = STATE(85),
    [sym_lambda] = STATE(85),
    [sym_modulation] = STATE(85),
    [sym__argument] = STATE(230),
    [sym_pattern] = STATE(85),
    [sym_recursive_arg] = STATE(230),
    [sym_sequential_arg] = STATE(230),
    [sym_split_arg] = STATE(230),
    [sym_merge_arg] = STATE(230),
    [sym_iteration] = STATE(85),
    [sym_substitution] = STATE(85),
    [sym_ffunction] = STATE(85),
    [sym_fconst] = STATE(85),
    [sym_fvariable] = STATE(85),
    [sym__infix] = STATE(148),
    [sym__prim1] = STATE(138),
    [sym__prim2] = STATE(154),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(152),
    [sym__prim5] = STATE(145),
    [sym_sub] = STATE(148),
    [sym_or] = STATE(148),
    [sym_component] = STATE(85),
    [sym_library] = STATE(85),
    [sym__number] = STATE(85),
    [sym_id] = STATE(85),
    [sym_negate_id] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_environment] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [sym_par] = ACTIONS(83),
    [sym_seq] = ACTIONS(83),
    [sym_sum] = ACTIONS(83),
    [sym_prod] = ACTIONS(83),
    [anon_sym_ffunction] = ACTIONS(85),
    [anon_sym_fconstant] = ACTIONS(87),
    [anon_sym_fvariable] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [sym_add] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(95),
    [sym_mult] = ACTIONS(97),
    [sym_div] = ACTIONS(97),
    [sym_mod] = ACTIONS(97),
    [sym_pow] = ACTIONS(97),
    [sym_and] = ACTIONS(97),
    [sym_xor] = ACTIONS(93),
    [sym_lshift] = ACTIONS(97),
    [sym_rshift] = ACTIONS(97),
    [sym_lt] = ACTIONS(93),
    [sym_le] = ACTIONS(97),
    [sym_gt] = ACTIONS(93),
    [sym_ge] = ACTIONS(97),
    [sym_eq] = ACTIONS(97),
    [sym_neq] = ACTIONS(97),
    [sym_delay] = ACTIONS(97),
    [sym_exp] = ACTIONS(99),
    [sym_log] = ACTIONS(99),
    [sym_log10] = ACTIONS(99),
    [sym_sqrt] = ACTIONS(99),
    [sym_abs] = ACTIONS(99),
    [sym_floor] = ACTIONS(99),
    [sym_ceil] = ACTIONS(99),
    [sym_rint] = ACTIONS(99),
    [sym_round] = ACTIONS(99),
    [sym_acos] = ACTIONS(99),
    [sym_asin] = ACTIONS(99),
    [sym_atan] = ACTIONS(99),
    [sym_cos] = ACTIONS(99),
    [sym_sin] = ACTIONS(99),
    [sym_tan] = ACTIONS(99),
    [sym_int_cast] = ACTIONS(99),
    [sym_float_cast] = ACTIONS(99),
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
    [sym_wire] = ACTIONS(103),
    [sym_cut] = ACTIONS(103),
    [sym_mem] = ACTIONS(103),
    [anon_sym_component] = ACTIONS(105),
    [anon_sym_library] = ACTIONS(107),
    [sym_rdtable] = ACTIONS(109),
    [sym_rwtable] = ACTIONS(111),
    [sym_select2] = ACTIONS(109),
    [sym_select3] = ACTIONS(113),
    [sym_lowest] = ACTIONS(99),
    [sym_highest] = ACTIONS(99),
    [sym_assertbounds] = ACTIONS(109),
    [sym_int] = ACTIONS(103),
    [sym_real] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [sym__id] = ACTIONS(119),
  },
  [37] = {
    [sym__infix_expression] = STATE(85),
    [sym_infix] = STATE(85),
    [sym_partial] = STATE(85),
    [sym_prefix] = STATE(85),
    [sym_prim1] = STATE(85),
    [sym_prim2] = STATE(85),
    [sym_prim3] = STATE(85),
    [sym_prim4] = STATE(85),
    [sym_prim5] = STATE(85),
    [sym_function_call] = STATE(85),
    [sym_modifier] = STATE(85),
    [sym_access] = STATE(85),
    [sym__primitive] = STATE(85),
    [sym_lambda] = STATE(85),
    [sym_modulation] = STATE(85),
    [sym__argument] = STATE(238),
    [sym_pattern] = STATE(85),
    [sym_recursive_arg] = STATE(238),
    [sym_sequential_arg] = STATE(238),
    [sym_split_arg] = STATE(238),
    [sym_merge_arg] = STATE(238),
    [sym_iteration] = STATE(85),
    [sym_substitution] = STATE(85),
    [sym_ffunction] = STATE(85),
    [sym_fconst] = STATE(85),
    [sym_fvariable] = STATE(85),
    [sym__infix] = STATE(148),
    [sym__prim1] = STATE(138),
    [sym__prim2] = STATE(154),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(152),
    [sym__prim5] = STATE(145),
    [sym_sub] = STATE(148),
    [sym_or] = STATE(148),
    [sym_component] = STATE(85),
    [sym_library] = STATE(85),
    [sym__number] = STATE(85),
    [sym_id] = STATE(85),
    [sym_negate_id] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_environment] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [sym_par] = ACTIONS(83),
    [sym_seq] = ACTIONS(83),
    [sym_sum] = ACTIONS(83),
    [sym_prod] = ACTIONS(83),
    [anon_sym_ffunction] = ACTIONS(85),
    [anon_sym_fconstant] = ACTIONS(87),
    [anon_sym_fvariable] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [sym_add] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(95),
    [sym_mult] = ACTIONS(97),
    [sym_div] = ACTIONS(97),
    [sym_mod] = ACTIONS(97),
    [sym_pow] = ACTIONS(97),
    [sym_and] = ACTIONS(97),
    [sym_xor] = ACTIONS(93),
    [sym_lshift] = ACTIONS(97),
    [sym_rshift] = ACTIONS(97),
    [sym_lt] = ACTIONS(93),
    [sym_le] = ACTIONS(97),
    [sym_gt] = ACTIONS(93),
    [sym_ge] = ACTIONS(97),
    [sym_eq] = ACTIONS(97),
    [sym_neq] = ACTIONS(97),
    [sym_delay] = ACTIONS(97),
    [sym_exp] = ACTIONS(99),
    [sym_log] = ACTIONS(99),
    [sym_log10] = ACTIONS(99),
    [sym_sqrt] = ACTIONS(99),
    [sym_abs] = ACTIONS(99),
    [sym_floor] = ACTIONS(99),
    [sym_ceil] = ACTIONS(99),
    [sym_rint] = ACTIONS(99),
    [sym_round] = ACTIONS(99),
    [sym_acos] = ACTIONS(99),
    [sym_asin] = ACTIONS(99),
    [sym_atan] = ACTIONS(99),
    [sym_cos] = ACTIONS(99),
    [sym_sin] = ACTIONS(99),
    [sym_tan] = ACTIONS(99),
    [sym_int_cast] = ACTIONS(99),
    [sym_float_cast] = ACTIONS(99),
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
    [sym_wire] = ACTIONS(103),
    [sym_cut] = ACTIONS(103),
    [sym_mem] = ACTIONS(103),
    [anon_sym_component] = ACTIONS(105),
    [anon_sym_library] = ACTIONS(107),
    [sym_rdtable] = ACTIONS(109),
    [sym_rwtable] = ACTIONS(111),
    [sym_select2] = ACTIONS(109),
    [sym_select3] = ACTIONS(113),
    [sym_lowest] = ACTIONS(99),
    [sym_highest] = ACTIONS(99),
    [sym_assertbounds] = ACTIONS(109),
    [sym_int] = ACTIONS(103),
    [sym_real] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [sym__id] = ACTIONS(119),
  },
  [38] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym__argument] = STATE(251),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(251),
    [sym_sequential_arg] = STATE(251),
    [sym_split_arg] = STATE(251),
    [sym_merge_arg] = STATE(251),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [39] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym__argument] = STATE(242),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(242),
    [sym_sequential_arg] = STATE(242),
    [sym_split_arg] = STATE(242),
    [sym_merge_arg] = STATE(242),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [40] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym__argument] = STATE(239),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(239),
    [sym_sequential_arg] = STATE(239),
    [sym_split_arg] = STATE(239),
    [sym_merge_arg] = STATE(239),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [41] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym__argument] = STATE(249),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(249),
    [sym_sequential_arg] = STATE(249),
    [sym_split_arg] = STATE(249),
    [sym_merge_arg] = STATE(249),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [42] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym__argument] = STATE(232),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(232),
    [sym_sequential_arg] = STATE(232),
    [sym_split_arg] = STATE(232),
    [sym_merge_arg] = STATE(232),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [43] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym__argument] = STATE(234),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(234),
    [sym_sequential_arg] = STATE(234),
    [sym_split_arg] = STATE(234),
    [sym_merge_arg] = STATE(234),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [44] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym__argument] = STATE(235),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(235),
    [sym_sequential_arg] = STATE(235),
    [sym_split_arg] = STATE(235),
    [sym_merge_arg] = STATE(235),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [45] = {
    [sym__infix_expression] = STATE(85),
    [sym_infix] = STATE(85),
    [sym_partial] = STATE(85),
    [sym_prefix] = STATE(85),
    [sym_prim1] = STATE(85),
    [sym_prim2] = STATE(85),
    [sym_prim3] = STATE(85),
    [sym_prim4] = STATE(85),
    [sym_prim5] = STATE(85),
    [sym_function_call] = STATE(85),
    [sym_modifier] = STATE(85),
    [sym_access] = STATE(85),
    [sym__primitive] = STATE(85),
    [sym_lambda] = STATE(85),
    [sym_modulation] = STATE(85),
    [sym__argument] = STATE(236),
    [sym_pattern] = STATE(85),
    [sym_recursive_arg] = STATE(236),
    [sym_sequential_arg] = STATE(236),
    [sym_split_arg] = STATE(236),
    [sym_merge_arg] = STATE(236),
    [sym_iteration] = STATE(85),
    [sym_substitution] = STATE(85),
    [sym_ffunction] = STATE(85),
    [sym_fconst] = STATE(85),
    [sym_fvariable] = STATE(85),
    [sym__infix] = STATE(148),
    [sym__prim1] = STATE(138),
    [sym__prim2] = STATE(154),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(152),
    [sym__prim5] = STATE(145),
    [sym_sub] = STATE(148),
    [sym_or] = STATE(148),
    [sym_component] = STATE(85),
    [sym_library] = STATE(85),
    [sym__number] = STATE(85),
    [sym_id] = STATE(85),
    [sym_negate_id] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_environment] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [sym_par] = ACTIONS(83),
    [sym_seq] = ACTIONS(83),
    [sym_sum] = ACTIONS(83),
    [sym_prod] = ACTIONS(83),
    [anon_sym_ffunction] = ACTIONS(85),
    [anon_sym_fconstant] = ACTIONS(87),
    [anon_sym_fvariable] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [sym_add] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(95),
    [sym_mult] = ACTIONS(97),
    [sym_div] = ACTIONS(97),
    [sym_mod] = ACTIONS(97),
    [sym_pow] = ACTIONS(97),
    [sym_and] = ACTIONS(97),
    [sym_xor] = ACTIONS(93),
    [sym_lshift] = ACTIONS(97),
    [sym_rshift] = ACTIONS(97),
    [sym_lt] = ACTIONS(93),
    [sym_le] = ACTIONS(97),
    [sym_gt] = ACTIONS(93),
    [sym_ge] = ACTIONS(97),
    [sym_eq] = ACTIONS(97),
    [sym_neq] = ACTIONS(97),
    [sym_delay] = ACTIONS(97),
    [sym_exp] = ACTIONS(99),
    [sym_log] = ACTIONS(99),
    [sym_log10] = ACTIONS(99),
    [sym_sqrt] = ACTIONS(99),
    [sym_abs] = ACTIONS(99),
    [sym_floor] = ACTIONS(99),
    [sym_ceil] = ACTIONS(99),
    [sym_rint] = ACTIONS(99),
    [sym_round] = ACTIONS(99),
    [sym_acos] = ACTIONS(99),
    [sym_asin] = ACTIONS(99),
    [sym_atan] = ACTIONS(99),
    [sym_cos] = ACTIONS(99),
    [sym_sin] = ACTIONS(99),
    [sym_tan] = ACTIONS(99),
    [sym_int_cast] = ACTIONS(99),
    [sym_float_cast] = ACTIONS(99),
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
    [sym_wire] = ACTIONS(103),
    [sym_cut] = ACTIONS(103),
    [sym_mem] = ACTIONS(103),
    [anon_sym_component] = ACTIONS(105),
    [anon_sym_library] = ACTIONS(107),
    [sym_rdtable] = ACTIONS(109),
    [sym_rwtable] = ACTIONS(111),
    [sym_select2] = ACTIONS(109),
    [sym_select3] = ACTIONS(113),
    [sym_lowest] = ACTIONS(99),
    [sym_highest] = ACTIONS(99),
    [sym_assertbounds] = ACTIONS(109),
    [sym_int] = ACTIONS(103),
    [sym_real] = ACTIONS(115),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [sym__id] = ACTIONS(119),
  },
  [46] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym__argument] = STATE(250),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(250),
    [sym_sequential_arg] = STATE(250),
    [sym_split_arg] = STATE(250),
    [sym_merge_arg] = STATE(250),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [47] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym__argument] = STATE(240),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(240),
    [sym_sequential_arg] = STATE(240),
    [sym_split_arg] = STATE(240),
    [sym_merge_arg] = STATE(240),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [48] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym__argument] = STATE(252),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(252),
    [sym_sequential_arg] = STATE(252),
    [sym_split_arg] = STATE(252),
    [sym_merge_arg] = STATE(252),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [49] = {
    [sym__infix_expression] = STATE(83),
    [sym_infix] = STATE(83),
    [sym_partial] = STATE(83),
    [sym_prefix] = STATE(83),
    [sym_prim1] = STATE(83),
    [sym_prim2] = STATE(83),
    [sym_prim3] = STATE(83),
    [sym_prim4] = STATE(83),
    [sym_prim5] = STATE(83),
    [sym_function_call] = STATE(83),
    [sym_modifier] = STATE(83),
    [sym_access] = STATE(83),
    [sym__primitive] = STATE(83),
    [sym_lambda] = STATE(83),
    [sym_modulation] = STATE(83),
    [sym__argument] = STATE(244),
    [sym_pattern] = STATE(83),
    [sym_recursive_arg] = STATE(244),
    [sym_sequential_arg] = STATE(244),
    [sym_split_arg] = STATE(244),
    [sym_merge_arg] = STATE(244),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(83),
    [sym_library] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(69),
    [sym_cut] = ACTIONS(69),
    [sym_mem] = ACTIONS(69),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(69),
    [sym_real] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [50] = {
    [sym__infix_expression] = STATE(72),
    [sym_infix] = STATE(72),
    [sym_partial] = STATE(72),
    [sym_prefix] = STATE(72),
    [sym_prim1] = STATE(72),
    [sym_prim2] = STATE(72),
    [sym_prim3] = STATE(72),
    [sym_prim4] = STATE(72),
    [sym_prim5] = STATE(72),
    [sym_function_call] = STATE(72),
    [sym_modifier] = STATE(72),
    [sym_access] = STATE(72),
    [sym__primitive] = STATE(72),
    [sym_lambda] = STATE(72),
    [sym_modulation] = STATE(72),
    [sym_pattern] = STATE(72),
    [sym_iteration] = STATE(72),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(72),
    [sym_library] = STATE(72),
    [sym__number] = STATE(72),
    [sym_id] = STATE(72),
    [sym_negate_id] = STATE(72),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(121),
    [sym_cut] = ACTIONS(121),
    [sym_mem] = ACTIONS(121),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(121),
    [sym_real] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [51] = {
    [sym__infix_expression] = STATE(71),
    [sym_infix] = STATE(71),
    [sym_partial] = STATE(71),
    [sym_prefix] = STATE(71),
    [sym_prim1] = STATE(71),
    [sym_prim2] = STATE(71),
    [sym_prim3] = STATE(71),
    [sym_prim4] = STATE(71),
    [sym_prim5] = STATE(71),
    [sym_function_call] = STATE(71),
    [sym_modifier] = STATE(71),
    [sym_access] = STATE(71),
    [sym__primitive] = STATE(71),
    [sym_lambda] = STATE(71),
    [sym_modulation] = STATE(71),
    [sym_pattern] = STATE(71),
    [sym_iteration] = STATE(71),
    [sym_substitution] = STATE(71),
    [sym_ffunction] = STATE(71),
    [sym_fconst] = STATE(71),
    [sym_fvariable] = STATE(71),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(71),
    [sym_library] = STATE(71),
    [sym__number] = STATE(71),
    [sym_id] = STATE(71),
    [sym_negate_id] = STATE(71),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(125),
    [sym_cut] = ACTIONS(125),
    [sym_mem] = ACTIONS(125),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(125),
    [sym_real] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [52] = {
    [sym__infix_expression] = STATE(86),
    [sym_infix] = STATE(86),
    [sym_partial] = STATE(86),
    [sym_prefix] = STATE(86),
    [sym_prim1] = STATE(86),
    [sym_prim2] = STATE(86),
    [sym_prim3] = STATE(86),
    [sym_prim4] = STATE(86),
    [sym_prim5] = STATE(86),
    [sym_function_call] = STATE(86),
    [sym_modifier] = STATE(86),
    [sym_access] = STATE(86),
    [sym__primitive] = STATE(86),
    [sym_lambda] = STATE(86),
    [sym_modulation] = STATE(86),
    [sym_pattern] = STATE(86),
    [sym_iteration] = STATE(86),
    [sym_substitution] = STATE(86),
    [sym_ffunction] = STATE(86),
    [sym_fconst] = STATE(86),
    [sym_fvariable] = STATE(86),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(86),
    [sym_library] = STATE(86),
    [sym__number] = STATE(86),
    [sym_id] = STATE(86),
    [sym_negate_id] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(129),
    [sym_cut] = ACTIONS(129),
    [sym_mem] = ACTIONS(129),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(129),
    [sym_real] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [53] = {
    [sym__infix_expression] = STATE(70),
    [sym_infix] = STATE(70),
    [sym_partial] = STATE(70),
    [sym_prefix] = STATE(70),
    [sym_prim1] = STATE(70),
    [sym_prim2] = STATE(70),
    [sym_prim3] = STATE(70),
    [sym_prim4] = STATE(70),
    [sym_prim5] = STATE(70),
    [sym_function_call] = STATE(70),
    [sym_modifier] = STATE(70),
    [sym_access] = STATE(70),
    [sym__primitive] = STATE(70),
    [sym_lambda] = STATE(70),
    [sym_modulation] = STATE(70),
    [sym_pattern] = STATE(70),
    [sym_iteration] = STATE(70),
    [sym_substitution] = STATE(70),
    [sym_ffunction] = STATE(70),
    [sym_fconst] = STATE(70),
    [sym_fvariable] = STATE(70),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(70),
    [sym_library] = STATE(70),
    [sym__number] = STATE(70),
    [sym_id] = STATE(70),
    [sym_negate_id] = STATE(70),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(133),
    [sym_cut] = ACTIONS(133),
    [sym_mem] = ACTIONS(133),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(133),
    [sym_real] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [54] = {
    [sym__infix_expression] = STATE(68),
    [sym_infix] = STATE(68),
    [sym_partial] = STATE(68),
    [sym_prefix] = STATE(68),
    [sym_prim1] = STATE(68),
    [sym_prim2] = STATE(68),
    [sym_prim3] = STATE(68),
    [sym_prim4] = STATE(68),
    [sym_prim5] = STATE(68),
    [sym_function_call] = STATE(68),
    [sym_modifier] = STATE(68),
    [sym_access] = STATE(68),
    [sym__primitive] = STATE(68),
    [sym_lambda] = STATE(68),
    [sym_modulation] = STATE(68),
    [sym_pattern] = STATE(68),
    [sym_iteration] = STATE(68),
    [sym_substitution] = STATE(68),
    [sym_ffunction] = STATE(68),
    [sym_fconst] = STATE(68),
    [sym_fvariable] = STATE(68),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(68),
    [sym_library] = STATE(68),
    [sym__number] = STATE(68),
    [sym_id] = STATE(68),
    [sym_negate_id] = STATE(68),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(137),
    [sym_cut] = ACTIONS(137),
    [sym_mem] = ACTIONS(137),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(137),
    [sym_real] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [55] = {
    [sym__infix_expression] = STATE(84),
    [sym_infix] = STATE(84),
    [sym_partial] = STATE(84),
    [sym_prefix] = STATE(84),
    [sym_prim1] = STATE(84),
    [sym_prim2] = STATE(84),
    [sym_prim3] = STATE(84),
    [sym_prim4] = STATE(84),
    [sym_prim5] = STATE(84),
    [sym_function_call] = STATE(84),
    [sym_modifier] = STATE(84),
    [sym_access] = STATE(84),
    [sym__primitive] = STATE(84),
    [sym_lambda] = STATE(84),
    [sym_modulation] = STATE(84),
    [sym_pattern] = STATE(84),
    [sym_iteration] = STATE(84),
    [sym_substitution] = STATE(84),
    [sym_ffunction] = STATE(84),
    [sym_fconst] = STATE(84),
    [sym_fvariable] = STATE(84),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(84),
    [sym_library] = STATE(84),
    [sym__number] = STATE(84),
    [sym_id] = STATE(84),
    [sym_negate_id] = STATE(84),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(141),
    [sym_cut] = ACTIONS(141),
    [sym_mem] = ACTIONS(141),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(141),
    [sym_real] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [56] = {
    [sym__infix_expression] = STATE(81),
    [sym_infix] = STATE(81),
    [sym_partial] = STATE(81),
    [sym_prefix] = STATE(81),
    [sym_prim1] = STATE(81),
    [sym_prim2] = STATE(81),
    [sym_prim3] = STATE(81),
    [sym_prim4] = STATE(81),
    [sym_prim5] = STATE(81),
    [sym_function_call] = STATE(81),
    [sym_modifier] = STATE(81),
    [sym_access] = STATE(81),
    [sym__primitive] = STATE(81),
    [sym_lambda] = STATE(81),
    [sym_modulation] = STATE(81),
    [sym_pattern] = STATE(81),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(81),
    [sym_library] = STATE(81),
    [sym__number] = STATE(81),
    [sym_id] = STATE(81),
    [sym_negate_id] = STATE(81),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(145),
    [sym_cut] = ACTIONS(145),
    [sym_mem] = ACTIONS(145),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(145),
    [sym_real] = ACTIONS(147),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [57] = {
    [sym__infix_expression] = STATE(67),
    [sym_infix] = STATE(67),
    [sym_partial] = STATE(67),
    [sym_prefix] = STATE(67),
    [sym_prim1] = STATE(67),
    [sym_prim2] = STATE(67),
    [sym_prim3] = STATE(67),
    [sym_prim4] = STATE(67),
    [sym_prim5] = STATE(67),
    [sym_function_call] = STATE(67),
    [sym_modifier] = STATE(67),
    [sym_access] = STATE(67),
    [sym__primitive] = STATE(67),
    [sym_lambda] = STATE(67),
    [sym_modulation] = STATE(67),
    [sym_pattern] = STATE(67),
    [sym_iteration] = STATE(67),
    [sym_substitution] = STATE(67),
    [sym_ffunction] = STATE(67),
    [sym_fconst] = STATE(67),
    [sym_fvariable] = STATE(67),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(67),
    [sym_library] = STATE(67),
    [sym__number] = STATE(67),
    [sym_id] = STATE(67),
    [sym_negate_id] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(149),
    [sym_cut] = ACTIONS(149),
    [sym_mem] = ACTIONS(149),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(149),
    [sym_real] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [58] = {
    [sym__infix_expression] = STATE(90),
    [sym_infix] = STATE(90),
    [sym_partial] = STATE(90),
    [sym_prefix] = STATE(90),
    [sym_prim1] = STATE(90),
    [sym_prim2] = STATE(90),
    [sym_prim3] = STATE(90),
    [sym_prim4] = STATE(90),
    [sym_prim5] = STATE(90),
    [sym_function_call] = STATE(90),
    [sym_modifier] = STATE(90),
    [sym_access] = STATE(90),
    [sym__primitive] = STATE(90),
    [sym_lambda] = STATE(90),
    [sym_modulation] = STATE(90),
    [sym_pattern] = STATE(90),
    [sym_iteration] = STATE(90),
    [sym_substitution] = STATE(90),
    [sym_ffunction] = STATE(90),
    [sym_fconst] = STATE(90),
    [sym_fvariable] = STATE(90),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(90),
    [sym_library] = STATE(90),
    [sym__number] = STATE(90),
    [sym_id] = STATE(90),
    [sym_negate_id] = STATE(90),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(153),
    [sym_cut] = ACTIONS(153),
    [sym_mem] = ACTIONS(153),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(153),
    [sym_real] = ACTIONS(155),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [59] = {
    [sym__infix_expression] = STATE(91),
    [sym_infix] = STATE(91),
    [sym_partial] = STATE(91),
    [sym_prefix] = STATE(91),
    [sym_prim1] = STATE(91),
    [sym_prim2] = STATE(91),
    [sym_prim3] = STATE(91),
    [sym_prim4] = STATE(91),
    [sym_prim5] = STATE(91),
    [sym_function_call] = STATE(91),
    [sym_modifier] = STATE(91),
    [sym_access] = STATE(91),
    [sym__primitive] = STATE(91),
    [sym_lambda] = STATE(91),
    [sym_modulation] = STATE(91),
    [sym_pattern] = STATE(91),
    [sym_iteration] = STATE(91),
    [sym_substitution] = STATE(91),
    [sym_ffunction] = STATE(91),
    [sym_fconst] = STATE(91),
    [sym_fvariable] = STATE(91),
    [sym__infix] = STATE(148),
    [sym__prim1] = STATE(138),
    [sym__prim2] = STATE(154),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(152),
    [sym__prim5] = STATE(145),
    [sym_sub] = STATE(148),
    [sym_or] = STATE(148),
    [sym_component] = STATE(91),
    [sym_library] = STATE(91),
    [sym__number] = STATE(91),
    [sym_id] = STATE(91),
    [sym_negate_id] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_environment] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [sym_par] = ACTIONS(83),
    [sym_seq] = ACTIONS(83),
    [sym_sum] = ACTIONS(83),
    [sym_prod] = ACTIONS(83),
    [anon_sym_ffunction] = ACTIONS(85),
    [anon_sym_fconstant] = ACTIONS(87),
    [anon_sym_fvariable] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [sym_add] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(95),
    [sym_mult] = ACTIONS(97),
    [sym_div] = ACTIONS(97),
    [sym_mod] = ACTIONS(97),
    [sym_pow] = ACTIONS(97),
    [sym_and] = ACTIONS(97),
    [sym_xor] = ACTIONS(93),
    [sym_lshift] = ACTIONS(97),
    [sym_rshift] = ACTIONS(97),
    [sym_lt] = ACTIONS(93),
    [sym_le] = ACTIONS(97),
    [sym_gt] = ACTIONS(93),
    [sym_ge] = ACTIONS(97),
    [sym_eq] = ACTIONS(97),
    [sym_neq] = ACTIONS(97),
    [sym_delay] = ACTIONS(97),
    [sym_exp] = ACTIONS(99),
    [sym_log] = ACTIONS(99),
    [sym_log10] = ACTIONS(99),
    [sym_sqrt] = ACTIONS(99),
    [sym_abs] = ACTIONS(99),
    [sym_floor] = ACTIONS(99),
    [sym_ceil] = ACTIONS(99),
    [sym_rint] = ACTIONS(99),
    [sym_round] = ACTIONS(99),
    [sym_acos] = ACTIONS(99),
    [sym_asin] = ACTIONS(99),
    [sym_atan] = ACTIONS(99),
    [sym_cos] = ACTIONS(99),
    [sym_sin] = ACTIONS(99),
    [sym_tan] = ACTIONS(99),
    [sym_int_cast] = ACTIONS(99),
    [sym_float_cast] = ACTIONS(99),
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
    [sym_wire] = ACTIONS(157),
    [sym_cut] = ACTIONS(157),
    [sym_mem] = ACTIONS(157),
    [anon_sym_component] = ACTIONS(105),
    [anon_sym_library] = ACTIONS(107),
    [sym_rdtable] = ACTIONS(109),
    [sym_rwtable] = ACTIONS(111),
    [sym_select2] = ACTIONS(109),
    [sym_select3] = ACTIONS(113),
    [sym_lowest] = ACTIONS(99),
    [sym_highest] = ACTIONS(99),
    [sym_assertbounds] = ACTIONS(109),
    [sym_int] = ACTIONS(157),
    [sym_real] = ACTIONS(159),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [sym__id] = ACTIONS(119),
  },
  [60] = {
    [sym__infix_expression] = STATE(80),
    [sym_infix] = STATE(80),
    [sym_partial] = STATE(80),
    [sym_prefix] = STATE(80),
    [sym_prim1] = STATE(80),
    [sym_prim2] = STATE(80),
    [sym_prim3] = STATE(80),
    [sym_prim4] = STATE(80),
    [sym_prim5] = STATE(80),
    [sym_function_call] = STATE(80),
    [sym_modifier] = STATE(80),
    [sym_access] = STATE(80),
    [sym__primitive] = STATE(80),
    [sym_lambda] = STATE(80),
    [sym_modulation] = STATE(80),
    [sym_pattern] = STATE(80),
    [sym_iteration] = STATE(80),
    [sym_substitution] = STATE(80),
    [sym_ffunction] = STATE(80),
    [sym_fconst] = STATE(80),
    [sym_fvariable] = STATE(80),
    [sym__infix] = STATE(148),
    [sym__prim1] = STATE(138),
    [sym__prim2] = STATE(154),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(152),
    [sym__prim5] = STATE(145),
    [sym_sub] = STATE(148),
    [sym_or] = STATE(148),
    [sym_component] = STATE(80),
    [sym_library] = STATE(80),
    [sym__number] = STATE(80),
    [sym_id] = STATE(80),
    [sym_negate_id] = STATE(80),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_environment] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [sym_par] = ACTIONS(83),
    [sym_seq] = ACTIONS(83),
    [sym_sum] = ACTIONS(83),
    [sym_prod] = ACTIONS(83),
    [anon_sym_ffunction] = ACTIONS(85),
    [anon_sym_fconstant] = ACTIONS(87),
    [anon_sym_fvariable] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [sym_add] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(95),
    [sym_mult] = ACTIONS(97),
    [sym_div] = ACTIONS(97),
    [sym_mod] = ACTIONS(97),
    [sym_pow] = ACTIONS(97),
    [sym_and] = ACTIONS(97),
    [sym_xor] = ACTIONS(93),
    [sym_lshift] = ACTIONS(97),
    [sym_rshift] = ACTIONS(97),
    [sym_lt] = ACTIONS(93),
    [sym_le] = ACTIONS(97),
    [sym_gt] = ACTIONS(93),
    [sym_ge] = ACTIONS(97),
    [sym_eq] = ACTIONS(97),
    [sym_neq] = ACTIONS(97),
    [sym_delay] = ACTIONS(97),
    [sym_exp] = ACTIONS(99),
    [sym_log] = ACTIONS(99),
    [sym_log10] = ACTIONS(99),
    [sym_sqrt] = ACTIONS(99),
    [sym_abs] = ACTIONS(99),
    [sym_floor] = ACTIONS(99),
    [sym_ceil] = ACTIONS(99),
    [sym_rint] = ACTIONS(99),
    [sym_round] = ACTIONS(99),
    [sym_acos] = ACTIONS(99),
    [sym_asin] = ACTIONS(99),
    [sym_atan] = ACTIONS(99),
    [sym_cos] = ACTIONS(99),
    [sym_sin] = ACTIONS(99),
    [sym_tan] = ACTIONS(99),
    [sym_int_cast] = ACTIONS(99),
    [sym_float_cast] = ACTIONS(99),
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
    [sym_wire] = ACTIONS(161),
    [sym_cut] = ACTIONS(161),
    [sym_mem] = ACTIONS(161),
    [anon_sym_component] = ACTIONS(105),
    [anon_sym_library] = ACTIONS(107),
    [sym_rdtable] = ACTIONS(109),
    [sym_rwtable] = ACTIONS(111),
    [sym_select2] = ACTIONS(109),
    [sym_select3] = ACTIONS(113),
    [sym_lowest] = ACTIONS(99),
    [sym_highest] = ACTIONS(99),
    [sym_assertbounds] = ACTIONS(109),
    [sym_int] = ACTIONS(161),
    [sym_real] = ACTIONS(163),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [sym__id] = ACTIONS(119),
  },
  [61] = {
    [sym__infix_expression] = STATE(88),
    [sym_infix] = STATE(88),
    [sym_partial] = STATE(88),
    [sym_prefix] = STATE(88),
    [sym_prim1] = STATE(88),
    [sym_prim2] = STATE(88),
    [sym_prim3] = STATE(88),
    [sym_prim4] = STATE(88),
    [sym_prim5] = STATE(88),
    [sym_function_call] = STATE(88),
    [sym_modifier] = STATE(88),
    [sym_access] = STATE(88),
    [sym__primitive] = STATE(88),
    [sym_lambda] = STATE(88),
    [sym_modulation] = STATE(88),
    [sym_pattern] = STATE(88),
    [sym_iteration] = STATE(88),
    [sym_substitution] = STATE(88),
    [sym_ffunction] = STATE(88),
    [sym_fconst] = STATE(88),
    [sym_fvariable] = STATE(88),
    [sym__infix] = STATE(148),
    [sym__prim1] = STATE(138),
    [sym__prim2] = STATE(154),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(152),
    [sym__prim5] = STATE(145),
    [sym_sub] = STATE(148),
    [sym_or] = STATE(148),
    [sym_component] = STATE(88),
    [sym_library] = STATE(88),
    [sym__number] = STATE(88),
    [sym_id] = STATE(88),
    [sym_negate_id] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_environment] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [sym_par] = ACTIONS(83),
    [sym_seq] = ACTIONS(83),
    [sym_sum] = ACTIONS(83),
    [sym_prod] = ACTIONS(83),
    [anon_sym_ffunction] = ACTIONS(85),
    [anon_sym_fconstant] = ACTIONS(87),
    [anon_sym_fvariable] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [sym_add] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(95),
    [sym_mult] = ACTIONS(97),
    [sym_div] = ACTIONS(97),
    [sym_mod] = ACTIONS(97),
    [sym_pow] = ACTIONS(97),
    [sym_and] = ACTIONS(97),
    [sym_xor] = ACTIONS(93),
    [sym_lshift] = ACTIONS(97),
    [sym_rshift] = ACTIONS(97),
    [sym_lt] = ACTIONS(93),
    [sym_le] = ACTIONS(97),
    [sym_gt] = ACTIONS(93),
    [sym_ge] = ACTIONS(97),
    [sym_eq] = ACTIONS(97),
    [sym_neq] = ACTIONS(97),
    [sym_delay] = ACTIONS(97),
    [sym_exp] = ACTIONS(99),
    [sym_log] = ACTIONS(99),
    [sym_log10] = ACTIONS(99),
    [sym_sqrt] = ACTIONS(99),
    [sym_abs] = ACTIONS(99),
    [sym_floor] = ACTIONS(99),
    [sym_ceil] = ACTIONS(99),
    [sym_rint] = ACTIONS(99),
    [sym_round] = ACTIONS(99),
    [sym_acos] = ACTIONS(99),
    [sym_asin] = ACTIONS(99),
    [sym_atan] = ACTIONS(99),
    [sym_cos] = ACTIONS(99),
    [sym_sin] = ACTIONS(99),
    [sym_tan] = ACTIONS(99),
    [sym_int_cast] = ACTIONS(99),
    [sym_float_cast] = ACTIONS(99),
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
    [sym_wire] = ACTIONS(165),
    [sym_cut] = ACTIONS(165),
    [sym_mem] = ACTIONS(165),
    [anon_sym_component] = ACTIONS(105),
    [anon_sym_library] = ACTIONS(107),
    [sym_rdtable] = ACTIONS(109),
    [sym_rwtable] = ACTIONS(111),
    [sym_select2] = ACTIONS(109),
    [sym_select3] = ACTIONS(113),
    [sym_lowest] = ACTIONS(99),
    [sym_highest] = ACTIONS(99),
    [sym_assertbounds] = ACTIONS(109),
    [sym_int] = ACTIONS(165),
    [sym_real] = ACTIONS(167),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [sym__id] = ACTIONS(119),
  },
  [62] = {
    [sym__infix_expression] = STATE(87),
    [sym_infix] = STATE(87),
    [sym_partial] = STATE(87),
    [sym_prefix] = STATE(87),
    [sym_prim1] = STATE(87),
    [sym_prim2] = STATE(87),
    [sym_prim3] = STATE(87),
    [sym_prim4] = STATE(87),
    [sym_prim5] = STATE(87),
    [sym_function_call] = STATE(87),
    [sym_modifier] = STATE(87),
    [sym_access] = STATE(87),
    [sym__primitive] = STATE(87),
    [sym_lambda] = STATE(87),
    [sym_modulation] = STATE(87),
    [sym_pattern] = STATE(87),
    [sym_iteration] = STATE(87),
    [sym_substitution] = STATE(87),
    [sym_ffunction] = STATE(87),
    [sym_fconst] = STATE(87),
    [sym_fvariable] = STATE(87),
    [sym__infix] = STATE(94),
    [sym__prim1] = STATE(103),
    [sym__prim2] = STATE(106),
    [sym__prim3] = STATE(107),
    [sym__prim4] = STATE(110),
    [sym__prim5] = STATE(111),
    [sym_sub] = STATE(94),
    [sym_or] = STATE(94),
    [sym_component] = STATE(87),
    [sym_library] = STATE(87),
    [sym__number] = STATE(87),
    [sym_id] = STATE(87),
    [sym_negate_id] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_environment] = ACTIONS(21),
    [anon_sym_BSLASH] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_case] = ACTIONS(27),
    [sym_par] = ACTIONS(29),
    [sym_seq] = ACTIONS(29),
    [sym_sum] = ACTIONS(29),
    [sym_prod] = ACTIONS(29),
    [anon_sym_ffunction] = ACTIONS(31),
    [anon_sym_fconstant] = ACTIONS(33),
    [anon_sym_fvariable] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_add] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(67),
    [sym_mult] = ACTIONS(43),
    [sym_div] = ACTIONS(43),
    [sym_mod] = ACTIONS(43),
    [sym_pow] = ACTIONS(43),
    [sym_and] = ACTIONS(43),
    [sym_xor] = ACTIONS(39),
    [sym_lshift] = ACTIONS(43),
    [sym_rshift] = ACTIONS(43),
    [sym_lt] = ACTIONS(39),
    [sym_le] = ACTIONS(43),
    [sym_gt] = ACTIONS(39),
    [sym_ge] = ACTIONS(43),
    [sym_eq] = ACTIONS(43),
    [sym_neq] = ACTIONS(43),
    [sym_delay] = ACTIONS(43),
    [sym_exp] = ACTIONS(45),
    [sym_log] = ACTIONS(45),
    [sym_log10] = ACTIONS(45),
    [sym_sqrt] = ACTIONS(45),
    [sym_abs] = ACTIONS(45),
    [sym_floor] = ACTIONS(45),
    [sym_ceil] = ACTIONS(45),
    [sym_rint] = ACTIONS(45),
    [sym_round] = ACTIONS(45),
    [sym_acos] = ACTIONS(45),
    [sym_asin] = ACTIONS(45),
    [sym_atan] = ACTIONS(45),
    [sym_cos] = ACTIONS(45),
    [sym_sin] = ACTIONS(45),
    [sym_tan] = ACTIONS(45),
    [sym_int_cast] = ACTIONS(45),
    [sym_float_cast] = ACTIONS(45),
    [sym_pow_fun] = ACTIONS(47),
    [sym_min] = ACTIONS(47),
    [sym_max] = ACTIONS(47),
    [sym_fmod] = ACTIONS(47),
    [sym_remainder] = ACTIONS(47),
    [sym_atan2] = ACTIONS(47),
    [sym_prefix_prim] = ACTIONS(47),
    [sym_attach] = ACTIONS(47),
    [sym_enable] = ACTIONS(47),
    [sym_control] = ACTIONS(47),
    [sym_wire] = ACTIONS(169),
    [sym_cut] = ACTIONS(169),
    [sym_mem] = ACTIONS(169),
    [anon_sym_component] = ACTIONS(51),
    [anon_sym_library] = ACTIONS(53),
    [sym_rdtable] = ACTIONS(55),
    [sym_rwtable] = ACTIONS(57),
    [sym_select2] = ACTIONS(55),
    [sym_select3] = ACTIONS(59),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(55),
    [sym_int] = ACTIONS(169),
    [sym_real] = ACTIONS(171),
    [anon_sym_COLON_COLON] = ACTIONS(63),
    [sym__id] = ACTIONS(65),
  },
  [63] = {
    [sym__infix_expression] = STATE(79),
    [sym_infix] = STATE(79),
    [sym_partial] = STATE(79),
    [sym_prefix] = STATE(79),
    [sym_prim1] = STATE(79),
    [sym_prim2] = STATE(79),
    [sym_prim3] = STATE(79),
    [sym_prim4] = STATE(79),
    [sym_prim5] = STATE(79),
    [sym_function_call] = STATE(79),
    [sym_modifier] = STATE(79),
    [sym_access] = STATE(79),
    [sym__primitive] = STATE(79),
    [sym_lambda] = STATE(79),
    [sym_modulation] = STATE(79),
    [sym_pattern] = STATE(79),
    [sym_iteration] = STATE(79),
    [sym_substitution] = STATE(79),
    [sym_ffunction] = STATE(79),
    [sym_fconst] = STATE(79),
    [sym_fvariable] = STATE(79),
    [sym__infix] = STATE(148),
    [sym__prim1] = STATE(138),
    [sym__prim2] = STATE(154),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(152),
    [sym__prim5] = STATE(145),
    [sym_sub] = STATE(148),
    [sym_or] = STATE(148),
    [sym_component] = STATE(79),
    [sym_library] = STATE(79),
    [sym__number] = STATE(79),
    [sym_id] = STATE(79),
    [sym_negate_id] = STATE(79),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_environment] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [sym_par] = ACTIONS(83),
    [sym_seq] = ACTIONS(83),
    [sym_sum] = ACTIONS(83),
    [sym_prod] = ACTIONS(83),
    [anon_sym_ffunction] = ACTIONS(85),
    [anon_sym_fconstant] = ACTIONS(87),
    [anon_sym_fvariable] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [sym_add] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(95),
    [sym_mult] = ACTIONS(97),
    [sym_div] = ACTIONS(97),
    [sym_mod] = ACTIONS(97),
    [sym_pow] = ACTIONS(97),
    [sym_and] = ACTIONS(97),
    [sym_xor] = ACTIONS(93),
    [sym_lshift] = ACTIONS(97),
    [sym_rshift] = ACTIONS(97),
    [sym_lt] = ACTIONS(93),
    [sym_le] = ACTIONS(97),
    [sym_gt] = ACTIONS(93),
    [sym_ge] = ACTIONS(97),
    [sym_eq] = ACTIONS(97),
    [sym_neq] = ACTIONS(97),
    [sym_delay] = ACTIONS(97),
    [sym_exp] = ACTIONS(99),
    [sym_log] = ACTIONS(99),
    [sym_log10] = ACTIONS(99),
    [sym_sqrt] = ACTIONS(99),
    [sym_abs] = ACTIONS(99),
    [sym_floor] = ACTIONS(99),
    [sym_ceil] = ACTIONS(99),
    [sym_rint] = ACTIONS(99),
    [sym_round] = ACTIONS(99),
    [sym_acos] = ACTIONS(99),
    [sym_asin] = ACTIONS(99),
    [sym_atan] = ACTIONS(99),
    [sym_cos] = ACTIONS(99),
    [sym_sin] = ACTIONS(99),
    [sym_tan] = ACTIONS(99),
    [sym_int_cast] = ACTIONS(99),
    [sym_float_cast] = ACTIONS(99),
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
    [sym_wire] = ACTIONS(173),
    [sym_cut] = ACTIONS(173),
    [sym_mem] = ACTIONS(173),
    [anon_sym_component] = ACTIONS(105),
    [anon_sym_library] = ACTIONS(107),
    [sym_rdtable] = ACTIONS(109),
    [sym_rwtable] = ACTIONS(111),
    [sym_select2] = ACTIONS(109),
    [sym_select3] = ACTIONS(113),
    [sym_lowest] = ACTIONS(99),
    [sym_highest] = ACTIONS(99),
    [sym_assertbounds] = ACTIONS(109),
    [sym_int] = ACTIONS(173),
    [sym_real] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [sym__id] = ACTIONS(119),
  },
  [64] = {
    [sym__infix_expression] = STATE(82),
    [sym_infix] = STATE(82),
    [sym_partial] = STATE(82),
    [sym_prefix] = STATE(82),
    [sym_prim1] = STATE(82),
    [sym_prim2] = STATE(82),
    [sym_prim3] = STATE(82),
    [sym_prim4] = STATE(82),
    [sym_prim5] = STATE(82),
    [sym_function_call] = STATE(82),
    [sym_modifier] = STATE(82),
    [sym_access] = STATE(82),
    [sym__primitive] = STATE(82),
    [sym_lambda] = STATE(82),
    [sym_modulation] = STATE(82),
    [sym_pattern] = STATE(82),
    [sym_iteration] = STATE(82),
    [sym_substitution] = STATE(82),
    [sym_ffunction] = STATE(82),
    [sym_fconst] = STATE(82),
    [sym_fvariable] = STATE(82),
    [sym__infix] = STATE(148),
    [sym__prim1] = STATE(138),
    [sym__prim2] = STATE(154),
    [sym__prim3] = STATE(155),
    [sym__prim4] = STATE(152),
    [sym__prim5] = STATE(145),
    [sym_sub] = STATE(148),
    [sym_or] = STATE(148),
    [sym_component] = STATE(82),
    [sym_library] = STATE(82),
    [sym__number] = STATE(82),
    [sym_id] = STATE(82),
    [sym_negate_id] = STATE(82),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_environment] = ACTIONS(75),
    [anon_sym_BSLASH] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_case] = ACTIONS(81),
    [sym_par] = ACTIONS(83),
    [sym_seq] = ACTIONS(83),
    [sym_sum] = ACTIONS(83),
    [sym_prod] = ACTIONS(83),
    [anon_sym_ffunction] = ACTIONS(85),
    [anon_sym_fconstant] = ACTIONS(87),
    [anon_sym_fvariable] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(91),
    [sym_add] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(95),
    [sym_mult] = ACTIONS(97),
    [sym_div] = ACTIONS(97),
    [sym_mod] = ACTIONS(97),
    [sym_pow] = ACTIONS(97),
    [sym_and] = ACTIONS(97),
    [sym_xor] = ACTIONS(93),
    [sym_lshift] = ACTIONS(97),
    [sym_rshift] = ACTIONS(97),
    [sym_lt] = ACTIONS(93),
    [sym_le] = ACTIONS(97),
    [sym_gt] = ACTIONS(93),
    [sym_ge] = ACTIONS(97),
    [sym_eq] = ACTIONS(97),
    [sym_neq] = ACTIONS(97),
    [sym_delay] = ACTIONS(97),
    [sym_exp] = ACTIONS(99),
    [sym_log] = ACTIONS(99),
    [sym_log10] = ACTIONS(99),
    [sym_sqrt] = ACTIONS(99),
    [sym_abs] = ACTIONS(99),
    [sym_floor] = ACTIONS(99),
    [sym_ceil] = ACTIONS(99),
    [sym_rint] = ACTIONS(99),
    [sym_round] = ACTIONS(99),
    [sym_acos] = ACTIONS(99),
    [sym_asin] = ACTIONS(99),
    [sym_atan] = ACTIONS(99),
    [sym_cos] = ACTIONS(99),
    [sym_sin] = ACTIONS(99),
    [sym_tan] = ACTIONS(99),
    [sym_int_cast] = ACTIONS(99),
    [sym_float_cast] = ACTIONS(99),
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
    [sym_wire] = ACTIONS(177),
    [sym_cut] = ACTIONS(177),
    [sym_mem] = ACTIONS(177),
    [anon_sym_component] = ACTIONS(105),
    [anon_sym_library] = ACTIONS(107),
    [sym_rdtable] = ACTIONS(109),
    [sym_rwtable] = ACTIONS(111),
    [sym_select2] = ACTIONS(109),
    [sym_select3] = ACTIONS(113),
    [sym_lowest] = ACTIONS(99),
    [sym_highest] = ACTIONS(99),
    [sym_assertbounds] = ACTIONS(109),
    [sym_int] = ACTIONS(177),
    [sym_real] = ACTIONS(179),
    [anon_sym_COLON_COLON] = ACTIONS(117),
    [sym__id] = ACTIONS(119),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(181),
    [anon_sym_environment] = ACTIONS(183),
    [anon_sym_BSLASH] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_case] = ACTIONS(183),
    [sym_par] = ACTIONS(183),
    [sym_seq] = ACTIONS(183),
    [sym_sum] = ACTIONS(183),
    [sym_prod] = ACTIONS(183),
    [anon_sym_ffunction] = ACTIONS(183),
    [anon_sym_fconstant] = ACTIONS(183),
    [anon_sym_fvariable] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(181),
    [sym_add] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [sym_mult] = ACTIONS(181),
    [sym_div] = ACTIONS(181),
    [sym_mod] = ACTIONS(181),
    [sym_pow] = ACTIONS(181),
    [sym_and] = ACTIONS(181),
    [sym_xor] = ACTIONS(183),
    [sym_lshift] = ACTIONS(181),
    [sym_rshift] = ACTIONS(181),
    [sym_lt] = ACTIONS(183),
    [sym_le] = ACTIONS(181),
    [sym_gt] = ACTIONS(183),
    [sym_ge] = ACTIONS(181),
    [sym_eq] = ACTIONS(181),
    [sym_neq] = ACTIONS(181),
    [sym_delay] = ACTIONS(181),
    [sym_exp] = ACTIONS(183),
    [sym_log] = ACTIONS(183),
    [sym_log10] = ACTIONS(183),
    [sym_sqrt] = ACTIONS(183),
    [sym_abs] = ACTIONS(183),
    [sym_floor] = ACTIONS(183),
    [sym_ceil] = ACTIONS(183),
    [sym_rint] = ACTIONS(183),
    [sym_round] = ACTIONS(183),
    [sym_acos] = ACTIONS(183),
    [sym_asin] = ACTIONS(183),
    [sym_atan] = ACTIONS(183),
    [sym_cos] = ACTIONS(183),
    [sym_sin] = ACTIONS(183),
    [sym_tan] = ACTIONS(183),
    [sym_int_cast] = ACTIONS(183),
    [sym_float_cast] = ACTIONS(183),
    [sym_pow_fun] = ACTIONS(183),
    [sym_min] = ACTIONS(183),
    [sym_max] = ACTIONS(183),
    [sym_fmod] = ACTIONS(183),
    [sym_remainder] = ACTIONS(183),
    [sym_atan2] = ACTIONS(183),
    [sym_prefix_prim] = ACTIONS(183),
    [sym_attach] = ACTIONS(183),
    [sym_enable] = ACTIONS(183),
    [sym_control] = ACTIONS(183),
    [sym_wire] = ACTIONS(183),
    [sym_cut] = ACTIONS(183),
    [sym_mem] = ACTIONS(183),
    [anon_sym_component] = ACTIONS(183),
    [anon_sym_library] = ACTIONS(183),
    [sym_rdtable] = ACTIONS(183),
    [sym_rwtable] = ACTIONS(183),
    [sym_select2] = ACTIONS(183),
    [sym_select3] = ACTIONS(183),
    [sym_lowest] = ACTIONS(183),
    [sym_highest] = ACTIONS(183),
    [sym_assertbounds] = ACTIONS(183),
    [sym_int] = ACTIONS(183),
    [sym_real] = ACTIONS(181),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [sym__id] = ACTIONS(183),
  },
  [66] = {
    [anon_sym_LPAREN] = ACTIONS(185),
    [anon_sym_environment] = ACTIONS(187),
    [anon_sym_BSLASH] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_case] = ACTIONS(187),
    [sym_par] = ACTIONS(187),
    [sym_seq] = ACTIONS(187),
    [sym_sum] = ACTIONS(187),
    [sym_prod] = ACTIONS(187),
    [anon_sym_ffunction] = ACTIONS(187),
    [anon_sym_fconstant] = ACTIONS(187),
    [anon_sym_fvariable] = ACTIONS(187),
    [anon_sym_PIPE] = ACTIONS(185),
    [sym_add] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(187),
    [sym_mult] = ACTIONS(185),
    [sym_div] = ACTIONS(185),
    [sym_mod] = ACTIONS(185),
    [sym_pow] = ACTIONS(185),
    [sym_and] = ACTIONS(185),
    [sym_xor] = ACTIONS(187),
    [sym_lshift] = ACTIONS(185),
    [sym_rshift] = ACTIONS(185),
    [sym_lt] = ACTIONS(187),
    [sym_le] = ACTIONS(185),
    [sym_gt] = ACTIONS(187),
    [sym_ge] = ACTIONS(185),
    [sym_eq] = ACTIONS(185),
    [sym_neq] = ACTIONS(185),
    [sym_delay] = ACTIONS(185),
    [sym_exp] = ACTIONS(187),
    [sym_log] = ACTIONS(187),
    [sym_log10] = ACTIONS(187),
    [sym_sqrt] = ACTIONS(187),
    [sym_abs] = ACTIONS(187),
    [sym_floor] = ACTIONS(187),
    [sym_ceil] = ACTIONS(187),
    [sym_rint] = ACTIONS(187),
    [sym_round] = ACTIONS(187),
    [sym_acos] = ACTIONS(187),
    [sym_asin] = ACTIONS(187),
    [sym_atan] = ACTIONS(187),
    [sym_cos] = ACTIONS(187),
    [sym_sin] = ACTIONS(187),
    [sym_tan] = ACTIONS(187),
    [sym_int_cast] = ACTIONS(187),
    [sym_float_cast] = ACTIONS(187),
    [sym_pow_fun] = ACTIONS(187),
    [sym_min] = ACTIONS(187),
    [sym_max] = ACTIONS(187),
    [sym_fmod] = ACTIONS(187),
    [sym_remainder] = ACTIONS(187),
    [sym_atan2] = ACTIONS(187),
    [sym_prefix_prim] = ACTIONS(187),
    [sym_attach] = ACTIONS(187),
    [sym_enable] = ACTIONS(187),
    [sym_control] = ACTIONS(187),
    [sym_wire] = ACTIONS(187),
    [sym_cut] = ACTIONS(187),
    [sym_mem] = ACTIONS(187),
    [anon_sym_component] = ACTIONS(187),
    [anon_sym_library] = ACTIONS(187),
    [sym_rdtable] = ACTIONS(187),
    [sym_rwtable] = ACTIONS(187),
    [sym_select2] = ACTIONS(187),
    [sym_select3] = ACTIONS(187),
    [sym_lowest] = ACTIONS(187),
    [sym_highest] = ACTIONS(187),
    [sym_assertbounds] = ACTIONS(187),
    [sym_int] = ACTIONS(187),
    [sym_real] = ACTIONS(185),
    [anon_sym_COLON_COLON] = ACTIONS(185),
    [sym__id] = ACTIONS(187),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      sym_delay,
    STATE(100), 1,
      sym_substitutions,
    STATE(53), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(189), 25,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [56] = 10,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      sym_delay,
    ACTIONS(201), 1,
      sym_pow,
    STATE(100), 1,
      sym_substitutions,
    STATE(53), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(189), 24,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [114] = 17,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      sym_delay,
    ACTIONS(201), 1,
      sym_pow,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_COLON,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(211), 1,
      sym_add,
    ACTIONS(213), 1,
      anon_sym_DASH,
    STATE(100), 1,
      sym_substitutions,
    ACTIONS(217), 2,
      sym_lt,
      sym_gt,
    STATE(53), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(219), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(215), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(203), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [186] = 11,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      sym_delay,
    ACTIONS(201), 1,
      sym_pow,
    STATE(100), 1,
      sym_substitutions,
    STATE(53), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(215), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(189), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [246] = 14,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      sym_delay,
    ACTIONS(201), 1,
      sym_pow,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(211), 1,
      sym_add,
    ACTIONS(213), 1,
      anon_sym_DASH,
    STATE(100), 1,
      sym_substitutions,
    STATE(53), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(215), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(189), 14,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [312] = 8,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym_substitutions,
    STATE(53), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(189), 26,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [366] = 5,
    ACTIONS(63), 1,
      anon_sym_COLON_COLON,
    ACTIONS(65), 1,
      sym__id,
    STATE(102), 1,
      sym_id,
    ACTIONS(183), 6,
      anon_sym_COLON,
      anon_sym_with,
      anon_sym_letrec,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(181), 26,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [412] = 4,
    ACTIONS(225), 1,
      anon_sym_COLON_COLON,
    STATE(76), 1,
      aux_sym_id_repeat1,
    ACTIONS(223), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(221), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [455] = 4,
    ACTIONS(225), 1,
      anon_sym_COLON_COLON,
    STATE(78), 1,
      aux_sym_id_repeat1,
    ACTIONS(229), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(227), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [498] = 4,
    ACTIONS(225), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      aux_sym_id_repeat1,
    ACTIONS(233), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(231), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [541] = 4,
    ACTIONS(239), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      aux_sym_id_repeat1,
    ACTIONS(237), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(235), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [584] = 4,
    ACTIONS(225), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      aux_sym_id_repeat1,
    ACTIONS(223), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(221), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [627] = 14,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 1,
      sym_add,
    ACTIONS(250), 1,
      anon_sym_DASH,
    ACTIONS(254), 1,
      sym_pow,
    ACTIONS(256), 1,
      sym_delay,
    STATE(167), 1,
      sym_substitutions,
    STATE(59), 2,
      sym_sub,
      sym_or,
    STATE(165), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(252), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(189), 10,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [689] = 10,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    ACTIONS(254), 1,
      sym_pow,
    ACTIONS(256), 1,
      sym_delay,
    STATE(167), 1,
      sym_substitutions,
    STATE(59), 2,
      sym_sub,
      sym_or,
    STATE(165), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(189), 19,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [743] = 14,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_DASH,
    ACTIONS(258), 1,
      sym_add,
    ACTIONS(262), 1,
      sym_pow,
    ACTIONS(264), 1,
      sym_delay,
    STATE(100), 1,
      sym_substitutions,
    STATE(52), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(260), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(189), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [805] = 8,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    STATE(167), 1,
      sym_substitutions,
    STATE(59), 2,
      sym_sub,
      sym_or,
    STATE(165), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(189), 21,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [855] = 17,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(213), 1,
      anon_sym_DASH,
    ACTIONS(258), 1,
      sym_add,
    ACTIONS(262), 1,
      sym_pow,
    ACTIONS(264), 1,
      sym_delay,
    ACTIONS(268), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_substitutions,
    ACTIONS(270), 2,
      sym_lt,
      sym_gt,
    STATE(52), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(272), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(266), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(260), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [923] = 8,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym_substitutions,
    STATE(52), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(189), 22,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [973] = 17,
    ACTIONS(209), 1,
      anon_sym_PIPE,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    ACTIONS(248), 1,
      sym_add,
    ACTIONS(250), 1,
      anon_sym_DASH,
    ACTIONS(254), 1,
      sym_pow,
    ACTIONS(256), 1,
      sym_delay,
    ACTIONS(268), 1,
      anon_sym_COLON,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    STATE(167), 1,
      sym_substitutions,
    ACTIONS(276), 2,
      sym_lt,
      sym_gt,
    STATE(59), 2,
      sym_sub,
      sym_or,
    STATE(165), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(278), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(266), 5,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(252), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [1041] = 11,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      sym_pow,
    ACTIONS(264), 1,
      sym_delay,
    STATE(100), 1,
      sym_substitutions,
    STATE(52), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(260), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(189), 13,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1097] = 10,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      sym_pow,
    ACTIONS(264), 1,
      sym_delay,
    STATE(100), 1,
      sym_substitutions,
    STATE(52), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(189), 20,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1151] = 9,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    ACTIONS(256), 1,
      sym_delay,
    STATE(167), 1,
      sym_substitutions,
    STATE(59), 2,
      sym_sub,
      sym_or,
    STATE(165), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(189), 20,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1203] = 2,
    ACTIONS(237), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(235), 30,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [1241] = 9,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
    ACTIONS(264), 1,
      sym_delay,
    STATE(100), 1,
      sym_substitutions,
    STATE(52), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(189), 21,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1293] = 11,
    ACTIONS(242), 1,
      anon_sym_LPAREN,
    ACTIONS(244), 1,
      anon_sym_DOT,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
    ACTIONS(254), 1,
      sym_pow,
    ACTIONS(256), 1,
      sym_delay,
    STATE(167), 1,
      sym_substitutions,
    STATE(59), 2,
      sym_sub,
      sym_or,
    STATE(165), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(195), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(252), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(189), 12,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_PIPE,
      sym_add,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
  [1349] = 2,
    ACTIONS(282), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(280), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1386] = 2,
    ACTIONS(286), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(284), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1423] = 3,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(288), 28,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1462] = 2,
    ACTIONS(296), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(294), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1499] = 2,
    ACTIONS(300), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(298), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1536] = 2,
    ACTIONS(304), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(302), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1573] = 2,
    ACTIONS(308), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(306), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1610] = 2,
    ACTIONS(312), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(310), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1647] = 2,
    ACTIONS(316), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(314), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1684] = 2,
    ACTIONS(320), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(318), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1721] = 2,
    ACTIONS(324), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(322), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1758] = 3,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(288), 28,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1797] = 2,
    ACTIONS(330), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(328), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1834] = 2,
    ACTIONS(334), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(332), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1871] = 3,
    ACTIONS(336), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(288), 28,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1910] = 3,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(288), 28,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1949] = 2,
    ACTIONS(342), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(340), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [1986] = 2,
    ACTIONS(346), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(344), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2023] = 3,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(288), 28,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2062] = 3,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(288), 28,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2101] = 2,
    ACTIONS(354), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(352), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2138] = 2,
    ACTIONS(187), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(185), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2175] = 2,
    ACTIONS(358), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(356), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2212] = 2,
    ACTIONS(362), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(360), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2249] = 2,
    ACTIONS(366), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(364), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2286] = 2,
    ACTIONS(370), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(368), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2323] = 2,
    ACTIONS(374), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(372), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2360] = 2,
    ACTIONS(378), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(376), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2397] = 2,
    ACTIONS(382), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(380), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2434] = 2,
    ACTIONS(386), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(384), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2471] = 2,
    ACTIONS(390), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(388), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2508] = 2,
    ACTIONS(394), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(392), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2545] = 2,
    ACTIONS(398), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(396), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2582] = 2,
    ACTIONS(402), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(400), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2619] = 2,
    ACTIONS(406), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(404), 29,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2656] = 5,
    ACTIONS(117), 1,
      anon_sym_COLON_COLON,
    ACTIONS(119), 1,
      sym__id,
    STATE(169), 1,
      sym_id,
    ACTIONS(183), 5,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(181), 23,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2698] = 5,
    ACTIONS(63), 1,
      anon_sym_COLON_COLON,
    ACTIONS(65), 1,
      sym__id,
    STATE(102), 1,
      sym_id,
    ACTIONS(183), 4,
      anon_sym_COLON,
      sym_xor,
      sym_lt,
      sym_gt,
    ACTIONS(181), 24,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      anon_sym_DASH,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2740] = 4,
    ACTIONS(408), 1,
      anon_sym_COLON_COLON,
    STATE(129), 1,
      aux_sym_id_repeat1,
    ACTIONS(237), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(235), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2779] = 4,
    ACTIONS(411), 1,
      anon_sym_COLON_COLON,
    STATE(129), 1,
      aux_sym_id_repeat1,
    ACTIONS(233), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(231), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2818] = 4,
    ACTIONS(411), 1,
      anon_sym_COLON_COLON,
    STATE(129), 1,
      aux_sym_id_repeat1,
    ACTIONS(223), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(221), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2857] = 4,
    ACTIONS(411), 1,
      anon_sym_COLON_COLON,
    STATE(130), 1,
      aux_sym_id_repeat1,
    ACTIONS(223), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(221), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2896] = 4,
    ACTIONS(411), 1,
      anon_sym_COLON_COLON,
    STATE(131), 1,
      aux_sym_id_repeat1,
    ACTIONS(229), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(227), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [2935] = 2,
    ACTIONS(237), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(235), 25,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
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
  [2969] = 2,
    ACTIONS(300), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(298), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3002] = 2,
    ACTIONS(304), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(302), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3035] = 2,
    ACTIONS(366), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(364), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3068] = 3,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(288), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3103] = 2,
    ACTIONS(282), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(280), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3136] = 2,
    ACTIONS(382), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(380), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3169] = 2,
    ACTIONS(286), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(284), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3202] = 2,
    ACTIONS(406), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(404), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3235] = 2,
    ACTIONS(187), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(185), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3268] = 2,
    ACTIONS(346), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(344), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3301] = 3,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(288), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3336] = 2,
    ACTIONS(354), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(352), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3369] = 2,
    ACTIONS(312), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(310), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3402] = 3,
    ACTIONS(417), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(288), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3437] = 2,
    ACTIONS(370), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(368), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3470] = 2,
    ACTIONS(374), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(372), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3503] = 2,
    ACTIONS(378), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(376), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3536] = 3,
    ACTIONS(419), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(288), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3571] = 2,
    ACTIONS(386), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(384), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3604] = 3,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(288), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3639] = 3,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(288), 23,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3674] = 2,
    ACTIONS(402), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(400), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3707] = 2,
    ACTIONS(330), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(328), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3740] = 2,
    ACTIONS(334), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(332), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3773] = 2,
    ACTIONS(362), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(360), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3806] = 2,
    ACTIONS(398), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(396), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3839] = 2,
    ACTIONS(308), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(306), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3872] = 2,
    ACTIONS(358), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(356), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3905] = 2,
    ACTIONS(296), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(294), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3938] = 2,
    ACTIONS(394), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(392), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [3971] = 2,
    ACTIONS(320), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(318), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4004] = 2,
    ACTIONS(390), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(388), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4037] = 2,
    ACTIONS(316), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(314), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4070] = 2,
    ACTIONS(342), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(340), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4103] = 2,
    ACTIONS(324), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(322), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_SQUOTE,
      anon_sym_PIPE,
      sym_add,
      sym_mult,
      sym_div,
      sym_mod,
      sym_pow,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
      sym_delay,
  [4136] = 14,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
    ACTIONS(427), 1,
      anon_sym_declare,
    ACTIONS(430), 1,
      anon_sym_import,
    ACTIONS(433), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(439), 1,
      anon_sym_COLON_COLON,
    ACTIONS(442), 1,
      sym__id,
    ACTIONS(445), 1,
      sym_comment,
    STATE(261), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(207), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(388), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(389), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(436), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(170), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [4190] = 14,
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
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(450), 1,
      sym_comment,
    STATE(261), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(207), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(388), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(389), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(11), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(170), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [4244] = 9,
    ACTIONS(457), 1,
      anon_sym_COLON_COLON,
    ACTIONS(460), 1,
      sym__id,
    STATE(285), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    ACTIONS(452), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(172), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(354), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(454), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4279] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
    STATE(285), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(183), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(354), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(465), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4313] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(179), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(354), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(465), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4347] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(285), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(172), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(354), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(465), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4381] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(172), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(354), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(465), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4415] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(172), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(354), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(465), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4449] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(176), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(354), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(465), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4483] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(172), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(354), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(465), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4517] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(177), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(354), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(465), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4551] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(172), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(354), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(465), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4585] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
    STATE(285), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(175), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(354), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(465), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4619] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
    STATE(285), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(172), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(354), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(465), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4653] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      sym_variants,
    STATE(320), 1,
      sym_id,
    STATE(181), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(354), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(465), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4687] = 4,
    ACTIONS(487), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(489), 1,
      sym__doc_char,
    STATE(187), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(491), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4710] = 4,
    ACTIONS(493), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(495), 1,
      sym__doc_char,
    STATE(186), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(498), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4733] = 4,
    ACTIONS(501), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(503), 1,
      sym__doc_char,
    STATE(186), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(505), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4756] = 2,
    ACTIONS(507), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(509), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4772] = 2,
    ACTIONS(511), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(513), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4788] = 2,
    ACTIONS(515), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(517), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4804] = 2,
    ACTIONS(519), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(521), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4820] = 2,
    ACTIONS(523), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(525), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4836] = 2,
    ACTIONS(527), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(529), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4852] = 2,
    ACTIONS(533), 1,
      anon_sym_COLON,
    ACTIONS(531), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4867] = 2,
    ACTIONS(537), 1,
      anon_sym_COLON,
    ACTIONS(535), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4882] = 2,
    ACTIONS(541), 1,
      anon_sym_COLON,
    ACTIONS(539), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4897] = 2,
    ACTIONS(545), 1,
      anon_sym_COLON,
    ACTIONS(543), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4912] = 2,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(547), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4927] = 4,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(551), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4946] = 2,
    ACTIONS(561), 1,
      anon_sym_COLON,
    ACTIONS(559), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4961] = 2,
    ACTIONS(565), 1,
      anon_sym_COLON,
    ACTIONS(563), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4976] = 6,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(567), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_letrec,
  [4999] = 6,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(573), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_letrec,
  [5022] = 4,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(577), 1,
      anon_sym_COLON,
    ACTIONS(575), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [5041] = 3,
    ACTIONS(579), 1,
      anon_sym_COLON_COLON,
    STATE(205), 1,
      aux_sym_id_repeat1,
    ACTIONS(235), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5057] = 3,
    ACTIONS(582), 1,
      anon_sym_COLON_COLON,
    STATE(205), 1,
      aux_sym_id_repeat1,
    ACTIONS(231), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5073] = 4,
    ACTIONS(588), 1,
      anon_sym_COLON_COLON,
    ACTIONS(584), 2,
      anon_sym_import,
      sym__id,
    STATE(209), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(586), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5091] = 3,
    ACTIONS(582), 1,
      anon_sym_COLON_COLON,
    STATE(205), 1,
      aux_sym_id_repeat1,
    ACTIONS(221), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5107] = 4,
    ACTIONS(595), 1,
      anon_sym_COLON_COLON,
    ACTIONS(590), 2,
      anon_sym_import,
      sym__id,
    STATE(209), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(592), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5125] = 3,
    ACTIONS(582), 1,
      anon_sym_COLON_COLON,
    STATE(206), 1,
      aux_sym_id_repeat1,
    ACTIONS(221), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5141] = 3,
    ACTIONS(582), 1,
      anon_sym_COLON_COLON,
    STATE(208), 1,
      aux_sym_id_repeat1,
    ACTIONS(227), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5157] = 2,
    ACTIONS(519), 3,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(521), 5,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [5170] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(597), 1,
      anon_sym_SEMI,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
  [5195] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
    ACTIONS(603), 1,
      anon_sym_SEMI,
  [5220] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
    ACTIONS(605), 1,
      anon_sym_SEMI,
  [5245] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
  [5270] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
    ACTIONS(609), 1,
      anon_sym_SEMI,
  [5295] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
  [5320] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
  [5345] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
  [5370] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
  [5395] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
    ACTIONS(619), 1,
      anon_sym_SEMI,
  [5420] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
  [5445] = 4,
    ACTIONS(590), 1,
      sym__id,
    ACTIONS(595), 1,
      anon_sym_COLON_COLON,
    STATE(224), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(623), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5462] = 4,
    ACTIONS(584), 1,
      sym__id,
    ACTIONS(588), 1,
      anon_sym_COLON_COLON,
    STATE(224), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(626), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5479] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
  [5504] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
  [5529] = 1,
    ACTIONS(235), 8,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [5540] = 8,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(557), 1,
      anon_sym_TILDE,
    ACTIONS(569), 1,
      anon_sym_LT_COLON,
    ACTIONS(571), 1,
      anon_sym_COLON_GT,
    ACTIONS(599), 1,
      anon_sym_with,
    ACTIONS(601), 1,
      anon_sym_letrec,
    ACTIONS(632), 1,
      anon_sym_SEMI,
  [5565] = 2,
    ACTIONS(636), 1,
      anon_sym_COLON,
    ACTIONS(634), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5577] = 7,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_LT_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_GT,
    STATE(284), 1,
      aux_sym_arguments_repeat1,
  [5599] = 5,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_LT_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_GT,
    ACTIONS(650), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5616] = 5,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_LT_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_GT,
    ACTIONS(652), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5633] = 3,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(654), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5646] = 5,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_LT_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_GT,
    ACTIONS(656), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5663] = 5,
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(662), 1,
      anon_sym_TILDE,
    ACTIONS(664), 1,
      anon_sym_LT_COLON,
    ACTIONS(666), 1,
      anon_sym_COLON_GT,
    ACTIONS(658), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5680] = 5,
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(662), 1,
      anon_sym_TILDE,
    ACTIONS(664), 1,
      anon_sym_LT_COLON,
    ACTIONS(666), 1,
      anon_sym_COLON_GT,
    ACTIONS(650), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5697] = 3,
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(662), 1,
      anon_sym_TILDE,
    ACTIONS(654), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5710] = 6,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_LT_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_GT,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    ACTIONS(670), 1,
      anon_sym_COMMA,
  [5729] = 6,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_LT_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_GT,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    ACTIONS(674), 1,
      anon_sym_COMMA,
  [5748] = 5,
    ACTIONS(660), 1,
      anon_sym_COLON,
    ACTIONS(662), 1,
      anon_sym_TILDE,
    ACTIONS(664), 1,
      anon_sym_LT_COLON,
    ACTIONS(666), 1,
      anon_sym_COLON_GT,
    ACTIONS(652), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5765] = 5,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_LT_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_GT,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
  [5781] = 4,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    ACTIONS(678), 1,
      anon_sym_where,
    ACTIONS(680), 1,
      anon_sym_SQUOTE,
    STATE(245), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5795] = 5,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_LT_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_GT,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
  [5811] = 3,
    ACTIONS(686), 1,
      anon_sym_SQUOTE,
    ACTIONS(684), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(245), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5823] = 5,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(321), 1,
      sym__func_name,
    STATE(322), 1,
      sym_id,
    STATE(385), 1,
      sym_function_names,
  [5839] = 5,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    ACTIONS(693), 1,
      sym_int_cast,
    ACTIONS(695), 1,
      sym_float_cast,
    ACTIONS(697), 1,
      sym_any_cast,
    STATE(348), 1,
      sym_parameter_types,
  [5855] = 4,
    ACTIONS(680), 1,
      anon_sym_SQUOTE,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    ACTIONS(701), 1,
      anon_sym_where,
    STATE(243), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5869] = 5,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_LT_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_GT,
    ACTIONS(703), 1,
      anon_sym_COMMA,
  [5885] = 5,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_LT_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_GT,
    ACTIONS(705), 1,
      anon_sym_COMMA,
  [5901] = 5,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_LT_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_GT,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [5917] = 5,
    ACTIONS(642), 1,
      anon_sym_COLON,
    ACTIONS(644), 1,
      anon_sym_TILDE,
    ACTIONS(646), 1,
      anon_sym_LT_COLON,
    ACTIONS(648), 1,
      anon_sym_COLON_GT,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
  [5933] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    ACTIONS(711), 1,
      sym_string,
    STATE(341), 1,
      sym_id,
  [5946] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(312), 1,
      sym__func_name,
    STATE(322), 1,
      sym_id,
  [5959] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(280), 1,
      sym_id,
    STATE(371), 1,
      sym_parameters,
  [5972] = 4,
    ACTIONS(713), 1,
      sym_int_cast,
    ACTIONS(715), 1,
      sym_float_cast,
    STATE(246), 1,
      sym__type,
    STATE(413), 1,
      sym_signature,
  [5985] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(280), 1,
      sym_id,
    STATE(333), 1,
      sym_parameters,
  [5998] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(322), 1,
      sym_id,
    STATE(338), 1,
      sym__func_name,
  [6011] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(280), 1,
      sym_id,
    STATE(337), 1,
      sym_parameters,
  [6024] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(280), 1,
      sym_id,
    STATE(414), 1,
      sym_parameters,
  [6037] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(717), 1,
      anon_sym_import,
    STATE(329), 1,
      sym_id,
  [6050] = 3,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    STATE(263), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [6061] = 3,
    ACTIONS(723), 1,
      anon_sym_LPAREN,
    ACTIONS(726), 1,
      anon_sym_RBRACE,
    STATE(263), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [6072] = 3,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    STATE(361), 1,
      sym_rules,
    STATE(262), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [6083] = 3,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
    STATE(387), 1,
      sym_rules,
    STATE(262), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [6094] = 4,
    ACTIONS(713), 1,
      sym_int_cast,
    ACTIONS(715), 1,
      sym_float_cast,
    STATE(246), 1,
      sym__type,
    STATE(416), 1,
      sym_signature,
  [6107] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(322), 1,
      sym_id,
    STATE(324), 1,
      sym__func_name,
  [6120] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(317), 1,
      sym_id,
  [6130] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(253), 1,
      sym_id,
  [6140] = 3,
    ACTIONS(728), 1,
      sym_int_cast,
    ACTIONS(730), 1,
      sym_float_cast,
    ACTIONS(732), 1,
      sym_any_cast,
  [6150] = 1,
    ACTIONS(734), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [6156] = 3,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym_parameter_types_repeat1,
  [6166] = 3,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_parameter_types_repeat1,
  [6176] = 3,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(742), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_parameter_types_repeat1,
  [6186] = 3,
    ACTIONS(713), 1,
      sym_int_cast,
    ACTIONS(715), 1,
      sym_float_cast,
    STATE(309), 1,
      sym__type,
  [6196] = 3,
    ACTIONS(744), 1,
      anon_sym_COMMA,
    ACTIONS(746), 1,
      anon_sym_DASH_GT,
    STATE(287), 1,
      aux_sym_modulators_repeat1,
  [6206] = 3,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
    ACTIONS(748), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_arguments_repeat1,
  [6216] = 2,
    STATE(345), 1,
      sym__include_file,
    ACTIONS(751), 2,
      sym_string,
      sym_fstring,
  [6224] = 2,
    STATE(346), 1,
      sym__include_file,
    ACTIONS(751), 2,
      sym_string,
      sym_fstring,
  [6232] = 3,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_parameters_repeat1,
  [6242] = 3,
    ACTIONS(117), 1,
      anon_sym_COLON_COLON,
    ACTIONS(757), 1,
      sym__id,
    STATE(158), 1,
      sym_id,
  [6252] = 3,
    ACTIONS(63), 1,
      anon_sym_COLON_COLON,
    ACTIONS(759), 1,
      sym__id,
    STATE(105), 1,
      sym_id,
  [6262] = 3,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    STATE(297), 1,
      aux_sym_parameters_repeat1,
  [6272] = 3,
    ACTIONS(640), 1,
      anon_sym_COMMA,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym_arguments_repeat1,
  [6282] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(329), 1,
      sym_id,
  [6292] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(352), 1,
      sym_id,
  [6302] = 3,
    ACTIONS(744), 1,
      anon_sym_COMMA,
    ACTIONS(765), 1,
      anon_sym_DASH_GT,
    STATE(294), 1,
      aux_sym_modulators_repeat1,
  [6312] = 3,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(767), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      aux_sym_parameter_types_repeat1,
  [6322] = 3,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    ACTIONS(771), 1,
      anon_sym_COMMA,
    STATE(289), 1,
      aux_sym_parameter_types_repeat1,
  [6332] = 2,
    STATE(356), 1,
      sym__include_file,
    ACTIONS(751), 2,
      sym_string,
      sym_fstring,
  [6340] = 3,
    ACTIONS(713), 1,
      sym_int_cast,
    ACTIONS(715), 1,
      sym_float_cast,
    STATE(308), 1,
      sym__type,
  [6350] = 3,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_parameter_types_repeat1,
  [6360] = 2,
    ACTIONS(778), 1,
      anon_sym_COLON,
    ACTIONS(776), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6368] = 3,
    ACTIONS(780), 1,
      anon_sym_COMMA,
    ACTIONS(783), 1,
      anon_sym_DASH_GT,
    STATE(294), 1,
      aux_sym_modulators_repeat1,
  [6378] = 2,
    STATE(372), 1,
      sym__include_file,
    ACTIONS(751), 2,
      sym_string,
      sym_fstring,
  [6386] = 2,
    STATE(373), 1,
      sym__include_file,
    ACTIONS(751), 2,
      sym_string,
      sym_fstring,
  [6394] = 3,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    ACTIONS(787), 1,
      anon_sym_COMMA,
    STATE(297), 1,
      aux_sym_parameters_repeat1,
  [6404] = 3,
    ACTIONS(790), 1,
      sym_string,
    STATE(276), 1,
      sym_modulator,
    STATE(400), 1,
      sym_modulators,
  [6414] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(401), 1,
      sym_id,
  [6424] = 3,
    ACTIONS(790), 1,
      sym_string,
    STATE(276), 1,
      sym_modulator,
    STATE(339), 1,
      sym_modulators,
  [6434] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(402), 1,
      sym_id,
  [6444] = 2,
    STATE(405), 1,
      sym__include_file,
    ACTIONS(751), 2,
      sym_string,
      sym_fstring,
  [6452] = 3,
    ACTIONS(713), 1,
      sym_int_cast,
    ACTIONS(715), 1,
      sym_float_cast,
    STATE(299), 1,
      sym__type,
  [6462] = 3,
    ACTIONS(713), 1,
      sym_int_cast,
    ACTIONS(715), 1,
      sym_float_cast,
    STATE(301), 1,
      sym__type,
  [6472] = 3,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(792), 1,
      anon_sym_RPAREN,
    STATE(273), 1,
      aux_sym_parameter_types_repeat1,
  [6482] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(395), 1,
      sym_id,
  [6492] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(415), 1,
      sym_id,
  [6502] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(375), 1,
      sym_id,
  [6512] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(689), 1,
      sym__id,
    STATE(380), 1,
      sym_id,
  [6522] = 1,
    ACTIONS(794), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6527] = 2,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_environment,
  [6534] = 2,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
    ACTIONS(800), 1,
      anon_sym_PIPE,
  [6541] = 1,
    ACTIONS(769), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6546] = 1,
    ACTIONS(802), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6551] = 1,
    ACTIONS(804), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6556] = 1,
    ACTIONS(806), 2,
      anon_sym_COLON_COLON,
      sym__id,
  [6561] = 1,
    ACTIONS(808), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6566] = 1,
    ACTIONS(810), 2,
      anon_sym_COLON_COLON,
      sym__id,
  [6571] = 1,
    ACTIONS(783), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6576] = 2,
    ACTIONS(812), 1,
      anon_sym_EQ,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
  [6583] = 2,
    ACTIONS(816), 1,
      anon_sym_LPAREN,
    ACTIONS(818), 1,
      anon_sym_PIPE,
  [6590] = 1,
    ACTIONS(820), 2,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [6595] = 2,
    ACTIONS(790), 1,
      sym_string,
    STATE(319), 1,
      sym_modulator,
  [6602] = 2,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    ACTIONS(824), 1,
      anon_sym_PIPE,
  [6609] = 2,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_environment,
  [6616] = 2,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    STATE(200), 1,
      sym_environment,
  [6623] = 2,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    STATE(198), 1,
      sym_rec_environment,
  [6630] = 1,
    ACTIONS(830), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [6635] = 2,
    ACTIONS(832), 1,
      anon_sym_EQ,
    ACTIONS(834), 1,
      anon_sym_LPAREN,
  [6642] = 1,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
  [6646] = 1,
    ACTIONS(838), 1,
      sym__id,
  [6650] = 1,
    ACTIONS(840), 1,
      anon_sym_LPAREN,
  [6654] = 1,
    ACTIONS(842), 1,
      anon_sym_RPAREN,
  [6658] = 1,
    ACTIONS(844), 1,
      anon_sym_SEMI,
  [6662] = 1,
    ACTIONS(846), 1,
      anon_sym_SEMI,
  [6666] = 1,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
  [6670] = 1,
    ACTIONS(850), 1,
      anon_sym_RPAREN,
  [6674] = 1,
    ACTIONS(852), 1,
      anon_sym_LPAREN,
  [6678] = 1,
    ACTIONS(854), 1,
      anon_sym_DASH_GT,
  [6682] = 1,
    ACTIONS(856), 1,
      anon_sym_RPAREN,
  [6686] = 1,
    ACTIONS(858), 1,
      sym_string,
  [6690] = 1,
    ACTIONS(860), 1,
      anon_sym_SEMI,
  [6694] = 1,
    ACTIONS(862), 1,
      anon_sym_COMMA,
  [6698] = 1,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
  [6702] = 1,
    ACTIONS(866), 1,
      anon_sym_RPAREN,
  [6706] = 1,
    ACTIONS(868), 1,
      anon_sym_RPAREN,
  [6710] = 1,
    ACTIONS(870), 1,
      anon_sym_LPAREN,
  [6714] = 1,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
  [6718] = 1,
    ACTIONS(874), 1,
      anon_sym_COMMA,
  [6722] = 1,
    ACTIONS(876), 1,
      sym__id,
  [6726] = 1,
    ACTIONS(878), 1,
      sym_string,
  [6730] = 1,
    ACTIONS(880), 1,
      anon_sym_EQ,
  [6734] = 1,
    ACTIONS(882), 1,
      sym__id,
  [6738] = 1,
    ACTIONS(884), 1,
      anon_sym_SEMI,
  [6742] = 1,
    ACTIONS(886), 1,
      sym__id,
  [6746] = 1,
    ACTIONS(888), 1,
      anon_sym_COMMA,
  [6750] = 1,
    ACTIONS(890), 1,
      anon_sym_EQ_GT,
  [6754] = 1,
    ACTIONS(892), 1,
      sym_string,
  [6758] = 1,
    ACTIONS(894), 1,
      anon_sym_LPAREN,
  [6762] = 1,
    ACTIONS(896), 1,
      sym_string,
  [6766] = 1,
    ACTIONS(898), 1,
      anon_sym_RBRACE,
  [6770] = 1,
    ACTIONS(900), 1,
      anon_sym_RPAREN,
  [6774] = 1,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
  [6778] = 1,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
  [6782] = 1,
    ACTIONS(906), 1,
      anon_sym_EQ,
  [6786] = 1,
    ACTIONS(908), 1,
      anon_sym_SEMI,
  [6790] = 1,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
  [6794] = 1,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
  [6798] = 1,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
  [6802] = 1,
    ACTIONS(916), 1,
      anon_sym_EQ,
  [6806] = 1,
    ACTIONS(918), 1,
      anon_sym_RPAREN,
  [6810] = 1,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
  [6814] = 1,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
  [6818] = 1,
    ACTIONS(924), 1,
      anon_sym_LPAREN,
  [6822] = 1,
    ACTIONS(926), 1,
      anon_sym_COMMA,
  [6826] = 1,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
  [6830] = 1,
    ACTIONS(930), 1,
      anon_sym_LPAREN,
  [6834] = 1,
    ACTIONS(932), 1,
      sym__id,
  [6838] = 1,
    ACTIONS(934), 1,
      sym_string,
  [6842] = 1,
    ACTIONS(936), 1,
      anon_sym_COMMA,
  [6846] = 1,
    ACTIONS(938), 1,
      sym_string,
  [6850] = 1,
    ACTIONS(940), 1,
      sym_string,
  [6854] = 1,
    ACTIONS(942), 1,
      anon_sym_LPAREN,
  [6858] = 1,
    ACTIONS(944), 1,
      anon_sym_LPAREN,
  [6862] = 1,
    ACTIONS(946), 1,
      anon_sym_LPAREN,
  [6866] = 1,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
  [6870] = 1,
    ACTIONS(950), 1,
      anon_sym_RBRACE,
  [6874] = 1,
    ACTIONS(952), 1,
      anon_sym_SEMI,
  [6878] = 1,
    ACTIONS(954), 1,
      anon_sym_SEMI,
  [6882] = 1,
    ACTIONS(956), 1,
      ts_builtin_sym_end,
  [6886] = 1,
    ACTIONS(958), 1,
      anon_sym_RPAREN,
  [6890] = 1,
    ACTIONS(960), 1,
      anon_sym_LPAREN,
  [6894] = 1,
    ACTIONS(962), 1,
      anon_sym_DOT,
  [6898] = 1,
    ACTIONS(964), 1,
      sym__id,
  [6902] = 1,
    ACTIONS(966), 1,
      anon_sym_COMMA,
  [6906] = 1,
    ACTIONS(968), 1,
      sym_string,
  [6910] = 1,
    ACTIONS(970), 1,
      anon_sym_LBRACE,
  [6914] = 1,
    ACTIONS(972), 1,
      anon_sym_LPAREN,
  [6918] = 1,
    ACTIONS(974), 1,
      anon_sym_LPAREN,
  [6922] = 1,
    ACTIONS(976), 1,
      anon_sym_DASH_GT,
  [6926] = 1,
    ACTIONS(978), 1,
      anon_sym_COMMA,
  [6930] = 1,
    ACTIONS(980), 1,
      anon_sym_COMMA,
  [6934] = 1,
    ACTIONS(982), 1,
      anon_sym_LPAREN,
  [6938] = 1,
    ACTIONS(984), 1,
      anon_sym_LPAREN,
  [6942] = 1,
    ACTIONS(986), 1,
      anon_sym_COMMA,
  [6946] = 1,
    ACTIONS(988), 1,
      anon_sym_LBRACE,
  [6950] = 1,
    ACTIONS(990), 1,
      anon_sym_RPAREN,
  [6954] = 1,
    ACTIONS(992), 1,
      anon_sym_RPAREN,
  [6958] = 1,
    ACTIONS(994), 1,
      anon_sym_DOT,
  [6962] = 1,
    ACTIONS(996), 1,
      anon_sym_LPAREN,
  [6966] = 1,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
  [6970] = 1,
    ACTIONS(1000), 1,
      anon_sym_RPAREN,
  [6974] = 1,
    ACTIONS(1002), 1,
      anon_sym_COMMA,
  [6978] = 1,
    ACTIONS(1004), 1,
      anon_sym_RPAREN,
  [6982] = 1,
    ACTIONS(1006), 1,
      anon_sym_COMMA,
  [6986] = 1,
    ACTIONS(1008), 1,
      anon_sym_COMMA,
  [6990] = 1,
    ACTIONS(1010), 1,
      anon_sym_LPAREN,
  [6994] = 1,
    ACTIONS(1012), 1,
      anon_sym_LPAREN,
  [6998] = 1,
    ACTIONS(1014), 1,
      sym_string,
  [7002] = 1,
    ACTIONS(1016), 1,
      anon_sym_RPAREN,
  [7006] = 1,
    ACTIONS(1018), 1,
      anon_sym_RPAREN,
  [7010] = 1,
    ACTIONS(1020), 1,
      anon_sym_LPAREN,
  [7014] = 1,
    ACTIONS(1022), 1,
      anon_sym_LPAREN,
  [7018] = 1,
    ACTIONS(1024), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(67)] = 0,
  [SMALL_STATE(68)] = 56,
  [SMALL_STATE(69)] = 114,
  [SMALL_STATE(70)] = 186,
  [SMALL_STATE(71)] = 246,
  [SMALL_STATE(72)] = 312,
  [SMALL_STATE(73)] = 366,
  [SMALL_STATE(74)] = 412,
  [SMALL_STATE(75)] = 455,
  [SMALL_STATE(76)] = 498,
  [SMALL_STATE(77)] = 541,
  [SMALL_STATE(78)] = 584,
  [SMALL_STATE(79)] = 627,
  [SMALL_STATE(80)] = 689,
  [SMALL_STATE(81)] = 743,
  [SMALL_STATE(82)] = 805,
  [SMALL_STATE(83)] = 855,
  [SMALL_STATE(84)] = 923,
  [SMALL_STATE(85)] = 973,
  [SMALL_STATE(86)] = 1041,
  [SMALL_STATE(87)] = 1097,
  [SMALL_STATE(88)] = 1151,
  [SMALL_STATE(89)] = 1203,
  [SMALL_STATE(90)] = 1241,
  [SMALL_STATE(91)] = 1293,
  [SMALL_STATE(92)] = 1349,
  [SMALL_STATE(93)] = 1386,
  [SMALL_STATE(94)] = 1423,
  [SMALL_STATE(95)] = 1462,
  [SMALL_STATE(96)] = 1499,
  [SMALL_STATE(97)] = 1536,
  [SMALL_STATE(98)] = 1573,
  [SMALL_STATE(99)] = 1610,
  [SMALL_STATE(100)] = 1647,
  [SMALL_STATE(101)] = 1684,
  [SMALL_STATE(102)] = 1721,
  [SMALL_STATE(103)] = 1758,
  [SMALL_STATE(104)] = 1797,
  [SMALL_STATE(105)] = 1834,
  [SMALL_STATE(106)] = 1871,
  [SMALL_STATE(107)] = 1910,
  [SMALL_STATE(108)] = 1949,
  [SMALL_STATE(109)] = 1986,
  [SMALL_STATE(110)] = 2023,
  [SMALL_STATE(111)] = 2062,
  [SMALL_STATE(112)] = 2101,
  [SMALL_STATE(113)] = 2138,
  [SMALL_STATE(114)] = 2175,
  [SMALL_STATE(115)] = 2212,
  [SMALL_STATE(116)] = 2249,
  [SMALL_STATE(117)] = 2286,
  [SMALL_STATE(118)] = 2323,
  [SMALL_STATE(119)] = 2360,
  [SMALL_STATE(120)] = 2397,
  [SMALL_STATE(121)] = 2434,
  [SMALL_STATE(122)] = 2471,
  [SMALL_STATE(123)] = 2508,
  [SMALL_STATE(124)] = 2545,
  [SMALL_STATE(125)] = 2582,
  [SMALL_STATE(126)] = 2619,
  [SMALL_STATE(127)] = 2656,
  [SMALL_STATE(128)] = 2698,
  [SMALL_STATE(129)] = 2740,
  [SMALL_STATE(130)] = 2779,
  [SMALL_STATE(131)] = 2818,
  [SMALL_STATE(132)] = 2857,
  [SMALL_STATE(133)] = 2896,
  [SMALL_STATE(134)] = 2935,
  [SMALL_STATE(135)] = 2969,
  [SMALL_STATE(136)] = 3002,
  [SMALL_STATE(137)] = 3035,
  [SMALL_STATE(138)] = 3068,
  [SMALL_STATE(139)] = 3103,
  [SMALL_STATE(140)] = 3136,
  [SMALL_STATE(141)] = 3169,
  [SMALL_STATE(142)] = 3202,
  [SMALL_STATE(143)] = 3235,
  [SMALL_STATE(144)] = 3268,
  [SMALL_STATE(145)] = 3301,
  [SMALL_STATE(146)] = 3336,
  [SMALL_STATE(147)] = 3369,
  [SMALL_STATE(148)] = 3402,
  [SMALL_STATE(149)] = 3437,
  [SMALL_STATE(150)] = 3470,
  [SMALL_STATE(151)] = 3503,
  [SMALL_STATE(152)] = 3536,
  [SMALL_STATE(153)] = 3571,
  [SMALL_STATE(154)] = 3604,
  [SMALL_STATE(155)] = 3639,
  [SMALL_STATE(156)] = 3674,
  [SMALL_STATE(157)] = 3707,
  [SMALL_STATE(158)] = 3740,
  [SMALL_STATE(159)] = 3773,
  [SMALL_STATE(160)] = 3806,
  [SMALL_STATE(161)] = 3839,
  [SMALL_STATE(162)] = 3872,
  [SMALL_STATE(163)] = 3905,
  [SMALL_STATE(164)] = 3938,
  [SMALL_STATE(165)] = 3971,
  [SMALL_STATE(166)] = 4004,
  [SMALL_STATE(167)] = 4037,
  [SMALL_STATE(168)] = 4070,
  [SMALL_STATE(169)] = 4103,
  [SMALL_STATE(170)] = 4136,
  [SMALL_STATE(171)] = 4190,
  [SMALL_STATE(172)] = 4244,
  [SMALL_STATE(173)] = 4279,
  [SMALL_STATE(174)] = 4313,
  [SMALL_STATE(175)] = 4347,
  [SMALL_STATE(176)] = 4381,
  [SMALL_STATE(177)] = 4415,
  [SMALL_STATE(178)] = 4449,
  [SMALL_STATE(179)] = 4483,
  [SMALL_STATE(180)] = 4517,
  [SMALL_STATE(181)] = 4551,
  [SMALL_STATE(182)] = 4585,
  [SMALL_STATE(183)] = 4619,
  [SMALL_STATE(184)] = 4653,
  [SMALL_STATE(185)] = 4687,
  [SMALL_STATE(186)] = 4710,
  [SMALL_STATE(187)] = 4733,
  [SMALL_STATE(188)] = 4756,
  [SMALL_STATE(189)] = 4772,
  [SMALL_STATE(190)] = 4788,
  [SMALL_STATE(191)] = 4804,
  [SMALL_STATE(192)] = 4820,
  [SMALL_STATE(193)] = 4836,
  [SMALL_STATE(194)] = 4852,
  [SMALL_STATE(195)] = 4867,
  [SMALL_STATE(196)] = 4882,
  [SMALL_STATE(197)] = 4897,
  [SMALL_STATE(198)] = 4912,
  [SMALL_STATE(199)] = 4927,
  [SMALL_STATE(200)] = 4946,
  [SMALL_STATE(201)] = 4961,
  [SMALL_STATE(202)] = 4976,
  [SMALL_STATE(203)] = 4999,
  [SMALL_STATE(204)] = 5022,
  [SMALL_STATE(205)] = 5041,
  [SMALL_STATE(206)] = 5057,
  [SMALL_STATE(207)] = 5073,
  [SMALL_STATE(208)] = 5091,
  [SMALL_STATE(209)] = 5107,
  [SMALL_STATE(210)] = 5125,
  [SMALL_STATE(211)] = 5141,
  [SMALL_STATE(212)] = 5157,
  [SMALL_STATE(213)] = 5170,
  [SMALL_STATE(214)] = 5195,
  [SMALL_STATE(215)] = 5220,
  [SMALL_STATE(216)] = 5245,
  [SMALL_STATE(217)] = 5270,
  [SMALL_STATE(218)] = 5295,
  [SMALL_STATE(219)] = 5320,
  [SMALL_STATE(220)] = 5345,
  [SMALL_STATE(221)] = 5370,
  [SMALL_STATE(222)] = 5395,
  [SMALL_STATE(223)] = 5420,
  [SMALL_STATE(224)] = 5445,
  [SMALL_STATE(225)] = 5462,
  [SMALL_STATE(226)] = 5479,
  [SMALL_STATE(227)] = 5504,
  [SMALL_STATE(228)] = 5529,
  [SMALL_STATE(229)] = 5540,
  [SMALL_STATE(230)] = 5565,
  [SMALL_STATE(231)] = 5577,
  [SMALL_STATE(232)] = 5599,
  [SMALL_STATE(233)] = 5616,
  [SMALL_STATE(234)] = 5633,
  [SMALL_STATE(235)] = 5646,
  [SMALL_STATE(236)] = 5663,
  [SMALL_STATE(237)] = 5680,
  [SMALL_STATE(238)] = 5697,
  [SMALL_STATE(239)] = 5710,
  [SMALL_STATE(240)] = 5729,
  [SMALL_STATE(241)] = 5748,
  [SMALL_STATE(242)] = 5765,
  [SMALL_STATE(243)] = 5781,
  [SMALL_STATE(244)] = 5795,
  [SMALL_STATE(245)] = 5811,
  [SMALL_STATE(246)] = 5823,
  [SMALL_STATE(247)] = 5839,
  [SMALL_STATE(248)] = 5855,
  [SMALL_STATE(249)] = 5869,
  [SMALL_STATE(250)] = 5885,
  [SMALL_STATE(251)] = 5901,
  [SMALL_STATE(252)] = 5917,
  [SMALL_STATE(253)] = 5933,
  [SMALL_STATE(254)] = 5946,
  [SMALL_STATE(255)] = 5959,
  [SMALL_STATE(256)] = 5972,
  [SMALL_STATE(257)] = 5985,
  [SMALL_STATE(258)] = 5998,
  [SMALL_STATE(259)] = 6011,
  [SMALL_STATE(260)] = 6024,
  [SMALL_STATE(261)] = 6037,
  [SMALL_STATE(262)] = 6050,
  [SMALL_STATE(263)] = 6061,
  [SMALL_STATE(264)] = 6072,
  [SMALL_STATE(265)] = 6083,
  [SMALL_STATE(266)] = 6094,
  [SMALL_STATE(267)] = 6107,
  [SMALL_STATE(268)] = 6120,
  [SMALL_STATE(269)] = 6130,
  [SMALL_STATE(270)] = 6140,
  [SMALL_STATE(271)] = 6150,
  [SMALL_STATE(272)] = 6156,
  [SMALL_STATE(273)] = 6166,
  [SMALL_STATE(274)] = 6176,
  [SMALL_STATE(275)] = 6186,
  [SMALL_STATE(276)] = 6196,
  [SMALL_STATE(277)] = 6206,
  [SMALL_STATE(278)] = 6216,
  [SMALL_STATE(279)] = 6224,
  [SMALL_STATE(280)] = 6232,
  [SMALL_STATE(281)] = 6242,
  [SMALL_STATE(282)] = 6252,
  [SMALL_STATE(283)] = 6262,
  [SMALL_STATE(284)] = 6272,
  [SMALL_STATE(285)] = 6282,
  [SMALL_STATE(286)] = 6292,
  [SMALL_STATE(287)] = 6302,
  [SMALL_STATE(288)] = 6312,
  [SMALL_STATE(289)] = 6322,
  [SMALL_STATE(290)] = 6332,
  [SMALL_STATE(291)] = 6340,
  [SMALL_STATE(292)] = 6350,
  [SMALL_STATE(293)] = 6360,
  [SMALL_STATE(294)] = 6368,
  [SMALL_STATE(295)] = 6378,
  [SMALL_STATE(296)] = 6386,
  [SMALL_STATE(297)] = 6394,
  [SMALL_STATE(298)] = 6404,
  [SMALL_STATE(299)] = 6414,
  [SMALL_STATE(300)] = 6424,
  [SMALL_STATE(301)] = 6434,
  [SMALL_STATE(302)] = 6444,
  [SMALL_STATE(303)] = 6452,
  [SMALL_STATE(304)] = 6462,
  [SMALL_STATE(305)] = 6472,
  [SMALL_STATE(306)] = 6482,
  [SMALL_STATE(307)] = 6492,
  [SMALL_STATE(308)] = 6502,
  [SMALL_STATE(309)] = 6512,
  [SMALL_STATE(310)] = 6522,
  [SMALL_STATE(311)] = 6527,
  [SMALL_STATE(312)] = 6534,
  [SMALL_STATE(313)] = 6541,
  [SMALL_STATE(314)] = 6546,
  [SMALL_STATE(315)] = 6551,
  [SMALL_STATE(316)] = 6556,
  [SMALL_STATE(317)] = 6561,
  [SMALL_STATE(318)] = 6566,
  [SMALL_STATE(319)] = 6571,
  [SMALL_STATE(320)] = 6576,
  [SMALL_STATE(321)] = 6583,
  [SMALL_STATE(322)] = 6590,
  [SMALL_STATE(323)] = 6595,
  [SMALL_STATE(324)] = 6602,
  [SMALL_STATE(325)] = 6609,
  [SMALL_STATE(326)] = 6616,
  [SMALL_STATE(327)] = 6623,
  [SMALL_STATE(328)] = 6630,
  [SMALL_STATE(329)] = 6635,
  [SMALL_STATE(330)] = 6642,
  [SMALL_STATE(331)] = 6646,
  [SMALL_STATE(332)] = 6650,
  [SMALL_STATE(333)] = 6654,
  [SMALL_STATE(334)] = 6658,
  [SMALL_STATE(335)] = 6662,
  [SMALL_STATE(336)] = 6666,
  [SMALL_STATE(337)] = 6670,
  [SMALL_STATE(338)] = 6674,
  [SMALL_STATE(339)] = 6678,
  [SMALL_STATE(340)] = 6682,
  [SMALL_STATE(341)] = 6686,
  [SMALL_STATE(342)] = 6690,
  [SMALL_STATE(343)] = 6694,
  [SMALL_STATE(344)] = 6698,
  [SMALL_STATE(345)] = 6702,
  [SMALL_STATE(346)] = 6706,
  [SMALL_STATE(347)] = 6710,
  [SMALL_STATE(348)] = 6714,
  [SMALL_STATE(349)] = 6718,
  [SMALL_STATE(350)] = 6722,
  [SMALL_STATE(351)] = 6726,
  [SMALL_STATE(352)] = 6730,
  [SMALL_STATE(353)] = 6734,
  [SMALL_STATE(354)] = 6738,
  [SMALL_STATE(355)] = 6742,
  [SMALL_STATE(356)] = 6746,
  [SMALL_STATE(357)] = 6750,
  [SMALL_STATE(358)] = 6754,
  [SMALL_STATE(359)] = 6758,
  [SMALL_STATE(360)] = 6762,
  [SMALL_STATE(361)] = 6766,
  [SMALL_STATE(362)] = 6770,
  [SMALL_STATE(363)] = 6774,
  [SMALL_STATE(364)] = 6778,
  [SMALL_STATE(365)] = 6782,
  [SMALL_STATE(366)] = 6786,
  [SMALL_STATE(367)] = 6790,
  [SMALL_STATE(368)] = 6794,
  [SMALL_STATE(369)] = 6798,
  [SMALL_STATE(370)] = 6802,
  [SMALL_STATE(371)] = 6806,
  [SMALL_STATE(372)] = 6810,
  [SMALL_STATE(373)] = 6814,
  [SMALL_STATE(374)] = 6818,
  [SMALL_STATE(375)] = 6822,
  [SMALL_STATE(376)] = 6826,
  [SMALL_STATE(377)] = 6830,
  [SMALL_STATE(378)] = 6834,
  [SMALL_STATE(379)] = 6838,
  [SMALL_STATE(380)] = 6842,
  [SMALL_STATE(381)] = 6846,
  [SMALL_STATE(382)] = 6850,
  [SMALL_STATE(383)] = 6854,
  [SMALL_STATE(384)] = 6858,
  [SMALL_STATE(385)] = 6862,
  [SMALL_STATE(386)] = 6866,
  [SMALL_STATE(387)] = 6870,
  [SMALL_STATE(388)] = 6874,
  [SMALL_STATE(389)] = 6878,
  [SMALL_STATE(390)] = 6882,
  [SMALL_STATE(391)] = 6886,
  [SMALL_STATE(392)] = 6890,
  [SMALL_STATE(393)] = 6894,
  [SMALL_STATE(394)] = 6898,
  [SMALL_STATE(395)] = 6902,
  [SMALL_STATE(396)] = 6906,
  [SMALL_STATE(397)] = 6910,
  [SMALL_STATE(398)] = 6914,
  [SMALL_STATE(399)] = 6918,
  [SMALL_STATE(400)] = 6922,
  [SMALL_STATE(401)] = 6926,
  [SMALL_STATE(402)] = 6930,
  [SMALL_STATE(403)] = 6934,
  [SMALL_STATE(404)] = 6938,
  [SMALL_STATE(405)] = 6942,
  [SMALL_STATE(406)] = 6946,
  [SMALL_STATE(407)] = 6950,
  [SMALL_STATE(408)] = 6954,
  [SMALL_STATE(409)] = 6958,
  [SMALL_STATE(410)] = 6962,
  [SMALL_STATE(411)] = 6966,
  [SMALL_STATE(412)] = 6970,
  [SMALL_STATE(413)] = 6974,
  [SMALL_STATE(414)] = 6978,
  [SMALL_STATE(415)] = 6982,
  [SMALL_STATE(416)] = 6986,
  [SMALL_STATE(417)] = 6990,
  [SMALL_STATE(418)] = 6994,
  [SMALL_STATE(419)] = 6998,
  [SMALL_STATE(420)] = 7002,
  [SMALL_STATE(421)] = 7006,
  [SMALL_STATE(422)] = 7010,
  [SMALL_STATE(423)] = 7014,
  [SMALL_STATE(424)] = 7018,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 15),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 15),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(355),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fvariable, 7, .production_id = 31),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fvariable, 7, .production_id = 31),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 34),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 34),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim1, 4, .production_id = 21),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim1, 4, .production_id = 21),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim2, 4, .production_id = 22),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim2, 4, .production_id = 22),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim3, 4, .production_id = 22),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim3, 4, .production_id = 22),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim4, 4, .production_id = 22),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim4, 4, .production_id = 22),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim5, 4, .production_id = 22),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim5, 4, .production_id = 22),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 2, .production_id = 7),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 2, .production_id = 7),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2, .production_id = 8),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2, .production_id = 8),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate_id, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate_id, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 14),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 14),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4, .production_id = 20),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4, .production_id = 20),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulation, 5, .production_id = 25),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modulation, 5, .production_id = 25),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6, .production_id = 30),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6, .production_id = 30),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_library, 4, .production_id = 9),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_library, 4, .production_id = 9),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fconst, 7, .production_id = 31),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fconst, 7, .production_id = 31),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 8, .production_id = 32),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 8, .production_id = 32),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4, .production_id = 9),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4, .production_id = 9),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ffunction, 8, .production_id = 35),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ffunction, 8, .production_id = 35),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(378),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(269),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(410),
  [433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(185),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(207),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(394),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(211),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(170),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(225),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(394),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(211),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(186),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(186),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 6, .production_id = 17),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 6, .production_id = 17),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_definition, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__metadata_definition, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 5, .production_id = 9),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 5, .production_id = 9),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 13),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 13),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 12),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 13),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 13),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 12),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 12),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 12),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 12),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 12),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 12),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(350),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 1),
  [586] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants, 1),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [592] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(209),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 23),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, .production_id = 5),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 24),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [623] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(224),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 12),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 12),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 12),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 12),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 12),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulator, 3, .production_id = 2),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(286),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(23),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 38),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 2, .production_id = 28),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 2, .production_id = 29),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulators, 1),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(44),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulators, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 1, .production_id = 28),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2), SHIFT_REPEAT(270),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulator, 1, .production_id = 6),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modulators_repeat1, 2), SHIFT_REPEAT(323),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modulators_repeat1, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(268),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 1, .production_id = 29),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include_file, 1, .production_id = 26),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 5),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2, .production_id = 37),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2, .production_id = 36),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 11),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 16),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 10),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_name, 1, .production_id = 18),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 33),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 7),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 5, .production_id = 27),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 4, .production_id = 27),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [956] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
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
