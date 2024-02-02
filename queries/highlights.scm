;; Sections are based on nvim-treesitter highlights:
;; See: https://tree-sitter.github.io/tree-sitter/syntax-highlighting#highlights
;;
;; Sections mirror nvim-treesitter's documentation:
;; https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md#highlights

;; Identifiers
; @variable            ; various variable names
; @variable.builtin    ; built-in variable names (e.g. `this`)
; @variable.parameter  ; parameters of a function
; @variable.member     ; object and struct fields

(identifier) @variable
(process) @variable.builtin
(parameters (identifier)) @variable.parameter

; @constant          ; constant identifiers
; @constant.builtin  ; built-in constant values
; @constant.macro    ; constants defined by the preprocessor

; None

; @module            ; modules or namespaces
; @module.builtin    ; built-in modules or namespaces
; @label             ; GOTO and other labels (e.g. `label:` in C), including heredoc labels

; None

;; Literals
; @string                 ; string literals
; @string.documentation   ; string documenting code (e.g. Python docstrings)
; @string.regexp          ; regular expressions
; @string.escape          ; escape sequences
; @string.special         ; other special strings (e.g. dates)
; @string.special.symbol  ; symbols or atoms
; @string.special.url     ; URIs (e.g. hyperlinks)
; @string.special.path    ; filenames
; 
; @character              ; character literals
; @character.special      ; special characters (e.g. wildcards)
; 
; @boolean                ; boolean literals
; @number                 ; numeric literals
; @number.float           ; floating-point number literals

(_ filename: (string)) @string.special.path

(function_names) @string.special
(documentation) @string.documentation

[(string) (fstring)] @string

(real) @number.float
[(int) (real)] @number

;; Types
; @type             ; type or class definitions and annotations
; @type.builtin     ; built-in types
; @type.definition  ; identifiers in type definitions (e.g. `typedef <type> <identifier>` in C)
; @type.qualifier   ; type qualifiers (e.g. `const`)
; 
; @attribute        ; attribute annotations (e.g. Python decorators)
; @property         ; the key in key/value pairs

(global_metadata key: (identifier)) @property
(function_metadata key: (identifier)) @property

(_ type: [(int) (float) (any)]) @type.builtin

[(single_precision) (double_precision) (quad_precision) (fixed_point_precision)] @attribute

;; Functions
; @function             ; function definitions
; @function.builtin     ; built-in functions
; @function.call        ; function calls
; @function.macro       ; preprocessor macros
; 
; @function.method      ; method definitions
; @function.method.call ; method calls
; 
; @constructor          ; constructor calls and definitions
; @operator             ; symbolic operators (e.g. `+` / `*`)

(function_definition name: (identifier) @function)
[(lambda) (prefix) (prim1) (prim2) (prim3) (prim4) (prim5) (function_call)] @function.call

[
  (exp) (log) (log10) (sqrt) (abs) (floor) (ceil) (rint) (round)
  (acos) (asin) (atan) (cos) (sin) (tan) (atan2)
  (int_cast) (float_cast)
  (pow_fun) (min) (max) (fmod) (remainder)
  (prefix_prim) (attach) (enable) (control)
  (rdtable) (rwtable) (select2) (select3)
  (component) (library)
  (lowest) (highest) (assertbounds)
  (par) (seq) (sum) (prod)
  (vslider_type) (hslider_type) (nentry_type)
  (vbargraph_type) (hbargraph_type)
  (vgroup_type) (hgroup_type) (tgroup_type)
  "button" "checkbox"
  "soundfile" "inputs" "outputs"
  "route"
] @function.builtin

; xor is a @keyword.operator
[
  (add) (sub) (mult) (div) (mod) (pow)
  (or) (and) (lshift) (rshift)
  (lt) (le) (gt) (ge) (eq) (neq)
  (delay) (one_sample_delay)
  "=" "=>" "->"
] @operator

[(recursive "~") (sequential ":") (split "<:") (merge ":>") (parallel ",")] @operator

;; Keywords
; @keyword                   ; keywords not fitting into specific categories
; @keyword.coroutine         ; keywords related to coroutines (e.g. `go` in Go, `async/await` in Python)
; @keyword.function          ; keywords that define a function (e.g. `func` in Go, `def` in Python)
; @keyword.operator          ; operators that are English words (e.g. `and` / `or`)
; @keyword.import            ; keywords for including modules (e.g. `import` / `from` in Python)
; @keyword.storage           ; modifiers that affect storage in memory or life-time
; @keyword.repeat            ; keywords related to loops (e.g. `for` / `while`)
; @keyword.return            ; keywords like `return` and `yield`
; @keyword.debug             ; keywords related to debugging
; @keyword.exception         ; keywords related to exceptions (e.g. `throw` / `catch`)
; 
; @keyword.conditional         ; keywords related to conditionals (e.g. `if` / `else`)
; @keyword.conditional.ternary ; ternary operator (e.g. `?` / `:`)
; 
; @keyword.directive         ; various preprocessor directives & shebangs
; @keyword.directive.define  ; preprocessor definition directives

[(par) (seq) (sum) (prod)] @keyword.repeat

(file_import "import") @keyword.import

[
  (wire)
  (cut)
  (mem)
  "declare"
  "with" "environment"
  "case"
  "ffunction" "fconstant" "fvariable"
] @keyword

[(xor)] @keyword.operator

;; Punctuation
; @punctuation.delimiter ; delimiters (e.g. `;` / `.` / `,`)
; @punctuation.bracket   ; brackets (e.g. `()` / `{}` / `[]`)
; @punctuation.special   ; special symbols (e.g. `{}` in string interpolation)

["," ";" "."] @punctuation.delimiter
["(" ")" "[" "]" "{" "}"] @punctuation.bracket

;; Comments
; @comment               ; line and block comments
; @comment.documentation ; comments documenting code
; 
; @comment.error         ; error-type comments (e.g. `ERROR`, `FIXME`, `DEPRECATED:`)
; @comment.warning       ; warning-type comments (e.g. `WARNING:`, `FIX:`, `HACK:`)
; @comment.todo          ; todo-type comments (e.g. `TODO:`, `WIP:`, `FIXME:`)
; @comment.note          ; note-type comments (e.g. `NOTE:`, `INFO:`, `XXX`)

(comment) @comment

; @tag           ; XML-style tag names (and similar)
; @tag.attribute ; XML-style tag attributes
; @tag.delimiter ; XML-style tag delimiters

[(doc_metadata) (doc_equation) (doc_diagram) (doc_listing) (doc_notice)] @tag
(doc_attribute) @tag.attribute
