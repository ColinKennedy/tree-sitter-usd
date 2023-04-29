tree-sitter generate

## Bootstrap
```sh
export PATH=$PATH:./node_modules/.bin
```




- Make sure highlighting works as expected

- Unittests
 - Add clips unittests
 - Add customData support
  - Attributes
  - Prims
  - Anything else that I forgot
 - AssetInfo
 - Prim metadata
  - Known keys
   - assetInfo
   - payload
   - references
   - inherits
   - specializes
   - variantSet / variantSets
  - Extra keys
 - Make sure attributes can be ``blocked``
 - LIVRPS unittests
  - Make sure ``add``, ``append``, ``delete``, ``reorder`` etc works
- Make sure individual types behave as expected. e.g. parsing strings (can they escape \"? Does it parse? etc)

- It'd be nice to remove all hard-coded types and just rely on a generic identifier


## TODO
- Check if it's allowed to provide a single element instead of a list, for subLayers / anywhere else where a proxy is allowed
- Also check if payloads can receive more than one value at once

Fix this issue (found during /repositories/tree-sitter-usd$ tree-sitter generate && tree-sitter parse /home/selecaoone/temp/usd_tests/attribute.usda)

```
/home/selecaoone/temp/usd_tests/attribute.usda  0 ms    (MISSING identifie
r [4, 28] - [4, 28])
```

Check if layer metadata "other" fields has stuff that is actually KNOWN, that I just missed
layer metadata
// customLayerData = {
//     int foo = 8
// }


- reference / payload / sublayer with
 - asset path + prim path + offset
 - asset path + prim path
 - asset path + offset
 - prim path + offset(?)

- Do fuzz testing for Prim names. Determine actual, allowed syntax

- Ensure types.txt tests for strings (single string, multi-line, etc)

<!-- paths = [ -->
<!--     ("foo.sdf", -->
<!--      "foo.sdf", -->
<!--      {}), -->
<!--     ("foo.sdf1!@#$%^*()-_=+[{]}|;:',<.>", -->
<!--      "foo.sdf1!@#$%^*()-_=+[{]}|;:',<.>", -->
<!--      {}), -->
<!--     ("foo.sdf:SDF_FORMAT_ARGS:a=b&c=d", -->
<!--      "foo.sdf", -->
<!--      {"a":"b", "c":"d"}), -->
<!--     ("foo.sdf?otherargs&evenmoreargs:SDF_FORMAT_ARGS:a=b&c=d", -->
<!--      "foo.sdf?otherargs&evenmoreargs", -->
<!--      {"a":"b", "c":"d"}), -->
<!-- ] -->


## Tests to write
### Attributes
- blocked (None) attributes (default or time sample)
- gprim syntax?


- fuzz testing
 - asset paths
 - prim paths
 - identifier names (of variables and such)
 - prim names


// TODO: Check if name is optional. What characters can it take? Unicode?

// TODO: Add unittest where multi-line contains 1 or 2 " within
// TODO: Make sure this works. Can prims be named with )@(*#$& special characters?

// TODO: Double-check what is allowed as an identifier. Unicode? escaped \"s?

// // TODO: Add the actual grammar rules
// shebang: $ => "#usda 1.0",  // TODO: make value, variable

- Audit all uses of $.identifier. Make sure it validates in real USD files
- TODO finish Comment - unicode
- Add permutations for things
 - empty
 - single character
 - multiple text
 - unicode
 - multiline
- Add customlayerData unittests


- Check if I can make "asset_path" consistent in attribute assigment and "arc_path" in metadata_assignment
- Consider allowing asset_path to replace arc_path if both are an option (give asset_path a higher precedence)
- Check if I can remove attribute_type. Because it can probably just be $.identifier
- Try removing some of the prec.left commands to see what is really needed
- Wondering if I should add fields for the left / right side of the timeSamples stuff

- Make sure that the type of { string foo = "asdfasdf" } and attributes is queriable
Add a "Complex everything" test, with everything at once
