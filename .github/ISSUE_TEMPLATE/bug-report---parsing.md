---
name: Bug report - Parsing
about: Describe an unexpected parsing issue
title: "[PARSE BUG]"
labels: bug
assignees: ''

---

# Summary
A clear and concise description of what the bug is.

# Details
## tree-sitter-cli
Given this USD file

<!-- Insert a USD file here or link to a GitHub gist example -->
`tree-sitter parse /the/file.usda`

### Expected Parse
<!-- Insert the text output that you expected here -->
```scm
(module
  (...
    (good_stuff ...)))
```

### Actual Parse
<!-- Insert what `tree-sitter parse` returned -->
```scm
(module
  (...
    (ERROR ...)))
```

## General
**Screenshots**
If applicable, add screenshots to help explain your problem.

**Architecture**
- OS: [e.g. Linux]
- Tree-sitter Version: [e.g. 0.20.8]

**Additional context**
Add any other context about the problem here.
