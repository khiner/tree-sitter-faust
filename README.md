# tree-sitter-faust

This is a tree-sitter grammar for the [Faust audio programming language](https://faustdoc.grame.fr/manual/syntax/).

Every Faust syntax feature should be supported.
If you encounter any errors parsing a valid Faust program, please file an issue and I'll fix it!
Also, please file an issue or pull request if you have any suggestions for improving the grammar.

## Design notes

The rules of the grammar are somewhat more detailed than typical grammars.
For example, [tree-sitter-cpp](https://github.com/tree-sitter/tree-sitter-cpp/blob/master/grammar.js) [defines the operators in binary operations](https://github.com/tree-sitter/tree-sitter-cpp/blob/4ca37be8e70e5a40ae95688bec56b886ba945888/grammar.js#L1143-L1151) anonymously with raw strings, producing infix binary operations [like](https://github.com/tree-sitter/tree-sitter-cpp/blob/4ca37be8e70e5a40ae95688bec56b886ba945888/test/corpus/expressions.txt#L827-L1238):
```
"1.0 <=> b" => (binary_expression left: (number_literal) right: (identifier))
```

... (with no explicit operator), while this Faust grammar defines unique rules for each operation (a _primitive_ in Faust parlance), producing e.g. infix operations like:
```
"1.0 < b" => (infix left: (real) operator: (lt) right: (id))
```

The extra detail is added because this grammar is intended for two purposes:
- Syntax highlighting and other syntactic code analysis applications (the typical tree-sitter use case)
- Fully and accurately transforming the AST into downstream language intermediates (like its [box expression](https://faustdoc.grame.fr/tutorials/box-api/))

To serve the second goal, the ASTs produced by this grammar must provide enough information to do everything the [Faust bison parser](https://github.com/grame-cncm/faust/blob/master-dev/compiler/parser/faustparser.y) does.

## Commands

```shell
$ npm run generate # tree-sitter generate
$ npm run test # tree-sitter test
$ npm run parse # tree-sitter parse
```

See [tree-sitter's documentation](https://tree-sitter.github.io/tree-sitter/creating-parsers#tool-overview) for details on tree-sitter CLI commands.

## Resources

- [Faust syntax documentation](https://faustdoc.grame.fr/manual/syntax/)
- Faust Bison [parser](https://github.com/grame-cncm/faust/blob/master-dev/compiler/parser/faustparser.y) and Flex [lexer](https://github.com/grame-cncm/faust/blob/master-dev/compiler/parser/faustlexer.l) source
- [Faust box-tester](https://github.com/grame-cncm/faust/blob/master-dev/tools/benchmark/box-tester.cpp)
