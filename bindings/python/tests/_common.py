"""Shared data + helper functions for the ``tree_sitter_usda`` tests."""

from __future__ import annotations

import textwrap

from tree_sitter import Language, Node, Parser

import tree_sitter_usda

SOURCE_CODE = textwrap.dedent(
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
"""str: A USD layer that exercises most of the grammar's top-level rules."""


def make_parser() -> Parser:
    """Create a parser that is loaded with the USD grammar."""
    return Parser(Language(tree_sitter_usda.language()))


def parse(source_code: str = SOURCE_CODE) -> Node:
    """Convert ``source_code`` into a tree-sitter syntax tree."""
    return make_parser().parse(source_code.encode("utf-8")).root_node


def find_all(node: Node, type_name: str) -> list[Node]:
    """Get every descendent of ``node`` whose type is ``type_name``.

    The nodes are returned in the order that they were written, in the
    original USD text.

    """
    output: list[Node] = []
    stack = [node]

    while stack:
        current = stack.pop()

        if current.type == type_name:
            output.append(current)

        stack.extend(reversed(current.children))

    return output


def find_children(node: Node, type_name: str) -> list[Node]:
    """Get the direct children of ``node`` whose type is ``type_name``."""
    return [child for child in node.children if child.type == type_name]


def get_text(node: Node) -> str:
    """Get the USD text that ``node`` was created from."""
    text = node.text

    if text is None:
        raise RuntimeError(f'Node "{node}" has no text.')

    return text.decode("utf-8")
