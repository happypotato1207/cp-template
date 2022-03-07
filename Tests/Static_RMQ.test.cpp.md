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
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../Data_Structure/Sparse_Table.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n\n#include\
    \ \"../header.cpp\"\n#include \"../Data_Structure/Sparse_Table.hpp\"\n\nvoid init()\
    \ {\n\t// initialize\n    \n}\nvoid solve(int case_no) {\n\t// implementation\n\
    \    int n, q;\n    cin >> n >> q;\n    vector<int> v(n);\n    for (int i = 0;\
    \ i < n; i++) cin >> v[i];\n    SparseTable ST(v);\n    ST.Compute();\n    while\
    \ (q--) {\n        int l, r;\n        cin >> l >> r;\n        out(ST.Query(l,\
    \ r - 1));\n    }\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: Tests/Static_RMQ.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Tests/Static_RMQ.test.cpp
layout: document
redirect_from:
- /verify/Tests/Static_RMQ.test.cpp
- /verify/Tests/Static_RMQ.test.cpp.html
title: Tests/Static_RMQ.test.cpp
---
