# std::vector<bool> Optimization Issues

This repository demonstrates a potential issue with `std::vector<bool>` in C++.  Due to space optimization, accessing elements may not behave as expected with standard vector operations. This can be particularly problematic for those unfamiliar with the optimization.  The example shows a simple use case where this could lead to unexpected behavior.  The solution suggests alternative approaches to avoid this problem.

## Bug

The `bug.cpp` file contains code that uses `std::vector<bool>`. The unexpected behavior stems from the compiler's optimization which might store the boolean values in a bitset instead of individual boolean elements.