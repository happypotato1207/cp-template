---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Tests/Matching_on_Bipartite_Graph.test.cpp
    title: Tests/Matching_on_Bipartite_Graph.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Flow/Bipartite_Matching.hpp\"\n// Template: Kuhn's algorithm\
    \ for Bipartite Matching\n// I'm really not familiar with flow, will learn more\
    \ soon\n// Theoreticall should be O(nm / [some constant]), where n is no. of nodes\
    \ and m is no. of edges\n// Dinic's algorithm works in O(n sqrt(n)), will code\
    \ template asap\n\nclass BipartiteMatching {\npublic:\n\tBipartiteMatching(int\
    \ l, int r) {\n\t\tleft = l; right = r;\n\t\tif (left < right) {\n\t\t\tswap(left,\
    \ right);\n\t\t\tswapped = true;\n\t\t}\n\t\tadj.resize(right + 1);\n\t\tmt.resize(left\
    \ + 1, -1);\n\t\tused.resize(right + 1);\n\t\tmatched.resize(right + 1);\n\t}\n\
    \tvoid AddEdge(int u, int v) { // (left, right) matching\n\t\tif (swapped) swap(u,\
    \ v);\n\t\tadj[v].push_back(u);\n\t}\n\tvector<pair<int, int> > FindMatching()\
    \ {\n\t\t// initial matching using simple heuristics\n\t\tfor (int u = 1; u <=\
    \ right; u++) {\n\t\t\tfor (int v : adj[u]) {\n\t\t\t\tif (mt[v] == -1) {\n\t\t\
    \t\t\tmt[v] = u;\n\t\t\t\t\tmatched[u] = true;\n\t\t\t\t\tbreak;\n\t\t\t\t}\n\t\
    \t\t}\n\t\t}\n\t\t// Kuhn's algorithm to improve matching\n\t\tfor (int u = 1;\
    \ u <= right; u++) {\n\t\t\tif (matched[u]) continue;\n\t\t\tfor (int i = 0; i\
    \ <= right; i++) used[i] = false;\n\t\t\tTryKuhn(u);\n\t\t}\n\t\tvector<pair<int,\
    \ int> > ans;\n\t\tfor (int u = 1; u <= left; u++) {\n\t\t\tif (mt[u] != -1) {\n\
    \t\t\t\tif (swapped) ans.emplace_back(mt[u], u);\n\t\t\t\telse ans.emplace_back(u,\
    \ mt[u]);\n\t\t\t}\n\t\t}\n\t\treturn ans;\n\t}\nprivate:\n\tbool swapped = false;\n\
    \tint left, right;\n\tvector<vector<int> > adj; // right -> left\n\tvector<int>\
    \ mt; // mt[left] = right\n\tvector<bool> used, matched; // right\n\tbool TryKuhn(int\
    \ u) {\n\t\tif (used[u]) return false;\n\t\tused[u] = true;\n\t\tfor (int v :\
    \ adj[u]) {\n\t\t\t// Either unsaturated or recursive call successful\n\t\t\t\
    if (mt[v] == -1 || TryKuhn(mt[v])) {\n\t\t\t\tmt[v] = u;\n\t\t\t\treturn true;\n\
    \t\t\t}\n\t\t}\n\t\treturn false;\n\t}\n};\n"
  code: "// Template: Kuhn's algorithm for Bipartite Matching\n// I'm really not familiar\
    \ with flow, will learn more soon\n// Theoreticall should be O(nm / [some constant]),\
    \ where n is no. of nodes and m is no. of edges\n// Dinic's algorithm works in\
    \ O(n sqrt(n)), will code template asap\n\nclass BipartiteMatching {\npublic:\n\
    \tBipartiteMatching(int l, int r) {\n\t\tleft = l; right = r;\n\t\tif (left <\
    \ right) {\n\t\t\tswap(left, right);\n\t\t\tswapped = true;\n\t\t}\n\t\tadj.resize(right\
    \ + 1);\n\t\tmt.resize(left + 1, -1);\n\t\tused.resize(right + 1);\n\t\tmatched.resize(right\
    \ + 1);\n\t}\n\tvoid AddEdge(int u, int v) { // (left, right) matching\n\t\tif\
    \ (swapped) swap(u, v);\n\t\tadj[v].push_back(u);\n\t}\n\tvector<pair<int, int>\
    \ > FindMatching() {\n\t\t// initial matching using simple heuristics\n\t\tfor\
    \ (int u = 1; u <= right; u++) {\n\t\t\tfor (int v : adj[u]) {\n\t\t\t\tif (mt[v]\
    \ == -1) {\n\t\t\t\t\tmt[v] = u;\n\t\t\t\t\tmatched[u] = true;\n\t\t\t\t\tbreak;\n\
    \t\t\t\t}\n\t\t\t}\n\t\t}\n\t\t// Kuhn's algorithm to improve matching\n\t\tfor\
    \ (int u = 1; u <= right; u++) {\n\t\t\tif (matched[u]) continue;\n\t\t\tfor (int\
    \ i = 0; i <= right; i++) used[i] = false;\n\t\t\tTryKuhn(u);\n\t\t}\n\t\tvector<pair<int,\
    \ int> > ans;\n\t\tfor (int u = 1; u <= left; u++) {\n\t\t\tif (mt[u] != -1) {\n\
    \t\t\t\tif (swapped) ans.emplace_back(mt[u], u);\n\t\t\t\telse ans.emplace_back(u,\
    \ mt[u]);\n\t\t\t}\n\t\t}\n\t\treturn ans;\n\t}\nprivate:\n\tbool swapped = false;\n\
    \tint left, right;\n\tvector<vector<int> > adj; // right -> left\n\tvector<int>\
    \ mt; // mt[left] = right\n\tvector<bool> used, matched; // right\n\tbool TryKuhn(int\
    \ u) {\n\t\tif (used[u]) return false;\n\t\tused[u] = true;\n\t\tfor (int v :\
    \ adj[u]) {\n\t\t\t// Either unsaturated or recursive call successful\n\t\t\t\
    if (mt[v] == -1 || TryKuhn(mt[v])) {\n\t\t\t\tmt[v] = u;\n\t\t\t\treturn true;\n\
    \t\t\t}\n\t\t}\n\t\treturn false;\n\t}\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: Flow/Bipartite_Matching.hpp
  requiredBy: []
  timestamp: '2022-03-09 17:01:17+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Tests/Matching_on_Bipartite_Graph.test.cpp
documentation_of: Flow/Bipartite_Matching.hpp
layout: document
redirect_from:
- /library/Flow/Bipartite_Matching.hpp
- /library/Flow/Bipartite_Matching.hpp.html
title: Flow/Bipartite_Matching.hpp
---
