---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: Miscellaneous/LIS.hpp
    title: Miscellaneous/LIS.hpp
  - icon: ':x:'
    path: header.cpp
    title: header.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D
  bundledCode: "#line 1 \"Tests/Longest_Increasing_Subsequence.test.cpp\"\n#define\
    \ PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D\"\n\n#line 1 \"\
    header.cpp\"\n#include <bits/stdc++.h>\n#define ll long long\n#define ull unsigned\
    \ long long\n#define ld long double\n#define pii pair<int, int>\n#define pll pair<ll\
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
    void solve(int case_no);\n\nsigned main() {\n    #ifndef ONLINE_JUDGE\n    freopen(\"\
    input.txt\", \"r\", stdin);\n    // freopen(\"output.txt\", \"w\", stdout);\n\
    \    #endif\n\tios::sync_with_stdio(false);\n\tcin.tie(NULL);\n\tcout.tie(NULL);\n\
    \tsrand(time(NULL));\n\tinit();\n\tint t = 1;\n\t// cin >> t;\n\tfor (int i =\
    \ 1; i <= t; i++) solve(i);\n}\n/*\n *\n */\n#line 1 \"Miscellaneous/LIS.hpp\"\
    \nvector<int> LIS(vector<int> arr, bool strict = true) {\n\tvector<int> sub;\n\
    \tfor (int x : arr) {\n\t\tif (sub.empty() || sub[sub.size() - 1] < x || (!strict\
    \ && sub[sub.size() - 1] == x)) { // Append to LIS if new element is >=/> last\
    \ element in LIS\n\t\t\tsub.push_back(x);\n\t\t} else {\n\t\t\tint idx = lower_bound(sub.begin(),\
    \ sub.end(), x + (!strict)) - sub.begin(); // Find the index of the smallest number\
    \ >/>= x\n\t\t\tsub[idx] = x;\n\t\t}\n\t}\n\treturn sub;\n}\n#line 5 \"Tests/Longest_Increasing_Subsequence.test.cpp\"\
    \n\nvoid init() {\n\t// initialize\n\n}\nvoid solve(int case_no) {\n\t// implementation\n\
    \tint n;\n\tcin >> n;\n\tvector<int> v(n);\n\tfor (int i = 0; i < n; i++) cin\
    \ >> v[i];\n\tcout << LIS(v).size() << endl;\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D\"\n\n\
    #include \"../header.cpp\"\n#include \"../Miscellaneous/LIS.hpp\"\n\nvoid init()\
    \ {\n\t// initialize\n\n}\nvoid solve(int case_no) {\n\t// implementation\n\t\
    int n;\n\tcin >> n;\n\tvector<int> v(n);\n\tfor (int i = 0; i < n; i++) cin >>\
    \ v[i];\n\tcout << LIS(v).size() << endl;\n}\n"
  dependsOn:
  - header.cpp
  - Miscellaneous/LIS.hpp
  isVerificationFile: true
  path: Tests/Longest_Increasing_Subsequence.test.cpp
  requiredBy: []
  timestamp: '2022-02-26 00:12:47+08:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Tests/Longest_Increasing_Subsequence.test.cpp
layout: document
redirect_from:
- /verify/Tests/Longest_Increasing_Subsequence.test.cpp
- /verify/Tests/Longest_Increasing_Subsequence.test.cpp.html
title: Tests/Longest_Increasing_Subsequence.test.cpp
---
