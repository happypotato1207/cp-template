---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Tree/HLD.hpp\"\n// Code: HLD (range assign range query max\
    \ on tree)\nconst int mxN = 2e5 + 1;\n// segtree lazy\nint seg[4 * mxN], lazy[4\
    \ * mxN];\nbool marked[mxN];\nvoid pushdown(int idx) {\n    if (marked[idx]) {\n\
    \        seg[(idx << 1)] = lazy[idx];\n        seg[(idx << 1) + 1] = lazy[idx];\n\
    \        lazy[(idx << 1)] = lazy[idx];\n        lazy[(idx << 1) + 1] = lazy[idx];\n\
    \        lazy[idx] = 0;\n        marked[(idx << 1)] = true;\n        marked[(idx\
    \ << 1) + 1] = true;\n        marked[idx] = false;\n    }\n}\nvoid SegUpdate(int\
    \ tl, int tr, int val, int l = 1, int r = mxN - 1, int idx = 1) {\n    if (tl\
    \ <= l && r <= tr) {\n        seg[idx] = val;\n        lazy[idx] = val;\n    \
    \    marked[idx] = true;\n        return;\n    }\n    pushdown(idx);\n    int\
    \ mid = (l + r) >> 1;\n    if (tl <= mid) SegUpdate(tl, min(tr, mid), val, l,\
    \ mid, (idx << 1));\n    if (tr > mid) SegUpdate(max(tl, mid + 1), tr, val, mid\
    \ + 1, r, (idx << 1) + 1);\n    seg[idx] = max(seg[(idx << 1)], seg[(idx << 1)\
    \ + 1]);\n}\nint SegQuery(int tl, int tr, int l = 1, int r = mxN - 1, int idx\
    \ = 1) {\n    if (tl <= l && r <= tr) return seg[idx];\n    pushdown(idx);\n \
    \   int mid = (l + r) >> 1;\n    int res = 0;\n    if (tl <= mid) res = max(res,\
    \ SegQuery(tl, min(tr, mid), l, mid, (idx << 1)));\n    if (tr > mid) res = max(res,\
    \ SegQuery(max(tl, mid + 1), tr, mid + 1, r, (idx << 1) + 1));\n    return res;\n\
    }\n// hld\nvector<int> adj[mxN];\nint par[mxN], rr[mxN], sz[mxN], heavy[mxN];\n\
    int root[mxN], corr[mxN];\nint n;\nvoid HLDInit(int u = 1, int pp = 0) {\n   \
    \ par[u] = pp;\n    rr[u] = rr[pp] + 1;\n    sz[u] = 1;\n    pii big = {-1, -1};\n\
    \    for (int v : adj[u]) {\n        if (v != pp) {\n            HLDInit(v, u);\n\
    \            sz[u] += sz[v];\n            if (sz[v] > big.ff) big = {sz[v], v};\n\
    \        }\n    }\n    heavy[u] = big.ss;\n}\nint segptr = 1;\nvoid HLDProcess(int\
    \ u = 1, int pp = 0, int high = 1) {\n    root[u] = high;\n    corr[u] = segptr++;\n\
    \    if (heavy[u] == -1) return;\n    HLDProcess(heavy[u], u, high);\n    for\
    \ (int v : adj[u]) {\n        if (v != heavy[u] && v != pp) HLDProcess(v, u, v);\n\
    \    }\n}\nint HLDLCA(int u, int v) {\n    while (root[u] != root[v]) {\n    \
    \    if (rr[root[u]] > rr[root[v]]) swap(u, v);\n        v = par[root[v]];\n \
    \   }\n    return (rr[u] < rr[v] ? u : v);\n}\nvoid HLDUpdateAnces(int u, int\
    \ v, int val) {\n    int ptr1, ptr2;\n    while (root[u] != root[v]) {\n     \
    \   ptr1 = corr[u]; ptr2 = corr[root[u]];\n        if (ptr1 > ptr2) swap(ptr1,\
    \ ptr2);\n        SegUpdate(ptr1, ptr2, val);\n        u = par[root[u]];\n   \
    \ }\n    ptr1 = corr[u]; ptr2 = corr[v];\n    if (ptr1 > ptr2) swap(ptr1, ptr2);\n\
    \    SegUpdate(ptr1, ptr2, val);\n}\nvoid HLDUpdate(int u, int v, int val) {\n\
    \    int lca = HLDLCA(u, v);\n    HLDUpdateAnces(u, lca, val);\n    HLDUpdateAnces(v,\
    \ lca, val);\n}\nint HLDQueryAnces(int u, int v) {\n    int ptr1, ptr2;\n    int\
    \ res = 0;\n    while (root[u] != root[v]) {\n        ptr1 = corr[u]; ptr2 = corr[root[u]];\n\
    \        if (ptr1 > ptr2) swap(ptr1, ptr2);\n        res = max(res, SegQuery(ptr1,\
    \ ptr2));\n        u = par[root[u]];\n    }\n    ptr1 = corr[u]; ptr2 = corr[v];\n\
    \    if (ptr1 > ptr2) swap(ptr1, ptr2);\n    res = max(res, SegQuery(ptr1, ptr2));\n\
    \    return res;\n}\nint HLDQuery(int u, int v) {\n    int lca = HLDLCA(u, v);\n\
    \    return max(HLDQueryAnces(u, lca), HLDQueryAnces(v, lca));\n}\n// Note: Initialise\
    \ segment tree using HLD pointer (corr[u])\n"
  code: "// Code: HLD (range assign range query max on tree)\nconst int mxN = 2e5\
    \ + 1;\n// segtree lazy\nint seg[4 * mxN], lazy[4 * mxN];\nbool marked[mxN];\n\
    void pushdown(int idx) {\n    if (marked[idx]) {\n        seg[(idx << 1)] = lazy[idx];\n\
    \        seg[(idx << 1) + 1] = lazy[idx];\n        lazy[(idx << 1)] = lazy[idx];\n\
    \        lazy[(idx << 1) + 1] = lazy[idx];\n        lazy[idx] = 0;\n        marked[(idx\
    \ << 1)] = true;\n        marked[(idx << 1) + 1] = true;\n        marked[idx]\
    \ = false;\n    }\n}\nvoid SegUpdate(int tl, int tr, int val, int l = 1, int r\
    \ = mxN - 1, int idx = 1) {\n    if (tl <= l && r <= tr) {\n        seg[idx] =\
    \ val;\n        lazy[idx] = val;\n        marked[idx] = true;\n        return;\n\
    \    }\n    pushdown(idx);\n    int mid = (l + r) >> 1;\n    if (tl <= mid) SegUpdate(tl,\
    \ min(tr, mid), val, l, mid, (idx << 1));\n    if (tr > mid) SegUpdate(max(tl,\
    \ mid + 1), tr, val, mid + 1, r, (idx << 1) + 1);\n    seg[idx] = max(seg[(idx\
    \ << 1)], seg[(idx << 1) + 1]);\n}\nint SegQuery(int tl, int tr, int l = 1, int\
    \ r = mxN - 1, int idx = 1) {\n    if (tl <= l && r <= tr) return seg[idx];\n\
    \    pushdown(idx);\n    int mid = (l + r) >> 1;\n    int res = 0;\n    if (tl\
    \ <= mid) res = max(res, SegQuery(tl, min(tr, mid), l, mid, (idx << 1)));\n  \
    \  if (tr > mid) res = max(res, SegQuery(max(tl, mid + 1), tr, mid + 1, r, (idx\
    \ << 1) + 1));\n    return res;\n}\n// hld\nvector<int> adj[mxN];\nint par[mxN],\
    \ rr[mxN], sz[mxN], heavy[mxN];\nint root[mxN], corr[mxN];\nint n;\nvoid HLDInit(int\
    \ u = 1, int pp = 0) {\n    par[u] = pp;\n    rr[u] = rr[pp] + 1;\n    sz[u] =\
    \ 1;\n    pii big = {-1, -1};\n    for (int v : adj[u]) {\n        if (v != pp)\
    \ {\n            HLDInit(v, u);\n            sz[u] += sz[v];\n            if (sz[v]\
    \ > big.ff) big = {sz[v], v};\n        }\n    }\n    heavy[u] = big.ss;\n}\nint\
    \ segptr = 1;\nvoid HLDProcess(int u = 1, int pp = 0, int high = 1) {\n    root[u]\
    \ = high;\n    corr[u] = segptr++;\n    if (heavy[u] == -1) return;\n    HLDProcess(heavy[u],\
    \ u, high);\n    for (int v : adj[u]) {\n        if (v != heavy[u] && v != pp)\
    \ HLDProcess(v, u, v);\n    }\n}\nint HLDLCA(int u, int v) {\n    while (root[u]\
    \ != root[v]) {\n        if (rr[root[u]] > rr[root[v]]) swap(u, v);\n        v\
    \ = par[root[v]];\n    }\n    return (rr[u] < rr[v] ? u : v);\n}\nvoid HLDUpdateAnces(int\
    \ u, int v, int val) {\n    int ptr1, ptr2;\n    while (root[u] != root[v]) {\n\
    \        ptr1 = corr[u]; ptr2 = corr[root[u]];\n        if (ptr1 > ptr2) swap(ptr1,\
    \ ptr2);\n        SegUpdate(ptr1, ptr2, val);\n        u = par[root[u]];\n   \
    \ }\n    ptr1 = corr[u]; ptr2 = corr[v];\n    if (ptr1 > ptr2) swap(ptr1, ptr2);\n\
    \    SegUpdate(ptr1, ptr2, val);\n}\nvoid HLDUpdate(int u, int v, int val) {\n\
    \    int lca = HLDLCA(u, v);\n    HLDUpdateAnces(u, lca, val);\n    HLDUpdateAnces(v,\
    \ lca, val);\n}\nint HLDQueryAnces(int u, int v) {\n    int ptr1, ptr2;\n    int\
    \ res = 0;\n    while (root[u] != root[v]) {\n        ptr1 = corr[u]; ptr2 = corr[root[u]];\n\
    \        if (ptr1 > ptr2) swap(ptr1, ptr2);\n        res = max(res, SegQuery(ptr1,\
    \ ptr2));\n        u = par[root[u]];\n    }\n    ptr1 = corr[u]; ptr2 = corr[v];\n\
    \    if (ptr1 > ptr2) swap(ptr1, ptr2);\n    res = max(res, SegQuery(ptr1, ptr2));\n\
    \    return res;\n}\nint HLDQuery(int u, int v) {\n    int lca = HLDLCA(u, v);\n\
    \    return max(HLDQueryAnces(u, lca), HLDQueryAnces(v, lca));\n}\n// Note: Initialise\
    \ segment tree using HLD pointer (corr[u])\n"
  dependsOn: []
  isVerificationFile: false
  path: Tree/HLD.hpp
  requiredBy: []
  timestamp: '2022-05-05 00:21:49+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Tree/HLD.hpp
layout: document
redirect_from:
- /library/Tree/HLD.hpp
- /library/Tree/HLD.hpp.html
title: Tree/HLD.hpp
---
