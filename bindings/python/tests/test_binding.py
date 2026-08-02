"""Make sure the Python bindings for the USD grammar work."""

import textwrap
import unittest

from tree_sitter import Language, Parser

import tree_sitter_usda

_SOURCE_CODE = textwrap.dedent(
    """\
    #usda 1.0
    (
        "Some layer comment."
        defaultPrim = "root"
        endTimeCode = 1200.4
        framesPerSecond = 24
        startTimeCode = 1001.2
        subLayers = [
            @./relative/path1.usda@,
            @/absolute/path3.usda@,
        ]
        customLayerData = {
            string author = "Some Person"
            dictionary extra = {
                int[] indices = [0, 1, 2]
            }
        }
    )

    def Xform "root" (
        kind = "component"
        prepend references = @./other.usda@</some/prim/path>
        prepend variantSets = ["shading_variant"]
        variants = {
            string shading_variant = "red"
        }
    )
    {
        custom double params:mass = 10.5 (
            doc = "Double value denoting mass"
        )
        uniform token[] xformOpOrder = ["xformOp:translate"]
        float3 xformOp:translate.timeSamples = {
            1001: (0, 0, 0),
            1002: (1.5, 0, -2.5),
        }

        rel material:binding = </root/Looks/SomeMaterial>

        variantSet "shading_variant" = {
            "red" (
                "A comment about the red variant"
            )
            {
                over "geometry"
                {
                    color3f[] primvars:displayColor = [(1, 0, 0)]
                }
            }

            "blue" {
                over "geometry"
                {
                    color3f[] primvars:displayColor = [(0, 0, 1)]
                }
            }
        }

        def Scope "Looks"
        {
            def Material "SomeMaterial"
            {
                token outputs:surface.connect = </root/Looks/SomeMaterial/Shader.outputs:surface>

                def Shader "Shader"
                {
                    uniform token info:id = "UsdPreviewSurface"
                    float inputs:roughness = 0.4
                }
            }
        }
    }

    class "ParamsAPI"
    {
        double params:velocity
    }

    over "root" (
        # A comment inside of metadata
        active = false
    )
    {
    }
    """
)


def _find(node, type_name):
    """Get every descendent of ``node`` whose type is ``type_name``."""
    output = []
    stack = [node]

    while stack:
        current = stack.pop()

        if current.type == type_name:
            output.append(current)

        stack.extend(reversed(current.children))

    return output


class Binding(unittest.TestCase):
    """Make sure the compiled C extension is importable and usable."""

    def test_language(self):
        """Load the grammar as a :class:`tree_sitter.Language`."""
        language = Language(tree_sitter_usda.language())

        self.assertIsInstance(Parser(language), Parser)

    def test_highlights_query(self):
        """Compile the bundled highlights query against the grammar."""
        language = Language(tree_sitter_usda.language())
        source = tree_sitter_usda.HIGHLIGHTS_QUERY

        self.assertTrue(source)

        try:
            from tree_sitter import Query  # tree-sitter >= 0.25
        except ImportError:
            language.query(source)
        else:
            Query(language, source)


class Parse(unittest.TestCase):
    """Parse a non-trivial USD layer."""

    def setUp(self):
        """Parse :attr:`_SOURCE_CODE` once, for all tests."""
        parser = Parser(Language(tree_sitter_usda.language()))
        self._tree = parser.parse(_SOURCE_CODE.encode("utf-8"))
        self._root = self._tree.root_node

    def test_no_errors(self):
        """Parse the whole layer without a syntax error."""
        self.assertEqual("module", self._root.type)
        self.assertFalse(self._root.has_error, msg=str(self._root))

    def test_prims(self):
        """Find every prim, including the nested ones."""
        names = [
            prim.child_by_field_name("name") or _find(prim, "string")[0]
            for prim in _find(self._root, "prim_definition")
        ]
        found = [name.text.decode("utf-8") for name in names]

        self.assertEqual(
            [
                '"root"',
                '"geometry"',
                '"geometry"',
                '"Looks"',
                '"SomeMaterial"',
                '"Shader"',
                '"ParamsAPI"',
                '"root"',
            ],
            found,
        )

    def test_variant_set(self):
        """Find the variants of a variant set."""
        variant_sets = _find(self._root, "variant_set_definition")

        self.assertEqual(1, len(variant_sets))

        variants = _find(variant_sets[0], "variant")
        found = [_find(variant, "string")[0].text.decode("utf-8") for variant in variants]

        self.assertEqual(['"red"', '"blue"'], found)

    def test_time_samples(self):
        """Find the time codes of a ``.timeSamples`` attribute."""
        # NOTE: The ``.timeSamples`` property name and its ``{}`` value block
        # are both called "timeSamples". Only the value block has children.
        #
        time_samples = [
            node for node in _find(self._root, "timeSamples") if node.named_children
        ]

        self.assertEqual(1, len(time_samples))

        found = [
            child.text.decode("utf-8")
            for child in time_samples[0].named_children
            if child.type == "integer"
        ]

        self.assertEqual(["1001", "1002"], found)


if __name__ == "__main__":
    unittest.main()
