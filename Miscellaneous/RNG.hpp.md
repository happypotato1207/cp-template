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
  bundledCode: "#line 1 \"Miscellaneous/RNG.hpp\"\n// Template: Random Number Generator\n\
    // There's basically no way I can validate this but this is correct\n// Useful\
    \ for hashing (64-bit hash, check if set is equal in O(1) with failing probability\
    \ 2^64)\nmt19937_64 rng((int)std::chrono::steady_clock::now().time_since_epoch().count());\n\
    long long rnd(long long l, long long r) { // returns a random number in the range\
    \ [l, r]\n    return uniform_int_distribution<long long>(l, r)(rng);\n}\n"
  code: "// Template: Random Number Generator\n// There's basically no way I can validate\
    \ this but this is correct\n// Useful for hashing (64-bit hash, check if set is\
    \ equal in O(1) with failing probability 2^64)\nmt19937_64 rng((int)std::chrono::steady_clock::now().time_since_epoch().count());\n\
    long long rnd(long long l, long long r) { // returns a random number in the range\
    \ [l, r]\n    return uniform_int_distribution<long long>(l, r)(rng);\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: Miscellaneous/RNG.hpp
  requiredBy: []
  timestamp: '2022-03-09 16:53:19+08:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Miscellaneous/RNG.hpp
layout: document
redirect_from:
- /library/Miscellaneous/RNG.hpp
- /library/Miscellaneous/RNG.hpp.html
title: Miscellaneous/RNG.hpp
---
