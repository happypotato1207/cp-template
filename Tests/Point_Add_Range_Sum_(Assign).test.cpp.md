---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../Data_Structures/Segment_Tree/Point_Assign_Range_Sum.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    \n#include \"../header.cpp\"\n#include \"../Data_Structures/Segment_Tree/Point_Assign_Range_Sum.hpp\"\
    \n\nvoid init() {\n\t\n}\nvoid solve(int case_no) {\n\tint n, q;\n\tcin >> n >>\
    \ q;\n\tvector<Data> v(n);\n\tfor (int i = 0; i < n; i++) cin >> v[i].val;\n\t\
    SegmentTree_PointAssignRangeSum ST(v);\n\twhile (q--) {\n\t\tint cmd;\n\t\tcin\
    \ >> cmd;\n\t\tif (cmd == 0) {\n\t\t\tData new_val;\n\t\t\tint ptr;\n\t\t\tcin\
    \ >> ptr >> new_val.val;\n\t\t\tnew_val.val += v[ptr].val;\n\t\t\tv[ptr] = new_val;\n\
    \t\t\tST.Update(ptr, new_val);\n\t\t} else {\n\t\t\tint x, y;\n\t\t\tcin >> x\
    \ >> y;\n\t\t\tcout << ST.Query(x, y - 1).val << endl;\n\t\t}\n\t}\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: Tests/Point_Add_Range_Sum_(Assign).test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Tests/Point_Add_Range_Sum_(Assign).test.cpp
layout: document
redirect_from:
- /verify/Tests/Point_Add_Range_Sum_(Assign).test.cpp
- /verify/Tests/Point_Add_Range_Sum_(Assign).test.cpp.html
title: Tests/Point_Add_Range_Sum_(Assign).test.cpp
---
