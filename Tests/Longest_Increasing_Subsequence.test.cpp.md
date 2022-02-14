---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Header/header.cpp
    title: Header/header.cpp
  - icon: ':heavy_check_mark:'
    path: Miscellaneous/LIS.hpp
    title: Miscellaneous/LIS.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D
  bundledCode: "#line 1 \"Tests/Longest_Increasing_Subsequence.test.cpp\"\n#define\
    \ PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D\"\n\n#line 1 \"\
    Header/header.cpp\"\n#include <bits/stdc++.h>\n#define ll long long\n#define ull\
    \ unsigned long long\n#define ld long double\n#define pii pair<int, int>\n#define\
    \ pll pair<ll int, ll int>\n#define vi vector<int>\n#define vl vector<ll int>\n\
    #define ff first\n#define ss second\n#define pb push_back\n#define eb emplace_back\n\
    #pragma GCC optimize(\"Ofast\")\nusing namespace std;\n// debug template\nvoid\
    \ __print(int x) {cerr << x;}\nvoid __print(long x) {cerr << x;}\nvoid __print(long\
    \ long x) {cerr << x;}\nvoid __print(unsigned x) {cerr << x;}\nvoid __print(unsigned\
    \ long x) {cerr << x;}\nvoid __print(unsigned long long x) {cerr << x;}\nvoid\
    \ __print(float x) {cerr << x;}\nvoid __print(double x) {cerr << x;}\nvoid __print(long\
    \ double x) {cerr << x;}\nvoid __print(char x) {cerr << '\\'' << x << '\\'';}\n\
    void __print(const char *x) {cerr << '\\\"' << x << '\\\"';}\nvoid __print(const\
    \ string &x) {cerr << '\\\"' << x << '\\\"';}\nvoid __print(bool x) {cerr << (x\
    \ ? \"true\" : \"false\");}\n\ntemplate<typename T, typename V>\nvoid __print(const\
    \ pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second);\
    \ cerr << '}';}\ntemplate<typename T>\nvoid __print(const T &x) {int f = 0; cerr\
    \ << '{'; for (auto &i: x) cerr << (f++ ? \",\" : \"\"), __print(i); cerr << \"\
    }\";}\nvoid _print() {cerr << \"]\\n\";}\ntemplate <typename T, typename... V>\n\
    void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << \", \"; _print(v...);}\n\
    #ifndef ONLINE_JUDGE\n#define debug(x...) cerr << \"[\" << #x << \"] = [\"; _print(x)\n\
    #else\n#define debug(x...)\n#endif\n//\nvoid yes() {\n\tcout << \"YES\\n\";\n\t\
    return;\n}\nvoid no() {\n\tcout << \"NO\\n\";\n\treturn;\n}\ntemplate <class T>\n\
    void out(T temp) {\n\tcout << temp << endl;\n\treturn;\n}\n// global variables\n\
    void init();\nvoid solve(int case_no);\nsigned main() {\n\tios::sync_with_stdio(false);\n\
    \tcin.tie(NULL);\n\tcout.tie(NULL);\n\tsrand(time(NULL));\n\tinit();\n\tint t\
    \ = 1;\n//\tcin >> t;\n\tfor (int i = 1; i <= t; i++) solve(i);\n}\n/*\n *\n*/\n\
    #line 1 \"Miscellaneous/LIS.hpp\"\nvector<int> LIS(vector<int> v) {\n\tint n =\
    \ v.size();\n\tvector<int> ret;\n\tret.push_back(v[0]);\n\tfor (int i = 1; i <\
    \ n; i++) {\n\t\tif (v[i] > ret.back()) ret.push_back(v[i]); // change to >= for\
    \ non-decreasing\n\t\telse {\n\t\t\tint index = lower_bound(ret.begin(), ret.end(),\
    \ v[i]) - ret.begin();\n\t\t\tret[index] = v[i];\n\t\t}\n\t}\n\treturn ret;\n\
    }\n#line 5 \"Tests/Longest_Increasing_Subsequence.test.cpp\"\n\nvoid init() {\n\
    \t// initialize\n\n}\nvoid solve(int case_no) {\n\t// implementation\n\tint n;\n\
    \tcin >> n;\n\tvector<int> v(n);\n\tfor (int i = 0; i < n; i++) cin >> v[i];\n\
    \tcout << LIS(v).size() << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D\"\n\n\
    #include \"../Header/header.cpp\"\n#include \"../Miscellaneous/LIS.hpp\"\n\nvoid\
    \ init() {\n\t// initialize\n\n}\nvoid solve(int case_no) {\n\t// implementation\n\
    \tint n;\n\tcin >> n;\n\tvector<int> v(n);\n\tfor (int i = 0; i < n; i++) cin\
    \ >> v[i];\n\tcout << LIS(v).size() << endl;\n}\n"
  dependsOn:
  - Header/header.cpp
  - Miscellaneous/LIS.hpp
  isVerificationFile: true
  path: Tests/Longest_Increasing_Subsequence.test.cpp
  requiredBy: []
  timestamp: '2022-02-14 14:40:06+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tests/Longest_Increasing_Subsequence.test.cpp
layout: document
redirect_from:
- /verify/Tests/Longest_Increasing_Subsequence.test.cpp
- /verify/Tests/Longest_Increasing_Subsequence.test.cpp.html
title: Tests/Longest_Increasing_Subsequence.test.cpp
---
