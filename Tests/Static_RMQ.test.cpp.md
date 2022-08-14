---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Data_Structures/Sparse_Table.hpp
    title: Data_Structures/Sparse_Table.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/staticrmq
    links:
    - https://judge.yosupo.jp/problem/staticrmq
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.6/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.6/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.6/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.6/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ header.cpp: line 13: unable to process #include in #if / #ifdef / #ifndef other\
    \ than include guards\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n\n#include\
    \ \"../header.cpp\"\n#include \"../Data_Structures/Sparse_Table.hpp\"\n\nvoid\
    \ init() {\n\t// initialize\n    \n}\nvoid solve(int case_no) {\n\t// implementation\n\
    \    int n, q;\n    cin >> n >> q;\n    vector<int> v(n);\n    for (int i = 0;\
    \ i < n; i++) cin >> v[i];\n    SparseTable ST(v);\n    ST.Compute();\n    while\
    \ (q--) {\n        int l, r;\n        cin >> l >> r;\n        cout << ST.Query(l,\
    \ r - 1) << endl;\n    }\n}\n"
  dependsOn:
  - header.cpp
  - Data_Structures/Sparse_Table.hpp
  isVerificationFile: true
  path: Tests/Static_RMQ.test.cpp
  requiredBy: []
  timestamp: '2022-08-15 02:09:20+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tests/Static_RMQ.test.cpp
layout: document
redirect_from:
- /verify/Tests/Static_RMQ.test.cpp
- /verify/Tests/Static_RMQ.test.cpp.html
title: Tests/Static_RMQ.test.cpp
---
