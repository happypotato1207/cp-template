---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: Graph/MST_Kruskal.hpp
    title: Graph/MST_Kruskal.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Tests/UnionFind.test.cpp
    title: Tests/UnionFind.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Graph/DSU.hpp\"\nclass DisjointSetUnion {\npublic:\n\tDisjointSetUnion(int\
    \ n, bool directed_temp = false, bool path_compression_temp = true) {\n\t\tparent.resize(n\
    \ + 1, -1);\n\t\trank.resize(n + 1, 1);\n\t\tsize.resize(n + 1, 1);\n\t\tdirected\
    \ = directed_temp;\n\t\tpath_compression = path_compression_temp;\n\t}\n\tint\
    \ FindRoot(int u) {\n\t\tif (parent[u] == -1) return u;\n\t\tif (path_compression)\
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
    \ path_compression;\n};\n"
  code: "class DisjointSetUnion {\npublic:\n\tDisjointSetUnion(int n, bool directed_temp\
    \ = false, bool path_compression_temp = true) {\n\t\tparent.resize(n + 1, -1);\n\
    \t\trank.resize(n + 1, 1);\n\t\tsize.resize(n + 1, 1);\n\t\tdirected = directed_temp;\n\
    \t\tpath_compression = path_compression_temp;\n\t}\n\tint FindRoot(int u) {\n\t\
    \tif (parent[u] == -1) return u;\n\t\tif (path_compression) return parent[u] =\
    \ FindRoot(parent[u]);\n\t\telse return FindRoot(parent[u]);\n\t}\n\tbool Union(int\
    \ u, int v) { // if directed then assign u -> v\n\t\tu = FindRoot(u);\n\t\tv =\
    \ FindRoot(v);\n\t\tif (u != v) {\n\t\t\tif (!directed) {\n\t\t\t\tif (rank[u]\
    \ < rank[v]) swap(u, v);\n\t\t\t}\n\t\t\tparent[u] = v;\n\t\t\trank[u] = rank[v]\
    \ + 1;\n\t\t\tsize[v] += size[u];\n\t\t\treturn true;\n\t\t}\n\t\treturn false;\n\
    \t}\n\tbool CheckConnected(int u, int v) {\n\t\treturn (FindRoot(u) == FindRoot(v));\n\
    \t}\n\tint GetRank(int u) {\n\t\treturn rank[u];\n\t}\n\tint GetSize(int u) {\n\
    \t\treturn size[FindRoot(u)];\n\t}\n\tvoid Reset() {\n\t\tfor (int i = 0; i <\
    \ parent.size(); i++) {\n\t\t\tparent[i] = -1;\n\t\t\trank[i] = 1;\n\t\t\tsize[i]\
    \ = 1;\n\t\t}\n\t}\nprivate:\n\tvector<int> parent, rank, size;\n\tbool directed,\
    \ path_compression;\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: Graph/DSU.hpp
  requiredBy:
  - Graph/MST_Kruskal.hpp
  timestamp: '2022-02-22 21:14:29+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Tests/UnionFind.test.cpp
documentation_of: Graph/DSU.hpp
layout: document
redirect_from:
- /library/Graph/DSU.hpp
- /library/Graph/DSU.hpp.html
title: Graph/DSU.hpp
---
