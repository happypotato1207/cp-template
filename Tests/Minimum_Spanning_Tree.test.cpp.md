---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Graph/DSU.hpp
    title: Graph/DSU.hpp
  - icon: ':heavy_check_mark:'
    path: Graph/MST_Kruskal.hpp
    title: Graph/MST_Kruskal.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/GRL_2_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/GRL_2_A
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
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/GRL_2_A\"\n\n\
    #include \"../header.cpp\"\n#include \"../Graph/MST_Kruskal.hpp\"\n\nvoid init()\
    \ {\n\t// initialize\n\n}\nvoid solve(int case_no) {\n\t// implementation\n  \
    \  int n, m;\n    cin >> n >> m;\n    MST_Kruskal MST(n);\n    for (int i = 0;\
    \ i < m; i++) {\n        int u, v, w;\n        cin >> u >> v >> w;\n        MST.AddEdge(u,\
    \ v, w);\n    }\n    cout << MST.ComputeMST() << endl;\n}\n"
  dependsOn:
  - header.cpp
  - Graph/MST_Kruskal.hpp
  - Graph/DSU.hpp
  isVerificationFile: true
  path: Tests/Minimum_Spanning_Tree.test.cpp
  requiredBy: []
  timestamp: '2022-08-15 22:31:09+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tests/Minimum_Spanning_Tree.test.cpp
layout: document
redirect_from:
- /verify/Tests/Minimum_Spanning_Tree.test.cpp
- /verify/Tests/Minimum_Spanning_Tree.test.cpp.html
title: Tests/Minimum_Spanning_Tree.test.cpp
---
