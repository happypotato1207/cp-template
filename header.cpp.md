---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Tests/Interval_Tree.test.cpp
    title: Tests/Interval_Tree.test.cpp
  - icon: ':heavy_check_mark:'
    path: Tests/Longest_Increasing_Subsequence.test.cpp
    title: Tests/Longest_Increasing_Subsequence.test.cpp
  - icon: ':heavy_check_mark:'
    path: Tests/Matching_on_Bipartite_Graph.test.cpp
    title: Tests/Matching_on_Bipartite_Graph.test.cpp
  - icon: ':heavy_check_mark:'
    path: Tests/Minimum_Spanning_Tree.test.cpp
    title: Tests/Minimum_Spanning_Tree.test.cpp
  - icon: ':heavy_check_mark:'
    path: Tests/Point_Add_Range_Sum_(Add).test.cpp
    title: Tests/Point_Add_Range_Sum_(Add).test.cpp
  - icon: ':heavy_check_mark:'
    path: Tests/Point_Add_Range_Sum_(Assign).test.cpp
    title: Tests/Point_Add_Range_Sum_(Assign).test.cpp
  - icon: ':heavy_check_mark:'
    path: Tests/Static_RMQ.test.cpp
    title: Tests/Static_RMQ.test.cpp
  - icon: ':heavy_check_mark:'
    path: Tests/UnionFind.test.cpp
    title: Tests/UnionFind.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"header.cpp\"\n#include <bits/stdc++.h>\n#define ll long\
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
    \ << \", \"; _print(v...);}\n#ifndef ONLINE_JUDGE\n#define debug(...) cerr <<\
    \ \"[\" << #__VA_ARGS__ << \"] = [\"; _print(__VA_ARGS__)\n#else\n#define debug(...)\n\
    #endif\n//\ninline void yes() {\n\tcout << \"YES\" << endl;\n\treturn;\n}\ninline\
    \ void no() {\n\tcout << \"NO\" << endl;\n\treturn;\n}\ntemplate <class T>\ninline\
    \ void out(T temp) {\n\tcout << temp << endl;\n\treturn;\n}\n// global variables\n\
    \nvoid init();\nvoid solve(int case_no);\n\nsigned main() {\n        #ifndef ONLINE_JUDGE\n\
    \        // freopen(\"input.txt\", \"r\", stdin);\n        // freopen(\"output.txt\"\
    , \"w\", stdout);\n        #endif\n\tios::sync_with_stdio(false);\n\tcin.tie(NULL);\n\
    \tcout.tie(NULL);\n\tsrand(time(NULL));\n\tinit();\n\tint t = 1;\n\t// cin >>\
    \ t;\n\tfor (int i = 1; i <= t; i++) solve(i);\n}\n/*\n *\n */\n"
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
    #ifndef ONLINE_JUDGE\n#define debug(...) cerr << \"[\" << #__VA_ARGS__ << \"]\
    \ = [\"; _print(__VA_ARGS__)\n#else\n#define debug(...)\n#endif\n//\ninline void\
    \ yes() {\n\tcout << \"YES\" << endl;\n\treturn;\n}\ninline void no() {\n\tcout\
    \ << \"NO\" << endl;\n\treturn;\n}\ntemplate <class T>\ninline void out(T temp)\
    \ {\n\tcout << temp << endl;\n\treturn;\n}\n// global variables\n\nvoid init();\n\
    void solve(int case_no);\n\nsigned main() {\n        #ifndef ONLINE_JUDGE\n  \
    \      // freopen(\"input.txt\", \"r\", stdin);\n        // freopen(\"output.txt\"\
    , \"w\", stdout);\n        #endif\n\tios::sync_with_stdio(false);\n\tcin.tie(NULL);\n\
    \tcout.tie(NULL);\n\tsrand(time(NULL));\n\tinit();\n\tint t = 1;\n\t// cin >>\
    \ t;\n\tfor (int i = 1; i <= t; i++) solve(i);\n}\n/*\n *\n */\n"
  dependsOn: []
  isVerificationFile: false
  path: header.cpp
  requiredBy: []
  timestamp: '2022-03-01 01:28:11+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Tests/Point_Add_Range_Sum_(Add).test.cpp
  - Tests/Static_RMQ.test.cpp
  - Tests/UnionFind.test.cpp
  - Tests/Longest_Increasing_Subsequence.test.cpp
  - Tests/Interval_Tree.test.cpp
  - Tests/Minimum_Spanning_Tree.test.cpp
  - Tests/Point_Add_Range_Sum_(Assign).test.cpp
  - Tests/Matching_on_Bipartite_Graph.test.cpp
documentation_of: header.cpp
layout: document
redirect_from:
- /library/header.cpp
- /library/header.cpp.html
title: header.cpp
---
