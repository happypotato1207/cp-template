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
  bundledCode: "#line 1 \"Miscellaneous/LIS.hpp\"\nvector<int> LIS(vector<int> v)\
    \ {\n\tint n = v.size();\n\tvector<int> ret;\n\tret.push_back(v[0]);\n\tfor (int\
    \ i = 1; i < n; i++) {\n\t\tif (v[i] > ret.back()) ret.push_back(v[i]); // change\
    \ to >= for non-decreasing\n\t\telse {\n\t\t\tint index = lower_bound(ret.begin(),\
    \ ret.end(), v[i]) - ret.begin();\n\t\t\tret[index] = v[i];\n\t\t}\n\t}\n\treturn\
    \ ret;\n}\n"
  code: "vector<int> LIS(vector<int> v) {\n\tint n = v.size();\n\tvector<int> ret;\n\
    \tret.push_back(v[0]);\n\tfor (int i = 1; i < n; i++) {\n\t\tif (v[i] > ret.back())\
    \ ret.push_back(v[i]); // change to >= for non-decreasing\n\t\telse {\n\t\t\t\
    int index = lower_bound(ret.begin(), ret.end(), v[i]) - ret.begin();\n\t\t\tret[index]\
    \ = v[i];\n\t\t}\n\t}\n\treturn ret;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: Miscellaneous/LIS.hpp
  requiredBy: []
  timestamp: '2022-02-14 14:36:29+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Miscellaneous/LIS.hpp
layout: document
redirect_from:
- /library/Miscellaneous/LIS.hpp
- /library/Miscellaneous/LIS.hpp.html
title: Miscellaneous/LIS.hpp
---
