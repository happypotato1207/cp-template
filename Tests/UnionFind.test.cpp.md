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
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../Template/template.cpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ \"../Template/template.cpp\"\n#include \"../Graph/DSU.hpp\"\n\nvoid init() {\n\
    \t// initialize\n\n}\nvoid solve(int case_no) {\n\t// implementation\n\tint n,\
    \ q;\n\tcin >> n >> q;\n\tDisjointSetUnion DSU(n);\n\twhile (q--) {\n\t\tint cmd,\
    \ u, v;\n\t\tcin >> cmd >> u >> v;\n\t\tif (cmd == 0) {\n\t\t\tDSU.Union(u, v);\n\
    \t\t} else {\n\t\t\tcout << DSU.CheckConnected(u, v) << endl;\n\t\t}\n\t}\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: Tests/UnionFind.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Tests/UnionFind.test.cpp
layout: document
redirect_from:
- /verify/Tests/UnionFind.test.cpp
- /verify/Tests/UnionFind.test.cpp.html
title: Tests/UnionFind.test.cpp
---
