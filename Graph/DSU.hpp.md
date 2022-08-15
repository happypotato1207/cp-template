---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: Graph/MST_Kruskal.hpp
    title: Graph/MST_Kruskal.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Tests/Minimum_Spanning_Tree.test.cpp
    title: Tests/Minimum_Spanning_Tree.test.cpp
  - icon: ':heavy_check_mark:'
    path: Tests/UnionFind.test.cpp
    title: Tests/UnionFind.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Graph/DSU.hpp\"\n// Template: Disjoint Set Union\n// Maintaining\
    \ and merging sets of nodes\n// O(\\alpha(n)) per query, where \\alpha(n) is inverse\
    \ Ackermann function (basically O(1) as \\alpha(10^600) < 4)\n// Without path\
    \ compression, O(\\log n) per query\n\nclass DisjointSetUnion {\npublic:\n   \
    \ DisjointSetUnion(int n, bool directed_temp = false, bool path_compression_temp\
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
    };\n"
  code: "// Template: Disjoint Set Union\n// Maintaining and merging sets of nodes\n\
    // O(\\alpha(n)) per query, where \\alpha(n) is inverse Ackermann function (basically\
    \ O(1) as \\alpha(10^600) < 4)\n// Without path compression, O(\\log n) per query\n\
    \nclass DisjointSetUnion {\npublic:\n    DisjointSetUnion(int n, bool directed_temp\
    \ = false, bool path_compression_temp = true) {\n        par.resize(n + 1, -1);\n\
    \        rr.resize(n + 1, 1);\n        sz.resize(n + 1, 1);\n        directed\
    \ = directed_temp;\n        path_compression = path_compression_temp;\n    }\n\
    \    int FindRoot(int u) {\n        if (par[u] == -1) return u;\n        if (path_compression)\
    \ return par[u] = FindRoot(par[u]);\n        else return FindRoot(par[u]);\n \
    \   }\n    bool Union(int u, int v) { // if directed then assign u -> v\n    \
    \    u = FindRoot(u);\n        v = FindRoot(v);\n        if (u != v) {\n     \
    \       if (!directed) {\n                if (sz[u] < sz[v]) swap(u, v);\n   \
    \         }\n            par[v] = u;\n            rr[v] = rr[u] + 1;\n       \
    \     sz[u] += sz[v];\n            return true;\n        }\n        return false;\n\
    \    }\n    bool CheckConnected(int u, int v) {\n        return (FindRoot(u) ==\
    \ FindRoot(v));\n    }\n    int GetRank(int u) {\n        return rr[u];\n    }\n\
    \    int GetSize(int u) {\n        return sz[FindRoot(u)];\n    }\n    void Reset()\
    \ {\n        for (int i = 0; i < par.size(); i++) {\n            par[i] = -1;\n\
    \            rr[i] = 1;\n            sz[i] = 1;\n        }\n    }\nprivate:\n\
    \    vector<int> par, rr, sz;\n    bool directed, path_compression;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: Graph/DSU.hpp
  requiredBy:
  - Graph/MST_Kruskal.hpp
  timestamp: '2022-08-15 15:34:59+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Tests/UnionFind.test.cpp
  - Tests/Minimum_Spanning_Tree.test.cpp
documentation_of: Graph/DSU.hpp
layout: document
redirect_from:
- /library/Graph/DSU.hpp
- /library/Graph/DSU.hpp.html
title: Graph/DSU.hpp
---
