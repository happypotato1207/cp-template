---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Data_Structures/Sparse_Table.hpp
    title: Data_Structures/Sparse_Table.hpp
  - icon: ':heavy_check_mark:'
    path: header.cpp
    title: header.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/staticrmq
    links:
    - https://judge.yosupo.jp/problem/staticrmq
  bundledCode: "#line 1 \"Tests/Static_RMQ.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\
    \n\n#line 1 \"header.cpp\"\n#include <bits/stdc++.h>\n#define ll long long\n#define\
    \ ull unsigned long long\n#define ld long double\n#define pii pair<int, int>\n\
    #define pll pair<ll int, ll int>\n#define vi vector<int>\n#define vl vector<ll\
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
    \ t;\n\tfor (int i = 1; i <= t; i++) solve(i);\n}\n/*\n *\n */\n#line 1 \"Data_Structures/Sparse_Table.hpp\"\
    \n// Template: Sparse Table\n// Supports range query in O(n log n) / O(1)\n//\
    \ Offline DS - Cannot update after compute\nclass SparseTable {\npublic:\n   \
    \ // Method 1: Construct using size\n    SparseTable(int sz) {\n        n = sz\
    \ + 1;\n        sp.push_back({});\n        sp[0].resize(n);\n    }\n    // Update()\
    \ can only call before Compute()\n    void Update(int pos, int val) {\n      \
    \  if (finished) return;\n        sp[0][pos] = val;\n    }\n    // Method 2: Construct\
    \ using vector\n    SparseTable(vector<int> &v) {\n        n = v.size();\n   \
    \     sp.push_back(v);\n    }\n    // Computes the Sparse Table\n    void Compute()\
    \ {\n        for (int depth = 1; (1 << depth) <= n; depth++) {\n            sp.push_back({});\n\
    \            for (int j = 0; j < n - (1 << depth) + 1; j++) {\n              \
    \  // change function below\n                sp[depth].push_back(min(sp[depth\
    \ - 1][j], sp[depth - 1][j + (1 << (depth - 1))]));\n            }\n        }\n\
    \        finished = true;\n    }\n    // Query [l, r]\n    int Query(int l, int\
    \ r) {\n        if (l > r || l < 0 || r >= n) return 0;\n        if (l == r) return\
    \ sp[0][l];\n        int depth = floor(log2(r - l));\n        // change below\n\
    \        return min(sp[depth][l], sp[depth][r - (1 << depth) + 1]);\n    }\nprivate:\n\
    \    int n;\n    vector<vector<int> > sp;\n    bool finished = false;\n};\n#line\
    \ 5 \"Tests/Static_RMQ.test.cpp\"\n\nvoid init() {\n\t// initialize\n    \n}\n\
    void solve(int case_no) {\n\t// implementation\n    int n, q;\n    cin >> n >>\
    \ q;\n    vector<int> v(n);\n    for (int i = 0; i < n; i++) cin >> v[i];\n  \
    \  SparseTable ST(v);\n    ST.Compute();\n    while (q--) {\n        int l, r;\n\
    \        cin >> l >> r;\n        cout << ST.Query(l, r - 1) << endl;\n    }\n\
    }\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n\n#include\
    \ \"../header.cpp\"\n#include \"../Data_Structures/Sparse_Table.hpp\"\n\nvoid\
    \ init() {\n\t// initialize\n    \n}\nvoid solve(int case_no) {\n\t// implementation\n\
    \    int n, q;\n    cin >> n >> q;\n    vector<int> v(n);\n    for (int i = 0;\
    \ i < n; i++) cin >> v[i];\n    SparseTable ST(v);\n    ST.Compute();\n    while\
    \ (q--) {\n        int l, r;\n        cin >> l >> r;\n        cout << ST.Query(l,\
    \ r - 1) << endl;\n    }\n}\n"
  dependsOn:
  - header.cpp
  - Data_Structures/Sparse_Table.hpp
  isVerificationFile: true
  path: Tests/Static_RMQ.test.cpp
  requiredBy: []
  timestamp: '2022-03-07 23:53:12+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tests/Static_RMQ.test.cpp
layout: document
redirect_from:
- /verify/Tests/Static_RMQ.test.cpp
- /verify/Tests/Static_RMQ.test.cpp.html
title: Tests/Static_RMQ.test.cpp
---
