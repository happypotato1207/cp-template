---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Math/Big Mod.hpp
    title: Math/Big Mod.hpp
  - icon: ':heavy_check_mark:'
    path: Math/NTT.hpp
    title: Math/NTT.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/convolution_mod
    links:
    - https://judge.yosupo.jp/problem/convolution_mod
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
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/convolution_mod\"\n\n#include\
    \ \"../header.cpp\"\n#include \"../Math/NTT.hpp\"\n\nvoid init() {\n\t// initialize\n\
    \n}\nvoid solve(int &case_no) {\n\t// solve\n\tint n, m;\n\tcin >> n >> m;\n\t\
    vector<int> l(n), r(m);\n\tfor (int i = 0; i < n; i++) cin >> l[i];\n\tfor (int\
    \ i = 0; i < m; i++) cin >> r[i];\n\tvector<int> ans = Multiply(l, r);\n\tfor\
    \ (int &x : ans) cout << x << ' ';\n\tcout << endl;\n}\n"
  dependsOn:
  - header.cpp
  - Math/NTT.hpp
  - Math/Big Mod.hpp
  isVerificationFile: true
  path: Tests/Convolution.test.cpp
  requiredBy: []
  timestamp: '2023-01-02 23:21:59+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tests/Convolution.test.cpp
layout: document
redirect_from:
- /verify/Tests/Convolution.test.cpp
- /verify/Tests/Convolution.test.cpp.html
title: Tests/Convolution.test.cpp
---
