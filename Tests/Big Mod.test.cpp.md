---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Math/Big Mod.hpp
    title: Math/Big Mod.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B
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
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B\"\
    \n\n#include \"../header.cpp\"\n\nconst int MOD = 1e9 + 7;\n#include \"../Math/Big\
    \ Mod.hpp\"\n\nvoid init() {\n\t// initialize\n\n}\nvoid solve(int &case_no) {\n\
    \t// implementation\n\tint n, m;\n\tcin >> n >> m;\n\tcout << bigmod(n, m) <<\
    \ endl;\n}\n"
  dependsOn:
  - header.cpp
  - Math/Big Mod.hpp
  isVerificationFile: true
  path: Tests/Big Mod.test.cpp
  requiredBy: []
  timestamp: '2023-01-02 23:18:18+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tests/Big Mod.test.cpp
layout: document
redirect_from:
- /verify/Tests/Big Mod.test.cpp
- /verify/Tests/Big Mod.test.cpp.html
title: Tests/Big Mod.test.cpp
---
