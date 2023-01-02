---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Tests/Big Mod.test.cpp
    title: Tests/Big Mod.test.cpp
  - icon: ':heavy_check_mark:'
    path: Tests/Convolution.test.cpp
    title: Tests/Convolution.test.cpp
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
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ header.cpp: line 13: unable to process #include in #if / #ifdef / #ifndef other\
    \ than include guards\n"
  code: "#include <bits/stdc++.h>\n#define ll long long\n#define ld long double\n\
    #define pii pair<int, int>\n#define pll pair<ll int, ll int>\n#define ff first\n\
    #define ss second\n#define pb push_back\n#pragma GCC optimize(\"O2\")\nusing namespace\
    \ std;\n// debug template\n#ifdef POTATO\n#include \"debug.h\"\n#define debug(...)\
    \ cerr << \"[\" << #__VA_ARGS__ << \"] = [\"; _print(__VA_ARGS__)\n#else\n#define\
    \ debug(...)\n#endif\n// convenient functions\ninline void yes() { cout << \"\
    YES\" << endl; return; }\ninline void no() { cout << \"NO\" << endl; return; }\n\
    template <class T>\ninline void out(T temp) { cout << temp << endl; return; }\n\
    // global\n\nvoid init();\nvoid solve(int &case_no);\n\nsigned main() {\n#ifdef\
    \ POTATO\n    freopen(\"../input.txt\", \"r\", stdin);\n    // freopen(\"../output.txt\"\
    , \"w\", stdout);\n#endif\n    ios::sync_with_stdio(false);\n    cin.tie(NULL);\n\
    \    cout.tie(NULL);\n    srand(time(NULL));\n    init();\n    int t = 1;\n  \
    \  // cin >> t;\n    for (int i = 1; i <= t; i++) solve(i);\n}\n/*\n\n*/\n"
  dependsOn: []
  isVerificationFile: false
  path: header.cpp
  requiredBy: []
  timestamp: '2023-01-02 22:59:31+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Tests/Static_RMQ.test.cpp
  - Tests/Interval_Tree.test.cpp
  - Tests/Convolution.test.cpp
  - Tests/Big Mod.test.cpp
  - Tests/Matching_on_Bipartite_Graph.test.cpp
  - Tests/Point_Add_Range_Sum_(Assign).test.cpp
  - Tests/Longest_Increasing_Subsequence.test.cpp
  - Tests/Minimum_Spanning_Tree.test.cpp
  - Tests/UnionFind.test.cpp
  - Tests/Point_Add_Range_Sum_(Add).test.cpp
documentation_of: header.cpp
layout: document
redirect_from:
- /library/header.cpp
- /library/header.cpp.html
title: header.cpp
---
