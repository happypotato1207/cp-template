---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: Data_Structures/Interval_Tree.hpp
    title: Data_Structures/Interval_Tree.hpp
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/1148
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/1148
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.1/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 400, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ header.cpp: line 13: unable to process #include in #if / #ifdef / #ifndef other\
    \ than include guards\n"
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
  timestamp: '2023-01-02 22:59:31+08:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: Tests/Interval_Tree.test.cpp
layout: document
redirect_from:
- /verify/Tests/Interval_Tree.test.cpp
- /verify/Tests/Interval_Tree.test.cpp.html
title: Tests/Interval_Tree.test.cpp
---
