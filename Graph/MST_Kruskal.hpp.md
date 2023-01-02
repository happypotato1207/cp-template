---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: Graph/DSU.hpp
    title: Graph/DSU.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: Tests/Minimum_Spanning_Tree.test.cpp
    title: Tests/Minimum_Spanning_Tree.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Graph/MST_Kruskal.hpp\"\n// Template: MST - Kruskal's algorithm\n\
    // O(n log n) for every call to ComputeMST()\n// After calling ComputeMST(), the\
    \ edges will be stored in [res]\n\n#line 1 \"Graph/DSU.hpp\"\n// Template: Disjoint\
    \ Set Union\n// Maintaining and merging sets of nodes\n// O(\\alpha(n)) per query,\
    \ where \\alpha(n) is inverse Ackermann function (basically O(1) as \\alpha(10^600)\
    \ < 4)\n// Without path compression, O(\\log n) per query\n\nclass DisjointSetUnion\
    \ {\npublic:\n    DisjointSetUnion(int n, bool directed_temp = false, bool path_compression_temp\
    \ = true) {\n        par.resize(n + 1, -1);\n        rr.resize(n + 1, 1);\n  \
    \      sz.resize(n + 1, 1);\n        directed = directed_temp;\n        path_compression\
    \ = path_compression_temp;\n    }\n    int FindRoot(int u) {\n        if (par[u]\
    \ == -1) return u;\n        if (path_compression) return par[u] = FindRoot(par[u]);\n\
    \        else return FindRoot(par[u]);\n    }\n    bool Union(int u, int v) {\
    \ // if directed then assign u -> v\n        u = FindRoot(u);\n        v = FindRoot(v);\n\
    \        if (u != v) {\n            if (!directed) {\n                if (sz[u]\
    \ < sz[v]) swap(u, v);\n            }\n            par[v] = u;\n            rr[v]\
    \ = rr[u] + 1;\n            sz[u] += sz[v];\n            return true;\n      \
    \  }\n        return false;\n    }\n    bool CheckConnected(int u, int v) {\n\
    \        return (FindRoot(u) == FindRoot(v));\n    }\n    int GetRank(int u) {\n\
    \        return rr[u];\n    }\n    int GetSize(int u) {\n        return sz[FindRoot(u)];\n\
    \    }\n    void Reset() {\n        for (int i = 0; i < par.size(); i++) {\n \
    \           par[i] = -1;\n            rr[i] = 1;\n            sz[i] = 1;\n   \
    \     }\n    }\nprivate:\n    vector<int> par, rr, sz;\n    bool directed, path_compression;\n\
    };\n#line 6 \"Graph/MST_Kruskal.hpp\"\n\nstruct edge {\n    int u, v;\n    long\
    \ long w;\n};\nclass MST_Kruskal {\npublic:\n    vector<edge> res;\n    int n;\n\
    \    MST_Kruskal(int sz) {\n        n = sz;\n    }\n    void AddEdge(int u, int\
    \ v, long long w) {\n        edges.push_back({u, v, w});\n    }\n    long long\
    \ ComputeMST() {\n        sort(edges.begin(), edges.end(), [](edge &a, edge &b){\
    \ return a.w < b.w; });\n        DisjointSetUnion DSU(n);\n        long long tot\
    \ = 0;\n        int cnt = 0;\n        res.clear();\n        for (edge &cur : edges)\
    \ {\n            if (DSU.Union(cur.u, cur.v)) {\n                res.push_back(cur);\n\
    \                tot += cur.w;\n                cnt++;\n            }\n      \
    \  }\n        return tot;\n    }\nprivate:\n    vector<edge> edges;\n};\n"
  code: "// Template: MST - Kruskal's algorithm\n// O(n log n) for every call to ComputeMST()\n\
    // After calling ComputeMST(), the edges will be stored in [res]\n\n#include \"\
    DSU.hpp\"\n\nstruct edge {\n    int u, v;\n    long long w;\n};\nclass MST_Kruskal\
    \ {\npublic:\n    vector<edge> res;\n    int n;\n    MST_Kruskal(int sz) {\n \
    \       n = sz;\n    }\n    void AddEdge(int u, int v, long long w) {\n      \
    \  edges.push_back({u, v, w});\n    }\n    long long ComputeMST() {\n        sort(edges.begin(),\
    \ edges.end(), [](edge &a, edge &b){ return a.w < b.w; });\n        DisjointSetUnion\
    \ DSU(n);\n        long long tot = 0;\n        int cnt = 0;\n        res.clear();\n\
    \        for (edge &cur : edges) {\n            if (DSU.Union(cur.u, cur.v)) {\n\
    \                res.push_back(cur);\n                tot += cur.w;\n        \
    \        cnt++;\n            }\n        }\n        return tot;\n    }\nprivate:\n\
    \    vector<edge> edges;\n};\n"
  dependsOn:
  - Graph/DSU.hpp
  isVerificationFile: false
  path: Graph/MST_Kruskal.hpp
  requiredBy: []
  timestamp: '2022-08-15 15:34:59+08:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - Tests/Minimum_Spanning_Tree.test.cpp
documentation_of: Graph/MST_Kruskal.hpp
layout: document
redirect_from:
- /library/Graph/MST_Kruskal.hpp
- /library/Graph/MST_Kruskal.hpp.html
title: Graph/MST_Kruskal.hpp
---
