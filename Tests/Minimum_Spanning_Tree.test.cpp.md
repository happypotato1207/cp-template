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
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: DSU.hpp: line\
    \ -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/GRL_2_A\"\n\n\
    #include \"../header.cpp\"\n#include \"../Graph/MST/Kruskal.hpp\"\n\nvoid init()\
    \ {\n\t// initialize\n\n}\nvoid solve(int case_no) {\n\t// implementation\n  \
    \  int n, m;\n    cin >> n >> m;\n    MST_Kruskal MST(n);\n    for (int i = 0;\
    \ i < m; i++) {\n        int u, v, w;\n        cin >> u >> v >> w;\n        MST.AddEdge(u,\
    \ v, w);\n    }\n    cout << MST.ComputeMST() << endl;\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: Tests/Minimum_Spanning_Tree.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Tests/Minimum_Spanning_Tree.test.cpp
layout: document
redirect_from:
- /verify/Tests/Minimum_Spanning_Tree.test.cpp
- /verify/Tests/Minimum_Spanning_Tree.test.cpp.html
title: Tests/Minimum_Spanning_Tree.test.cpp
---