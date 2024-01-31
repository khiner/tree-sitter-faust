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
#define STATE_COUNT 417
#define LARGE_STATE_COUNT 67
#define SYMBOL_COUNT 203
#define ALIAS_COUNT 3
#define TOKEN_COUNT 113
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
  sym_rdtable = 83,
  sym_rwtable = 84,
  sym_select2 = 85,
  sym_select3 = 86,
  sym_lowest = 87,
  sym_highest = 88,
  sym_assertbounds = 89,
  sym_int = 90,
  sym_real = 91,
  anon_sym_LTmdoc_GT = 92,
  anon_sym_LT_SLASHmdoc_GT = 93,
  sym__doc_char = 94,
  anon_sym_LTnotice_SLASH_GT = 95,
  anon_sym_LTnotice_SLASH_GT2 = 96,
  anon_sym_LTequation_GT = 97,
  anon_sym_LT_SLASHequation_GT = 98,
  anon_sym_LTdiagram_GT = 99,
  anon_sym_LT_SLASHdiagram_GT = 100,
  anon_sym_LTmetadata_GT = 101,
  anon_sym_LT_SLASHmetadata_GT = 102,
  anon_sym_LTlisting = 103,
  sym_single_precision = 104,
  sym_double_precision = 105,
  sym_quad_precision = 106,
  sym_fixed_point_precision = 107,
  sym_string = 108,
  sym_fstring = 109,
  anon_sym_COLON_COLON = 110,
  sym__id = 111,
  sym_comment = 112,
  sym_program = 113,
  sym__statement = 114,
  sym__definition = 115,
  sym_definition = 116,
  sym_function_definition = 117,
  sym__metadata_definition = 118,
  sym_global_metadata = 119,
  sym_function_metadata = 120,
  sym_file_import = 121,
  sym__expression = 122,
  sym__infix_expression = 123,
  sym_infix = 124,
  sym_partial = 125,
  sym_prefix = 126,
  sym_prim1 = 127,
  sym_prim2 = 128,
  sym_prim3 = 129,
  sym_prim4 = 130,
  sym_prim5 = 131,
  sym_function_call = 132,
  sym_modifier = 133,
  sym_access = 134,
  sym__primitive = 135,
  sym_lambda = 136,
  sym_modulation = 137,
  sym_modulators = 138,
  sym_modulator = 139,
  sym_parameters = 140,
  sym_arguments = 141,
  sym__argument = 142,
  sym_pattern = 143,
  sym_rules = 144,
  sym_rule = 145,
  sym_recursive_arg = 146,
  sym_sequential_arg = 147,
  sym_split_arg = 148,
  sym_merge_arg = 149,
  sym_iteration = 150,
  sym_with_environment = 151,
  sym_environment = 152,
  sym_letrec_environment = 153,
  sym_rec_environment = 154,
  sym_recinition = 155,
  sym_substitution = 156,
  sym_substitutions = 157,
  sym_ffunction = 158,
  sym_fconst = 159,
  sym_fvariable = 160,
  sym_signature = 161,
  sym_parameter_types = 162,
  sym__include_file = 163,
  sym_function_names = 164,
  sym__func_name = 165,
  sym__type = 166,
  sym__infix = 167,
  sym__prim1 = 168,
  sym__prim2 = 169,
  sym__prim3 = 170,
  sym__prim4 = 171,
  sym__prim5 = 172,
  sym__modifier = 173,
  sym_one_sample_delay = 174,
  sym_sub = 175,
  sym_or = 176,
  sym_component = 177,
  sym__number = 178,
  sym_documentation = 179,
  sym__doc_content = 180,
  sym__special_doc_tag = 181,
  sym__binary_composition = 182,
  sym_recursive = 183,
  sym_sequential = 184,
  sym_split = 185,
  sym_merge = 186,
  sym_parallel = 187,
  sym_variants = 188,
  sym__variant = 189,
  sym_id = 190,
  sym_negate_id = 191,
  aux_sym_program_repeat1 = 192,
  aux_sym_modulators_repeat1 = 193,
  aux_sym_parameters_repeat1 = 194,
  aux_sym_arguments_repeat1 = 195,
  aux_sym_rules_repeat1 = 196,
  aux_sym_environment_repeat1 = 197,
  aux_sym_rec_environment_repeat1 = 198,
  aux_sym_parameter_types_repeat1 = 199,
  aux_sym_documentation_repeat1 = 200,
  aux_sym_variants_repeat1 = 201,
  aux_sym_id_repeat1 = 202,
  alias_sym_float = 203,
  alias_sym_function_name = 204,
  alias_sym_parameter = 205,
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
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 4,
  [12] = 12,
  [13] = 13,
  [14] = 9,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 3,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 25,
  [30] = 22,
  [31] = 23,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 40,
  [41] = 35,
  [42] = 34,
  [43] = 43,
  [44] = 44,
  [45] = 38,
  [46] = 43,
  [47] = 32,
  [48] = 33,
  [49] = 37,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 50,
  [54] = 54,
  [55] = 52,
  [56] = 56,
  [57] = 51,
  [58] = 54,
  [59] = 56,
  [60] = 52,
  [61] = 56,
  [62] = 50,
  [63] = 51,
  [64] = 54,
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
  [79] = 68,
  [80] = 80,
  [81] = 81,
  [82] = 69,
  [83] = 70,
  [84] = 71,
  [85] = 67,
  [86] = 68,
  [87] = 69,
  [88] = 70,
  [89] = 71,
  [90] = 67,
  [91] = 81,
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
  [105] = 65,
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
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 73,
  [127] = 73,
  [128] = 75,
  [129] = 77,
  [130] = 76,
  [131] = 74,
  [132] = 78,
  [133] = 80,
  [134] = 106,
  [135] = 121,
  [136] = 65,
  [137] = 99,
  [138] = 122,
  [139] = 111,
  [140] = 115,
  [141] = 125,
  [142] = 110,
  [143] = 118,
  [144] = 113,
  [145] = 107,
  [146] = 116,
  [147] = 94,
  [148] = 95,
  [149] = 92,
  [150] = 108,
  [151] = 96,
  [152] = 109,
  [153] = 103,
  [154] = 104,
  [155] = 119,
  [156] = 120,
  [157] = 123,
  [158] = 124,
  [159] = 97,
  [160] = 114,
  [161] = 117,
  [162] = 93,
  [163] = 100,
  [164] = 112,
  [165] = 101,
  [166] = 102,
  [167] = 98,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 171,
  [176] = 174,
  [177] = 177,
  [178] = 172,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 180,
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
  [203] = 78,
  [204] = 74,
  [205] = 77,
  [206] = 206,
  [207] = 76,
  [208] = 208,
  [209] = 75,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 208,
  [214] = 80,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 218,
  [221] = 221,
  [222] = 211,
  [223] = 210,
  [224] = 188,
  [225] = 206,
  [226] = 226,
  [227] = 212,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 230,
  [234] = 232,
  [235] = 231,
  [236] = 236,
  [237] = 236,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 244,
  [246] = 246,
  [247] = 247,
  [248] = 240,
  [249] = 249,
  [250] = 242,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 251,
  [258] = 258,
  [259] = 255,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 256,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 267,
  [271] = 271,
  [272] = 271,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 269,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 291,
  [294] = 294,
  [295] = 295,
  [296] = 284,
  [297] = 290,
  [298] = 298,
  [299] = 281,
  [300] = 300,
  [301] = 286,
  [302] = 302,
  [303] = 303,
  [304] = 292,
  [305] = 305,
  [306] = 295,
  [307] = 307,
  [308] = 308,
  [309] = 309,
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
  [322] = 310,
  [323] = 323,
  [324] = 324,
  [325] = 325,
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
  [347] = 342,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 352,
  [355] = 330,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 341,
  [367] = 340,
  [368] = 368,
  [369] = 369,
  [370] = 338,
  [371] = 345,
  [372] = 342,
  [373] = 373,
  [374] = 374,
  [375] = 349,
  [376] = 353,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 346,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 345,
  [388] = 388,
  [389] = 348,
  [390] = 390,
  [391] = 380,
  [392] = 336,
  [393] = 378,
  [394] = 377,
  [395] = 358,
  [396] = 390,
  [397] = 351,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 398,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 328,
  [406] = 369,
  [407] = 386,
  [408] = 404,
  [409] = 400,
  [410] = 403,
  [411] = 362,
  [412] = 361,
  [413] = 360,
  [414] = 363,
  [415] = 399,
  [416] = 357,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(321);
      if (lookahead == '!') ADVANCE(451);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '&') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '+') ADVANCE(372);
      if (lookahead == ',') ADVANCE(330);
      if (lookahead == '-') ADVANCE(374);
      if (lookahead == '.') ADVANCE(332);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == ';') ADVANCE(322);
      if (lookahead == '<') ADVANCE(386);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead == '>') ADVANCE(389);
      if (lookahead == '@') ADVANCE(393);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == ']') ADVANCE(338);
      if (lookahead == '^') ADVANCE(380);
      if (lookahead == '_') ADVANCE(449);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 'm') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'q') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(139);
      if (lookahead == 'x') ADVANCE(216);
      if (lookahead == '{') ADVANCE(344);
      if (lookahead == '|') ADVANCE(370);
      if (lookahead == '}') ADVANCE(345);
      if (lookahead == '~') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(451);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '&') ADVANCE(381);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '+') ADVANCE(372);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '<') ADVANCE(387);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(389);
      if (lookahead == '@') ADVANCE(393);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(335);
      if (lookahead == '^') ADVANCE(380);
      if (lookahead == '_') ADVANCE(450);
      if (lookahead == 'a') ADVANCE(517);
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(614);
      if (lookahead == 'f') ADVANCE(527);
      if (lookahead == 'h') ADVANCE(577);
      if (lookahead == 'i') ADVANCE(622);
      if (lookahead == 'l') ADVANCE(635);
      if (lookahead == 'm') ADVANCE(501);
      if (lookahead == 'p') ADVANCE(504);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead == 's') ADVANCE(543);
      if (lookahead == 't') ADVANCE(508);
      if (lookahead == 'x') ADVANCE(643);
      if (lookahead == '|') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '&') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '+') ADVANCE(371);
      if (lookahead == ',') ADVANCE(330);
      if (lookahead == '-') ADVANCE(373);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == ';') ADVANCE(322);
      if (lookahead == '<') ADVANCE(386);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(389);
      if (lookahead == '@') ADVANCE(393);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == ']') ADVANCE(338);
      if (lookahead == '^') ADVANCE(380);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'l') ADVANCE(555);
      if (lookahead == 'w') ADVANCE(586);
      if (lookahead == 'x') ADVANCE(643);
      if (lookahead == '|') ADVANCE(370);
      if (lookahead == '~') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '&') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '+') ADVANCE(371);
      if (lookahead == ',') ADVANCE(330);
      if (lookahead == '-') ADVANCE(373);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == ';') ADVANCE(322);
      if (lookahead == '<') ADVANCE(386);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(389);
      if (lookahead == '@') ADVANCE(393);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == ']') ADVANCE(338);
      if (lookahead == '^') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(216);
      if (lookahead == '|') ADVANCE(370);
      if (lookahead == '~') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '&') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '+') ADVANCE(371);
      if (lookahead == ',') ADVANCE(330);
      if (lookahead == '-') ADVANCE(373);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == '<') ADVANCE(386);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(389);
      if (lookahead == '@') ADVANCE(393);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == '^') ADVANCE(380);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(643);
      if (lookahead == '|') ADVANCE(370);
      if (lookahead == '~') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '&') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '+') ADVANCE(371);
      if (lookahead == ',') ADVANCE(330);
      if (lookahead == '-') ADVANCE(373);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == ';') ADVANCE(322);
      if (lookahead == '<') ADVANCE(386);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(389);
      if (lookahead == '@') ADVANCE(393);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == ']') ADVANCE(338);
      if (lookahead == '^') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(216);
      if (lookahead == '|') ADVANCE(370);
      if (lookahead == '~') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '&') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '+') ADVANCE(371);
      if (lookahead == ',') ADVANCE(330);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(341);
      if (lookahead == '<') ADVANCE(386);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(389);
      if (lookahead == '@') ADVANCE(393);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == '^') ADVANCE(380);
      if (lookahead == 'x') ADVANCE(216);
      if (lookahead == '|') ADVANCE(370);
      if (lookahead == '~') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '&') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '+') ADVANCE(371);
      if (lookahead == ',') ADVANCE(330);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == '<') ADVANCE(386);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(389);
      if (lookahead == '@') ADVANCE(393);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == '^') ADVANCE(380);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(643);
      if (lookahead == '|') ADVANCE(370);
      if (lookahead == '~') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '&') ADVANCE(381);
      if (lookahead == '\'') ADVANCE(363);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == '*') ADVANCE(377);
      if (lookahead == '+') ADVANCE(371);
      if (lookahead == ',') ADVANCE(330);
      if (lookahead == '-') ADVANCE(376);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(378);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == '<') ADVANCE(386);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(389);
      if (lookahead == '@') ADVANCE(393);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == '^') ADVANCE(380);
      if (lookahead == 'x') ADVANCE(216);
      if (lookahead == '|') ADVANCE(370);
      if (lookahead == '~') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '(') ADVANCE(324);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == ',') ADVANCE(330);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(323);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '|') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '<') ADVANCE(17);
      if (lookahead == ']') ADVANCE(338);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'f') ADVANCE(573);
      if (lookahead == 'q') ADVANCE(707);
      if (lookahead == 's') ADVANCE(574);
      if (lookahead == '}') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(495);
      if (lookahead == '\\') ADVANCE(318);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(718);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(717);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(330);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '>') ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(398);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(460);
      if (lookahead == '3') ADVANCE(462);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(497);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(637);
      if (lookahead == 'f') ADVANCE(573);
      if (lookahead == 'i') ADVANCE(603);
      if (lookahead == 'q') ADVANCE(707);
      if (lookahead == 's') ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(603);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 25:
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(476);
      if (lookahead != 0) ADVANCE(477);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(392);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(391);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(337);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(346);
      END_STATE();
    case 30:
      if (lookahead == '>') ADVANCE(474);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(475);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(482);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(478);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(483);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(480);
      END_STATE();
    case 37:
      if (lookahead == '>') ADVANCE(484);
      END_STATE();
    case 38:
      if (lookahead == '>') ADVANCE(479);
      END_STATE();
    case 39:
      if (lookahead == '>') ADVANCE(481);
      END_STATE();
    case 40:
      if (lookahead == '>') ADVANCE(485);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(266);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(293);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(294);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'v') ADVANCE(150);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(299);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(263);
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 's') ADVANCE(148);
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 71:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 72:
      if (lookahead == 'b') ADVANCE(233);
      END_STATE();
    case 73:
      if (lookahead == 'b') ADVANCE(172);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 75:
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(175);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(360);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(214);
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(291);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(166);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(435);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 92:
      if (lookahead == 'd') ADVANCE(410);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == 'w') ADVANCE(300);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 95:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 96:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 97:
      if (lookahead == 'd') ADVANCE(218);
      END_STATE();
    case 98:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 99:
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 100:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 101:
      if (lookahead == 'd') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 102:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'q') ADVANCE(250);
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(145);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 135:
      if (lookahead == 'g') ADVANCE(396);
      if (lookahead == 'w') ADVANCE(124);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(486);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(254);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(443);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(312);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(272);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(406);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'q') ADVANCE(352);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 178:
      if (lookahead == 'm') ADVANCE(452);
      END_STATE();
    case 179:
      if (lookahead == 'm') ADVANCE(354);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(290);
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(234);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(431);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(414);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(491);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(487);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(194);
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
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(308);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(394);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 238:
      if (lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 240:
      if (lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 242:
      if (lookahead == 'q') ADVANCE(305);
      END_STATE();
    case 243:
      if (lookahead == 'q') ADVANCE(309);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(404);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(437);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(277);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(402);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(468);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(295);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(424);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(366);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 293:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 294:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 295:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 296:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 297:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 298:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 299:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 300:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 301:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 302:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 303:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 304:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 305:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 306:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 307:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 308:
      if (lookahead == 'u') ADVANCE(205);
      END_STATE();
    case 309:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 310:
      if (lookahead == 'w') ADVANCE(429);
      END_STATE();
    case 311:
      if (lookahead == 'x') ADVANCE(433);
      END_STATE();
    case 312:
      if (lookahead == 'x') ADVANCE(441);
      END_STATE();
    case 313:
      if (lookahead == 'x') ADVANCE(123);
      END_STATE();
    case 314:
      if (lookahead == 'y') ADVANCE(428);
      END_STATE();
    case 315:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      END_STATE();
    case 316:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      END_STATE();
    case 317:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      END_STATE();
    case 318:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 319:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(718);
      if (lookahead == '\r') ADVANCE(719);
      END_STATE();
    case 320:
      if (eof) ADVANCE(321);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '<') ADVANCE(185);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'd') ADVANCE(541);
      if (lookahead == 'f') ADVANCE(573);
      if (lookahead == 'i') ADVANCE(603);
      if (lookahead == 'q') ADVANCE(707);
      if (lookahead == 's') ADVANCE(574);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(320)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_declare);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_declare);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_environment);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(497);
      if (lookahead == '>') ADVANCE(349);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '>') ADVANCE(349);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_par);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_par);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_seq);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_seq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_sum);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_prod);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_prod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_letrec);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_letrec);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_ffunction);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_ffunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_fconstant);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_fconstant);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_fvariable);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_fvariable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_add);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_add);
      if (lookahead == '.') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == '>') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(337);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_mult);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_div);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_mod);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_pow);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_xor);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_xor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_lshift);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_rshift);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(388);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_lt);
      if (lookahead == '<') ADVANCE(384);
      if (lookahead == '=') ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_le);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_gt);
      if (lookahead == '=') ADVANCE(390);
      if (lookahead == '>') ADVANCE(385);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_ge);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_eq);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_neq);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_delay);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_exp);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_exp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(20);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_log);
      if (lookahead == '1') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_log10);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_log10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_sqrt);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_sqrt);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_abs);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_abs);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_floor);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_floor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_ceil);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_ceil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_rint);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_rint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_round);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_round);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_acos);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_acos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_asin);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_asin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(439);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_atan);
      if (lookahead == '2') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_cos);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_cos);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_sin);
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_tan);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_tan);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_int_cast);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_int_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_float_cast);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_float_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_any_cast);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_pow_fun);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_pow_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_min);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_fmod);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_fmod);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_remainder);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_remainder);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_atan2);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_atan2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_prefix_prim);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_prefix_prim);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_attach);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_attach);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_enable);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_enable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_control);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_control);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_wire);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_wire);
      if (lookahead == '_') ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_cut);
      if (lookahead == '=') ADVANCE(392);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_mem);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_mem);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_component);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_component);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_rdtable);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_rdtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_rwtable);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_rwtable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_select2);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_select2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_select3);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_select3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_lowest);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_lowest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_highest);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_highest);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_assertbounds);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_assertbounds);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_int);
      if (lookahead == '.') ADVANCE(472);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_real);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'f') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LTmdoc_GT);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmdoc_GT);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(477);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__doc_char);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(477);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_LTnotice_SLASH_GT2);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_LTequation_GT);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_LT_SLASHequation_GT);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_LTdiagram_GT);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_LT_SLASHdiagram_GT);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_LTmetadata_GT);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LT_SLASHmetadata_GT);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_LTlisting);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_single_precision);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_single_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_double_precision);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_double_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_quad_precision);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_quad_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_fixed_point_precision);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_fstring);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '0') ADVANCE(399);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == '2') ADVANCE(461);
      if (lookahead == '3') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(714);
      if (lookahead == 'e') ADVANCE(604);
      if (lookahead == 'i') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(661);
      if (lookahead == 'o') ADVANCE(712);
      if (lookahead == 'r') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(681);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead == 'o') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(691);
      if (lookahead == 'o') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(619);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead == 'v') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'a') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(676);
      if (lookahead == 'c') ADVANCE(644);
      if (lookahead == 's') ADVANCE(584);
      if (lookahead == 't') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'b') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(647);
      if (lookahead == 'f') ADVANCE(709);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead == 'm') ADVANCE(640);
      if (lookahead == 'v') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'c') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(700);
      if (lookahead == 'e') ADVANCE(606);
      if (lookahead == 'i') ADVANCE(628);
      if (lookahead == 'o') ADVANCE(710);
      if (lookahead == 'w') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'd') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(523);
      if (lookahead == 'o') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(616);
      if (lookahead == 'q') ADVANCE(667);
      if (lookahead == 'u') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(566);
      if (lookahead == 'o') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'e') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'f') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(397);
      if (lookahead == 'w') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'g') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'h') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(618);
      if (lookahead == 's') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'i') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(556);
      if (lookahead == 'q') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'l') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(656);
      if (lookahead == 'n') ADVANCE(701);
      if (lookahead == 's') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'm') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(512);
      if (lookahead == 'x') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'n') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'o') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'p') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'r') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 's') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 't') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'u') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'w') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__id);
      if (lookahead == 'x') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(716);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(718);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(718);
      if (lookahead == '\\') ADVANCE(319);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 320},
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
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
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
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 7},
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
  [168] = {.lex_state = 320},
  [169] = {.lex_state = 320},
  [170] = {.lex_state = 11},
  [171] = {.lex_state = 11},
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
  [183] = {.lex_state = 25},
  [184] = {.lex_state = 25},
  [185] = {.lex_state = 25},
  [186] = {.lex_state = 320},
  [187] = {.lex_state = 320},
  [188] = {.lex_state = 320},
  [189] = {.lex_state = 320},
  [190] = {.lex_state = 320},
  [191] = {.lex_state = 320},
  [192] = {.lex_state = 6},
  [193] = {.lex_state = 6},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 23},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 23},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 11},
  [214] = {.lex_state = 10},
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
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 7},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 7},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 6},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 6},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 24},
  [254] = {.lex_state = 10},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 10},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 10},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 10},
  [263] = {.lex_state = 10},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 10},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 11},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 11},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 10},
  [272] = {.lex_state = 10},
  [273] = {.lex_state = 10},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 10},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 10},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 10},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 11},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 11},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 10},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 10},
  [296] = {.lex_state = 11},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 10},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 10},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 10},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 10},
  [313] = {.lex_state = 10},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
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
  [331] = {.lex_state = 0},
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
  [342] = {.lex_state = 10},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 10},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 10},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 320},
  [357] = {.lex_state = 0},
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
  [371] = {.lex_state = 10},
  [372] = {.lex_state = 10},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 10},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 320},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 320},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
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
    [sym_program] = STATE(383),
    [sym__statement] = STATE(168),
    [sym__definition] = STATE(168),
    [sym_definition] = STATE(382),
    [sym_function_definition] = STATE(382),
    [sym__metadata_definition] = STATE(168),
    [sym_global_metadata] = STATE(381),
    [sym_function_metadata] = STATE(381),
    [sym_file_import] = STATE(168),
    [sym_documentation] = STATE(168),
    [sym_variants] = STATE(253),
    [sym__variant] = STATE(208),
    [sym_id] = STATE(317),
    [aux_sym_program_repeat1] = STATE(168),
    [aux_sym_variants_repeat1] = STATE(208),
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
    [sym__expression] = STATE(212),
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
    [sym_with_environment] = STATE(212),
    [sym_letrec_environment] = STATE(212),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(212),
    [sym_recursive] = STATE(212),
    [sym_sequential] = STATE(212),
    [sym_split] = STATE(212),
    [sym_merge] = STATE(212),
    [sym_parallel] = STATE(212),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [3] = {
    [sym__expression] = STATE(220),
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
    [sym_with_environment] = STATE(220),
    [sym_letrec_environment] = STATE(220),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(220),
    [sym_recursive] = STATE(220),
    [sym_sequential] = STATE(220),
    [sym_split] = STATE(220),
    [sym_merge] = STATE(220),
    [sym_parallel] = STATE(220),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [4] = {
    [sym__expression] = STATE(222),
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
    [sym_with_environment] = STATE(222),
    [sym_letrec_environment] = STATE(222),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(222),
    [sym_recursive] = STATE(222),
    [sym_sequential] = STATE(222),
    [sym_split] = STATE(222),
    [sym_merge] = STATE(222),
    [sym_parallel] = STATE(222),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [5] = {
    [sym__expression] = STATE(219),
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
    [sym_with_environment] = STATE(219),
    [sym_letrec_environment] = STATE(219),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(219),
    [sym_recursive] = STATE(219),
    [sym_sequential] = STATE(219),
    [sym_split] = STATE(219),
    [sym_merge] = STATE(219),
    [sym_parallel] = STATE(219),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [6] = {
    [sym__expression] = STATE(227),
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
    [sym_with_environment] = STATE(227),
    [sym_letrec_environment] = STATE(227),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(227),
    [sym_recursive] = STATE(227),
    [sym_sequential] = STATE(227),
    [sym_split] = STATE(227),
    [sym_merge] = STATE(227),
    [sym_parallel] = STATE(227),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [7] = {
    [sym__expression] = STATE(226),
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
    [sym_with_environment] = STATE(226),
    [sym_letrec_environment] = STATE(226),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(226),
    [sym_recursive] = STATE(226),
    [sym_sequential] = STATE(226),
    [sym_split] = STATE(226),
    [sym_merge] = STATE(226),
    [sym_parallel] = STATE(226),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [8] = {
    [sym__expression] = STATE(216),
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
    [sym_with_environment] = STATE(216),
    [sym_letrec_environment] = STATE(216),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(216),
    [sym_recursive] = STATE(216),
    [sym_sequential] = STATE(216),
    [sym_split] = STATE(216),
    [sym_merge] = STATE(216),
    [sym_parallel] = STATE(216),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [9] = {
    [sym__expression] = STATE(210),
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
    [sym_with_environment] = STATE(210),
    [sym_letrec_environment] = STATE(210),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(210),
    [sym_recursive] = STATE(210),
    [sym_sequential] = STATE(210),
    [sym_split] = STATE(210),
    [sym_merge] = STATE(210),
    [sym_parallel] = STATE(210),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [10] = {
    [sym__expression] = STATE(217),
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
    [sym_with_environment] = STATE(217),
    [sym_letrec_environment] = STATE(217),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(217),
    [sym_recursive] = STATE(217),
    [sym_sequential] = STATE(217),
    [sym_split] = STATE(217),
    [sym_merge] = STATE(217),
    [sym_parallel] = STATE(217),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [11] = {
    [sym__expression] = STATE(211),
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
    [sym_with_environment] = STATE(211),
    [sym_letrec_environment] = STATE(211),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(211),
    [sym_recursive] = STATE(211),
    [sym_sequential] = STATE(211),
    [sym_split] = STATE(211),
    [sym_merge] = STATE(211),
    [sym_parallel] = STATE(211),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [12] = {
    [sym__expression] = STATE(192),
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
    [sym_with_environment] = STATE(192),
    [sym_letrec_environment] = STATE(192),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(192),
    [sym_recursive] = STATE(192),
    [sym_sequential] = STATE(192),
    [sym_split] = STATE(192),
    [sym_merge] = STATE(192),
    [sym_parallel] = STATE(192),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [13] = {
    [sym__expression] = STATE(215),
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
    [sym_with_environment] = STATE(215),
    [sym_letrec_environment] = STATE(215),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(215),
    [sym_recursive] = STATE(215),
    [sym_sequential] = STATE(215),
    [sym_split] = STATE(215),
    [sym_merge] = STATE(215),
    [sym_parallel] = STATE(215),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [14] = {
    [sym__expression] = STATE(223),
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
    [sym_with_environment] = STATE(223),
    [sym_letrec_environment] = STATE(223),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(223),
    [sym_recursive] = STATE(223),
    [sym_sequential] = STATE(223),
    [sym_split] = STATE(223),
    [sym_merge] = STATE(223),
    [sym_parallel] = STATE(223),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [15] = {
    [sym__expression] = STATE(201),
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
    [sym_with_environment] = STATE(201),
    [sym_letrec_environment] = STATE(201),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(201),
    [sym_recursive] = STATE(201),
    [sym_sequential] = STATE(201),
    [sym_split] = STATE(201),
    [sym_merge] = STATE(201),
    [sym_parallel] = STATE(201),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [16] = {
    [sym__expression] = STATE(200),
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
    [sym_with_environment] = STATE(200),
    [sym_letrec_environment] = STATE(200),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(200),
    [sym_recursive] = STATE(200),
    [sym_sequential] = STATE(200),
    [sym_split] = STATE(200),
    [sym_merge] = STATE(200),
    [sym_parallel] = STATE(200),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [17] = {
    [sym__expression] = STATE(197),
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
    [sym_with_environment] = STATE(197),
    [sym_letrec_environment] = STATE(197),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(197),
    [sym_recursive] = STATE(197),
    [sym_sequential] = STATE(197),
    [sym_split] = STATE(197),
    [sym_merge] = STATE(197),
    [sym_parallel] = STATE(197),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [18] = {
    [sym__expression] = STATE(198),
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
    [sym_with_environment] = STATE(198),
    [sym_letrec_environment] = STATE(198),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(198),
    [sym_recursive] = STATE(198),
    [sym_sequential] = STATE(198),
    [sym_split] = STATE(198),
    [sym_merge] = STATE(198),
    [sym_parallel] = STATE(198),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [19] = {
    [sym__expression] = STATE(221),
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
    [sym_with_environment] = STATE(221),
    [sym_letrec_environment] = STATE(221),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(221),
    [sym_recursive] = STATE(221),
    [sym_sequential] = STATE(221),
    [sym_split] = STATE(221),
    [sym_merge] = STATE(221),
    [sym_parallel] = STATE(221),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [20] = {
    [sym__expression] = STATE(218),
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
    [sym_with_environment] = STATE(218),
    [sym_letrec_environment] = STATE(218),
    [sym_substitution] = STATE(72),
    [sym_ffunction] = STATE(72),
    [sym_fconst] = STATE(72),
    [sym_fvariable] = STATE(72),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(72),
    [sym__number] = STATE(72),
    [sym__binary_composition] = STATE(218),
    [sym_recursive] = STATE(218),
    [sym_sequential] = STATE(218),
    [sym_split] = STATE(218),
    [sym_merge] = STATE(218),
    [sym_parallel] = STATE(218),
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
    [sym_wire] = ACTIONS(49),
    [sym_cut] = ACTIONS(49),
    [sym_mem] = ACTIONS(49),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(49),
    [sym_real] = ACTIONS(59),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [21] = {
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
    [sym_arguments] = STATE(362),
    [sym__argument] = STATE(229),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(229),
    [sym_sequential_arg] = STATE(229),
    [sym_split_arg] = STATE(229),
    [sym_merge_arg] = STATE(229),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [22] = {
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
    [sym_arguments] = STATE(413),
    [sym__argument] = STATE(229),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(229),
    [sym_sequential_arg] = STATE(229),
    [sym_split_arg] = STATE(229),
    [sym_merge_arg] = STATE(229),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [23] = {
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
    [sym_arguments] = STATE(412),
    [sym__argument] = STATE(229),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(229),
    [sym_sequential_arg] = STATE(229),
    [sym_split_arg] = STATE(229),
    [sym_merge_arg] = STATE(229),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [24] = {
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
    [sym_arguments] = STATE(411),
    [sym__argument] = STATE(229),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(229),
    [sym_sequential_arg] = STATE(229),
    [sym_split_arg] = STATE(229),
    [sym_merge_arg] = STATE(229),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [25] = {
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
    [sym_arguments] = STATE(330),
    [sym__argument] = STATE(229),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(229),
    [sym_sequential_arg] = STATE(229),
    [sym_split_arg] = STATE(229),
    [sym_merge_arg] = STATE(229),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [26] = {
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
    [sym_arguments] = STATE(328),
    [sym__argument] = STATE(229),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(229),
    [sym_sequential_arg] = STATE(229),
    [sym_split_arg] = STATE(229),
    [sym_merge_arg] = STATE(229),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [27] = {
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
    [sym_arguments] = STATE(405),
    [sym__argument] = STATE(229),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(229),
    [sym_sequential_arg] = STATE(229),
    [sym_split_arg] = STATE(229),
    [sym_merge_arg] = STATE(229),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [28] = {
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
    [sym_arguments] = STATE(388),
    [sym__argument] = STATE(229),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(229),
    [sym_sequential_arg] = STATE(229),
    [sym_split_arg] = STATE(229),
    [sym_merge_arg] = STATE(229),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [29] = {
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
    [sym_arguments] = STATE(355),
    [sym__argument] = STATE(229),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(229),
    [sym_sequential_arg] = STATE(229),
    [sym_split_arg] = STATE(229),
    [sym_merge_arg] = STATE(229),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [30] = {
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
    [sym_arguments] = STATE(360),
    [sym__argument] = STATE(229),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(229),
    [sym_sequential_arg] = STATE(229),
    [sym_split_arg] = STATE(229),
    [sym_merge_arg] = STATE(229),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [31] = {
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
    [sym_arguments] = STATE(361),
    [sym__argument] = STATE(229),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(229),
    [sym_sequential_arg] = STATE(229),
    [sym_split_arg] = STATE(229),
    [sym_merge_arg] = STATE(229),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [32] = {
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
    [sym__argument] = STATE(244),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(244),
    [sym_sequential_arg] = STATE(244),
    [sym_split_arg] = STATE(244),
    [sym_merge_arg] = STATE(244),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [33] = {
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
    [sym__argument] = STATE(234),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(234),
    [sym_sequential_arg] = STATE(234),
    [sym_split_arg] = STATE(234),
    [sym_merge_arg] = STATE(234),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [34] = {
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
    [sym__argument] = STATE(230),
    [sym_pattern] = STATE(91),
    [sym_recursive_arg] = STATE(230),
    [sym_sequential_arg] = STATE(230),
    [sym_split_arg] = STATE(230),
    [sym_merge_arg] = STATE(230),
    [sym_iteration] = STATE(91),
    [sym_substitution] = STATE(91),
    [sym_ffunction] = STATE(91),
    [sym_fconst] = STATE(91),
    [sym_fvariable] = STATE(91),
    [sym__infix] = STATE(149),
    [sym__prim1] = STATE(154),
    [sym__prim2] = STATE(153),
    [sym__prim3] = STATE(166),
    [sym__prim4] = STATE(137),
    [sym__prim5] = STATE(167),
    [sym_sub] = STATE(149),
    [sym_or] = STATE(149),
    [sym_component] = STATE(91),
    [sym__number] = STATE(91),
    [sym_id] = STATE(91),
    [sym_negate_id] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_environment] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [sym_par] = ACTIONS(81),
    [sym_seq] = ACTIONS(81),
    [sym_sum] = ACTIONS(81),
    [sym_prod] = ACTIONS(81),
    [anon_sym_ffunction] = ACTIONS(83),
    [anon_sym_fconstant] = ACTIONS(85),
    [anon_sym_fvariable] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_add] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [sym_mult] = ACTIONS(95),
    [sym_div] = ACTIONS(95),
    [sym_mod] = ACTIONS(95),
    [sym_pow] = ACTIONS(95),
    [sym_and] = ACTIONS(95),
    [sym_xor] = ACTIONS(91),
    [sym_lshift] = ACTIONS(95),
    [sym_rshift] = ACTIONS(95),
    [sym_lt] = ACTIONS(91),
    [sym_le] = ACTIONS(95),
    [sym_gt] = ACTIONS(91),
    [sym_ge] = ACTIONS(95),
    [sym_eq] = ACTIONS(95),
    [sym_neq] = ACTIONS(95),
    [sym_delay] = ACTIONS(95),
    [sym_exp] = ACTIONS(97),
    [sym_log] = ACTIONS(97),
    [sym_log10] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_abs] = ACTIONS(97),
    [sym_floor] = ACTIONS(97),
    [sym_ceil] = ACTIONS(97),
    [sym_rint] = ACTIONS(97),
    [sym_round] = ACTIONS(97),
    [sym_acos] = ACTIONS(97),
    [sym_asin] = ACTIONS(97),
    [sym_atan] = ACTIONS(97),
    [sym_cos] = ACTIONS(97),
    [sym_sin] = ACTIONS(97),
    [sym_tan] = ACTIONS(97),
    [sym_int_cast] = ACTIONS(97),
    [sym_float_cast] = ACTIONS(97),
    [sym_pow_fun] = ACTIONS(99),
    [sym_min] = ACTIONS(99),
    [sym_max] = ACTIONS(99),
    [sym_fmod] = ACTIONS(99),
    [sym_remainder] = ACTIONS(99),
    [sym_atan2] = ACTIONS(99),
    [sym_prefix_prim] = ACTIONS(99),
    [sym_attach] = ACTIONS(99),
    [sym_enable] = ACTIONS(99),
    [sym_control] = ACTIONS(99),
    [sym_wire] = ACTIONS(101),
    [sym_cut] = ACTIONS(101),
    [sym_mem] = ACTIONS(101),
    [anon_sym_component] = ACTIONS(103),
    [sym_rdtable] = ACTIONS(105),
    [sym_rwtable] = ACTIONS(107),
    [sym_select2] = ACTIONS(105),
    [sym_select3] = ACTIONS(109),
    [sym_lowest] = ACTIONS(97),
    [sym_highest] = ACTIONS(97),
    [sym_assertbounds] = ACTIONS(105),
    [sym_int] = ACTIONS(101),
    [sym_real] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [sym__id] = ACTIONS(115),
  },
  [35] = {
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
    [sym__argument] = STATE(231),
    [sym_pattern] = STATE(91),
    [sym_recursive_arg] = STATE(231),
    [sym_sequential_arg] = STATE(231),
    [sym_split_arg] = STATE(231),
    [sym_merge_arg] = STATE(231),
    [sym_iteration] = STATE(91),
    [sym_substitution] = STATE(91),
    [sym_ffunction] = STATE(91),
    [sym_fconst] = STATE(91),
    [sym_fvariable] = STATE(91),
    [sym__infix] = STATE(149),
    [sym__prim1] = STATE(154),
    [sym__prim2] = STATE(153),
    [sym__prim3] = STATE(166),
    [sym__prim4] = STATE(137),
    [sym__prim5] = STATE(167),
    [sym_sub] = STATE(149),
    [sym_or] = STATE(149),
    [sym_component] = STATE(91),
    [sym__number] = STATE(91),
    [sym_id] = STATE(91),
    [sym_negate_id] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_environment] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [sym_par] = ACTIONS(81),
    [sym_seq] = ACTIONS(81),
    [sym_sum] = ACTIONS(81),
    [sym_prod] = ACTIONS(81),
    [anon_sym_ffunction] = ACTIONS(83),
    [anon_sym_fconstant] = ACTIONS(85),
    [anon_sym_fvariable] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_add] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [sym_mult] = ACTIONS(95),
    [sym_div] = ACTIONS(95),
    [sym_mod] = ACTIONS(95),
    [sym_pow] = ACTIONS(95),
    [sym_and] = ACTIONS(95),
    [sym_xor] = ACTIONS(91),
    [sym_lshift] = ACTIONS(95),
    [sym_rshift] = ACTIONS(95),
    [sym_lt] = ACTIONS(91),
    [sym_le] = ACTIONS(95),
    [sym_gt] = ACTIONS(91),
    [sym_ge] = ACTIONS(95),
    [sym_eq] = ACTIONS(95),
    [sym_neq] = ACTIONS(95),
    [sym_delay] = ACTIONS(95),
    [sym_exp] = ACTIONS(97),
    [sym_log] = ACTIONS(97),
    [sym_log10] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_abs] = ACTIONS(97),
    [sym_floor] = ACTIONS(97),
    [sym_ceil] = ACTIONS(97),
    [sym_rint] = ACTIONS(97),
    [sym_round] = ACTIONS(97),
    [sym_acos] = ACTIONS(97),
    [sym_asin] = ACTIONS(97),
    [sym_atan] = ACTIONS(97),
    [sym_cos] = ACTIONS(97),
    [sym_sin] = ACTIONS(97),
    [sym_tan] = ACTIONS(97),
    [sym_int_cast] = ACTIONS(97),
    [sym_float_cast] = ACTIONS(97),
    [sym_pow_fun] = ACTIONS(99),
    [sym_min] = ACTIONS(99),
    [sym_max] = ACTIONS(99),
    [sym_fmod] = ACTIONS(99),
    [sym_remainder] = ACTIONS(99),
    [sym_atan2] = ACTIONS(99),
    [sym_prefix_prim] = ACTIONS(99),
    [sym_attach] = ACTIONS(99),
    [sym_enable] = ACTIONS(99),
    [sym_control] = ACTIONS(99),
    [sym_wire] = ACTIONS(101),
    [sym_cut] = ACTIONS(101),
    [sym_mem] = ACTIONS(101),
    [anon_sym_component] = ACTIONS(103),
    [sym_rdtable] = ACTIONS(105),
    [sym_rwtable] = ACTIONS(107),
    [sym_select2] = ACTIONS(105),
    [sym_select3] = ACTIONS(109),
    [sym_lowest] = ACTIONS(97),
    [sym_highest] = ACTIONS(97),
    [sym_assertbounds] = ACTIONS(105),
    [sym_int] = ACTIONS(101),
    [sym_real] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [sym__id] = ACTIONS(115),
  },
  [36] = {
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
    [sym__argument] = STATE(228),
    [sym_pattern] = STATE(91),
    [sym_recursive_arg] = STATE(228),
    [sym_sequential_arg] = STATE(228),
    [sym_split_arg] = STATE(228),
    [sym_merge_arg] = STATE(228),
    [sym_iteration] = STATE(91),
    [sym_substitution] = STATE(91),
    [sym_ffunction] = STATE(91),
    [sym_fconst] = STATE(91),
    [sym_fvariable] = STATE(91),
    [sym__infix] = STATE(149),
    [sym__prim1] = STATE(154),
    [sym__prim2] = STATE(153),
    [sym__prim3] = STATE(166),
    [sym__prim4] = STATE(137),
    [sym__prim5] = STATE(167),
    [sym_sub] = STATE(149),
    [sym_or] = STATE(149),
    [sym_component] = STATE(91),
    [sym__number] = STATE(91),
    [sym_id] = STATE(91),
    [sym_negate_id] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_environment] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [sym_par] = ACTIONS(81),
    [sym_seq] = ACTIONS(81),
    [sym_sum] = ACTIONS(81),
    [sym_prod] = ACTIONS(81),
    [anon_sym_ffunction] = ACTIONS(83),
    [anon_sym_fconstant] = ACTIONS(85),
    [anon_sym_fvariable] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_add] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [sym_mult] = ACTIONS(95),
    [sym_div] = ACTIONS(95),
    [sym_mod] = ACTIONS(95),
    [sym_pow] = ACTIONS(95),
    [sym_and] = ACTIONS(95),
    [sym_xor] = ACTIONS(91),
    [sym_lshift] = ACTIONS(95),
    [sym_rshift] = ACTIONS(95),
    [sym_lt] = ACTIONS(91),
    [sym_le] = ACTIONS(95),
    [sym_gt] = ACTIONS(91),
    [sym_ge] = ACTIONS(95),
    [sym_eq] = ACTIONS(95),
    [sym_neq] = ACTIONS(95),
    [sym_delay] = ACTIONS(95),
    [sym_exp] = ACTIONS(97),
    [sym_log] = ACTIONS(97),
    [sym_log10] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_abs] = ACTIONS(97),
    [sym_floor] = ACTIONS(97),
    [sym_ceil] = ACTIONS(97),
    [sym_rint] = ACTIONS(97),
    [sym_round] = ACTIONS(97),
    [sym_acos] = ACTIONS(97),
    [sym_asin] = ACTIONS(97),
    [sym_atan] = ACTIONS(97),
    [sym_cos] = ACTIONS(97),
    [sym_sin] = ACTIONS(97),
    [sym_tan] = ACTIONS(97),
    [sym_int_cast] = ACTIONS(97),
    [sym_float_cast] = ACTIONS(97),
    [sym_pow_fun] = ACTIONS(99),
    [sym_min] = ACTIONS(99),
    [sym_max] = ACTIONS(99),
    [sym_fmod] = ACTIONS(99),
    [sym_remainder] = ACTIONS(99),
    [sym_atan2] = ACTIONS(99),
    [sym_prefix_prim] = ACTIONS(99),
    [sym_attach] = ACTIONS(99),
    [sym_enable] = ACTIONS(99),
    [sym_control] = ACTIONS(99),
    [sym_wire] = ACTIONS(101),
    [sym_cut] = ACTIONS(101),
    [sym_mem] = ACTIONS(101),
    [anon_sym_component] = ACTIONS(103),
    [sym_rdtable] = ACTIONS(105),
    [sym_rwtable] = ACTIONS(107),
    [sym_select2] = ACTIONS(105),
    [sym_select3] = ACTIONS(109),
    [sym_lowest] = ACTIONS(97),
    [sym_highest] = ACTIONS(97),
    [sym_assertbounds] = ACTIONS(105),
    [sym_int] = ACTIONS(101),
    [sym_real] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [sym__id] = ACTIONS(115),
  },
  [37] = {
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
    [sym__argument] = STATE(236),
    [sym_pattern] = STATE(91),
    [sym_recursive_arg] = STATE(236),
    [sym_sequential_arg] = STATE(236),
    [sym_split_arg] = STATE(236),
    [sym_merge_arg] = STATE(236),
    [sym_iteration] = STATE(91),
    [sym_substitution] = STATE(91),
    [sym_ffunction] = STATE(91),
    [sym_fconst] = STATE(91),
    [sym_fvariable] = STATE(91),
    [sym__infix] = STATE(149),
    [sym__prim1] = STATE(154),
    [sym__prim2] = STATE(153),
    [sym__prim3] = STATE(166),
    [sym__prim4] = STATE(137),
    [sym__prim5] = STATE(167),
    [sym_sub] = STATE(149),
    [sym_or] = STATE(149),
    [sym_component] = STATE(91),
    [sym__number] = STATE(91),
    [sym_id] = STATE(91),
    [sym_negate_id] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_environment] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [sym_par] = ACTIONS(81),
    [sym_seq] = ACTIONS(81),
    [sym_sum] = ACTIONS(81),
    [sym_prod] = ACTIONS(81),
    [anon_sym_ffunction] = ACTIONS(83),
    [anon_sym_fconstant] = ACTIONS(85),
    [anon_sym_fvariable] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_add] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [sym_mult] = ACTIONS(95),
    [sym_div] = ACTIONS(95),
    [sym_mod] = ACTIONS(95),
    [sym_pow] = ACTIONS(95),
    [sym_and] = ACTIONS(95),
    [sym_xor] = ACTIONS(91),
    [sym_lshift] = ACTIONS(95),
    [sym_rshift] = ACTIONS(95),
    [sym_lt] = ACTIONS(91),
    [sym_le] = ACTIONS(95),
    [sym_gt] = ACTIONS(91),
    [sym_ge] = ACTIONS(95),
    [sym_eq] = ACTIONS(95),
    [sym_neq] = ACTIONS(95),
    [sym_delay] = ACTIONS(95),
    [sym_exp] = ACTIONS(97),
    [sym_log] = ACTIONS(97),
    [sym_log10] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_abs] = ACTIONS(97),
    [sym_floor] = ACTIONS(97),
    [sym_ceil] = ACTIONS(97),
    [sym_rint] = ACTIONS(97),
    [sym_round] = ACTIONS(97),
    [sym_acos] = ACTIONS(97),
    [sym_asin] = ACTIONS(97),
    [sym_atan] = ACTIONS(97),
    [sym_cos] = ACTIONS(97),
    [sym_sin] = ACTIONS(97),
    [sym_tan] = ACTIONS(97),
    [sym_int_cast] = ACTIONS(97),
    [sym_float_cast] = ACTIONS(97),
    [sym_pow_fun] = ACTIONS(99),
    [sym_min] = ACTIONS(99),
    [sym_max] = ACTIONS(99),
    [sym_fmod] = ACTIONS(99),
    [sym_remainder] = ACTIONS(99),
    [sym_atan2] = ACTIONS(99),
    [sym_prefix_prim] = ACTIONS(99),
    [sym_attach] = ACTIONS(99),
    [sym_enable] = ACTIONS(99),
    [sym_control] = ACTIONS(99),
    [sym_wire] = ACTIONS(101),
    [sym_cut] = ACTIONS(101),
    [sym_mem] = ACTIONS(101),
    [anon_sym_component] = ACTIONS(103),
    [sym_rdtable] = ACTIONS(105),
    [sym_rwtable] = ACTIONS(107),
    [sym_select2] = ACTIONS(105),
    [sym_select3] = ACTIONS(109),
    [sym_lowest] = ACTIONS(97),
    [sym_highest] = ACTIONS(97),
    [sym_assertbounds] = ACTIONS(105),
    [sym_int] = ACTIONS(101),
    [sym_real] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [sym__id] = ACTIONS(115),
  },
  [38] = {
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
    [sym__argument] = STATE(250),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(250),
    [sym_sequential_arg] = STATE(250),
    [sym_split_arg] = STATE(250),
    [sym_merge_arg] = STATE(250),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [39] = {
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
    [sym__argument] = STATE(228),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(228),
    [sym_sequential_arg] = STATE(228),
    [sym_split_arg] = STATE(228),
    [sym_merge_arg] = STATE(228),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [40] = {
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
    [sym__argument] = STATE(238),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(238),
    [sym_sequential_arg] = STATE(238),
    [sym_split_arg] = STATE(238),
    [sym_merge_arg] = STATE(238),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [41] = {
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
    [sym__argument] = STATE(235),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(235),
    [sym_sequential_arg] = STATE(235),
    [sym_split_arg] = STATE(235),
    [sym_merge_arg] = STATE(235),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [42] = {
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
    [sym__argument] = STATE(233),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(233),
    [sym_sequential_arg] = STATE(233),
    [sym_split_arg] = STATE(233),
    [sym_merge_arg] = STATE(233),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [43] = {
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
    [sym__argument] = STATE(240),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(240),
    [sym_sequential_arg] = STATE(240),
    [sym_split_arg] = STATE(240),
    [sym_merge_arg] = STATE(240),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [44] = {
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
    [sym__argument] = STATE(239),
    [sym_pattern] = STATE(91),
    [sym_recursive_arg] = STATE(239),
    [sym_sequential_arg] = STATE(239),
    [sym_split_arg] = STATE(239),
    [sym_merge_arg] = STATE(239),
    [sym_iteration] = STATE(91),
    [sym_substitution] = STATE(91),
    [sym_ffunction] = STATE(91),
    [sym_fconst] = STATE(91),
    [sym_fvariable] = STATE(91),
    [sym__infix] = STATE(149),
    [sym__prim1] = STATE(154),
    [sym__prim2] = STATE(153),
    [sym__prim3] = STATE(166),
    [sym__prim4] = STATE(137),
    [sym__prim5] = STATE(167),
    [sym_sub] = STATE(149),
    [sym_or] = STATE(149),
    [sym_component] = STATE(91),
    [sym__number] = STATE(91),
    [sym_id] = STATE(91),
    [sym_negate_id] = STATE(91),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_environment] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [sym_par] = ACTIONS(81),
    [sym_seq] = ACTIONS(81),
    [sym_sum] = ACTIONS(81),
    [sym_prod] = ACTIONS(81),
    [anon_sym_ffunction] = ACTIONS(83),
    [anon_sym_fconstant] = ACTIONS(85),
    [anon_sym_fvariable] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_add] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [sym_mult] = ACTIONS(95),
    [sym_div] = ACTIONS(95),
    [sym_mod] = ACTIONS(95),
    [sym_pow] = ACTIONS(95),
    [sym_and] = ACTIONS(95),
    [sym_xor] = ACTIONS(91),
    [sym_lshift] = ACTIONS(95),
    [sym_rshift] = ACTIONS(95),
    [sym_lt] = ACTIONS(91),
    [sym_le] = ACTIONS(95),
    [sym_gt] = ACTIONS(91),
    [sym_ge] = ACTIONS(95),
    [sym_eq] = ACTIONS(95),
    [sym_neq] = ACTIONS(95),
    [sym_delay] = ACTIONS(95),
    [sym_exp] = ACTIONS(97),
    [sym_log] = ACTIONS(97),
    [sym_log10] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_abs] = ACTIONS(97),
    [sym_floor] = ACTIONS(97),
    [sym_ceil] = ACTIONS(97),
    [sym_rint] = ACTIONS(97),
    [sym_round] = ACTIONS(97),
    [sym_acos] = ACTIONS(97),
    [sym_asin] = ACTIONS(97),
    [sym_atan] = ACTIONS(97),
    [sym_cos] = ACTIONS(97),
    [sym_sin] = ACTIONS(97),
    [sym_tan] = ACTIONS(97),
    [sym_int_cast] = ACTIONS(97),
    [sym_float_cast] = ACTIONS(97),
    [sym_pow_fun] = ACTIONS(99),
    [sym_min] = ACTIONS(99),
    [sym_max] = ACTIONS(99),
    [sym_fmod] = ACTIONS(99),
    [sym_remainder] = ACTIONS(99),
    [sym_atan2] = ACTIONS(99),
    [sym_prefix_prim] = ACTIONS(99),
    [sym_attach] = ACTIONS(99),
    [sym_enable] = ACTIONS(99),
    [sym_control] = ACTIONS(99),
    [sym_wire] = ACTIONS(101),
    [sym_cut] = ACTIONS(101),
    [sym_mem] = ACTIONS(101),
    [anon_sym_component] = ACTIONS(103),
    [sym_rdtable] = ACTIONS(105),
    [sym_rwtable] = ACTIONS(107),
    [sym_select2] = ACTIONS(105),
    [sym_select3] = ACTIONS(109),
    [sym_lowest] = ACTIONS(97),
    [sym_highest] = ACTIONS(97),
    [sym_assertbounds] = ACTIONS(105),
    [sym_int] = ACTIONS(101),
    [sym_real] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [sym__id] = ACTIONS(115),
  },
  [45] = {
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
    [sym__argument] = STATE(242),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(242),
    [sym_sequential_arg] = STATE(242),
    [sym_split_arg] = STATE(242),
    [sym_merge_arg] = STATE(242),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [46] = {
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
    [sym__argument] = STATE(248),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(248),
    [sym_sequential_arg] = STATE(248),
    [sym_split_arg] = STATE(248),
    [sym_merge_arg] = STATE(248),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [47] = {
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
    [sym__argument] = STATE(245),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(245),
    [sym_sequential_arg] = STATE(245),
    [sym_split_arg] = STATE(245),
    [sym_merge_arg] = STATE(245),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [48] = {
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
    [sym__argument] = STATE(232),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(232),
    [sym_sequential_arg] = STATE(232),
    [sym_split_arg] = STATE(232),
    [sym_merge_arg] = STATE(232),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [49] = {
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
    [sym__argument] = STATE(237),
    [sym_pattern] = STATE(81),
    [sym_recursive_arg] = STATE(237),
    [sym_sequential_arg] = STATE(237),
    [sym_split_arg] = STATE(237),
    [sym_merge_arg] = STATE(237),
    [sym_iteration] = STATE(81),
    [sym_substitution] = STATE(81),
    [sym_ffunction] = STATE(81),
    [sym_fconst] = STATE(81),
    [sym_fvariable] = STATE(81),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(81),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(67),
    [sym_cut] = ACTIONS(67),
    [sym_mem] = ACTIONS(67),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(67),
    [sym_real] = ACTIONS(69),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [50] = {
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
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(67),
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
    [sym_wire] = ACTIONS(117),
    [sym_cut] = ACTIONS(117),
    [sym_mem] = ACTIONS(117),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(117),
    [sym_real] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [51] = {
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
    [sym__infix] = STATE(149),
    [sym__prim1] = STATE(154),
    [sym__prim2] = STATE(153),
    [sym__prim3] = STATE(166),
    [sym__prim4] = STATE(137),
    [sym__prim5] = STATE(167),
    [sym_sub] = STATE(149),
    [sym_or] = STATE(149),
    [sym_component] = STATE(86),
    [sym__number] = STATE(86),
    [sym_id] = STATE(86),
    [sym_negate_id] = STATE(86),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_environment] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [sym_par] = ACTIONS(81),
    [sym_seq] = ACTIONS(81),
    [sym_sum] = ACTIONS(81),
    [sym_prod] = ACTIONS(81),
    [anon_sym_ffunction] = ACTIONS(83),
    [anon_sym_fconstant] = ACTIONS(85),
    [anon_sym_fvariable] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_add] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [sym_mult] = ACTIONS(95),
    [sym_div] = ACTIONS(95),
    [sym_mod] = ACTIONS(95),
    [sym_pow] = ACTIONS(95),
    [sym_and] = ACTIONS(95),
    [sym_xor] = ACTIONS(91),
    [sym_lshift] = ACTIONS(95),
    [sym_rshift] = ACTIONS(95),
    [sym_lt] = ACTIONS(91),
    [sym_le] = ACTIONS(95),
    [sym_gt] = ACTIONS(91),
    [sym_ge] = ACTIONS(95),
    [sym_eq] = ACTIONS(95),
    [sym_neq] = ACTIONS(95),
    [sym_delay] = ACTIONS(95),
    [sym_exp] = ACTIONS(97),
    [sym_log] = ACTIONS(97),
    [sym_log10] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_abs] = ACTIONS(97),
    [sym_floor] = ACTIONS(97),
    [sym_ceil] = ACTIONS(97),
    [sym_rint] = ACTIONS(97),
    [sym_round] = ACTIONS(97),
    [sym_acos] = ACTIONS(97),
    [sym_asin] = ACTIONS(97),
    [sym_atan] = ACTIONS(97),
    [sym_cos] = ACTIONS(97),
    [sym_sin] = ACTIONS(97),
    [sym_tan] = ACTIONS(97),
    [sym_int_cast] = ACTIONS(97),
    [sym_float_cast] = ACTIONS(97),
    [sym_pow_fun] = ACTIONS(99),
    [sym_min] = ACTIONS(99),
    [sym_max] = ACTIONS(99),
    [sym_fmod] = ACTIONS(99),
    [sym_remainder] = ACTIONS(99),
    [sym_atan2] = ACTIONS(99),
    [sym_prefix_prim] = ACTIONS(99),
    [sym_attach] = ACTIONS(99),
    [sym_enable] = ACTIONS(99),
    [sym_control] = ACTIONS(99),
    [sym_wire] = ACTIONS(121),
    [sym_cut] = ACTIONS(121),
    [sym_mem] = ACTIONS(121),
    [anon_sym_component] = ACTIONS(103),
    [sym_rdtable] = ACTIONS(105),
    [sym_rwtable] = ACTIONS(107),
    [sym_select2] = ACTIONS(105),
    [sym_select3] = ACTIONS(109),
    [sym_lowest] = ACTIONS(97),
    [sym_highest] = ACTIONS(97),
    [sym_assertbounds] = ACTIONS(105),
    [sym_int] = ACTIONS(121),
    [sym_real] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [sym__id] = ACTIONS(115),
  },
  [52] = {
    [sym__infix_expression] = STATE(89),
    [sym_infix] = STATE(89),
    [sym_partial] = STATE(89),
    [sym_prefix] = STATE(89),
    [sym_prim1] = STATE(89),
    [sym_prim2] = STATE(89),
    [sym_prim3] = STATE(89),
    [sym_prim4] = STATE(89),
    [sym_prim5] = STATE(89),
    [sym_function_call] = STATE(89),
    [sym_modifier] = STATE(89),
    [sym_access] = STATE(89),
    [sym__primitive] = STATE(89),
    [sym_lambda] = STATE(89),
    [sym_modulation] = STATE(89),
    [sym_pattern] = STATE(89),
    [sym_iteration] = STATE(89),
    [sym_substitution] = STATE(89),
    [sym_ffunction] = STATE(89),
    [sym_fconst] = STATE(89),
    [sym_fvariable] = STATE(89),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(89),
    [sym__number] = STATE(89),
    [sym_id] = STATE(89),
    [sym_negate_id] = STATE(89),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(125),
    [sym_real] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [53] = {
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
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(90),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(129),
    [sym_real] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [54] = {
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
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(87),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(133),
    [sym_real] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
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
    [sym__infix] = STATE(149),
    [sym__prim1] = STATE(154),
    [sym__prim2] = STATE(153),
    [sym__prim3] = STATE(166),
    [sym__prim4] = STATE(137),
    [sym__prim5] = STATE(167),
    [sym_sub] = STATE(149),
    [sym_or] = STATE(149),
    [sym_component] = STATE(84),
    [sym__number] = STATE(84),
    [sym_id] = STATE(84),
    [sym_negate_id] = STATE(84),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_environment] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [sym_par] = ACTIONS(81),
    [sym_seq] = ACTIONS(81),
    [sym_sum] = ACTIONS(81),
    [sym_prod] = ACTIONS(81),
    [anon_sym_ffunction] = ACTIONS(83),
    [anon_sym_fconstant] = ACTIONS(85),
    [anon_sym_fvariable] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_add] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [sym_mult] = ACTIONS(95),
    [sym_div] = ACTIONS(95),
    [sym_mod] = ACTIONS(95),
    [sym_pow] = ACTIONS(95),
    [sym_and] = ACTIONS(95),
    [sym_xor] = ACTIONS(91),
    [sym_lshift] = ACTIONS(95),
    [sym_rshift] = ACTIONS(95),
    [sym_lt] = ACTIONS(91),
    [sym_le] = ACTIONS(95),
    [sym_gt] = ACTIONS(91),
    [sym_ge] = ACTIONS(95),
    [sym_eq] = ACTIONS(95),
    [sym_neq] = ACTIONS(95),
    [sym_delay] = ACTIONS(95),
    [sym_exp] = ACTIONS(97),
    [sym_log] = ACTIONS(97),
    [sym_log10] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_abs] = ACTIONS(97),
    [sym_floor] = ACTIONS(97),
    [sym_ceil] = ACTIONS(97),
    [sym_rint] = ACTIONS(97),
    [sym_round] = ACTIONS(97),
    [sym_acos] = ACTIONS(97),
    [sym_asin] = ACTIONS(97),
    [sym_atan] = ACTIONS(97),
    [sym_cos] = ACTIONS(97),
    [sym_sin] = ACTIONS(97),
    [sym_tan] = ACTIONS(97),
    [sym_int_cast] = ACTIONS(97),
    [sym_float_cast] = ACTIONS(97),
    [sym_pow_fun] = ACTIONS(99),
    [sym_min] = ACTIONS(99),
    [sym_max] = ACTIONS(99),
    [sym_fmod] = ACTIONS(99),
    [sym_remainder] = ACTIONS(99),
    [sym_atan2] = ACTIONS(99),
    [sym_prefix_prim] = ACTIONS(99),
    [sym_attach] = ACTIONS(99),
    [sym_enable] = ACTIONS(99),
    [sym_control] = ACTIONS(99),
    [sym_wire] = ACTIONS(137),
    [sym_cut] = ACTIONS(137),
    [sym_mem] = ACTIONS(137),
    [anon_sym_component] = ACTIONS(103),
    [sym_rdtable] = ACTIONS(105),
    [sym_rwtable] = ACTIONS(107),
    [sym_select2] = ACTIONS(105),
    [sym_select3] = ACTIONS(109),
    [sym_lowest] = ACTIONS(97),
    [sym_highest] = ACTIONS(97),
    [sym_assertbounds] = ACTIONS(105),
    [sym_int] = ACTIONS(137),
    [sym_real] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [sym__id] = ACTIONS(115),
  },
  [56] = {
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
    [sym_pattern] = STATE(83),
    [sym_iteration] = STATE(83),
    [sym_substitution] = STATE(83),
    [sym_ffunction] = STATE(83),
    [sym_fconst] = STATE(83),
    [sym_fvariable] = STATE(83),
    [sym__infix] = STATE(149),
    [sym__prim1] = STATE(154),
    [sym__prim2] = STATE(153),
    [sym__prim3] = STATE(166),
    [sym__prim4] = STATE(137),
    [sym__prim5] = STATE(167),
    [sym_sub] = STATE(149),
    [sym_or] = STATE(149),
    [sym_component] = STATE(83),
    [sym__number] = STATE(83),
    [sym_id] = STATE(83),
    [sym_negate_id] = STATE(83),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_environment] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [sym_par] = ACTIONS(81),
    [sym_seq] = ACTIONS(81),
    [sym_sum] = ACTIONS(81),
    [sym_prod] = ACTIONS(81),
    [anon_sym_ffunction] = ACTIONS(83),
    [anon_sym_fconstant] = ACTIONS(85),
    [anon_sym_fvariable] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_add] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [sym_mult] = ACTIONS(95),
    [sym_div] = ACTIONS(95),
    [sym_mod] = ACTIONS(95),
    [sym_pow] = ACTIONS(95),
    [sym_and] = ACTIONS(95),
    [sym_xor] = ACTIONS(91),
    [sym_lshift] = ACTIONS(95),
    [sym_rshift] = ACTIONS(95),
    [sym_lt] = ACTIONS(91),
    [sym_le] = ACTIONS(95),
    [sym_gt] = ACTIONS(91),
    [sym_ge] = ACTIONS(95),
    [sym_eq] = ACTIONS(95),
    [sym_neq] = ACTIONS(95),
    [sym_delay] = ACTIONS(95),
    [sym_exp] = ACTIONS(97),
    [sym_log] = ACTIONS(97),
    [sym_log10] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_abs] = ACTIONS(97),
    [sym_floor] = ACTIONS(97),
    [sym_ceil] = ACTIONS(97),
    [sym_rint] = ACTIONS(97),
    [sym_round] = ACTIONS(97),
    [sym_acos] = ACTIONS(97),
    [sym_asin] = ACTIONS(97),
    [sym_atan] = ACTIONS(97),
    [sym_cos] = ACTIONS(97),
    [sym_sin] = ACTIONS(97),
    [sym_tan] = ACTIONS(97),
    [sym_int_cast] = ACTIONS(97),
    [sym_float_cast] = ACTIONS(97),
    [sym_pow_fun] = ACTIONS(99),
    [sym_min] = ACTIONS(99),
    [sym_max] = ACTIONS(99),
    [sym_fmod] = ACTIONS(99),
    [sym_remainder] = ACTIONS(99),
    [sym_atan2] = ACTIONS(99),
    [sym_prefix_prim] = ACTIONS(99),
    [sym_attach] = ACTIONS(99),
    [sym_enable] = ACTIONS(99),
    [sym_control] = ACTIONS(99),
    [sym_wire] = ACTIONS(141),
    [sym_cut] = ACTIONS(141),
    [sym_mem] = ACTIONS(141),
    [anon_sym_component] = ACTIONS(103),
    [sym_rdtable] = ACTIONS(105),
    [sym_rwtable] = ACTIONS(107),
    [sym_select2] = ACTIONS(105),
    [sym_select3] = ACTIONS(109),
    [sym_lowest] = ACTIONS(97),
    [sym_highest] = ACTIONS(97),
    [sym_assertbounds] = ACTIONS(105),
    [sym_int] = ACTIONS(141),
    [sym_real] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [sym__id] = ACTIONS(115),
  },
  [57] = {
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
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(68),
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
    [sym_wire] = ACTIONS(145),
    [sym_cut] = ACTIONS(145),
    [sym_mem] = ACTIONS(145),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(145),
    [sym_real] = ACTIONS(147),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [58] = {
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
    [sym_substitution] = STATE(69),
    [sym_ffunction] = STATE(69),
    [sym_fconst] = STATE(69),
    [sym_fvariable] = STATE(69),
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(69),
    [sym__number] = STATE(69),
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
    [sym_wire] = ACTIONS(149),
    [sym_cut] = ACTIONS(149),
    [sym_mem] = ACTIONS(149),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(149),
    [sym_real] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [59] = {
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
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(70),
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
    [sym_wire] = ACTIONS(153),
    [sym_cut] = ACTIONS(153),
    [sym_mem] = ACTIONS(153),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(153),
    [sym_real] = ACTIONS(155),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [60] = {
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
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(71),
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
    [sym_wire] = ACTIONS(157),
    [sym_cut] = ACTIONS(157),
    [sym_mem] = ACTIONS(157),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(157),
    [sym_real] = ACTIONS(159),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
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
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(88),
    [sym__number] = STATE(88),
    [sym_id] = STATE(88),
    [sym_negate_id] = STATE(88),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_wire] = ACTIONS(161),
    [sym_cut] = ACTIONS(161),
    [sym_mem] = ACTIONS(161),
    [anon_sym_component] = ACTIONS(51),
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(161),
    [sym_real] = ACTIONS(163),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
  },
  [62] = {
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
    [sym_pattern] = STATE(85),
    [sym_iteration] = STATE(85),
    [sym_substitution] = STATE(85),
    [sym_ffunction] = STATE(85),
    [sym_fconst] = STATE(85),
    [sym_fvariable] = STATE(85),
    [sym__infix] = STATE(149),
    [sym__prim1] = STATE(154),
    [sym__prim2] = STATE(153),
    [sym__prim3] = STATE(166),
    [sym__prim4] = STATE(137),
    [sym__prim5] = STATE(167),
    [sym_sub] = STATE(149),
    [sym_or] = STATE(149),
    [sym_component] = STATE(85),
    [sym__number] = STATE(85),
    [sym_id] = STATE(85),
    [sym_negate_id] = STATE(85),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_environment] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [sym_par] = ACTIONS(81),
    [sym_seq] = ACTIONS(81),
    [sym_sum] = ACTIONS(81),
    [sym_prod] = ACTIONS(81),
    [anon_sym_ffunction] = ACTIONS(83),
    [anon_sym_fconstant] = ACTIONS(85),
    [anon_sym_fvariable] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_add] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [sym_mult] = ACTIONS(95),
    [sym_div] = ACTIONS(95),
    [sym_mod] = ACTIONS(95),
    [sym_pow] = ACTIONS(95),
    [sym_and] = ACTIONS(95),
    [sym_xor] = ACTIONS(91),
    [sym_lshift] = ACTIONS(95),
    [sym_rshift] = ACTIONS(95),
    [sym_lt] = ACTIONS(91),
    [sym_le] = ACTIONS(95),
    [sym_gt] = ACTIONS(91),
    [sym_ge] = ACTIONS(95),
    [sym_eq] = ACTIONS(95),
    [sym_neq] = ACTIONS(95),
    [sym_delay] = ACTIONS(95),
    [sym_exp] = ACTIONS(97),
    [sym_log] = ACTIONS(97),
    [sym_log10] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_abs] = ACTIONS(97),
    [sym_floor] = ACTIONS(97),
    [sym_ceil] = ACTIONS(97),
    [sym_rint] = ACTIONS(97),
    [sym_round] = ACTIONS(97),
    [sym_acos] = ACTIONS(97),
    [sym_asin] = ACTIONS(97),
    [sym_atan] = ACTIONS(97),
    [sym_cos] = ACTIONS(97),
    [sym_sin] = ACTIONS(97),
    [sym_tan] = ACTIONS(97),
    [sym_int_cast] = ACTIONS(97),
    [sym_float_cast] = ACTIONS(97),
    [sym_pow_fun] = ACTIONS(99),
    [sym_min] = ACTIONS(99),
    [sym_max] = ACTIONS(99),
    [sym_fmod] = ACTIONS(99),
    [sym_remainder] = ACTIONS(99),
    [sym_atan2] = ACTIONS(99),
    [sym_prefix_prim] = ACTIONS(99),
    [sym_attach] = ACTIONS(99),
    [sym_enable] = ACTIONS(99),
    [sym_control] = ACTIONS(99),
    [sym_wire] = ACTIONS(165),
    [sym_cut] = ACTIONS(165),
    [sym_mem] = ACTIONS(165),
    [anon_sym_component] = ACTIONS(103),
    [sym_rdtable] = ACTIONS(105),
    [sym_rwtable] = ACTIONS(107),
    [sym_select2] = ACTIONS(105),
    [sym_select3] = ACTIONS(109),
    [sym_lowest] = ACTIONS(97),
    [sym_highest] = ACTIONS(97),
    [sym_assertbounds] = ACTIONS(105),
    [sym_int] = ACTIONS(165),
    [sym_real] = ACTIONS(167),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [sym__id] = ACTIONS(115),
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
    [sym__infix] = STATE(92),
    [sym__prim1] = STATE(104),
    [sym__prim2] = STATE(103),
    [sym__prim3] = STATE(102),
    [sym__prim4] = STATE(99),
    [sym__prim5] = STATE(98),
    [sym_sub] = STATE(92),
    [sym_or] = STATE(92),
    [sym_component] = STATE(79),
    [sym__number] = STATE(79),
    [sym_id] = STATE(79),
    [sym_negate_id] = STATE(79),
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
    [anon_sym_DASH] = ACTIONS(65),
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
    [sym_rdtable] = ACTIONS(53),
    [sym_rwtable] = ACTIONS(55),
    [sym_select2] = ACTIONS(53),
    [sym_select3] = ACTIONS(57),
    [sym_lowest] = ACTIONS(45),
    [sym_highest] = ACTIONS(45),
    [sym_assertbounds] = ACTIONS(53),
    [sym_int] = ACTIONS(169),
    [sym_real] = ACTIONS(171),
    [anon_sym_COLON_COLON] = ACTIONS(61),
    [sym__id] = ACTIONS(63),
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
    [sym__infix] = STATE(149),
    [sym__prim1] = STATE(154),
    [sym__prim2] = STATE(153),
    [sym__prim3] = STATE(166),
    [sym__prim4] = STATE(137),
    [sym__prim5] = STATE(167),
    [sym_sub] = STATE(149),
    [sym_or] = STATE(149),
    [sym_component] = STATE(82),
    [sym__number] = STATE(82),
    [sym_id] = STATE(82),
    [sym_negate_id] = STATE(82),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_environment] = ACTIONS(73),
    [anon_sym_BSLASH] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_case] = ACTIONS(79),
    [sym_par] = ACTIONS(81),
    [sym_seq] = ACTIONS(81),
    [sym_sum] = ACTIONS(81),
    [sym_prod] = ACTIONS(81),
    [anon_sym_ffunction] = ACTIONS(83),
    [anon_sym_fconstant] = ACTIONS(85),
    [anon_sym_fvariable] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_add] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [sym_mult] = ACTIONS(95),
    [sym_div] = ACTIONS(95),
    [sym_mod] = ACTIONS(95),
    [sym_pow] = ACTIONS(95),
    [sym_and] = ACTIONS(95),
    [sym_xor] = ACTIONS(91),
    [sym_lshift] = ACTIONS(95),
    [sym_rshift] = ACTIONS(95),
    [sym_lt] = ACTIONS(91),
    [sym_le] = ACTIONS(95),
    [sym_gt] = ACTIONS(91),
    [sym_ge] = ACTIONS(95),
    [sym_eq] = ACTIONS(95),
    [sym_neq] = ACTIONS(95),
    [sym_delay] = ACTIONS(95),
    [sym_exp] = ACTIONS(97),
    [sym_log] = ACTIONS(97),
    [sym_log10] = ACTIONS(97),
    [sym_sqrt] = ACTIONS(97),
    [sym_abs] = ACTIONS(97),
    [sym_floor] = ACTIONS(97),
    [sym_ceil] = ACTIONS(97),
    [sym_rint] = ACTIONS(97),
    [sym_round] = ACTIONS(97),
    [sym_acos] = ACTIONS(97),
    [sym_asin] = ACTIONS(97),
    [sym_atan] = ACTIONS(97),
    [sym_cos] = ACTIONS(97),
    [sym_sin] = ACTIONS(97),
    [sym_tan] = ACTIONS(97),
    [sym_int_cast] = ACTIONS(97),
    [sym_float_cast] = ACTIONS(97),
    [sym_pow_fun] = ACTIONS(99),
    [sym_min] = ACTIONS(99),
    [sym_max] = ACTIONS(99),
    [sym_fmod] = ACTIONS(99),
    [sym_remainder] = ACTIONS(99),
    [sym_atan2] = ACTIONS(99),
    [sym_prefix_prim] = ACTIONS(99),
    [sym_attach] = ACTIONS(99),
    [sym_enable] = ACTIONS(99),
    [sym_control] = ACTIONS(99),
    [sym_wire] = ACTIONS(173),
    [sym_cut] = ACTIONS(173),
    [sym_mem] = ACTIONS(173),
    [anon_sym_component] = ACTIONS(103),
    [sym_rdtable] = ACTIONS(105),
    [sym_rwtable] = ACTIONS(107),
    [sym_select2] = ACTIONS(105),
    [sym_select3] = ACTIONS(109),
    [sym_lowest] = ACTIONS(97),
    [sym_highest] = ACTIONS(97),
    [sym_assertbounds] = ACTIONS(105),
    [sym_int] = ACTIONS(173),
    [sym_real] = ACTIONS(175),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [sym__id] = ACTIONS(115),
  },
  [65] = {
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_environment] = ACTIONS(179),
    [anon_sym_BSLASH] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(177),
    [anon_sym_case] = ACTIONS(179),
    [sym_par] = ACTIONS(179),
    [sym_seq] = ACTIONS(179),
    [sym_sum] = ACTIONS(179),
    [sym_prod] = ACTIONS(179),
    [anon_sym_ffunction] = ACTIONS(179),
    [anon_sym_fconstant] = ACTIONS(179),
    [anon_sym_fvariable] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(177),
    [sym_add] = ACTIONS(179),
    [anon_sym_DASH] = ACTIONS(179),
    [sym_mult] = ACTIONS(177),
    [sym_div] = ACTIONS(177),
    [sym_mod] = ACTIONS(177),
    [sym_pow] = ACTIONS(177),
    [sym_and] = ACTIONS(177),
    [sym_xor] = ACTIONS(179),
    [sym_lshift] = ACTIONS(177),
    [sym_rshift] = ACTIONS(177),
    [sym_lt] = ACTIONS(179),
    [sym_le] = ACTIONS(177),
    [sym_gt] = ACTIONS(179),
    [sym_ge] = ACTIONS(177),
    [sym_eq] = ACTIONS(177),
    [sym_neq] = ACTIONS(177),
    [sym_delay] = ACTIONS(177),
    [sym_exp] = ACTIONS(179),
    [sym_log] = ACTIONS(179),
    [sym_log10] = ACTIONS(179),
    [sym_sqrt] = ACTIONS(179),
    [sym_abs] = ACTIONS(179),
    [sym_floor] = ACTIONS(179),
    [sym_ceil] = ACTIONS(179),
    [sym_rint] = ACTIONS(179),
    [sym_round] = ACTIONS(179),
    [sym_acos] = ACTIONS(179),
    [sym_asin] = ACTIONS(179),
    [sym_atan] = ACTIONS(179),
    [sym_cos] = ACTIONS(179),
    [sym_sin] = ACTIONS(179),
    [sym_tan] = ACTIONS(179),
    [sym_int_cast] = ACTIONS(179),
    [sym_float_cast] = ACTIONS(179),
    [sym_pow_fun] = ACTIONS(179),
    [sym_min] = ACTIONS(179),
    [sym_max] = ACTIONS(179),
    [sym_fmod] = ACTIONS(179),
    [sym_remainder] = ACTIONS(179),
    [sym_atan2] = ACTIONS(179),
    [sym_prefix_prim] = ACTIONS(179),
    [sym_attach] = ACTIONS(179),
    [sym_enable] = ACTIONS(179),
    [sym_control] = ACTIONS(179),
    [sym_wire] = ACTIONS(179),
    [sym_cut] = ACTIONS(179),
    [sym_mem] = ACTIONS(179),
    [anon_sym_component] = ACTIONS(179),
    [sym_rdtable] = ACTIONS(179),
    [sym_rwtable] = ACTIONS(179),
    [sym_select2] = ACTIONS(179),
    [sym_select3] = ACTIONS(179),
    [sym_lowest] = ACTIONS(179),
    [sym_highest] = ACTIONS(179),
    [sym_assertbounds] = ACTIONS(179),
    [sym_int] = ACTIONS(179),
    [sym_real] = ACTIONS(177),
    [anon_sym_COLON_COLON] = ACTIONS(177),
    [sym__id] = ACTIONS(179),
  },
  [66] = {
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      sym_pow,
    ACTIONS(199), 1,
      sym_delay,
    STATE(100), 1,
      sym_substitutions,
    STATE(50), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(195), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(185), 17,
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
  [60] = 8,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym_substitutions,
    STATE(50), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(185), 26,
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
  [114] = 14,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      sym_pow,
    ACTIONS(199), 1,
      sym_delay,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      sym_add,
    ACTIONS(205), 1,
      anon_sym_DASH,
    STATE(100), 1,
      sym_substitutions,
    STATE(50), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(195), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(185), 14,
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
  [180] = 9,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(199), 1,
      sym_delay,
    STATE(100), 1,
      sym_substitutions,
    STATE(50), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(185), 25,
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
  [236] = 10,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      sym_pow,
    ACTIONS(199), 1,
      sym_delay,
    STATE(100), 1,
      sym_substitutions,
    STATE(50), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(185), 24,
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
  [294] = 17,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      sym_pow,
    ACTIONS(199), 1,
      sym_delay,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      sym_add,
    ACTIONS(205), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_substitutions,
    ACTIONS(213), 2,
      sym_lt,
      sym_gt,
    STATE(50), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(215), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(195), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(207), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [366] = 5,
    ACTIONS(61), 1,
      anon_sym_COLON_COLON,
    ACTIONS(63), 1,
      sym__id,
    STATE(121), 1,
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
    ACTIONS(221), 1,
      anon_sym_COLON_COLON,
    STATE(77), 1,
      aux_sym_id_repeat1,
    ACTIONS(219), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(217), 29,
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
    ACTIONS(227), 1,
      anon_sym_COLON_COLON,
    STATE(75), 1,
      aux_sym_id_repeat1,
    ACTIONS(225), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(223), 29,
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
    ACTIONS(221), 1,
      anon_sym_COLON_COLON,
    STATE(75), 1,
      aux_sym_id_repeat1,
    ACTIONS(219), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(217), 29,
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
    ACTIONS(221), 1,
      anon_sym_COLON_COLON,
    STATE(75), 1,
      aux_sym_id_repeat1,
    ACTIONS(232), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(230), 29,
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
    ACTIONS(221), 1,
      anon_sym_COLON_COLON,
    STATE(76), 1,
      aux_sym_id_repeat1,
    ACTIONS(236), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(234), 29,
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
  [627] = 8,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym_substitutions,
    STATE(53), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(185), 22,
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
  [677] = 2,
    ACTIONS(225), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(223), 30,
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
  [715] = 17,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_DASH,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 1,
      anon_sym_COLON,
    ACTIONS(242), 1,
      sym_add,
    ACTIONS(246), 1,
      sym_pow,
    ACTIONS(252), 1,
      sym_delay,
    STATE(100), 1,
      sym_substitutions,
    ACTIONS(248), 2,
      sym_lt,
      sym_gt,
    STATE(53), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(250), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(238), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(244), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [783] = 14,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      sym_add,
    ACTIONS(262), 1,
      anon_sym_DASH,
    ACTIONS(266), 1,
      sym_pow,
    ACTIONS(268), 1,
      sym_delay,
    STATE(163), 1,
      sym_substitutions,
    STATE(62), 2,
      sym_sub,
      sym_or,
    STATE(165), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(264), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(185), 10,
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
  [845] = 9,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(268), 1,
      sym_delay,
    STATE(163), 1,
      sym_substitutions,
    STATE(62), 2,
      sym_sub,
      sym_or,
    STATE(165), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(185), 20,
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
  [897] = 10,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_pow,
    ACTIONS(268), 1,
      sym_delay,
    STATE(163), 1,
      sym_substitutions,
    STATE(62), 2,
      sym_sub,
      sym_or,
    STATE(165), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(185), 19,
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
  [951] = 11,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(266), 1,
      sym_pow,
    ACTIONS(268), 1,
      sym_delay,
    STATE(163), 1,
      sym_substitutions,
    STATE(62), 2,
      sym_sub,
      sym_or,
    STATE(165), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(264), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(185), 12,
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
  [1007] = 8,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    STATE(163), 1,
      sym_substitutions,
    STATE(62), 2,
      sym_sub,
      sym_or,
    STATE(165), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(185), 21,
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
  [1057] = 14,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_DASH,
    ACTIONS(242), 1,
      sym_add,
    ACTIONS(246), 1,
      sym_pow,
    ACTIONS(252), 1,
      sym_delay,
    STATE(100), 1,
      sym_substitutions,
    STATE(53), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(244), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(185), 10,
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
  [1119] = 9,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(252), 1,
      sym_delay,
    STATE(100), 1,
      sym_substitutions,
    STATE(53), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(185), 21,
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
  [1171] = 10,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      sym_pow,
    ACTIONS(252), 1,
      sym_delay,
    STATE(100), 1,
      sym_substitutions,
    STATE(53), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(185), 20,
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
  [1225] = 11,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_DOT,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      sym_pow,
    ACTIONS(252), 1,
      sym_delay,
    STATE(100), 1,
      sym_substitutions,
    STATE(53), 2,
      sym_sub,
      sym_or,
    STATE(101), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(191), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(244), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
    ACTIONS(185), 13,
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
  [1281] = 17,
    ACTIONS(201), 1,
      anon_sym_PIPE,
    ACTIONS(240), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_DOT,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      sym_add,
    ACTIONS(262), 1,
      anon_sym_DASH,
    ACTIONS(266), 1,
      sym_pow,
    ACTIONS(268), 1,
      sym_delay,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    STATE(163), 1,
      sym_substitutions,
    ACTIONS(272), 2,
      sym_lt,
      sym_gt,
    STATE(62), 2,
      sym_sub,
      sym_or,
    STATE(165), 2,
      sym__modifier,
      sym_one_sample_delay,
    ACTIONS(274), 4,
      sym_le,
      sym_ge,
      sym_eq,
      sym_neq,
    ACTIONS(238), 5,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
    ACTIONS(264), 7,
      sym_mult,
      sym_div,
      sym_mod,
      sym_and,
      sym_xor,
      sym_lshift,
      sym_rshift,
  [1349] = 3,
    ACTIONS(278), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(276), 28,
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
  [1388] = 2,
    ACTIONS(284), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(282), 29,
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
  [1425] = 2,
    ACTIONS(288), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(286), 29,
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
  [1462] = 2,
    ACTIONS(292), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(290), 29,
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
  [1536] = 2,
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
  [1573] = 3,
    ACTIONS(302), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(276), 28,
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
  [1612] = 3,
    ACTIONS(304), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(276), 28,
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
  [1651] = 2,
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
  [1688] = 2,
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
  [1725] = 3,
    ACTIONS(314), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(276), 28,
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
  [1764] = 3,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(276), 28,
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
  [1803] = 3,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(276), 28,
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
  [1842] = 2,
    ACTIONS(179), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(177), 29,
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
  [1879] = 2,
    ACTIONS(322), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(320), 29,
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
  [1916] = 2,
    ACTIONS(326), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(324), 29,
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
  [1953] = 2,
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
  [1990] = 2,
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
  [2027] = 2,
    ACTIONS(338), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(336), 29,
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
  [2064] = 2,
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
  [2101] = 2,
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
  [2138] = 2,
    ACTIONS(350), 3,
      anon_sym_COLON,
      sym_lt,
      sym_gt,
    ACTIONS(348), 29,
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
  [2212] = 2,
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
  [2249] = 2,
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
  [2286] = 2,
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
  [2323] = 2,
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
  [2360] = 2,
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
  [2397] = 2,
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
  [2434] = 2,
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
  [2471] = 2,
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
  [2508] = 2,
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
  [2545] = 2,
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
  [2582] = 2,
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
  [2619] = 5,
    ACTIONS(113), 1,
      anon_sym_COLON_COLON,
    ACTIONS(115), 1,
      sym__id,
    STATE(135), 1,
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
  [2661] = 5,
    ACTIONS(61), 1,
      anon_sym_COLON_COLON,
    ACTIONS(63), 1,
      sym__id,
    STATE(121), 1,
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
  [2703] = 4,
    ACTIONS(400), 1,
      anon_sym_COLON_COLON,
    STATE(128), 1,
      aux_sym_id_repeat1,
    ACTIONS(225), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(223), 24,
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
  [2742] = 4,
    ACTIONS(403), 1,
      anon_sym_COLON_COLON,
    STATE(128), 1,
      aux_sym_id_repeat1,
    ACTIONS(232), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(230), 24,
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
  [2781] = 4,
    ACTIONS(403), 1,
      anon_sym_COLON_COLON,
    STATE(128), 1,
      aux_sym_id_repeat1,
    ACTIONS(219), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(217), 24,
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
  [2820] = 4,
    ACTIONS(403), 1,
      anon_sym_COLON_COLON,
    STATE(129), 1,
      aux_sym_id_repeat1,
    ACTIONS(219), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(217), 24,
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
  [2859] = 4,
    ACTIONS(403), 1,
      anon_sym_COLON_COLON,
    STATE(130), 1,
      aux_sym_id_repeat1,
    ACTIONS(236), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(234), 24,
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
  [2898] = 2,
    ACTIONS(225), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(223), 25,
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
  [2932] = 2,
    ACTIONS(322), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(320), 24,
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
  [2965] = 2,
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
  [2998] = 2,
    ACTIONS(179), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(177), 24,
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
  [3031] = 3,
    ACTIONS(405), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(276), 23,
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
  [3066] = 2,
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
  [3099] = 2,
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
  [3132] = 2,
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
  [3165] = 2,
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
  [3198] = 2,
    ACTIONS(338), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(336), 24,
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
  [3231] = 2,
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
  [3264] = 2,
    ACTIONS(350), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(348), 24,
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
  [3297] = 2,
    ACTIONS(326), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(324), 24,
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
  [3330] = 2,
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
  [3363] = 2,
    ACTIONS(288), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(286), 24,
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
  [3396] = 2,
    ACTIONS(292), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(290), 24,
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
  [3429] = 3,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(276), 23,
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
  [3464] = 2,
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
  [3497] = 2,
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
  [3530] = 2,
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
  [3563] = 3,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(276), 23,
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
  [3598] = 3,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(276), 23,
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
  [3633] = 2,
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
  [3666] = 2,
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
  [3699] = 2,
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
  [3732] = 2,
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
  [3765] = 2,
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
  [3798] = 2,
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
  [3831] = 2,
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
  [3864] = 2,
    ACTIONS(284), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(282), 24,
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
  [3897] = 2,
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
  [3930] = 2,
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
  [3963] = 2,
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
  [3996] = 3,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(276), 23,
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
  [4031] = 3,
    ACTIONS(415), 1,
      anon_sym_LPAREN,
    ACTIONS(280), 4,
      anon_sym_COLON,
      anon_sym_DASH,
      sym_lt,
      sym_gt,
    ACTIONS(276), 23,
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
  [4066] = 14,
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
    ACTIONS(417), 1,
      ts_builtin_sym_end,
    ACTIONS(419), 1,
      sym_comment,
    STATE(253), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(208), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(381), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(382), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(11), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(169), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [4120] = 14,
    ACTIONS(421), 1,
      ts_builtin_sym_end,
    ACTIONS(423), 1,
      anon_sym_declare,
    ACTIONS(426), 1,
      anon_sym_import,
    ACTIONS(429), 1,
      anon_sym_LTmdoc_GT,
    ACTIONS(435), 1,
      anon_sym_COLON_COLON,
    ACTIONS(438), 1,
      sym__id,
    ACTIONS(441), 1,
      sym_comment,
    STATE(253), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(208), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(381), 2,
      sym_global_metadata,
      sym_function_metadata,
    STATE(382), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(432), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
    STATE(169), 6,
      sym__statement,
      sym__definition,
      sym__metadata_definition,
      sym_file_import,
      sym_documentation,
      aux_sym_program_repeat1,
  [4174] = 9,
    ACTIONS(449), 1,
      anon_sym_COLON_COLON,
    ACTIONS(452), 1,
      sym__id,
    STATE(277), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    ACTIONS(444), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    STATE(170), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(213), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(346), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(446), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4209] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(170), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(213), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(346), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(457), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4243] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(176), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(213), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(346), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(457), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4277] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(170), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(213), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(346), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(457), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4311] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(170), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(213), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(346), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(457), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4345] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(170), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(213), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(346), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(457), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4379] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(170), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(213), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(346), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(457), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4413] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(179), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(213), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(346), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(457), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4447] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(277), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(174), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(213), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(346), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(457), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4481] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(170), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(213), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(346), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(457), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4515] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(175), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(213), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(346), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(457), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4549] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(173), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(213), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(346), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(457), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4583] = 9,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    STATE(277), 1,
      sym_variants,
    STATE(317), 1,
      sym_id,
    STATE(171), 2,
      sym__definition,
      aux_sym_environment_repeat1,
    STATE(213), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    STATE(346), 2,
      sym_definition,
      sym_function_definition,
    ACTIONS(457), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [4617] = 4,
    ACTIONS(479), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(481), 1,
      sym__doc_char,
    STATE(185), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(483), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4640] = 4,
    ACTIONS(485), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(487), 1,
      sym__doc_char,
    STATE(184), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(490), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4663] = 4,
    ACTIONS(493), 1,
      anon_sym_LT_SLASHmdoc_GT,
    ACTIONS(495), 1,
      sym__doc_char,
    STATE(184), 3,
      sym__doc_content,
      sym__special_doc_tag,
      aux_sym_documentation_repeat1,
    ACTIONS(497), 9,
      anon_sym_LTnotice_SLASH_GT,
      anon_sym_LTnotice_SLASH_GT2,
      anon_sym_LTequation_GT,
      anon_sym_LT_SLASHequation_GT,
      anon_sym_LTdiagram_GT,
      anon_sym_LT_SLASHdiagram_GT,
      anon_sym_LTmetadata_GT,
      anon_sym_LT_SLASHmetadata_GT,
      anon_sym_LTlisting,
  [4686] = 2,
    ACTIONS(499), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(501), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4702] = 2,
    ACTIONS(503), 4,
      ts_builtin_sym_end,
      anon_sym_LTmdoc_GT,
      anon_sym_COLON_COLON,
      sym_comment,
    ACTIONS(505), 7,
      anon_sym_declare,
      anon_sym_import,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [4718] = 2,
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
  [4734] = 2,
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
  [4750] = 2,
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
  [4766] = 2,
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
  [4782] = 4,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_COLON,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(523), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4801] = 2,
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
  [4816] = 2,
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
  [4831] = 2,
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
  [4846] = 2,
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
  [4861] = 6,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(547), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_letrec,
  [4884] = 6,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(555), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_with,
      anon_sym_letrec,
  [4907] = 2,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(557), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4922] = 2,
    ACTIONS(563), 1,
      anon_sym_COLON,
    ACTIONS(561), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4937] = 4,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(565), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4956] = 2,
    ACTIONS(569), 1,
      anon_sym_COLON,
    ACTIONS(567), 9,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
      anon_sym_with,
      anon_sym_letrec,
  [4971] = 3,
    ACTIONS(571), 1,
      anon_sym_COLON_COLON,
    STATE(207), 1,
      aux_sym_id_repeat1,
    ACTIONS(234), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [4987] = 3,
    ACTIONS(571), 1,
      anon_sym_COLON_COLON,
    STATE(205), 1,
      aux_sym_id_repeat1,
    ACTIONS(217), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5003] = 3,
    ACTIONS(571), 1,
      anon_sym_COLON_COLON,
    STATE(209), 1,
      aux_sym_id_repeat1,
    ACTIONS(230), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5019] = 4,
    ACTIONS(578), 1,
      anon_sym_COLON_COLON,
    ACTIONS(573), 2,
      anon_sym_import,
      sym__id,
    STATE(206), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(575), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5037] = 3,
    ACTIONS(571), 1,
      anon_sym_COLON_COLON,
    STATE(209), 1,
      aux_sym_id_repeat1,
    ACTIONS(217), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5053] = 4,
    ACTIONS(584), 1,
      anon_sym_COLON_COLON,
    ACTIONS(580), 2,
      anon_sym_import,
      sym__id,
    STATE(206), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(582), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5071] = 3,
    ACTIONS(586), 1,
      anon_sym_COLON_COLON,
    STATE(209), 1,
      aux_sym_id_repeat1,
    ACTIONS(223), 7,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      sym__id,
  [5087] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
  [5112] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
  [5137] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
  [5162] = 4,
    ACTIONS(580), 1,
      sym__id,
    ACTIONS(584), 1,
      anon_sym_COLON_COLON,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(599), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5179] = 1,
    ACTIONS(223), 8,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      sym_string,
      anon_sym_COLON_COLON,
      sym__id,
  [5190] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
    ACTIONS(601), 1,
      anon_sym_SEMI,
  [5215] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
    ACTIONS(603), 1,
      anon_sym_SEMI,
  [5240] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
    ACTIONS(605), 1,
      anon_sym_SEMI,
  [5265] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
  [5290] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
    ACTIONS(609), 1,
      anon_sym_SEMI,
  [5315] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
  [5340] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
    ACTIONS(613), 1,
      anon_sym_SEMI,
  [5365] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
  [5390] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
  [5415] = 2,
    ACTIONS(507), 3,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
    ACTIONS(509), 5,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
      sym__id,
  [5428] = 4,
    ACTIONS(573), 1,
      sym__id,
    ACTIONS(578), 1,
      anon_sym_COLON_COLON,
    STATE(225), 2,
      sym__variant,
      aux_sym_variants_repeat1,
    ACTIONS(619), 4,
      sym_single_precision,
      sym_double_precision,
      sym_quad_precision,
      sym_fixed_point_precision,
  [5445] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
    ACTIONS(622), 1,
      anon_sym_SEMI,
  [5470] = 8,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_TILDE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_LT_COLON,
    ACTIONS(553), 1,
      anon_sym_COLON_GT,
    ACTIONS(591), 1,
      anon_sym_with,
    ACTIONS(593), 1,
      anon_sym_letrec,
    ACTIONS(624), 1,
      anon_sym_RBRACK,
  [5495] = 2,
    ACTIONS(628), 1,
      anon_sym_COLON,
    ACTIONS(626), 6,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_TILDE,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5507] = 7,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_TILDE,
    ACTIONS(638), 1,
      anon_sym_LT_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_GT,
    STATE(274), 1,
      aux_sym_arguments_repeat1,
  [5529] = 5,
    ACTIONS(644), 1,
      anon_sym_COLON,
    ACTIONS(646), 1,
      anon_sym_TILDE,
    ACTIONS(648), 1,
      anon_sym_LT_COLON,
    ACTIONS(650), 1,
      anon_sym_COLON_GT,
    ACTIONS(642), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5546] = 5,
    ACTIONS(644), 1,
      anon_sym_COLON,
    ACTIONS(646), 1,
      anon_sym_TILDE,
    ACTIONS(648), 1,
      anon_sym_LT_COLON,
    ACTIONS(650), 1,
      anon_sym_COLON_GT,
    ACTIONS(652), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5563] = 6,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_TILDE,
    ACTIONS(638), 1,
      anon_sym_LT_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_GT,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    ACTIONS(656), 1,
      anon_sym_COMMA,
  [5582] = 5,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_TILDE,
    ACTIONS(638), 1,
      anon_sym_LT_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_GT,
    ACTIONS(642), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5599] = 6,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_TILDE,
    ACTIONS(638), 1,
      anon_sym_LT_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_GT,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    ACTIONS(660), 1,
      anon_sym_COMMA,
  [5618] = 5,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_TILDE,
    ACTIONS(638), 1,
      anon_sym_LT_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_GT,
    ACTIONS(652), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5635] = 3,
    ACTIONS(644), 1,
      anon_sym_COLON,
    ACTIONS(646), 1,
      anon_sym_TILDE,
    ACTIONS(662), 4,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5648] = 3,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_TILDE,
    ACTIONS(662), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LT_COLON,
      anon_sym_COLON_GT,
  [5661] = 5,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_TILDE,
    ACTIONS(638), 1,
      anon_sym_LT_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_GT,
    ACTIONS(664), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5678] = 5,
    ACTIONS(644), 1,
      anon_sym_COLON,
    ACTIONS(646), 1,
      anon_sym_TILDE,
    ACTIONS(648), 1,
      anon_sym_LT_COLON,
    ACTIONS(650), 1,
      anon_sym_COLON_GT,
    ACTIONS(666), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [5695] = 5,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_TILDE,
    ACTIONS(638), 1,
      anon_sym_LT_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_GT,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
  [5711] = 4,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      anon_sym_where,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    STATE(249), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5725] = 5,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_TILDE,
    ACTIONS(638), 1,
      anon_sym_LT_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_GT,
    ACTIONS(676), 1,
      anon_sym_COMMA,
  [5741] = 5,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(315), 1,
      sym__func_name,
    STATE(316), 1,
      sym_id,
    STATE(385), 1,
      sym_function_names,
  [5757] = 5,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_TILDE,
    ACTIONS(638), 1,
      anon_sym_LT_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_GT,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
  [5773] = 5,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_TILDE,
    ACTIONS(638), 1,
      anon_sym_LT_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_GT,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
  [5789] = 3,
    ACTIONS(686), 1,
      anon_sym_SQUOTE,
    ACTIONS(684), 2,
      anon_sym_RBRACE,
      anon_sym_where,
    STATE(246), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5801] = 5,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(691), 1,
      sym_int_cast,
    ACTIONS(693), 1,
      sym_float_cast,
    ACTIONS(695), 1,
      sym_any_cast,
    STATE(343), 1,
      sym_parameter_types,
  [5817] = 5,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_TILDE,
    ACTIONS(638), 1,
      anon_sym_LT_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_GT,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
  [5833] = 4,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(674), 1,
      anon_sym_SQUOTE,
    ACTIONS(699), 1,
      anon_sym_where,
    STATE(246), 2,
      sym_recinition,
      aux_sym_rec_environment_repeat1,
  [5847] = 5,
    ACTIONS(634), 1,
      anon_sym_COLON,
    ACTIONS(636), 1,
      anon_sym_TILDE,
    ACTIONS(638), 1,
      anon_sym_LT_COLON,
    ACTIONS(640), 1,
      anon_sym_COLON_GT,
    ACTIONS(701), 1,
      anon_sym_COMMA,
  [5863] = 4,
    ACTIONS(703), 1,
      sym_int_cast,
    ACTIONS(705), 1,
      sym_float_cast,
    STATE(243), 1,
      sym__type,
    STATE(404), 1,
      sym_signature,
  [5876] = 3,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    STATE(258), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [5887] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(15), 1,
      sym__id,
    ACTIONS(711), 1,
      anon_sym_import,
    STATE(321), 1,
      sym_id,
  [5900] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    ACTIONS(713), 1,
      sym_string,
    STATE(334), 1,
      sym_id,
  [5913] = 3,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    STATE(353), 1,
      sym_rules,
    STATE(252), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [5924] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(305), 1,
      sym_id,
    STATE(369), 1,
      sym_parameters,
  [5937] = 4,
    ACTIONS(703), 1,
      sym_int_cast,
    ACTIONS(705), 1,
      sym_float_cast,
    STATE(243), 1,
      sym__type,
    STATE(408), 1,
      sym_signature,
  [5950] = 3,
    ACTIONS(715), 1,
      anon_sym_LPAREN,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
    STATE(258), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [5961] = 3,
    ACTIONS(707), 1,
      anon_sym_LPAREN,
    STATE(376), 1,
      sym_rules,
    STATE(252), 2,
      sym_rule,
      aux_sym_rules_repeat1,
  [5972] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(316), 1,
      sym_id,
    STATE(325), 1,
      sym__func_name,
  [5985] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(316), 1,
      sym_id,
    STATE(323), 1,
      sym__func_name,
  [5998] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(305), 1,
      sym_id,
    STATE(331), 1,
      sym_parameters,
  [6011] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(316), 1,
      sym_id,
    STATE(332), 1,
      sym__func_name,
  [6024] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(305), 1,
      sym_id,
    STATE(406), 1,
      sym_parameters,
  [6037] = 4,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(305), 1,
      sym_id,
    STATE(374), 1,
      sym_parameters,
  [6050] = 3,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_parameters_repeat1,
  [6060] = 2,
    STATE(366), 1,
      sym__include_file,
    ACTIONS(724), 2,
      sym_string,
      sym_fstring,
  [6068] = 1,
    ACTIONS(726), 3,
      anon_sym_RBRACE,
      anon_sym_where,
      anon_sym_SQUOTE,
  [6074] = 2,
    STATE(340), 1,
      sym__include_file,
    ACTIONS(724), 2,
      sym_string,
      sym_fstring,
  [6082] = 2,
    STATE(341), 1,
      sym__include_file,
    ACTIONS(724), 2,
      sym_string,
      sym_fstring,
  [6090] = 3,
    ACTIONS(113), 1,
      anon_sym_COLON_COLON,
    ACTIONS(728), 1,
      sym__id,
    STATE(161), 1,
      sym_id,
  [6100] = 3,
    ACTIONS(61), 1,
      anon_sym_COLON_COLON,
    ACTIONS(730), 1,
      sym__id,
    STATE(117), 1,
      sym_id,
  [6110] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(311), 1,
      sym_id,
  [6120] = 3,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(732), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_arguments_repeat1,
  [6130] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(254), 1,
      sym_id,
  [6140] = 3,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(300), 1,
      aux_sym_parameter_types_repeat1,
  [6150] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(321), 1,
      sym_id,
  [6160] = 3,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(740), 1,
      anon_sym_DASH_GT,
    STATE(289), 1,
      aux_sym_modulators_repeat1,
  [6170] = 3,
    ACTIONS(664), 1,
      anon_sym_RPAREN,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    STATE(279), 1,
      aux_sym_arguments_repeat1,
  [6180] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(350), 1,
      sym_id,
  [6190] = 3,
    ACTIONS(703), 1,
      sym_int_cast,
    ACTIONS(705), 1,
      sym_float_cast,
    STATE(306), 1,
      sym__type,
  [6200] = 2,
    ACTIONS(747), 1,
      anon_sym_COLON,
    ACTIONS(745), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6208] = 3,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
    STATE(302), 1,
      aux_sym_parameter_types_repeat1,
  [6218] = 2,
    STATE(351), 1,
      sym__include_file,
    ACTIONS(724), 2,
      sym_string,
      sym_fstring,
  [6226] = 3,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(751), 1,
      anon_sym_RPAREN,
    STATE(303), 1,
      aux_sym_parameter_types_repeat1,
  [6236] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(386), 1,
      sym_id,
  [6246] = 3,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_parameter_types_repeat1,
  [6256] = 2,
    STATE(367), 1,
      sym__include_file,
    ACTIONS(724), 2,
      sym_string,
      sym_fstring,
  [6264] = 3,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    ACTIONS(761), 1,
      anon_sym_DASH_GT,
    STATE(289), 1,
      aux_sym_modulators_repeat1,
  [6274] = 3,
    ACTIONS(703), 1,
      sym_int_cast,
    ACTIONS(705), 1,
      sym_float_cast,
    STATE(304), 1,
      sym__type,
  [6284] = 3,
    ACTIONS(763), 1,
      sym_string,
    STATE(298), 1,
      sym_modulator,
    STATE(392), 1,
      sym_modulators,
  [6294] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(393), 1,
      sym_id,
  [6304] = 3,
    ACTIONS(763), 1,
      sym_string,
    STATE(298), 1,
      sym_modulator,
    STATE(336), 1,
      sym_modulators,
  [6314] = 3,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(767), 1,
      anon_sym_COMMA,
    STATE(294), 1,
      aux_sym_parameters_repeat1,
  [6324] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(394), 1,
      sym_id,
  [6334] = 2,
    STATE(397), 1,
      sym__include_file,
    ACTIONS(724), 2,
      sym_string,
      sym_fstring,
  [6342] = 3,
    ACTIONS(703), 1,
      sym_int_cast,
    ACTIONS(705), 1,
      sym_float_cast,
    STATE(292), 1,
      sym__type,
  [6352] = 3,
    ACTIONS(738), 1,
      anon_sym_COMMA,
    ACTIONS(770), 1,
      anon_sym_DASH_GT,
    STATE(278), 1,
      aux_sym_modulators_repeat1,
  [6362] = 3,
    ACTIONS(703), 1,
      sym_int_cast,
    ACTIONS(705), 1,
      sym_float_cast,
    STATE(295), 1,
      sym__type,
  [6372] = 3,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(772), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      aux_sym_parameter_types_repeat1,
  [6382] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(407), 1,
      sym_id,
  [6392] = 3,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      aux_sym_parameter_types_repeat1,
  [6402] = 3,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
    STATE(287), 1,
      aux_sym_parameter_types_repeat1,
  [6412] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(378), 1,
      sym_id,
  [6422] = 3,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_parameters_repeat1,
  [6432] = 3,
    ACTIONS(13), 1,
      anon_sym_COLON_COLON,
    ACTIONS(678), 1,
      sym__id,
    STATE(377), 1,
      sym_id,
  [6442] = 3,
    ACTIONS(780), 1,
      sym_int_cast,
    ACTIONS(782), 1,
      sym_float_cast,
    ACTIONS(784), 1,
      sym_any_cast,
  [6452] = 1,
    ACTIONS(786), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6457] = 1,
    ACTIONS(788), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6462] = 2,
    ACTIONS(790), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_environment,
  [6469] = 1,
    ACTIONS(792), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6474] = 1,
    ACTIONS(794), 2,
      anon_sym_COLON_COLON,
      sym__id,
  [6479] = 1,
    ACTIONS(796), 2,
      anon_sym_COLON_COLON,
      sym__id,
  [6484] = 1,
    ACTIONS(761), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6489] = 2,
    ACTIONS(798), 1,
      anon_sym_LPAREN,
    ACTIONS(800), 1,
      anon_sym_PIPE,
  [6496] = 1,
    ACTIONS(802), 2,
      anon_sym_LPAREN,
      anon_sym_PIPE,
  [6501] = 2,
    ACTIONS(804), 1,
      anon_sym_EQ,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
  [6508] = 2,
    ACTIONS(763), 1,
      sym_string,
    STATE(314), 1,
      sym_modulator,
  [6515] = 2,
    ACTIONS(808), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_rec_environment,
  [6522] = 2,
    ACTIONS(790), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_environment,
  [6529] = 2,
    ACTIONS(810), 1,
      anon_sym_EQ,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
  [6536] = 2,
    ACTIONS(814), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_environment,
  [6543] = 2,
    ACTIONS(816), 1,
      anon_sym_LPAREN,
    ACTIONS(818), 1,
      anon_sym_PIPE,
  [6550] = 1,
    ACTIONS(820), 2,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [6555] = 2,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    ACTIONS(824), 1,
      anon_sym_PIPE,
  [6562] = 1,
    ACTIONS(753), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6567] = 1,
    ACTIONS(826), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6572] = 1,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
  [6576] = 1,
    ACTIONS(830), 1,
      sym_string,
  [6580] = 1,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [6584] = 1,
    ACTIONS(834), 1,
      anon_sym_RPAREN,
  [6588] = 1,
    ACTIONS(836), 1,
      anon_sym_LPAREN,
  [6592] = 1,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
  [6596] = 1,
    ACTIONS(840), 1,
      sym_string,
  [6600] = 1,
    ACTIONS(842), 1,
      anon_sym_SEMI,
  [6604] = 1,
    ACTIONS(844), 1,
      anon_sym_DASH_GT,
  [6608] = 1,
    ACTIONS(846), 1,
      anon_sym_COMMA,
  [6612] = 1,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
  [6616] = 1,
    ACTIONS(850), 1,
      anon_sym_LPAREN,
  [6620] = 1,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
  [6624] = 1,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
  [6628] = 1,
    ACTIONS(856), 1,
      sym__id,
  [6632] = 1,
    ACTIONS(858), 1,
      anon_sym_RPAREN,
  [6636] = 1,
    ACTIONS(860), 1,
      anon_sym_COMMA,
  [6640] = 1,
    ACTIONS(862), 1,
      sym__id,
  [6644] = 1,
    ACTIONS(864), 1,
      anon_sym_SEMI,
  [6648] = 1,
    ACTIONS(866), 1,
      sym__id,
  [6652] = 1,
    ACTIONS(868), 1,
      sym_string,
  [6656] = 1,
    ACTIONS(870), 1,
      sym_string,
  [6660] = 1,
    ACTIONS(872), 1,
      anon_sym_EQ,
  [6664] = 1,
    ACTIONS(874), 1,
      anon_sym_COMMA,
  [6668] = 1,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
  [6672] = 1,
    ACTIONS(878), 1,
      anon_sym_RBRACE,
  [6676] = 1,
    ACTIONS(880), 1,
      anon_sym_RPAREN,
  [6680] = 1,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
  [6684] = 1,
    ACTIONS(884), 1,
      anon_sym_EQ_GT,
  [6688] = 1,
    ACTIONS(886), 1,
      anon_sym_LPAREN,
  [6692] = 1,
    ACTIONS(888), 1,
      anon_sym_LPAREN,
  [6696] = 1,
    ACTIONS(890), 1,
      anon_sym_SEMI,
  [6700] = 1,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
  [6704] = 1,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
  [6708] = 1,
    ACTIONS(896), 1,
      anon_sym_RPAREN,
  [6712] = 1,
    ACTIONS(898), 1,
      anon_sym_LPAREN,
  [6716] = 1,
    ACTIONS(900), 1,
      anon_sym_EQ,
  [6720] = 1,
    ACTIONS(902), 1,
      anon_sym_SEMI,
  [6724] = 1,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
  [6728] = 1,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
  [6732] = 1,
    ACTIONS(908), 1,
      anon_sym_EQ,
  [6736] = 1,
    ACTIONS(910), 1,
      anon_sym_RPAREN,
  [6740] = 1,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
  [6744] = 1,
    ACTIONS(914), 1,
      sym__id,
  [6748] = 1,
    ACTIONS(916), 1,
      sym__id,
  [6752] = 1,
    ACTIONS(918), 1,
      anon_sym_SEMI,
  [6756] = 1,
    ACTIONS(920), 1,
      anon_sym_RPAREN,
  [6760] = 1,
    ACTIONS(922), 1,
      sym_string,
  [6764] = 1,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
  [6768] = 1,
    ACTIONS(926), 1,
      anon_sym_COMMA,
  [6772] = 1,
    ACTIONS(928), 1,
      anon_sym_COMMA,
  [6776] = 1,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
  [6780] = 1,
    ACTIONS(932), 1,
      anon_sym_LPAREN,
  [6784] = 1,
    ACTIONS(934), 1,
      anon_sym_SEMI,
  [6788] = 1,
    ACTIONS(936), 1,
      anon_sym_SEMI,
  [6792] = 1,
    ACTIONS(938), 1,
      ts_builtin_sym_end,
  [6796] = 1,
    ACTIONS(940), 1,
      sym_string,
  [6800] = 1,
    ACTIONS(942), 1,
      anon_sym_LPAREN,
  [6804] = 1,
    ACTIONS(944), 1,
      anon_sym_COMMA,
  [6808] = 1,
    ACTIONS(946), 1,
      sym__id,
  [6812] = 1,
    ACTIONS(948), 1,
      anon_sym_RPAREN,
  [6816] = 1,
    ACTIONS(950), 1,
      sym_string,
  [6820] = 1,
    ACTIONS(952), 1,
      anon_sym_LBRACE,
  [6824] = 1,
    ACTIONS(954), 1,
      anon_sym_LPAREN,
  [6828] = 1,
    ACTIONS(956), 1,
      anon_sym_DASH_GT,
  [6832] = 1,
    ACTIONS(958), 1,
      anon_sym_COMMA,
  [6836] = 1,
    ACTIONS(960), 1,
      anon_sym_COMMA,
  [6840] = 1,
    ACTIONS(962), 1,
      anon_sym_LPAREN,
  [6844] = 1,
    ACTIONS(964), 1,
      anon_sym_LBRACE,
  [6848] = 1,
    ACTIONS(966), 1,
      anon_sym_COMMA,
  [6852] = 1,
    ACTIONS(968), 1,
      anon_sym_DOT,
  [6856] = 1,
    ACTIONS(970), 1,
      anon_sym_LPAREN,
  [6860] = 1,
    ACTIONS(972), 1,
      anon_sym_LPAREN,
  [6864] = 1,
    ACTIONS(974), 1,
      anon_sym_DOT,
  [6868] = 1,
    ACTIONS(976), 1,
      anon_sym_LPAREN,
  [6872] = 1,
    ACTIONS(978), 1,
      anon_sym_LPAREN,
  [6876] = 1,
    ACTIONS(980), 1,
      anon_sym_COMMA,
  [6880] = 1,
    ACTIONS(982), 1,
      anon_sym_RPAREN,
  [6884] = 1,
    ACTIONS(984), 1,
      anon_sym_RPAREN,
  [6888] = 1,
    ACTIONS(986), 1,
      anon_sym_COMMA,
  [6892] = 1,
    ACTIONS(988), 1,
      anon_sym_COMMA,
  [6896] = 1,
    ACTIONS(990), 1,
      anon_sym_LPAREN,
  [6900] = 1,
    ACTIONS(992), 1,
      anon_sym_LPAREN,
  [6904] = 1,
    ACTIONS(994), 1,
      anon_sym_RPAREN,
  [6908] = 1,
    ACTIONS(996), 1,
      anon_sym_RPAREN,
  [6912] = 1,
    ACTIONS(998), 1,
      anon_sym_RPAREN,
  [6916] = 1,
    ACTIONS(1000), 1,
      anon_sym_LPAREN,
  [6920] = 1,
    ACTIONS(1002), 1,
      anon_sym_LPAREN,
  [6924] = 1,
    ACTIONS(1004), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(67)] = 0,
  [SMALL_STATE(68)] = 60,
  [SMALL_STATE(69)] = 114,
  [SMALL_STATE(70)] = 180,
  [SMALL_STATE(71)] = 236,
  [SMALL_STATE(72)] = 294,
  [SMALL_STATE(73)] = 366,
  [SMALL_STATE(74)] = 412,
  [SMALL_STATE(75)] = 455,
  [SMALL_STATE(76)] = 498,
  [SMALL_STATE(77)] = 541,
  [SMALL_STATE(78)] = 584,
  [SMALL_STATE(79)] = 627,
  [SMALL_STATE(80)] = 677,
  [SMALL_STATE(81)] = 715,
  [SMALL_STATE(82)] = 783,
  [SMALL_STATE(83)] = 845,
  [SMALL_STATE(84)] = 897,
  [SMALL_STATE(85)] = 951,
  [SMALL_STATE(86)] = 1007,
  [SMALL_STATE(87)] = 1057,
  [SMALL_STATE(88)] = 1119,
  [SMALL_STATE(89)] = 1171,
  [SMALL_STATE(90)] = 1225,
  [SMALL_STATE(91)] = 1281,
  [SMALL_STATE(92)] = 1349,
  [SMALL_STATE(93)] = 1388,
  [SMALL_STATE(94)] = 1425,
  [SMALL_STATE(95)] = 1462,
  [SMALL_STATE(96)] = 1499,
  [SMALL_STATE(97)] = 1536,
  [SMALL_STATE(98)] = 1573,
  [SMALL_STATE(99)] = 1612,
  [SMALL_STATE(100)] = 1651,
  [SMALL_STATE(101)] = 1688,
  [SMALL_STATE(102)] = 1725,
  [SMALL_STATE(103)] = 1764,
  [SMALL_STATE(104)] = 1803,
  [SMALL_STATE(105)] = 1842,
  [SMALL_STATE(106)] = 1879,
  [SMALL_STATE(107)] = 1916,
  [SMALL_STATE(108)] = 1953,
  [SMALL_STATE(109)] = 1990,
  [SMALL_STATE(110)] = 2027,
  [SMALL_STATE(111)] = 2064,
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
  [SMALL_STATE(127)] = 2661,
  [SMALL_STATE(128)] = 2703,
  [SMALL_STATE(129)] = 2742,
  [SMALL_STATE(130)] = 2781,
  [SMALL_STATE(131)] = 2820,
  [SMALL_STATE(132)] = 2859,
  [SMALL_STATE(133)] = 2898,
  [SMALL_STATE(134)] = 2932,
  [SMALL_STATE(135)] = 2965,
  [SMALL_STATE(136)] = 2998,
  [SMALL_STATE(137)] = 3031,
  [SMALL_STATE(138)] = 3066,
  [SMALL_STATE(139)] = 3099,
  [SMALL_STATE(140)] = 3132,
  [SMALL_STATE(141)] = 3165,
  [SMALL_STATE(142)] = 3198,
  [SMALL_STATE(143)] = 3231,
  [SMALL_STATE(144)] = 3264,
  [SMALL_STATE(145)] = 3297,
  [SMALL_STATE(146)] = 3330,
  [SMALL_STATE(147)] = 3363,
  [SMALL_STATE(148)] = 3396,
  [SMALL_STATE(149)] = 3429,
  [SMALL_STATE(150)] = 3464,
  [SMALL_STATE(151)] = 3497,
  [SMALL_STATE(152)] = 3530,
  [SMALL_STATE(153)] = 3563,
  [SMALL_STATE(154)] = 3598,
  [SMALL_STATE(155)] = 3633,
  [SMALL_STATE(156)] = 3666,
  [SMALL_STATE(157)] = 3699,
  [SMALL_STATE(158)] = 3732,
  [SMALL_STATE(159)] = 3765,
  [SMALL_STATE(160)] = 3798,
  [SMALL_STATE(161)] = 3831,
  [SMALL_STATE(162)] = 3864,
  [SMALL_STATE(163)] = 3897,
  [SMALL_STATE(164)] = 3930,
  [SMALL_STATE(165)] = 3963,
  [SMALL_STATE(166)] = 3996,
  [SMALL_STATE(167)] = 4031,
  [SMALL_STATE(168)] = 4066,
  [SMALL_STATE(169)] = 4120,
  [SMALL_STATE(170)] = 4174,
  [SMALL_STATE(171)] = 4209,
  [SMALL_STATE(172)] = 4243,
  [SMALL_STATE(173)] = 4277,
  [SMALL_STATE(174)] = 4311,
  [SMALL_STATE(175)] = 4345,
  [SMALL_STATE(176)] = 4379,
  [SMALL_STATE(177)] = 4413,
  [SMALL_STATE(178)] = 4447,
  [SMALL_STATE(179)] = 4481,
  [SMALL_STATE(180)] = 4515,
  [SMALL_STATE(181)] = 4549,
  [SMALL_STATE(182)] = 4583,
  [SMALL_STATE(183)] = 4617,
  [SMALL_STATE(184)] = 4640,
  [SMALL_STATE(185)] = 4663,
  [SMALL_STATE(186)] = 4686,
  [SMALL_STATE(187)] = 4702,
  [SMALL_STATE(188)] = 4718,
  [SMALL_STATE(189)] = 4734,
  [SMALL_STATE(190)] = 4750,
  [SMALL_STATE(191)] = 4766,
  [SMALL_STATE(192)] = 4782,
  [SMALL_STATE(193)] = 4801,
  [SMALL_STATE(194)] = 4816,
  [SMALL_STATE(195)] = 4831,
  [SMALL_STATE(196)] = 4846,
  [SMALL_STATE(197)] = 4861,
  [SMALL_STATE(198)] = 4884,
  [SMALL_STATE(199)] = 4907,
  [SMALL_STATE(200)] = 4922,
  [SMALL_STATE(201)] = 4937,
  [SMALL_STATE(202)] = 4956,
  [SMALL_STATE(203)] = 4971,
  [SMALL_STATE(204)] = 4987,
  [SMALL_STATE(205)] = 5003,
  [SMALL_STATE(206)] = 5019,
  [SMALL_STATE(207)] = 5037,
  [SMALL_STATE(208)] = 5053,
  [SMALL_STATE(209)] = 5071,
  [SMALL_STATE(210)] = 5087,
  [SMALL_STATE(211)] = 5112,
  [SMALL_STATE(212)] = 5137,
  [SMALL_STATE(213)] = 5162,
  [SMALL_STATE(214)] = 5179,
  [SMALL_STATE(215)] = 5190,
  [SMALL_STATE(216)] = 5215,
  [SMALL_STATE(217)] = 5240,
  [SMALL_STATE(218)] = 5265,
  [SMALL_STATE(219)] = 5290,
  [SMALL_STATE(220)] = 5315,
  [SMALL_STATE(221)] = 5340,
  [SMALL_STATE(222)] = 5365,
  [SMALL_STATE(223)] = 5390,
  [SMALL_STATE(224)] = 5415,
  [SMALL_STATE(225)] = 5428,
  [SMALL_STATE(226)] = 5445,
  [SMALL_STATE(227)] = 5470,
  [SMALL_STATE(228)] = 5495,
  [SMALL_STATE(229)] = 5507,
  [SMALL_STATE(230)] = 5529,
  [SMALL_STATE(231)] = 5546,
  [SMALL_STATE(232)] = 5563,
  [SMALL_STATE(233)] = 5582,
  [SMALL_STATE(234)] = 5599,
  [SMALL_STATE(235)] = 5618,
  [SMALL_STATE(236)] = 5635,
  [SMALL_STATE(237)] = 5648,
  [SMALL_STATE(238)] = 5661,
  [SMALL_STATE(239)] = 5678,
  [SMALL_STATE(240)] = 5695,
  [SMALL_STATE(241)] = 5711,
  [SMALL_STATE(242)] = 5725,
  [SMALL_STATE(243)] = 5741,
  [SMALL_STATE(244)] = 5757,
  [SMALL_STATE(245)] = 5773,
  [SMALL_STATE(246)] = 5789,
  [SMALL_STATE(247)] = 5801,
  [SMALL_STATE(248)] = 5817,
  [SMALL_STATE(249)] = 5833,
  [SMALL_STATE(250)] = 5847,
  [SMALL_STATE(251)] = 5863,
  [SMALL_STATE(252)] = 5876,
  [SMALL_STATE(253)] = 5887,
  [SMALL_STATE(254)] = 5900,
  [SMALL_STATE(255)] = 5913,
  [SMALL_STATE(256)] = 5924,
  [SMALL_STATE(257)] = 5937,
  [SMALL_STATE(258)] = 5950,
  [SMALL_STATE(259)] = 5961,
  [SMALL_STATE(260)] = 5972,
  [SMALL_STATE(261)] = 5985,
  [SMALL_STATE(262)] = 5998,
  [SMALL_STATE(263)] = 6011,
  [SMALL_STATE(264)] = 6024,
  [SMALL_STATE(265)] = 6037,
  [SMALL_STATE(266)] = 6050,
  [SMALL_STATE(267)] = 6060,
  [SMALL_STATE(268)] = 6068,
  [SMALL_STATE(269)] = 6074,
  [SMALL_STATE(270)] = 6082,
  [SMALL_STATE(271)] = 6090,
  [SMALL_STATE(272)] = 6100,
  [SMALL_STATE(273)] = 6110,
  [SMALL_STATE(274)] = 6120,
  [SMALL_STATE(275)] = 6130,
  [SMALL_STATE(276)] = 6140,
  [SMALL_STATE(277)] = 6150,
  [SMALL_STATE(278)] = 6160,
  [SMALL_STATE(279)] = 6170,
  [SMALL_STATE(280)] = 6180,
  [SMALL_STATE(281)] = 6190,
  [SMALL_STATE(282)] = 6200,
  [SMALL_STATE(283)] = 6208,
  [SMALL_STATE(284)] = 6218,
  [SMALL_STATE(285)] = 6226,
  [SMALL_STATE(286)] = 6236,
  [SMALL_STATE(287)] = 6246,
  [SMALL_STATE(288)] = 6256,
  [SMALL_STATE(289)] = 6264,
  [SMALL_STATE(290)] = 6274,
  [SMALL_STATE(291)] = 6284,
  [SMALL_STATE(292)] = 6294,
  [SMALL_STATE(293)] = 6304,
  [SMALL_STATE(294)] = 6314,
  [SMALL_STATE(295)] = 6324,
  [SMALL_STATE(296)] = 6334,
  [SMALL_STATE(297)] = 6342,
  [SMALL_STATE(298)] = 6352,
  [SMALL_STATE(299)] = 6362,
  [SMALL_STATE(300)] = 6372,
  [SMALL_STATE(301)] = 6382,
  [SMALL_STATE(302)] = 6392,
  [SMALL_STATE(303)] = 6402,
  [SMALL_STATE(304)] = 6412,
  [SMALL_STATE(305)] = 6422,
  [SMALL_STATE(306)] = 6432,
  [SMALL_STATE(307)] = 6442,
  [SMALL_STATE(308)] = 6452,
  [SMALL_STATE(309)] = 6457,
  [SMALL_STATE(310)] = 6462,
  [SMALL_STATE(311)] = 6469,
  [SMALL_STATE(312)] = 6474,
  [SMALL_STATE(313)] = 6479,
  [SMALL_STATE(314)] = 6484,
  [SMALL_STATE(315)] = 6489,
  [SMALL_STATE(316)] = 6496,
  [SMALL_STATE(317)] = 6501,
  [SMALL_STATE(318)] = 6508,
  [SMALL_STATE(319)] = 6515,
  [SMALL_STATE(320)] = 6522,
  [SMALL_STATE(321)] = 6529,
  [SMALL_STATE(322)] = 6536,
  [SMALL_STATE(323)] = 6543,
  [SMALL_STATE(324)] = 6550,
  [SMALL_STATE(325)] = 6555,
  [SMALL_STATE(326)] = 6562,
  [SMALL_STATE(327)] = 6567,
  [SMALL_STATE(328)] = 6572,
  [SMALL_STATE(329)] = 6576,
  [SMALL_STATE(330)] = 6580,
  [SMALL_STATE(331)] = 6584,
  [SMALL_STATE(332)] = 6588,
  [SMALL_STATE(333)] = 6592,
  [SMALL_STATE(334)] = 6596,
  [SMALL_STATE(335)] = 6600,
  [SMALL_STATE(336)] = 6604,
  [SMALL_STATE(337)] = 6608,
  [SMALL_STATE(338)] = 6612,
  [SMALL_STATE(339)] = 6616,
  [SMALL_STATE(340)] = 6620,
  [SMALL_STATE(341)] = 6624,
  [SMALL_STATE(342)] = 6628,
  [SMALL_STATE(343)] = 6632,
  [SMALL_STATE(344)] = 6636,
  [SMALL_STATE(345)] = 6640,
  [SMALL_STATE(346)] = 6644,
  [SMALL_STATE(347)] = 6648,
  [SMALL_STATE(348)] = 6652,
  [SMALL_STATE(349)] = 6656,
  [SMALL_STATE(350)] = 6660,
  [SMALL_STATE(351)] = 6664,
  [SMALL_STATE(352)] = 6668,
  [SMALL_STATE(353)] = 6672,
  [SMALL_STATE(354)] = 6676,
  [SMALL_STATE(355)] = 6680,
  [SMALL_STATE(356)] = 6684,
  [SMALL_STATE(357)] = 6688,
  [SMALL_STATE(358)] = 6692,
  [SMALL_STATE(359)] = 6696,
  [SMALL_STATE(360)] = 6700,
  [SMALL_STATE(361)] = 6704,
  [SMALL_STATE(362)] = 6708,
  [SMALL_STATE(363)] = 6712,
  [SMALL_STATE(364)] = 6716,
  [SMALL_STATE(365)] = 6720,
  [SMALL_STATE(366)] = 6724,
  [SMALL_STATE(367)] = 6728,
  [SMALL_STATE(368)] = 6732,
  [SMALL_STATE(369)] = 6736,
  [SMALL_STATE(370)] = 6740,
  [SMALL_STATE(371)] = 6744,
  [SMALL_STATE(372)] = 6748,
  [SMALL_STATE(373)] = 6752,
  [SMALL_STATE(374)] = 6756,
  [SMALL_STATE(375)] = 6760,
  [SMALL_STATE(376)] = 6764,
  [SMALL_STATE(377)] = 6768,
  [SMALL_STATE(378)] = 6772,
  [SMALL_STATE(379)] = 6776,
  [SMALL_STATE(380)] = 6780,
  [SMALL_STATE(381)] = 6784,
  [SMALL_STATE(382)] = 6788,
  [SMALL_STATE(383)] = 6792,
  [SMALL_STATE(384)] = 6796,
  [SMALL_STATE(385)] = 6800,
  [SMALL_STATE(386)] = 6804,
  [SMALL_STATE(387)] = 6808,
  [SMALL_STATE(388)] = 6812,
  [SMALL_STATE(389)] = 6816,
  [SMALL_STATE(390)] = 6820,
  [SMALL_STATE(391)] = 6824,
  [SMALL_STATE(392)] = 6828,
  [SMALL_STATE(393)] = 6832,
  [SMALL_STATE(394)] = 6836,
  [SMALL_STATE(395)] = 6840,
  [SMALL_STATE(396)] = 6844,
  [SMALL_STATE(397)] = 6848,
  [SMALL_STATE(398)] = 6852,
  [SMALL_STATE(399)] = 6856,
  [SMALL_STATE(400)] = 6860,
  [SMALL_STATE(401)] = 6864,
  [SMALL_STATE(402)] = 6868,
  [SMALL_STATE(403)] = 6872,
  [SMALL_STATE(404)] = 6876,
  [SMALL_STATE(405)] = 6880,
  [SMALL_STATE(406)] = 6884,
  [SMALL_STATE(407)] = 6888,
  [SMALL_STATE(408)] = 6892,
  [SMALL_STATE(409)] = 6896,
  [SMALL_STATE(410)] = 6900,
  [SMALL_STATE(411)] = 6904,
  [SMALL_STATE(412)] = 6908,
  [SMALL_STATE(413)] = 6912,
  [SMALL_STATE(414)] = 6916,
  [SMALL_STATE(415)] = 6920,
  [SMALL_STATE(416)] = 6924,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sub, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 15),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix, 3, .production_id = 15),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(347),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 2),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim3, 4, .production_id = 22),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim3, 4, .production_id = 22),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim2, 4, .production_id = 22),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim2, 4, .production_id = 22),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_sample_delay, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_sample_delay, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitution, 2, .production_id = 7),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitution, 2, .production_id = 7),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 2, .production_id = 8),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 2, .production_id = 8),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim1, 4, .production_id = 21),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim1, 4, .production_id = 21),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fconst, 7, .production_id = 31),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fconst, 7, .production_id = 31),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4, .production_id = 20),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4, .production_id = 20),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_substitutions, 3),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_substitutions, 3),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim5, 4, .production_id = 22),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim5, 4, .production_id = 22),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ffunction, 8, .production_id = 35),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ffunction, 8, .production_id = 35),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prim4, 4, .production_id = 22),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prim4, 4, .production_id = 22),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive, 2),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iteration, 8, .production_id = 34),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_iteration, 8, .production_id = 34),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 6, .production_id = 30),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix, 6, .production_id = 30),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_access, 3, .production_id = 14),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_access, 3, .production_id = 14),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fvariable, 7, .production_id = 31),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fvariable, 7, .production_id = 31),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, .production_id = 19),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negate_id, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negate_id, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulation, 5, .production_id = 25),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modulation, 5, .production_id = 25),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lambda, 8, .production_id = 32),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lambda, 8, .production_id = 32),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(372),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(275),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(402),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(183),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(208),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(387),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(203),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(169),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(213),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(387),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(203),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(184),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_documentation_repeat1, 2), SHIFT_REPEAT(184),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__metadata_definition, 2),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__metadata_definition, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__definition, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 5, .production_id = 9),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 5, .production_id = 9),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_documentation, 2),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_documentation, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_import, 6, .production_id = 17),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_import, 6, .production_id = 17),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel, 3, .production_id = 12),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel, 3, .production_id = 12),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 4),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 4),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_letrec_environment, 3, .production_id = 13),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_letrec_environment, 3, .production_id = 13),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split, 3, .production_id = 12),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge, 3, .production_id = 12),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_environment, 3, .production_id = 13),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_environment, 3, .production_id = 13),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive, 3, .production_id = 12),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive, 3, .production_id = 12),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential, 3, .production_id = 12),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rec_environment, 5),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rec_environment, 5),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2),
  [575] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(206),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variants_repeat1, 2),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variants, 1),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variants, 1),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(342),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, .production_id = 24),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3, .production_id = 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 23),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [619] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variants_repeat1, 2), SHIFT_REPEAT(225),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, .production_id = 5),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recursive_arg, 3, .production_id = 12),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recursive_arg, 3, .production_id = 12),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_merge_arg, 3, .production_id = 12),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_split_arg, 3, .production_id = 12),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sequential_arg, 3, .production_id = 12),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulator, 3, .production_id = 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rec_environment_repeat1, 2), SHIFT_REPEAT(280),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 1),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2), SHIFT_REPEAT(28),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rules_repeat1, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, .production_id = 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recinition, 5, .production_id = 38),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulators, 2),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(40),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulator, 1, .production_id = 6),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 1, .production_id = 29),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 1, .production_id = 28),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2), SHIFT_REPEAT(307),
  [758] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modulators_repeat1, 2), SHIFT_REPEAT(318),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modulators_repeat1, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [767] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(273),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulators, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 2, .production_id = 29),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_types, 2, .production_id = 28),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, .production_id = 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__include_file, 1, .production_id = 26),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2, .production_id = 36),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, .production_id = 16),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 11),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 10),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_name, 1, .production_id = 18),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 3),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 33),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 5),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_types_repeat1, 2, .production_id = 37),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_names, 7),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_metadata, 3, .production_id = 1),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 5, .production_id = 27),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 4, .production_id = 27),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_metadata, 4, .production_id = 4),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [938] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
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
