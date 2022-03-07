---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Data_Structures/Interval_Tree.hpp
    title: Data_Structures/Interval_Tree.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/1148
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/1148
  bundledCode: "#line 1 \"Tests/Interval_Tree.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/1148\"\
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
    \ t;\n\tfor (int i = 1; i <= t; i++) solve(i);\n}\n/*\n *\n */\n#line 1 \"Data_Structures/Interval_Tree.hpp\"\
    \n// Template: Interval Tree (Selective)\n// Doesn't delete range when it overlaps\
    \ but doesn't completely cover/get covered\n// Deletes the smaller/larger interval\
    \ depending on [keep_small]\nclass IntervalTree_Selective {\npublic:\n    map<int,\
    \ int> range;\n    IntervalTree_Selective(bool keep_small) {\n        small =\
    \ keep_small;\n    }\n    void AddRange(int l, int r) {\n        if (small) {\n\
    \            CheckContain(l, r);\n            if (it != range.end()) return;\n\
    \            while (true) {\n                CheckContainBy(l, r);\n         \
    \       if (it == range.end()) break;\n                range.erase(it);\n    \
    \        }\n        } else {\n            CheckContainBy(l, r);\n            if\
    \ (it != range.end()) return;\n            while (true) {\n                CheckContain(l,\
    \ r);\n                if (it == range.end()) break;\n                range.erase(it);\n\
    \            }\n        }\n        range[l] = r;\n    }\n    pair<int, int> GetRangeIn(int\
    \ x) {\n        // returns the range which includes x (first <= x <= second)\n\
    \        if (range.empty()) return {-1, -1};\n        it = range.upper_bound(x);\n\
    \        if (it == range.begin()) return {-1, -1};\n        --it;\n        if\
    \ (!(it->first <= x && x <= it->second)) return {-1, -1};\n        return {it->first,\
    \ it->second};\n    }\n    pair<int, int> GetRangeLarger(int x) {\n        //\
    \ returns the range strictly larger than x (x < first)\n        if (range.empty())\
    \ return {-1, -1};\n        it = range.upper_bound(x);\n        if (it == range.end())\
    \ return {-1, -1};\n        return {it->first, it->second};\n    }\nprivate:\n\
    \    bool small = true;\n    map<int, int>::iterator it;\n    void CheckContain(int\
    \ l, int r) { \n        // assign pointer of range being contained\n        if\
    \ (range.empty()) {\n            it = range.end();\n            return;\n    \
    \    }\n        it = range.lower_bound(l);\n        if (it != range.end() && it->second\
    \ > r) it = range.end();\n        return;\n    }\n    void CheckContainBy(int\
    \ l, int r) {\n        // assign pointer of range containing\n        if (range.empty())\
    \ {\n            it = range.end();\n            return;\n        }\n        it\
    \ = range.upper_bound(l);\n        if (it == range.begin()) {\n            it\
    \ = range.end();\n            return;\n        }\n        --it;\n        if (it->second\
    \ < r) it = range.end();\n        return;\n    }\n};\n#line 5 \"Tests/Interval_Tree.test.cpp\"\
    \n\nvoid init() {\n\t// initialize\n    \n}\nvoid solve(int case_no) {\n\t// implementation\n\
    \    int n, m;\n    vector<IntervalTree_Selective> record;\n    while (true) {\n\
    \        cin >> n >> m;\n        if (n == 0 && m == 0) return;\n        record.clear();\n\
    \        IntervalTree_Selective temp(false);\n        for (int i = 0; i <= m;\
    \ i++) record.pb(temp);\n        int r;\n        cin >> r;\n        map<pii, int>\
    \ mp;\n        while (r--) {\n            int t, x, y, s;\n            cin >>\
    \ t >> x >> y >> s;\n            if (s == 1) mp[{x, y}] = t;\n            else\
    \ record[y].AddRange(mp[{x, y}], t);\n        }\n        int q;\n        cin >>\
    \ q;\n        while (q--) {\n            int lb, ub, x;\n            cin >> lb\
    \ >> ub >> x;\n            int ans = 0;\n            int prev = lb;\n        \
    \    if (record[x].GetRangeIn(lb).first == -1) {\n                prev = record[x].GetRangeLarger(lb).first;\n\
    \            }\n            while (prev < ub && prev != -1) {\n              \
    \  pii cur = record[x].GetRangeIn(prev);\n                cur.ss = min(cur.ss,\
    \ ub);\n                if (cur.ss == prev) {\n                    prev = record[x].GetRangeLarger(prev).first;\n\
    \                } else {\n                    ans += cur.ss - prev;\n       \
    \             prev = cur.ss;\n                }\n            }\n            out(ans);\n\
    \        }\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/1148\"\n\n#include\
    \ \"../header.cpp\"\n#include \"../Data_Structures/Interval_Tree.hpp\"\n\nvoid\
    \ init() {\n\t// initialize\n    \n}\nvoid solve(int case_no) {\n\t// implementation\n\
    \    int n, m;\n    vector<IntervalTree_Selective> record;\n    while (true) {\n\
    \        cin >> n >> m;\n        if (n == 0 && m == 0) return;\n        record.clear();\n\
    \        IntervalTree_Selective temp(false);\n        for (int i = 0; i <= m;\
    \ i++) record.pb(temp);\n        int r;\n        cin >> r;\n        map<pii, int>\
    \ mp;\n        while (r--) {\n            int t, x, y, s;\n            cin >>\
    \ t >> x >> y >> s;\n            if (s == 1) mp[{x, y}] = t;\n            else\
    \ record[y].AddRange(mp[{x, y}], t);\n        }\n        int q;\n        cin >>\
    \ q;\n        while (q--) {\n            int lb, ub, x;\n            cin >> lb\
    \ >> ub >> x;\n            int ans = 0;\n            int prev = lb;\n        \
    \    if (record[x].GetRangeIn(lb).first == -1) {\n                prev = record[x].GetRangeLarger(lb).first;\n\
    \            }\n            while (prev < ub && prev != -1) {\n              \
    \  pii cur = record[x].GetRangeIn(prev);\n                cur.ss = min(cur.ss,\
    \ ub);\n                if (cur.ss == prev) {\n                    prev = record[x].GetRangeLarger(prev).first;\n\
    \                } else {\n                    ans += cur.ss - prev;\n       \
    \             prev = cur.ss;\n                }\n            }\n            out(ans);\n\
    \        }\n    }\n}\n"
  dependsOn:
  - header.cpp
  - Data_Structures/Interval_Tree.hpp
  isVerificationFile: true
  path: Tests/Interval_Tree.test.cpp
  requiredBy: []
  timestamp: '2022-03-07 22:16:10+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tests/Interval_Tree.test.cpp
layout: document
redirect_from:
- /verify/Tests/Interval_Tree.test.cpp
- /verify/Tests/Interval_Tree.test.cpp.html
title: Tests/Interval_Tree.test.cpp
---
