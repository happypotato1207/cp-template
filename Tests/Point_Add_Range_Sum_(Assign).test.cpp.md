---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Data_Structures/Segment_Tree_Point_Assign_Range_Sum.hpp
    title: Data_Structures/Segment_Tree_Point_Assign_Range_Sum.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/point_add_range_sum
    links:
    - https://judge.yosupo.jp/problem/point_add_range_sum
  bundledCode: "#line 1 \"Tests/Point_Add_Range_Sum_(Assign).test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\n#line 1 \"header.cpp\"\
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
    #ifndef ONLINE_JUDGE\n#define debug(...) cerr << \"[\" << #__VA_ARGS__ << \"]\
    \ = [\"; _print(__VA_ARGS__)\n#else\n#define debug(...)\n#endif\n//\ninline void\
    \ yes() {\n\tcout << \"YES\" << endl;\n\treturn;\n}\ninline void no() {\n\tcout\
    \ << \"NO\" << endl;\n\treturn;\n}\ntemplate <class T>\ninline void out(T temp)\
    \ {\n\tcout << temp << endl;\n\treturn;\n}\n// global variables\n\nvoid init();\n\
    void solve(int case_no);\n\nsigned main() {\n        #ifndef ONLINE_JUDGE\n  \
    \      // freopen(\"input.txt\", \"r\", stdin);\n        // freopen(\"output.txt\"\
    , \"w\", stdout);\n        #endif\n\tios::sync_with_stdio(false);\n\tcin.tie(NULL);\n\
    \tcout.tie(NULL);\n\tsrand(time(NULL));\n\tinit();\n\tint t = 1;\n\t// cin >>\
    \ t;\n\tfor (int i = 1; i <= t; i++) solve(i);\n}\n/*\n *\n */\n#line 1 \"Data_Structures/Segment_Tree_Point_Assign_Range_Sum.hpp\"\
    \nstruct Data {\n\tlong long int val = 0;\n};\nclass SegmentTree_PointAssignRangeSum\
    \ {\npublic:\n\tSegmentTree_PointAssignRangeSum(vector<Data> v) {\n\t\tarr = v;\n\
    \t\tn = arr.size();\n\t\tseg.resize((n << 1));\n\t\tBuild();\n\t}\n\tvoid Build()\
    \ {\n\t\tfor (int i = 0; i < n; i++) seg[i + n] = arr[i];\n\t\tfor (int i = n\
    \ - 1; i > 0; i--) seg[i] = Combine(seg[(i << 1)], seg[((i << 1) | 1)]);\n\t}\n\
    \tvoid Update(int ptr, Data new_val) {\n\t\tptr += n;\n\t\tseg[ptr] = new_val;\n\
    \t\tfor (; ptr > 1; ptr >>= 1) seg[(ptr >> 1)] = Combine(seg[ptr], seg[(ptr ^\
    \ 1)]);\n\t}\n\tData Query(int l, int r) { // query on interval [l, r]\n\t\tr++;\n\
    \t\tData ret;\n\t\tfor (l += n, r += n; l < r; l >>= 1, r >>= 1) {\n\t\t\tif (l\
    \ & 1) ret = Combine(ret, seg[l++]);\n\t\t\tif (r & 1) ret = Combine(ret, seg[--r]);\n\
    \t\t}\n\t\treturn ret;\n\t}\nprotected:\n\tint n;\n\tvector<Data> arr;\n\tvector<Data>\
    \ seg;\n\tData combine_ret;\n\tData Combine(Data x, Data y) { // remember to assign\
    \ everything, not add\n\t\tcombine_ret.val = x.val + y.val;\n\t\treturn combine_ret;\n\
    \t}\n};\n#line 5 \"Tests/Point_Add_Range_Sum_(Assign).test.cpp\"\n\nvoid init()\
    \ {\n\t\n}\nvoid solve(int case_no) {\n\tint n, q;\n\tcin >> n >> q;\n\tvector<Data>\
    \ v(n);\n\tfor (int i = 0; i < n; i++) cin >> v[i].val;\n\tSegmentTree_PointAssignRangeSum\
    \ ST(v);\n\twhile (q--) {\n\t\tint cmd;\n\t\tcin >> cmd;\n\t\tif (cmd == 0) {\n\
    \t\t\tData new_val;\n\t\t\tint ptr;\n\t\t\tcin >> ptr >> new_val.val;\n\t\t\t\
    new_val.val += v[ptr].val;\n\t\t\tv[ptr] = new_val;\n\t\t\tST.Update(ptr, new_val);\n\
    \t\t} else {\n\t\t\tint x, y;\n\t\t\tcin >> x >> y;\n\t\t\tcout << ST.Query(x,\
    \ y - 1).val << endl;\n\t\t}\n\t}\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/point_add_range_sum\"\n\
    \n#include \"../header.cpp\"\n#include \"../Data_Structures/Segment_Tree_Point_Assign_Range_Sum.hpp\"\
    \n\nvoid init() {\n\t\n}\nvoid solve(int case_no) {\n\tint n, q;\n\tcin >> n >>\
    \ q;\n\tvector<Data> v(n);\n\tfor (int i = 0; i < n; i++) cin >> v[i].val;\n\t\
    SegmentTree_PointAssignRangeSum ST(v);\n\twhile (q--) {\n\t\tint cmd;\n\t\tcin\
    \ >> cmd;\n\t\tif (cmd == 0) {\n\t\t\tData new_val;\n\t\t\tint ptr;\n\t\t\tcin\
    \ >> ptr >> new_val.val;\n\t\t\tnew_val.val += v[ptr].val;\n\t\t\tv[ptr] = new_val;\n\
    \t\t\tST.Update(ptr, new_val);\n\t\t} else {\n\t\t\tint x, y;\n\t\t\tcin >> x\
    \ >> y;\n\t\t\tcout << ST.Query(x, y - 1).val << endl;\n\t\t}\n\t}\n}\n"
  dependsOn:
  - header.cpp
  - Data_Structures/Segment_Tree_Point_Assign_Range_Sum.hpp
  isVerificationFile: true
  path: Tests/Point_Add_Range_Sum_(Assign).test.cpp
  requiredBy: []
  timestamp: '2022-03-01 01:28:11+08:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: Tests/Point_Add_Range_Sum_(Assign).test.cpp
layout: document
redirect_from:
- /verify/Tests/Point_Add_Range_Sum_(Assign).test.cpp
- /verify/Tests/Point_Add_Range_Sum_(Assign).test.cpp.html
title: Tests/Point_Add_Range_Sum_(Assign).test.cpp
---
