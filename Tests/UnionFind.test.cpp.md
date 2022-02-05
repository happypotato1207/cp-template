---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Graph/DSU.hpp
    title: Graph/DSU.hpp
  - icon: ':heavy_check_mark:'
    path: Template/template.cpp
    title: Template/template.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"Tests/UnionFind.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\
    \n\n#line 1 \"Template/template.cpp\"\n#include <bits/stdc++.h>\n#define ll long\
    \ long\n#define ull unsigned long long\n#define ld long double\n#define pii pair<int,\
    \ int>\n#define pll pair<ll int, ll int>\n#define vi vector<int>\n#define vl vector<ll\
    \ int>\n#define ff first\n#define ss second\n#define pb push_back\n#define eb\
    \ emplace_back\n#pragma GCC optimize(\"Ofast\")\nusing namespace std;\n// debug\
    \ template\nvoid __print(int x) {cerr << x;}\nvoid __print(long x) {cerr << x;}\n\
    void __print(long long x) {cerr << x;}\nvoid __print(unsigned x) {cerr << x;}\n\
    void __print(unsigned long x) {cerr << x;}\nvoid __print(unsigned long long x)\
    \ {cerr << x;}\nvoid __print(float x) {cerr << x;}\nvoid __print(double x) {cerr\
    \ << x;}\nvoid __print(long double x) {cerr << x;}\nvoid __print(char x) {cerr\
    \ << '\\'' << x << '\\'';}\nvoid __print(const char *x) {cerr << '\\\"' << x <<\
    \ '\\\"';}\nvoid __print(const string &x) {cerr << '\\\"' << x << '\\\"';}\nvoid\
    \ __print(bool x) {cerr << (x ? \"true\" : \"false\");}\n\ntemplate<typename T,\
    \ typename V>\nvoid __print(const pair<T, V> &x) {cerr << '{'; __print(x.first);\
    \ cerr << ','; __print(x.second); cerr << '}';}\ntemplate<typename T>\nvoid __print(const\
    \ T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? \",\" : \"\"\
    ), __print(i); cerr << \"}\";}\nvoid _print() {cerr << \"]\\n\";}\ntemplate <typename\
    \ T, typename... V>\nvoid _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr\
    \ << \", \"; _print(v...);}\n#ifndef ONLINE_JUDGE\n#define debug(x...) cerr <<\
    \ \"[\" << #x << \"] = [\"; _print(x)\n#else\n#define debug(x...)\n#endif\n//\n\
    void yes() {\n\tcout << \"YES\\n\";\n\treturn;\n}\nvoid no() {\n\tcout << \"NO\\\
    n\";\n\treturn;\n}\ntemplate <class T>\nvoid out(T temp) {\n\tcout << temp <<\
    \ endl;\n\treturn;\n}\n// global variables\nvoid init();\nvoid solve(int case_no);\n\
    signed main() {\n\tios::sync_with_stdio(false);\n\tcin.tie(NULL);\n\tcout.tie(NULL);\n\
    \tsrand(time(NULL));\n\tinit();\n\tint t = 1;\n//\tcin >> t;\n\tfor (int i = 1;\
    \ i <= t; i++) solve(i);\n}\n/*\n *\n*/\n#line 1 \"Graph/DSU.hpp\"\nclass DisjointSetUnion\
    \ {\npublic:\n\tDisjointSetUnion(int n, bool directed_temp = true, bool path_compression_temp\
    \ = true) {\n\t\tparent.resize(n + 1, -1);\n\t\trank.resize(n + 1, 1);\n\t\tsize.resize(n\
    \ + 1, 1);\n\t\tdirected = directed_temp;\n\t\tpath_compression = path_compression_temp;\n\
    \t}\n\tint FindRoot(int u) {\n\t\tif (parent[u] == -1) return u;\n\t\tif (path_compression)\
    \ return parent[u] = FindRoot(parent[u]);\n\t\telse return FindRoot(parent[u]);\n\
    \t}\n\tvoid Union(int u, int v) { // if undirected then assign u -> v\n\t\tu =\
    \ FindRoot(u);\n\t\tv = FindRoot(v);\n\t\tif (u != v) {\n\t\t\tif (directed) {\n\
    \t\t\t\tif (rank[u] < rank[v]) swap(u, v);\n\t\t\t}\n\t\t\tparent[u] = v;\n\t\t\
    \trank[u] = rank[v] + 1;\n\t\t\tsize[v] += size[u];\n\t\t}\n\t\treturn;\n\t}\n\
    \tbool CheckConnected(int u, int v) {\n\t\treturn (FindRoot(u) == FindRoot(v));\n\
    \t}\n\tint GetRank(int u) {\n\t\treturn rank[u];\n\t}\n\tint GetSize(int u) {\n\
    \t\treturn size[FindRoot(u)];\n\t}\nprivate:\n\tvector<int> parent, rank, size;\n\
    \tbool directed, path_compression;\n};\n#line 5 \"Tests/UnionFind.test.cpp\"\n\
    \nvoid init() {\n\t// initialize\n\n}\nvoid solve(int case_no) {\n\t// implementation\n\
    \tint n, q;\n\tcin >> n >> q;\n\tDisjointSetUnion DSU(n);\n\twhile (q--) {\n\t\
    \tint cmd, u, v;\n\t\tcin >> cmd >> u >> v;\n\t\tif (cmd == 0) {\n\t\t\tDSU.Union(u,\
    \ v);\n\t\t} else {\n\t\t\tcout << DSU.CheckConnected(u, v) << endl;\n\t\t}\n\t\
    }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#include\
    \ \"../Template/template.cpp\"\n#include \"../Graph/DSU.hpp\"\n\nvoid init() {\n\
    \t// initialize\n\n}\nvoid solve(int case_no) {\n\t// implementation\n\tint n,\
    \ q;\n\tcin >> n >> q;\n\tDisjointSetUnion DSU(n);\n\twhile (q--) {\n\t\tint cmd,\
    \ u, v;\n\t\tcin >> cmd >> u >> v;\n\t\tif (cmd == 0) {\n\t\t\tDSU.Union(u, v);\n\
    \t\t} else {\n\t\t\tcout << DSU.CheckConnected(u, v) << endl;\n\t\t}\n\t}\n}\n"
  dependsOn:
  - Template/template.cpp
  - Graph/DSU.hpp
  isVerificationFile: true
  path: Tests/UnionFind.test.cpp
  requiredBy: []
  timestamp: '2022-02-05 13:02:29+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tests/UnionFind.test.cpp
layout: document
redirect_from:
- /verify/Tests/UnionFind.test.cpp
- /verify/Tests/UnionFind.test.cpp.html
title: Tests/UnionFind.test.cpp
---
