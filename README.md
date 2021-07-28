# Postgresql tree-sitter grammar

This is a test grammar for postgres. It is very limited at the moment, only supporting some basic select statements. See the corpus for what statements are supported.

It was mostly adapted from the community sqlite antlr grammar: https://github.com/antlr/grammars-v4/blob/master/sql/sqlite/SQLiteParser.g4.

## Development

### Requirements

```
npm i
```

### Running tests

```
npm t
```

### Playground

You can launch an interactive playground which is useful for inspecting the syntax tree.

```
npm run playground
```
