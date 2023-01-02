---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Data_Structures/Segment_Tree_Point_Add_Range_Sum.hpp
    title: Data_Structures/Segment_Tree_Point_Add_Range_Sum.hpp
  - icon: ':heavy_check_mark:'
    path: header.cpp
    title: header.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/point_add_range_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_range_sum
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ header.cpp: line 13: unable to process #include in #if / #ifdef / #ifndef other\
    \ than include guards\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    \n#include \"../header.cpp\"\n#include \"../Data_Structures/Segment_Tree_Point_Add_Range_Sum.hpp\"\
    \n\nvoid init() {\n\t\n}\nvoid solve(int case_no) {\n\tint n, q;\n\tcin >> n >>\
    \ q;\n\tvector<Data> v(n);\n\tfor (int i = 0; i < n; i++) cin >> v[i].val;\n\t\
    SegmentTree_PointAddRangeSum ST(v);\n\twhile (q--) {\n\t\tint cmd;\n\t\tcin >>\
    \ cmd;\n\t\tif (cmd == 0) {\n\t\t\tData new_val;\n\t\t\tint ptr;\n\t\t\tcin >>\
    \ ptr >> new_val.val;\n\t\t\tST.Update(ptr, new_val);\n\t\t} else {\n\t\t\tint\
    \ x, y;\n\t\t\tcin >> x >> y;\n\t\t\tcout << ST.Query(x, y - 1).val << endl;\n\
    \t\t}\n\t}\n}\n"
  dependsOn:
  - header.cpp
  - Data_Structures/Segment_Tree_Point_Add_Range_Sum.hpp
  isVerificationFile: true
  path: Tests/Point_Add_Range_Sum_(Add).test.cpp
  requiredBy: []
  timestamp: '2022-08-15 22:31:09+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tests/Point_Add_Range_Sum_(Add).test.cpp
layout: document
redirect_from:
- /verify/Tests/Point_Add_Range_Sum_(Add).test.cpp
- /verify/Tests/Point_Add_Range_Sum_(Add).test.cpp.html
title: Tests/Point_Add_Range_Sum_(Add).test.cpp
---
