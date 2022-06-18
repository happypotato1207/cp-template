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
  bundledCode: "#line 1 \"Data_Structures/Implicit_Segment_Tree.hpp\"\n// Range Assign\
    \ Range Sum Query (Implicit)\n// Tested on CF, validate later\nstruct node {\n\
    \    int val;\n    int l, r;\n    node *left = nullptr, *right = nullptr;\n  \
    \  bool marked = false;\n    int lazy = 0;\n    node(int l, int r, int val = 0):\
    \ l(l), r(r), val(val) {}\n};\nnode* seg = new node(0, 100000);\nvoid extend(node*\
    \ cur) {\n    if (cur->left != nullptr) return;\n    int mid = (cur->l + cur->r)\
    \ >> 1;\n    cur->left = new node(cur->l, mid);\n    cur->right = new node(mid\
    \ + 1, cur->r);\n    return;\n}\nvoid pushdown(node* cur) {\n    extend(cur);\n\
    \    if (cur->marked) {\n        int mid = (cur->l + cur->r) >> 1;\n        cur->left->val\
    \ = cur->lazy * (mid - cur->l + 1);\n        cur->right->val = cur->lazy * (cur->r\
    \ - mid);\n        cur->left->lazy = cur->lazy;\n        cur->right->lazy = cur->lazy;\n\
    \        cur->lazy = 0;\n        cur->left->marked = true;\n        cur->right->marked\
    \ = true;\n        cur->marked = false;\n    }\n    return;\n}\nvoid update(int\
    \ tl, int tr, int val, node* cur = seg) {\n    if (tl <= cur->l && cur->r <= tr)\
    \ {\n        cur->val = val * (cur->r - cur->l + 1);\n        cur->marked = true;\n\
    \        cur->lazy = val;\n        return;\n    }\n    pushdown(cur);\n    int\
    \ mid = (cur->l + cur->r) >> 1;\n    if (tl <= mid) update(tl, min(tr, mid), val,\
    \ cur->left);\n    if (tr > mid) update(max(tl, mid + 1), tr, val, cur->right);\n\
    \    cur->val = cur->left->val + cur->right->val;\n    return;\n}\nint query(int\
    \ tl, int tr, node* cur = seg) {\n    if (tl <= cur->l && cur-> r <= tr) {\n \
    \       return cur->val;\n    }\n    pushdown(cur);\n    int mid = (cur->l + cur->r)\
    \ >> 1;\n    int res = 0;\n    if (tl <= mid) res += query(tl, min(tr, mid), cur->left);\n\
    \    if (tr > mid) res += query(max(tl, mid + 1), tr, cur->right);\n    return\
    \ res;\n}\n"
  code: "// Range Assign Range Sum Query (Implicit)\n// Tested on CF, validate later\n\
    struct node {\n    int val;\n    int l, r;\n    node *left = nullptr, *right =\
    \ nullptr;\n    bool marked = false;\n    int lazy = 0;\n    node(int l, int r,\
    \ int val = 0): l(l), r(r), val(val) {}\n};\nnode* seg = new node(0, 100000);\n\
    void extend(node* cur) {\n    if (cur->left != nullptr) return;\n    int mid =\
    \ (cur->l + cur->r) >> 1;\n    cur->left = new node(cur->l, mid);\n    cur->right\
    \ = new node(mid + 1, cur->r);\n    return;\n}\nvoid pushdown(node* cur) {\n \
    \   extend(cur);\n    if (cur->marked) {\n        int mid = (cur->l + cur->r)\
    \ >> 1;\n        cur->left->val = cur->lazy * (mid - cur->l + 1);\n        cur->right->val\
    \ = cur->lazy * (cur->r - mid);\n        cur->left->lazy = cur->lazy;\n      \
    \  cur->right->lazy = cur->lazy;\n        cur->lazy = 0;\n        cur->left->marked\
    \ = true;\n        cur->right->marked = true;\n        cur->marked = false;\n\
    \    }\n    return;\n}\nvoid update(int tl, int tr, int val, node* cur = seg)\
    \ {\n    if (tl <= cur->l && cur->r <= tr) {\n        cur->val = val * (cur->r\
    \ - cur->l + 1);\n        cur->marked = true;\n        cur->lazy = val;\n    \
    \    return;\n    }\n    pushdown(cur);\n    int mid = (cur->l + cur->r) >> 1;\n\
    \    if (tl <= mid) update(tl, min(tr, mid), val, cur->left);\n    if (tr > mid)\
    \ update(max(tl, mid + 1), tr, val, cur->right);\n    cur->val = cur->left->val\
    \ + cur->right->val;\n    return;\n}\nint query(int tl, int tr, node* cur = seg)\
    \ {\n    if (tl <= cur->l && cur-> r <= tr) {\n        return cur->val;\n    }\n\
    \    pushdown(cur);\n    int mid = (cur->l + cur->r) >> 1;\n    int res = 0;\n\
    \    if (tl <= mid) res += query(tl, min(tr, mid), cur->left);\n    if (tr > mid)\
    \ res += query(max(tl, mid + 1), tr, cur->right);\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: Data_Structures/Implicit_Segment_Tree.hpp
  requiredBy: []
  timestamp: '2022-06-18 16:29:29+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Data_Structures/Implicit_Segment_Tree.hpp
layout: document
redirect_from:
- /library/Data_Structures/Implicit_Segment_Tree.hpp
- /library/Data_Structures/Implicit_Segment_Tree.hpp.html
title: Data_Structures/Implicit_Segment_Tree.hpp
---
