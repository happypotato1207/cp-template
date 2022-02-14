---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Flow/Bipartite_Matching.hpp
    title: Flow/Bipartite_Matching.hpp
  - icon: ':question:'
    path: Header/header.cpp
    title: Header/header.cpp
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
  bundledCode: "#line 1 \"Tests/Matching_on_Bipartite_Graph.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/bipartitematching\"\n\n#line 1 \"Header/header.cpp\"\
    \n#include <bits/stdc++.h>\n#define ll long long\n#define ull unsigned long long\n\
    #define ld long double\n#define pii pair<int, int>\n#define pll pair<ll int, ll\
    \ int>\n#define vi vector<int>\n#define vl vector<ll int>\n#define ff first\n\
    #define ss second\n#define pb push_back\n#define eb emplace_back\n#pragma GCC\
    \ optimize(\"Ofast\")\nusing namespace std;\n// debug template\nvoid __print(int\
    \ x) {cerr << x;}\nvoid __print(long x) {cerr << x;}\nvoid __print(long long x)\
    \ {cerr << x;}\nvoid __print(unsigned x) {cerr << x;}\nvoid __print(unsigned long\
    \ x) {cerr << x;}\nvoid __print(unsigned long long x) {cerr << x;}\nvoid __print(float\
    \ x) {cerr << x;}\nvoid __print(double x) {cerr << x;}\nvoid __print(long double\
    \ x) {cerr << x;}\nvoid __print(char x) {cerr << '\\'' << x << '\\'';}\nvoid __print(const\
    \ char *x) {cerr << '\\\"' << x << '\\\"';}\nvoid __print(const string &x) {cerr\
    \ << '\\\"' << x << '\\\"';}\nvoid __print(bool x) {cerr << (x ? \"true\" : \"\
    false\");}\n\ntemplate<typename T, typename V>\nvoid __print(const pair<T, V>\
    \ &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr <<\
    \ '}';}\ntemplate<typename T>\nvoid __print(const T &x) {int f = 0; cerr << '{';\
    \ for (auto &i: x) cerr << (f++ ? \",\" : \"\"), __print(i); cerr << \"}\";}\n\
    void _print() {cerr << \"]\\n\";}\ntemplate <typename T, typename... V>\nvoid\
    \ _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << \", \"; _print(v...);}\n\
    #ifndef ONLINE_JUDGE\n#define debug(x...) cerr << \"[\" << #x << \"] = [\"; _print(x)\n\
    #else\n#define debug(x...)\n#endif\n//\nvoid yes() {\n\tcout << \"YES\\n\";\n\t\
    return;\n}\nvoid no() {\n\tcout << \"NO\\n\";\n\treturn;\n}\ntemplate <class T>\n\
    void out(T temp) {\n\tcout << temp << endl;\n\treturn;\n}\n// global variables\n\
    void init();\nvoid solve(int case_no);\nsigned main() {\n\tios::sync_with_stdio(false);\n\
    \tcin.tie(NULL);\n\tcout.tie(NULL);\n\tsrand(time(NULL));\n\tinit();\n\tint t\
    \ = 1;\n//\tcin >> t;\n\tfor (int i = 1; i <= t; i++) solve(i);\n}\n/*\n *\n*/\n\
    #line 1 \"Flow/Bipartite_Matching.hpp\"\nclass BipartiteMatching {\npublic:\n\t\
    BipartiteMatching(int l, int r) {\n\t\tleft = l; right = r;\n\t\tif (left < right)\
    \ {\n\t\t\tswap(left, right);\n\t\t\tswapped = true;\n\t\t}\n\t\tadj.resize(right\
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
    \t\t\t}\n\t\t}\n\t\treturn false;\n\t}\n};\n#line 5 \"Tests/Matching_on_Bipartite_Graph.test.cpp\"\
    \n\nvoid init() {\n\t// initialize\n\n}\nvoid solve(int case_no) {\n\t// implementation\n\
    \tint l, r, m;\n\tscanf(\"%d %d %d\", &l, &r, &m);\n\tBipartiteMatching BM(l,\
    \ r);\n\twhile (m--) {\n\t\tint u, v;\n\t\tscanf(\"%d %d\", &u, &v);\n\t\tu++;\
    \ v++;\n\t\tBM.AddEdge(u, v);\n\t}\n\tvector<pii> ans = BM.FindMatching();\n\t\
    printf(\"%d\\n\", int(ans.size()));\n\tfor (pii x : ans) {\n\t\tprintf(\"%d %d\\\
    n\", x.ff - 1, x.ss - 1);\n\t}\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/bipartitematching\"\n\n\
    #include \"../Header/header.cpp\"\n#include \"../Flow/Bipartite_Matching.hpp\"\
    \n\nvoid init() {\n\t// initialize\n\n}\nvoid solve(int case_no) {\n\t// implementation\n\
    \tint l, r, m;\n\tscanf(\"%d %d %d\", &l, &r, &m);\n\tBipartiteMatching BM(l,\
    \ r);\n\twhile (m--) {\n\t\tint u, v;\n\t\tscanf(\"%d %d\", &u, &v);\n\t\tu++;\
    \ v++;\n\t\tBM.AddEdge(u, v);\n\t}\n\tvector<pii> ans = BM.FindMatching();\n\t\
    printf(\"%d\\n\", int(ans.size()));\n\tfor (pii x : ans) {\n\t\tprintf(\"%d %d\\\
    n\", x.ff - 1, x.ss - 1);\n\t}\n}\n"
  dependsOn:
  - Header/header.cpp
  - Flow/Bipartite_Matching.hpp
  isVerificationFile: true
  path: Tests/Matching_on_Bipartite_Graph.test.cpp
  requiredBy: []
  timestamp: '2022-02-14 11:35:14+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tests/Matching_on_Bipartite_Graph.test.cpp
layout: document
redirect_from:
- /verify/Tests/Matching_on_Bipartite_Graph.test.cpp
- /verify/Tests/Matching_on_Bipartite_Graph.test.cpp.html
title: Tests/Matching_on_Bipartite_Graph.test.cpp
---
