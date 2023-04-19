## Bootstrap
```sh
export PATH=$PATH:./node_modules/.bin
```

- subLayers
- Prim metadata
 - Known keys
  - assetInfo
  - payload
  - references
  - inherits
  - specializes
  - variantSet / variantSets
 - Extra keys
- Variant Set stuff
- Get "attribute right side" working
- Relationships
- AssetInfo


## TODO
Fix this issue (found during /repositories/tree-sitter-usd$ tree-sitter generate && tree-sitter parse /home/selecaoone/temp/usd_tests/attribute.usda)

```
/home/selecaoone/temp/usd_tests/attribute.usda  0 ms    (MISSING identifie
r [4, 28] - [4, 28])
```


## Tests to write
### Attributes
- simple
- time sample
- clips?
- blocked attributes (default or time sample)
- custom / uniform / varying
- declaration / definition
- literals
 - float
 - int
 - string
- when type is foo[], you can use []s
- gprim syntax?
- attribute with namespace e.g. foo:bar:fizz:buzz
- attributes with extra metadata
- are relationships able to be "declared but not defined"?



// TODO: Check if name is optional. What characters can it take? Unicode?

// TODO: Add unittest where multi-line contains 1 or 2 " within
// TODO: Make sure this works. Can prims be named with )@(*#$& special characters?

// TODO: Double-check what is allowed as an identifier. Unicode? escaped \"s?

// // TODO: Add the actual grammar rules
// shebang: $ => "#usda 1.0",  // TODO: make value, variable


Add a "Complex everything" test, with everything at once
