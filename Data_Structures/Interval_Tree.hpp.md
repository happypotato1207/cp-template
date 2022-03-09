---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Tests/Interval_Tree.test.cpp
    title: Tests/Interval_Tree.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Data_Structures/Interval_Tree.hpp\"\n// Template: Interval\
    \ Tree (Selective)\n// Doesn't delete range when it overlaps but doesn't completely\
    \ cover/get covered\n// Deletes the smaller/larger interval depending on [keep_small]\n\
    // Averaged query time O(log n)\nclass IntervalTree_Selective {\npublic:\n   \
    \ map<int, int> range;\n    IntervalTree_Selective(bool keep_small) {\n      \
    \  small = keep_small;\n    }\n    void AddRange(int l, int r) {\n        if (small)\
    \ {\n            CheckContain(l, r);\n            if (it != range.end()) return;\n\
    \            while (true) {\n                CheckContainBy(l, r);\n         \
    \       if (it == range.end()) break;\n                range.erase(it);\n    \
    \        }\n        } else {\n            CheckContainBy(l, r);\n            if\
    \ (it != range.end()) return;\n            while (true) {\n                CheckContain(l,\
    \ r);\n                if (it == range.end()) break;\n                range.erase(it);\n\
    \            }\n        }\n        range[l] = r;\n    }\n    pair<int, int> GetRangeIn(int\
    \ x) {\n        // returns the range which includes x (first <= x <= second)\n\
    \        if (range.empty()) return {-1, -1};\n        it = range.upper_bound(x);\n\
    \        if (it == range.begin()) return {-1, -1};\n        --it;\n        if\
    \ (!(it->first <= x && x <= it->second)) return {-1, -1};\n        return {it->first,\
    \ it->second};\n    }\n    pair<int, int> GetRangeLarger(int x) {\n        //\
    \ returns the range strictly larger than x (x < first)\n        if (range.empty())\
    \ return {-1, -1};\n        it = range.upper_bound(x);\n        if (it == range.end())\
    \ return {-1, -1};\n        return {it->first, it->second};\n    }\nprivate:\n\
    \    bool small = true;\n    map<int, int>::iterator it;\n    void CheckContain(int\
    \ l, int r) { \n        // assign pointer of range being contained\n        if\
    \ (range.empty()) {\n            it = range.end();\n            return;\n    \
    \    }\n        it = range.lower_bound(l);\n        if (it != range.end() && it->second\
    \ > r) it = range.end();\n        return;\n    }\n    void CheckContainBy(int\
    \ l, int r) {\n        // assign pointer of range containing\n        if (range.empty())\
    \ {\n            it = range.end();\n            return;\n        }\n        it\
    \ = range.upper_bound(l);\n        if (it == range.begin()) {\n            it\
    \ = range.end();\n            return;\n        }\n        --it;\n        if (it->second\
    \ < r) it = range.end();\n        return;\n    }\n};\n"
  code: "// Template: Interval Tree (Selective)\n// Doesn't delete range when it overlaps\
    \ but doesn't completely cover/get covered\n// Deletes the smaller/larger interval\
    \ depending on [keep_small]\n// Averaged query time O(log n)\nclass IntervalTree_Selective\
    \ {\npublic:\n    map<int, int> range;\n    IntervalTree_Selective(bool keep_small)\
    \ {\n        small = keep_small;\n    }\n    void AddRange(int l, int r) {\n \
    \       if (small) {\n            CheckContain(l, r);\n            if (it != range.end())\
    \ return;\n            while (true) {\n                CheckContainBy(l, r);\n\
    \                if (it == range.end()) break;\n                range.erase(it);\n\
    \            }\n        } else {\n            CheckContainBy(l, r);\n        \
    \    if (it != range.end()) return;\n            while (true) {\n            \
    \    CheckContain(l, r);\n                if (it == range.end()) break;\n    \
    \            range.erase(it);\n            }\n        }\n        range[l] = r;\n\
    \    }\n    pair<int, int> GetRangeIn(int x) {\n        // returns the range which\
    \ includes x (first <= x <= second)\n        if (range.empty()) return {-1, -1};\n\
    \        it = range.upper_bound(x);\n        if (it == range.begin()) return {-1,\
    \ -1};\n        --it;\n        if (!(it->first <= x && x <= it->second)) return\
    \ {-1, -1};\n        return {it->first, it->second};\n    }\n    pair<int, int>\
    \ GetRangeLarger(int x) {\n        // returns the range strictly larger than x\
    \ (x < first)\n        if (range.empty()) return {-1, -1};\n        it = range.upper_bound(x);\n\
    \        if (it == range.end()) return {-1, -1};\n        return {it->first, it->second};\n\
    \    }\nprivate:\n    bool small = true;\n    map<int, int>::iterator it;\n  \
    \  void CheckContain(int l, int r) { \n        // assign pointer of range being\
    \ contained\n        if (range.empty()) {\n            it = range.end();\n   \
    \         return;\n        }\n        it = range.lower_bound(l);\n        if (it\
    \ != range.end() && it->second > r) it = range.end();\n        return;\n    }\n\
    \    void CheckContainBy(int l, int r) {\n        // assign pointer of range containing\n\
    \        if (range.empty()) {\n            it = range.end();\n            return;\n\
    \        }\n        it = range.upper_bound(l);\n        if (it == range.begin())\
    \ {\n            it = range.end();\n            return;\n        }\n        --it;\n\
    \        if (it->second < r) it = range.end();\n        return;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: Data_Structures/Interval_Tree.hpp
  requiredBy: []
  timestamp: '2022-03-09 16:48:11+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Tests/Interval_Tree.test.cpp
documentation_of: Data_Structures/Interval_Tree.hpp
layout: document
redirect_from:
- /library/Data_Structures/Interval_Tree.hpp
- /library/Data_Structures/Interval_Tree.hpp.html
title: Data_Structures/Interval_Tree.hpp
---
