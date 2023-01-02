---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: Math/NTT.hpp
    title: Math/NTT.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: Tests/Big Mod.test.cpp
    title: Tests/Big Mod.test.cpp
  - icon: ':heavy_check_mark:'
    path: Tests/Convolution.test.cpp
    title: Tests/Convolution.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/Big Mod.hpp\"\n// Template: Big Mod / Mod inverse\n\
    // Finds b^p mod m in O(log p)\n// Mod inverse is application of Fermat's little\
    \ theorem\n// [MOD] must be a prime to use modinv()\n// Please define MOD before\
    \ these functions (or change the parameter accordingly)\n\n//const int MOD = 1e9\
    \ + 7;\nint bigmod(int b, int p, const int &m = MOD) {\n\tb %= m;\n\tif (b ==\
    \ 0) return 0;\n\tint res = 1;\n\twhile (p) {\n\t\tif (p & 1) res = (int)(1LL\
    \ * res * b % m);\n\t\tp >>= 1; b = (int)(1LL * b * b % m);\n\t}\n\treturn res;\n\
    }\nint modinv(int x, const int &m = MOD) {\n\treturn bigmod(x, m - 2);\n}\n"
  code: "// Template: Big Mod / Mod inverse\n// Finds b^p mod m in O(log p)\n// Mod\
    \ inverse is application of Fermat's little theorem\n// [MOD] must be a prime\
    \ to use modinv()\n// Please define MOD before these functions (or change the\
    \ parameter accordingly)\n\n//const int MOD = 1e9 + 7;\nint bigmod(int b, int\
    \ p, const int &m = MOD) {\n\tb %= m;\n\tif (b == 0) return 0;\n\tint res = 1;\n\
    \twhile (p) {\n\t\tif (p & 1) res = (int)(1LL * res * b % m);\n\t\tp >>= 1; b\
    \ = (int)(1LL * b * b % m);\n\t}\n\treturn res;\n}\nint modinv(int x, const int\
    \ &m = MOD) {\n\treturn bigmod(x, m - 2);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: Math/Big Mod.hpp
  requiredBy:
  - Math/NTT.hpp
  timestamp: '2023-01-02 23:13:52+08:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - Tests/Convolution.test.cpp
  - Tests/Big Mod.test.cpp
documentation_of: Math/Big Mod.hpp
layout: document
redirect_from:
- /library/Math/Big Mod.hpp
- /library/Math/Big Mod.hpp.html
title: Math/Big Mod.hpp
---
