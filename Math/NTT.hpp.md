---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: Math/Big Mod.hpp
    title: Math/Big Mod.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"Math/NTT.hpp\"\n// Template: NTT for multiplying 2 polynomials\n\
    // Coefficients are taken modulo 998244353\n// Time complexity: O(n log n), n\
    \ is degree of polynomial\n\nconst int MOD = 998244353;\n\n#line 1 \"Math/Big\
    \ Mod.hpp\"\n// Template: Big Mod / Mod inverse\n// Finds b^p mod m in O(log p)\n\
    // Mod inverse is application of Fermat's little theorem\n// [MOD] must be a prime\
    \ to use modinv()\n\nconst int MOD = 1e9 + 7;\nint bigmod(int b, int p, const\
    \ int &m = MOD) {\n\tb %= m;\n\tif (b == 0) return 0;\n\tint res = 1;\n\twhile\
    \ (p) {\n\t\tif (p & 1) res = (int)(1LL * res * b % m);\n\t\tp >>= 1; b = (int)(1LL\
    \ * b * b % m);\n\t}\n\treturn res;\n}\nint modinv(int x, const int &m = MOD)\
    \ {\n\treturn bigmod(x, m - 2);\n}\n#line 8 \"Math/NTT.hpp\"\nint bigmod(int b,\
    \ int p) {\n\tb %= MOD;\n\tif (b == 0) return 0;\n\tint res = 1;\n\twhile (p)\
    \ {\n\t\tif (p & 1) res = (int)(1LL * res * b % MOD);\n\t\tp >>= 1; b = (int)(1LL\
    \ * b * b % MOD);\n\t}\n\treturn res;\n}\nint modinv(int x) {\n\treturn bigmod(x,\
    \ MOD - 2);\n}\n\nvoid NTT(vector<int> &v, bool invert) {\n\tint n = v.size();\n\
    \n\tfor (int i = 1, j = 0; i < n; i++) {\n\t\tint bit = n >> 1;\n\t\tfor (; j\
    \ & bit; bit >>= 1) {\n\t\t\tj ^= bit;\n\t\t}\n\t\tj ^= bit;\n\n\t\tif (i < j)\
    \ {\n\t\t\tswap(v[i], v[j]);\n\t\t}\n\t}\n\n\tfor (int len = 2; len <= n; len\
    \ <<= 1) {\n\t\tint wlen = (invert ? 15311432 : 469870224);\n\t\tfor (int i =\
    \ len; i < (1 << 23); i <<= 1) {\n\t\t\twlen = (int)(1LL * wlen * wlen % MOD);\n\
    \t\t}\n\n\t\tfor (int i = 0; i < n; i += len) {\n\t\t\tint w = 1;\n\t\t\tfor (int\
    \ j = 0; j < (len >> 1); j++) {\n\t\t\t\tint odd = v[i + j];\n\t\t\t\tint even\
    \ = (int)(1LL * v[i + j + (len >> 1)] * w % MOD);\n\t\t\t\tv[i + j] = odd + even;\
    \ v[i + j + (len >> 1)] = odd - even;\n\t\t\t\tif (v[i + j] >= MOD) v[i + j] -=\
    \ MOD;\n\t\t\t\tif (v[i + j + (len >> 1)] < 0) v[i + j + (len >> 1)] += MOD;\n\
    \t\t\t\tw = (int)(1LL * w * wlen % MOD);\n\t\t\t}\n\t\t}\n\t}\n\n\tif (invert)\
    \ {\n\t\tint ninv = modinv(n);\n\t\tfor (int &x : v) {\n\t\t\tx = (int)(1LL *\
    \ x * ninv % MOD);\n\t\t}\n\t}\n}\nvector<int> Multiply(vector<int> &l, vector<int>\
    \ &r) {\n\tint n = 1;\n\twhile (n < (l.size() + r.size())) {\n\t\tn <<= 1;\n\t\
    }\n\tvector<int> vl = l, vr = r;\n\tvl.resize(n); vr.resize(n);\n\tNTT(vl, false);\n\
    \tNTT(vr, false);\n\tfor (int i = 0; i < n; i++) {\n\t\tvl[i] = (int)(1LL * vl[i]\
    \ * vr[i] % MOD);\n\t}\n\tNTT(vl, true);\n\tvl.resize((int)(l.size()) + (int)(r.size())\
    \ - 1);\n\treturn vl;\n}\n"
  code: "// Template: NTT for multiplying 2 polynomials\n// Coefficients are taken\
    \ modulo 998244353\n// Time complexity: O(n log n), n is degree of polynomial\n\
    \nconst int MOD = 998244353;\n\n#include \"Big Mod.hpp\"\nint bigmod(int b, int\
    \ p) {\n\tb %= MOD;\n\tif (b == 0) return 0;\n\tint res = 1;\n\twhile (p) {\n\t\
    \tif (p & 1) res = (int)(1LL * res * b % MOD);\n\t\tp >>= 1; b = (int)(1LL * b\
    \ * b % MOD);\n\t}\n\treturn res;\n}\nint modinv(int x) {\n\treturn bigmod(x,\
    \ MOD - 2);\n}\n\nvoid NTT(vector<int> &v, bool invert) {\n\tint n = v.size();\n\
    \n\tfor (int i = 1, j = 0; i < n; i++) {\n\t\tint bit = n >> 1;\n\t\tfor (; j\
    \ & bit; bit >>= 1) {\n\t\t\tj ^= bit;\n\t\t}\n\t\tj ^= bit;\n\n\t\tif (i < j)\
    \ {\n\t\t\tswap(v[i], v[j]);\n\t\t}\n\t}\n\n\tfor (int len = 2; len <= n; len\
    \ <<= 1) {\n\t\tint wlen = (invert ? 15311432 : 469870224);\n\t\tfor (int i =\
    \ len; i < (1 << 23); i <<= 1) {\n\t\t\twlen = (int)(1LL * wlen * wlen % MOD);\n\
    \t\t}\n\n\t\tfor (int i = 0; i < n; i += len) {\n\t\t\tint w = 1;\n\t\t\tfor (int\
    \ j = 0; j < (len >> 1); j++) {\n\t\t\t\tint odd = v[i + j];\n\t\t\t\tint even\
    \ = (int)(1LL * v[i + j + (len >> 1)] * w % MOD);\n\t\t\t\tv[i + j] = odd + even;\
    \ v[i + j + (len >> 1)] = odd - even;\n\t\t\t\tif (v[i + j] >= MOD) v[i + j] -=\
    \ MOD;\n\t\t\t\tif (v[i + j + (len >> 1)] < 0) v[i + j + (len >> 1)] += MOD;\n\
    \t\t\t\tw = (int)(1LL * w * wlen % MOD);\n\t\t\t}\n\t\t}\n\t}\n\n\tif (invert)\
    \ {\n\t\tint ninv = modinv(n);\n\t\tfor (int &x : v) {\n\t\t\tx = (int)(1LL *\
    \ x * ninv % MOD);\n\t\t}\n\t}\n}\nvector<int> Multiply(vector<int> &l, vector<int>\
    \ &r) {\n\tint n = 1;\n\twhile (n < (l.size() + r.size())) {\n\t\tn <<= 1;\n\t\
    }\n\tvector<int> vl = l, vr = r;\n\tvl.resize(n); vr.resize(n);\n\tNTT(vl, false);\n\
    \tNTT(vr, false);\n\tfor (int i = 0; i < n; i++) {\n\t\tvl[i] = (int)(1LL * vl[i]\
    \ * vr[i] % MOD);\n\t}\n\tNTT(vl, true);\n\tvl.resize((int)(l.size()) + (int)(r.size())\
    \ - 1);\n\treturn vl;\n}\n"
  dependsOn:
  - Math/Big Mod.hpp
  isVerificationFile: false
  path: Math/NTT.hpp
  requiredBy: []
  timestamp: '2023-01-02 23:08:53+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Math/NTT.hpp
layout: document
redirect_from:
- /library/Math/NTT.hpp
- /library/Math/NTT.hpp.html
title: Math/NTT.hpp
---
