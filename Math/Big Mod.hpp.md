---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: Math/NTT.hpp
    title: Math/NTT.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/Big Mod.hpp\"\n// Template: Big Mod / Mod inverse\n\
    // Finds b^p mod m in O(log p)\n// Mod inverse is application of Fermat's little\
    \ theorem\n// [MOD] must be a prime to use modinv()\n\nconst int MOD = 1e9 + 7;\n\
    int bigmod(int b, int p, const int &m = MOD) {\n\tb %= m;\n\tif (b == 0) return\
    \ 0;\n\tint res = 1;\n\twhile (p) {\n\t\tif (p & 1) res = (int)(1LL * res * b\
    \ % m);\n\t\tp >>= 1; b = (int)(1LL * b * b % m);\n\t}\n\treturn res;\n}\nint\
    \ modinv(int x, const int &m = MOD) {\n\treturn bigmod(x, m - 2);\n}\n"
  code: "// Template: Big Mod / Mod inverse\n// Finds b^p mod m in O(log p)\n// Mod\
    \ inverse is application of Fermat's little theorem\n// [MOD] must be a prime\
    \ to use modinv()\n\nconst int MOD = 1e9 + 7;\nint bigmod(int b, int p, const\
    \ int &m = MOD) {\n\tb %= m;\n\tif (b == 0) return 0;\n\tint res = 1;\n\twhile\
    \ (p) {\n\t\tif (p & 1) res = (int)(1LL * res * b % m);\n\t\tp >>= 1; b = (int)(1LL\
    \ * b * b % m);\n\t}\n\treturn res;\n}\nint modinv(int x, const int &m = MOD)\
    \ {\n\treturn bigmod(x, m - 2);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: Math/Big Mod.hpp
  requiredBy:
  - Math/NTT.hpp
  timestamp: '2023-01-02 23:08:53+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Math/Big Mod.hpp
layout: document
redirect_from:
- /library/Math/Big Mod.hpp
- /library/Math/Big Mod.hpp.html
title: Math/Big Mod.hpp
---
