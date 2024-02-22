# tree-sitter-faust

[Tree-sitter](https://tree-sitter.github.io/) grammar for the [Faust audio programming language](https://faustdoc.grame.fr/manual/syntax/).

Every Faust syntax feature should be supported.
If you encounter any errors parsing a valid Faust program, please file an issue and I'll fix it!
Also, please file an issue or pull request if you have any suggestions for improving the grammar.

The npm package is [here](https://www.npmjs.com/package/tree-sitter-faust).

## Install `nvim-treesitter` language parser

The parser and queries are available as an [nvim-treesitter language](https://github.com/nvim-treesitter/nvim-treesitter/?tab=readme-ov-file#supported-languages).

Install with the `nvim` command:
```nvim
:TSInstall faust
```

## Commands

```shell
$ npm run build # generate and build
$ npm run generate # tree-sitter generate
$ npm test # tree-sitter test
$ npm run parse # tree-sitter parse
```

See [tree-sitter's documentation](https://tree-sitter.github.io/tree-sitter/creating-parsers#tool-overview) for details on tree-sitter CLI commands.

## Resources

- [Faust syntax documentation](https://faustdoc.grame.fr/manual/syntax/)
- Faust Bison [parser](https://github.com/grame-cncm/faust/blob/master-dev/compiler/parser/faustparser.y) and Flex [lexer](https://github.com/grame-cncm/faust/blob/master-dev/compiler/parser/faustlexer.l) source
- [Faust box-tester](https://github.com/grame-cncm/faust/blob/master-dev/tools/benchmark/box-tester.cpp)

## TODO

- Add `playground` script for `tree-sitter build-wasm && tree-sitter web-ui`?
  - Saw this [here](https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md#parser-configurations)
