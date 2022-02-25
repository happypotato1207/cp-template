---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: Tests/Longest_Increasing_Subsequence.test.cpp
    title: Tests/Longest_Increasing_Subsequence.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Miscellaneous/LIS.hpp\"\nvector<int> LIS(vector<int> arr,\
    \ bool strict = true) {\n\tvector<int> sub;\n\tfor (int x : arr) {\n\t\tif (sub.empty()\
    \ || sub[sub.size() - 1] < x || (!strict && sub[sub.size() - 1] == x)) { // Append\
    \ to LIS if new element is >=/> last element in LIS\n\t\t\tsub.push_back(x);\n\
    \t\t} else {\n\t\t\tint idx = lower_bound(sub.begin(), sub.end(), x + (!strict))\
    \ - sub.begin(); // Find the index of the smallest number >/>= x\n\t\t\tsub[idx]\
    \ = x;\n\t\t}\n\t}\n\treturn sub;\n}\n"
  code: "vector<int> LIS(vector<int> arr, bool strict = true) {\n\tvector<int> sub;\n\
    \tfor (int x : arr) {\n\t\tif (sub.empty() || sub[sub.size() - 1] < x || (!strict\
    \ && sub[sub.size() - 1] == x)) { // Append to LIS if new element is >=/> last\
    \ element in LIS\n\t\t\tsub.push_back(x);\n\t\t} else {\n\t\t\tint idx = lower_bound(sub.begin(),\
    \ sub.end(), x + (!strict)) - sub.begin(); // Find the index of the smallest number\
    \ >/>= x\n\t\t\tsub[idx] = x;\n\t\t}\n\t}\n\treturn sub;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: Miscellaneous/LIS.hpp
  requiredBy: []
  timestamp: '2022-02-15 22:30:36+08:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - Tests/Longest_Increasing_Subsequence.test.cpp
documentation_of: Miscellaneous/LIS.hpp
layout: document
redirect_from:
- /library/Miscellaneous/LIS.hpp
- /library/Miscellaneous/LIS.hpp.html
title: Miscellaneous/LIS.hpp
---
