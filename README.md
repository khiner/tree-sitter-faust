# tree-sitter-faust

Faust grammar for tree-sitter

WIP - not much here yet.

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
- [(Incomplete) tree-sitter Faust grammar](https://github.com/madskjeldgaard/tree-sitter-faust) I started with
