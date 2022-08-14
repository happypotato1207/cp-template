---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Flow/Bipartite_Matching.hpp
    title: Flow/Bipartite_Matching.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/bipartitematching
    links:
    - https://judge.yosupo.jp/problem/bipartitematching
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
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/bipartitematching\"\n\n\
    #include \"../header.cpp\"\n#include \"../Flow/Bipartite_Matching.hpp\"\n\nvoid\
    \ init() {\n\t// initialize\n\n}\nvoid solve(int case_no) {\n\t// implementation\n\
    \tint l, r, m;\n\tscanf(\"%d %d %d\", &l, &r, &m);\n\tBipartiteMatching BM(l,\
    \ r);\n\twhile (m--) {\n\t\tint u, v;\n\t\tscanf(\"%d %d\", &u, &v);\n\t\tu++;\
    \ v++;\n\t\tBM.AddEdge(u, v);\n\t}\n\tvector<pii> ans = BM.FindMatching();\n\t\
    printf(\"%d\\n\", int(ans.size()));\n\tfor (pii x : ans) {\n\t\tprintf(\"%d %d\\\
    n\", x.ff - 1, x.ss - 1);\n\t}\n}\n"
  dependsOn:
  - header.cpp
  - Flow/Bipartite_Matching.hpp
  isVerificationFile: true
  path: Tests/Matching_on_Bipartite_Graph.test.cpp
  requiredBy: []
  timestamp: '2022-08-15 02:09:20+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tests/Matching_on_Bipartite_Graph.test.cpp
layout: document
redirect_from:
- /verify/Tests/Matching_on_Bipartite_Graph.test.cpp
- /verify/Tests/Matching_on_Bipartite_Graph.test.cpp.html
title: Tests/Matching_on_Bipartite_Graph.test.cpp
---
