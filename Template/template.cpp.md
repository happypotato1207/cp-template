---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Tests/Matching_on_Bipartite_Graph.test.cpp
    title: Tests/Matching_on_Bipartite_Graph.test.cpp
  - icon: ':heavy_check_mark:'
    path: Tests/UnionFind.test.cpp
    title: Tests/UnionFind.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Template/template.cpp\"\n#include <bits/stdc++.h>\n#define\
    \ ll long long\n#define ull unsigned long long\n#define ld long double\n#define\
    \ pii pair<int, int>\n#define pll pair<ll int, ll int>\n#define vi vector<int>\n\
    #define vl vector<ll int>\n#define ff first\n#define ss second\n#define pb push_back\n\
    #define eb emplace_back\n#pragma GCC optimize(\"Ofast\")\nusing namespace std;\n\
    // debug template\nvoid __print(int x) {cerr << x;}\nvoid __print(long x) {cerr\
    \ << x;}\nvoid __print(long long x) {cerr << x;}\nvoid __print(unsigned x) {cerr\
    \ << x;}\nvoid __print(unsigned long x) {cerr << x;}\nvoid __print(unsigned long\
    \ long x) {cerr << x;}\nvoid __print(float x) {cerr << x;}\nvoid __print(double\
    \ x) {cerr << x;}\nvoid __print(long double x) {cerr << x;}\nvoid __print(char\
    \ x) {cerr << '\\'' << x << '\\'';}\nvoid __print(const char *x) {cerr << '\\\"\
    ' << x << '\\\"';}\nvoid __print(const string &x) {cerr << '\\\"' << x << '\\\"\
    ';}\nvoid __print(bool x) {cerr << (x ? \"true\" : \"false\");}\n\ntemplate<typename\
    \ T, typename V>\nvoid __print(const pair<T, V> &x) {cerr << '{'; __print(x.first);\
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
    \ i <= t; i++) solve(i);\n}\n/*\n *\n*/\n"
  code: "#include <bits/stdc++.h>\n#define ll long long\n#define ull unsigned long\
    \ long\n#define ld long double\n#define pii pair<int, int>\n#define pll pair<ll\
    \ int, ll int>\n#define vi vector<int>\n#define vl vector<ll int>\n#define ff\
    \ first\n#define ss second\n#define pb push_back\n#define eb emplace_back\n#pragma\
    \ GCC optimize(\"Ofast\")\nusing namespace std;\n// debug template\nvoid __print(int\
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
    \ = 1;\n//\tcin >> t;\n\tfor (int i = 1; i <= t; i++) solve(i);\n}\n/*\n *\n*/\n"
  dependsOn: []
  isVerificationFile: false
  path: Template/template.cpp
  requiredBy: []
  timestamp: '2022-02-05 11:24:10+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Tests/Matching_on_Bipartite_Graph.test.cpp
  - Tests/UnionFind.test.cpp
documentation_of: Template/template.cpp
layout: document
redirect_from:
- /library/Template/template.cpp
- /library/Template/template.cpp.html
title: Template/template.cpp
---
