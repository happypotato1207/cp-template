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
  bundledCode: "#line 1 \"Math/Big Mod.hpp\"\n// Template: Big Mod / Mod inverse\n\
    // Finds b^p mod m in O(log p)\n// Mod inverse is application of Fermat's little\
    \ theorem\n// [MOD] must be a prime\n\nconst int MOD = 998244353;\nint bigmod(int\
    \ b, int p) {\n\tb %= MOD;\n\tif (b == 0) return 0;\n\tint res = 1;\n\twhile (p)\
    \ {\n\t\tif (p & 1) res = (int)(1LL * res * b % MOD);\n\t\tp >>= 1; b = (int)(1LL\
    \ * b * b % MOD);\n\t}\n\treturn res;\n}\nint modinv(int x) {\n\treturn bigmod(x,\
    \ MOD - 2);\n}\n"
  code: "// Template: Big Mod / Mod inverse\n// Finds b^p mod m in O(log p)\n// Mod\
    \ inverse is application of Fermat's little theorem\n// [MOD] must be a prime\n\
    \nconst int MOD = 998244353;\nint bigmod(int b, int p) {\n\tb %= MOD;\n\tif (b\
    \ == 0) return 0;\n\tint res = 1;\n\twhile (p) {\n\t\tif (p & 1) res = (int)(1LL\
    \ * res * b % MOD);\n\t\tp >>= 1; b = (int)(1LL * b * b % MOD);\n\t}\n\treturn\
    \ res;\n}\nint modinv(int x) {\n\treturn bigmod(x, MOD - 2);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: Math/Big Mod.hpp
  requiredBy: []
  timestamp: '2023-01-02 22:58:02+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Math/Big Mod.hpp
layout: document
redirect_from:
- /library/Math/Big Mod.hpp
- /library/Math/Big Mod.hpp.html
title: Math/Big Mod.hpp
---
