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
  bundledCode: "#line 1 \"Data_Structures/Segment_Tree/Point_Assign_Range_Sum.hpp\"\
    \nstruct Data {\n\tlong long int val = 0;\n};\nclass SegmentTree_PointAssignRangeSum\
    \ {\npublic:\n\tSegmentTree(vector<Data> v) {\n\t\tarr = v;\n\t\tn = arr.size();\n\
    \t\tseg.resize((n << 1));\n\t\tBuild();\n\t}\n\tvoid Build() {\n\t\tfor (int i\
    \ = 0; i < n; i++) seg[i + n] = arr[i];\n\t\tfor (int i = n - 1; i > 0; i--) seg[i]\
    \ = Combine(seg[(i << 1)], seg[((i << 1) | 1)]);\n\t}\n\tvoid Update(int ptr,\
    \ Data new_val) {\n\t\tptr += n;\n\t\tseg[ptr] = new_val;\n\t\tfor (; ptr > 1;\
    \ ptr >>= 1) seg[(ptr >> 1)] = Combine(seg[ptr], seg[(ptr ^ 1)]);\n\t}\n\tData\
    \ Query(int l, int r) { // query on interval [l, r]\n\t\tr++;\n\t\tData ret;\n\
    \t\tfor (l += n, r += n; l < r; l >>= 1, r >>= 1) {\n\t\t\tif (l & 1) ret = Combine(ret,\
    \ seg[l++]);\n\t\t\tif (r & 1) ret = Combine(ret, seg[--r]);\n\t\t}\n\t\treturn\
    \ ret;\n\t}\nprotected:\n\tint n;\n\tvector<Data> arr;\n\tvector<Data> seg;\n\t\
    Data combine_ret;\n\tData Combine(Data x, Data y) { // remember to assign everything,\
    \ not add\n\t\tcombine_ret.val = x.val + y.val;\n\t\treturn combine_ret;\n\t}\n\
    };\n"
  code: "struct Data {\n\tlong long int val = 0;\n};\nclass SegmentTree_PointAssignRangeSum\
    \ {\npublic:\n\tSegmentTree(vector<Data> v) {\n\t\tarr = v;\n\t\tn = arr.size();\n\
    \t\tseg.resize((n << 1));\n\t\tBuild();\n\t}\n\tvoid Build() {\n\t\tfor (int i\
    \ = 0; i < n; i++) seg[i + n] = arr[i];\n\t\tfor (int i = n - 1; i > 0; i--) seg[i]\
    \ = Combine(seg[(i << 1)], seg[((i << 1) | 1)]);\n\t}\n\tvoid Update(int ptr,\
    \ Data new_val) {\n\t\tptr += n;\n\t\tseg[ptr] = new_val;\n\t\tfor (; ptr > 1;\
    \ ptr >>= 1) seg[(ptr >> 1)] = Combine(seg[ptr], seg[(ptr ^ 1)]);\n\t}\n\tData\
    \ Query(int l, int r) { // query on interval [l, r]\n\t\tr++;\n\t\tData ret;\n\
    \t\tfor (l += n, r += n; l < r; l >>= 1, r >>= 1) {\n\t\t\tif (l & 1) ret = Combine(ret,\
    \ seg[l++]);\n\t\t\tif (r & 1) ret = Combine(ret, seg[--r]);\n\t\t}\n\t\treturn\
    \ ret;\n\t}\nprotected:\n\tint n;\n\tvector<Data> arr;\n\tvector<Data> seg;\n\t\
    Data combine_ret;\n\tData Combine(Data x, Data y) { // remember to assign everything,\
    \ not add\n\t\tcombine_ret.val = x.val + y.val;\n\t\treturn combine_ret;\n\t}\n\
    };\n"
  dependsOn: []
  isVerificationFile: false
  path: Data_Structures/Segment_Tree/Point_Assign_Range_Sum.hpp
  requiredBy: []
  timestamp: '2022-02-14 10:43:58+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Data_Structures/Segment_Tree/Point_Assign_Range_Sum.hpp
layout: document
redirect_from:
- /library/Data_Structures/Segment_Tree/Point_Assign_Range_Sum.hpp
- /library/Data_Structures/Segment_Tree/Point_Assign_Range_Sum.hpp.html
title: Data_Structures/Segment_Tree/Point_Assign_Range_Sum.hpp
---
