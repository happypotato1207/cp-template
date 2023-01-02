---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Graph/DSU.hpp
    title: Graph/DSU.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
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
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ \"../header.cpp\"\n#include \"../Graph/DSU.hpp\"\n\nvoid init() {\n\t// initialize\n\
    \n}\nvoid solve(int case_no) {\n\t// implementation\n\tint n, q;\n\tcin >> n >>\
    \ q;\n\tDisjointSetUnion DSU(n);\n\twhile (q--) {\n\t\tint cmd, u, v;\n\t\tcin\
    \ >> cmd >> u >> v;\n\t\tif (cmd == 0) {\n\t\t\tDSU.Union(u, v);\n\t\t} else {\n\
    \t\t\tcout << DSU.CheckConnected(u, v) << endl;\n\t\t}\n\t}\n}\n"
  dependsOn:
  - header.cpp
  - Graph/DSU.hpp
  isVerificationFile: true
  path: Tests/UnionFind.test.cpp
  requiredBy: []
  timestamp: '2022-08-15 22:31:09+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tests/UnionFind.test.cpp
layout: document
redirect_from:
- /verify/Tests/UnionFind.test.cpp
- /verify/Tests/UnionFind.test.cpp.html
title: Tests/UnionFind.test.cpp
---
