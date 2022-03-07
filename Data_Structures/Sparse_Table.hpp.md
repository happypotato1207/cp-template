---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Data_Structures/Sparse_Table.hpp\"\n// Template: Sparse\
    \ Table\n// Supports range query in O(n log n) / O(1)\n// Offline DS - Cannot\
    \ update after compute\nclass SparseTable {\npublic:\n    // Method 1: Construct\
    \ using size\n    SparseTable(int sz) {\n        n = sz + 1;\n        sp.push_back({});\n\
    \        sp[0].resize(n);\n    }\n    // Update() can only call before Compute()\n\
    \    void Update(int pos, int val) {\n        if (finished) return;\n        sp[0][pos]\
    \ = val;\n    }\n    // Method 2: Construct using vector\n    SparseTable(vector<int>\
    \ &v) {\n        n = v.size();\n        sp.push_back(v);\n    }\n    // Computes\
    \ the Sparse Table\n    void Compute() {\n        for (int depth = 1; (1 << depth)\
    \ <= n; depth++) {\n            sp.push_back({});\n            for (int j = 0;\
    \ j < n - (1 << depth) + 1; j++) {\n                // change function below\n\
    \                sp[depth].push_back(min(sp[depth - 1][j], sp[depth - 1][j + (1\
    \ << (depth - 1))]));\n            }\n        }\n        finished = true;\n  \
    \  }\n    // Query [l, r]\n    int Query(int l, int r) {\n        if (l > r ||\
    \ l < 0 || r >= n) return 0;\n        if (l == r) return sp[0][l];\n        int\
    \ depth = floor(log2(r - l));\n        // change below\n        return min(sp[depth][l],\
    \ sp[depth][r - (1 << depth) + 1]);\n    }\nprivate:\n    int n;\n    vector<vector<int>\
    \ > sp;\n    bool finished = false;\n};\n"
  code: "// Template: Sparse Table\n// Supports range query in O(n log n) / O(1)\n\
    // Offline DS - Cannot update after compute\nclass SparseTable {\npublic:\n  \
    \  // Method 1: Construct using size\n    SparseTable(int sz) {\n        n = sz\
    \ + 1;\n        sp.push_back({});\n        sp[0].resize(n);\n    }\n    // Update()\
    \ can only call before Compute()\n    void Update(int pos, int val) {\n      \
    \  if (finished) return;\n        sp[0][pos] = val;\n    }\n    // Method 2: Construct\
    \ using vector\n    SparseTable(vector<int> &v) {\n        n = v.size();\n   \
    \     sp.push_back(v);\n    }\n    // Computes the Sparse Table\n    void Compute()\
    \ {\n        for (int depth = 1; (1 << depth) <= n; depth++) {\n            sp.push_back({});\n\
    \            for (int j = 0; j < n - (1 << depth) + 1; j++) {\n              \
    \  // change function below\n                sp[depth].push_back(min(sp[depth\
    \ - 1][j], sp[depth - 1][j + (1 << (depth - 1))]));\n            }\n        }\n\
    \        finished = true;\n    }\n    // Query [l, r]\n    int Query(int l, int\
    \ r) {\n        if (l > r || l < 0 || r >= n) return 0;\n        if (l == r) return\
    \ sp[0][l];\n        int depth = floor(log2(r - l));\n        // change below\n\
    \        return min(sp[depth][l], sp[depth][r - (1 << depth) + 1]);\n    }\nprivate:\n\
    \    int n;\n    vector<vector<int> > sp;\n    bool finished = false;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: Data_Structures/Sparse_Table.hpp
  requiredBy: []
  timestamp: '2022-03-07 23:52:04+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Data_Structures/Sparse_Table.hpp
layout: document
redirect_from:
- /library/Data_Structures/Sparse_Table.hpp
- /library/Data_Structures/Sparse_Table.hpp.html
title: Data_Structures/Sparse_Table.hpp
---
