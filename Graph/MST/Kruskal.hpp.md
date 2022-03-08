---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.10.2/x64/lib/python3.10/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../Graph/DSU.hpp:\
    \ line -1: no such header\n"
  code: "#include \"../Graph/DSU.hpp\"\n\nstruct edge {\n    int u, v;\n    long long\
    \ w;\n};\nclass MST_Kruskal {\npublic:\n    vector<edge> res;\n    int n;\n  \
    \  MST_Kruskal(int sz) {\n        n = sz;\n    }\n    void AddEdge(int u, int\
    \ v, long long w) {\n        edges.push_back({u, v, w});\n    }\n    long long\
    \ ComputeMST() {\n        sort(edges.begin(), edges.end(), [](edge &a, edge &b){\
    \ return a.w < b.w; });\n        DisjointSetUnion DSU(n);\n        long long tot\
    \ = 0;\n        int cnt = 0;\n        res.clear();\n        for (edge &cur : edges)\
    \ {\n            if (DSU.Union(cur.u, cur.v)) {\n                res.push_back(cur);\n\
    \                tot += cur.w;\n                cnt++;\n            }\n      \
    \  }\n        return tot;\n    }\nprivate:\n    vector<edge> edges;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: Graph/MST/Kruskal.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Graph/MST/Kruskal.hpp
layout: document
redirect_from:
- /library/Graph/MST/Kruskal.hpp
- /library/Graph/MST/Kruskal.hpp.html
title: Graph/MST/Kruskal.hpp
---
