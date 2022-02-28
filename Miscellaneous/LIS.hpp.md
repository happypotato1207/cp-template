---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Tests/Longest_Increasing_Subsequence.test.cpp
    title: Tests/Longest_Increasing_Subsequence.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Miscellaneous/LIS.hpp\"\nvector<int> LIS(vector<int> &a,\
    \ bool strict = true) {\n    int n = a.size();\n    vector<int> d(n + 1, 2e9);\n\
    \    vector<int> idx(n + 1), p(n);\n    d[0] = -2e9;\n    idx[0] = -1;\n    for\
    \ (int i = 0; i < n; i++) {\n        if (strict) {\n            int j = upper_bound(d.begin(),\
    \ d.end(), a[i]) - d.begin();\n            if (d[j - 1] < a[i] && a[i] < d[j])\
    \ {\n                d[j] = a[i];\n                idx[j] = i;\n             \
    \   p[i] = idx[j - 1];\n            }\n        } else {\n            int j = upper_bound(d.begin(),\
    \ d.end(), a[i]) - d.begin();\n            if (d[j - 1] <= a[i] && a[i] <= d[j])\
    \ {\n                d[j] = a[i];\n                idx[j] = i;\n             \
    \   p[i] = idx[j - 1];\n            }\n        }\n    }\n    vector<int> sub;\n\
    \    int ptr = -1;\n    for (int i = n; i >= 1; i--) {\n        if (d[i] == 2e9)\
    \ continue;\n        if (ptr == -1) ptr = idx[i];\n        sub.push_back(a[ptr]);\n\
    \        ptr = p[ptr];\n    }\n    reverse(sub.begin(), sub.end());\n    return\
    \ sub;\n}\nvector<int> LDS(vector<int> &a, bool strict = true) {\n    int n =\
    \ a.size();\n    int maxi = 0;\n    for (int x : a) maxi = max(maxi, x);\n   \
    \ for (int i = 0; i < n; i++) a[i] = (maxi + 1) - a[i];\n    vector<int> sub =\
    \ LIS(a, strict);\n    for (int i = 0; i < n; i++) a[i] = (maxi + 1) - a[i];\n\
    \    for (int i = 0; i < sub.size(); i++) sub[i] = (maxi + 1) - sub[i];\n    return\
    \ sub;\n}\n"
  code: "vector<int> LIS(vector<int> &a, bool strict = true) {\n    int n = a.size();\n\
    \    vector<int> d(n + 1, 2e9);\n    vector<int> idx(n + 1), p(n);\n    d[0] =\
    \ -2e9;\n    idx[0] = -1;\n    for (int i = 0; i < n; i++) {\n        if (strict)\
    \ {\n            int j = upper_bound(d.begin(), d.end(), a[i]) - d.begin();\n\
    \            if (d[j - 1] < a[i] && a[i] < d[j]) {\n                d[j] = a[i];\n\
    \                idx[j] = i;\n                p[i] = idx[j - 1];\n           \
    \ }\n        } else {\n            int j = upper_bound(d.begin(), d.end(), a[i])\
    \ - d.begin();\n            if (d[j - 1] <= a[i] && a[i] <= d[j]) {\n        \
    \        d[j] = a[i];\n                idx[j] = i;\n                p[i] = idx[j\
    \ - 1];\n            }\n        }\n    }\n    vector<int> sub;\n    int ptr =\
    \ -1;\n    for (int i = n; i >= 1; i--) {\n        if (d[i] == 2e9) continue;\n\
    \        if (ptr == -1) ptr = idx[i];\n        sub.push_back(a[ptr]);\n      \
    \  ptr = p[ptr];\n    }\n    reverse(sub.begin(), sub.end());\n    return sub;\n\
    }\nvector<int> LDS(vector<int> &a, bool strict = true) {\n    int n = a.size();\n\
    \    int maxi = 0;\n    for (int x : a) maxi = max(maxi, x);\n    for (int i =\
    \ 0; i < n; i++) a[i] = (maxi + 1) - a[i];\n    vector<int> sub = LIS(a, strict);\n\
    \    for (int i = 0; i < n; i++) a[i] = (maxi + 1) - a[i];\n    for (int i = 0;\
    \ i < sub.size(); i++) sub[i] = (maxi + 1) - sub[i];\n    return sub;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: Miscellaneous/LIS.hpp
  requiredBy: []
  timestamp: '2022-03-01 01:24:56+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Tests/Longest_Increasing_Subsequence.test.cpp
documentation_of: Miscellaneous/LIS.hpp
layout: document
redirect_from:
- /library/Miscellaneous/LIS.hpp
- /library/Miscellaneous/LIS.hpp.html
title: Miscellaneous/LIS.hpp
---
