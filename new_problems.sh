#!/bin/bash

NAME="$1"

mkdir -p "$NAME"

cat > "$NAME/solution.cpp" << 'EOF'
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

};
EOF

cat > "$NAME/instructions.md" << EOF
# $NAME

Link:

## Idea

## Complexity

Time:

Space:

## Notes

EOF
