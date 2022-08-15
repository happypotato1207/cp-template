---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Graph/DSU.hpp
    title: Graph/DSU.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Tests/Minimum_Spanning_Tree.test.cpp
    title: Tests/Minimum_Spanning_Tree.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Graph/MST_Kruskal.hpp\"\n// Template: MST - Kruskal's algorithm\n\
    // O(n log n) for every call to ComputeMST()\n// After calling ComputeMST(), the\
    \ edges will be stored in [res]\n\n#line 1 \"Graph/DSU.hpp\"\n// Template: Disjoint\
    \ Set Union\n// Maintaining and merging sets of nodes\n// O(\\alpha(n)) per query,\
    \ where \\alpha(n) is inverse Ackermann function (basically O(1) as \\alpha(10^600)\
    \ < 4)\n// Without path compression, O(\\log n) per query\n\nclass DisjointSetUnion\
    \ {\npublic:\n\tDisjointSetUnion(int n, bool directed_temp = false, bool path_compression_temp\
    \ = true) {\n\t\tparent.resize(n + 1, -1);\n\t\trank.resize(n + 1, 1);\n\t\tsize.resize(n\
    \ + 1, 1);\n\t\tdirected = directed_temp;\n\t\tpath_compression = path_compression_temp;\n\
    \t}\n\tint FindRoot(int u) {\n\t\tif (parent[u] == -1) return u;\n\t\tif (path_compression)\
    \ return parent[u] = FindRoot(parent[u]);\n\t\telse return FindRoot(parent[u]);\n\
    \t}\n\tbool Union(int u, int v) { // if directed then assign u -> v\n\t\tu = FindRoot(u);\n\
    \t\tv = FindRoot(v);\n\t\tif (u != v) {\n\t\t\tif (!directed) {\n\t\t\t\tif (rank[u]\
    \ < rank[v]) swap(u, v);\n\t\t\t}\n\t\t\tparent[u] = v;\n\t\t\trank[u] = rank[v]\
    \ + 1;\n\t\t\tsize[v] += size[u];\n\t\t\treturn true;\n\t\t}\n\t\treturn false;\n\
    \t}\n\tbool CheckConnected(int u, int v) {\n\t\treturn (FindRoot(u) == FindRoot(v));\n\
    \t}\n\tint GetRank(int u) {\n\t\treturn rank[u];\n\t}\n\tint GetSize(int u) {\n\
    \t\treturn size[FindRoot(u)];\n\t}\n\tvoid Reset() {\n\t\tfor (int i = 0; i <\
    \ parent.size(); i++) {\n\t\t\tparent[i] = -1;\n\t\t\trank[i] = 1;\n\t\t\tsize[i]\
    \ = 1;\n\t\t}\n\t}\nprivate:\n\tvector<int> parent, rank, size;\n\tbool directed,\
    \ path_compression;\n};\n#line 6 \"Graph/MST_Kruskal.hpp\"\n\nstruct edge {\n\
    \    int u, v;\n    long long w;\n};\nclass MST_Kruskal {\npublic:\n    vector<edge>\
    \ res;\n    int n;\n    MST_Kruskal(int sz) {\n        n = sz;\n    }\n    void\
    \ AddEdge(int u, int v, long long w) {\n        edges.push_back({u, v, w});\n\
    \    }\n    long long ComputeMST() {\n        sort(edges.begin(), edges.end(),\
    \ [](edge &a, edge &b){ return a.w < b.w; });\n        DisjointSetUnion DSU(n);\n\
    \        long long tot = 0;\n        int cnt = 0;\n        res.clear();\n    \
    \    for (edge &cur : edges) {\n            if (DSU.Union(cur.u, cur.v)) {\n \
    \               res.push_back(cur);\n                tot += cur.w;\n         \
    \       cnt++;\n            }\n        }\n        return tot;\n    }\nprivate:\n\
    \    vector<edge> edges;\n};\n"
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
  timestamp: '2022-08-15 15:32:19+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Tests/Minimum_Spanning_Tree.test.cpp
documentation_of: Graph/MST_Kruskal.hpp
layout: document
redirect_from:
- /library/Graph/MST_Kruskal.hpp
- /library/Graph/MST_Kruskal.hpp.html
title: Graph/MST_Kruskal.hpp
---
