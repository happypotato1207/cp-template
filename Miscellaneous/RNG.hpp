// Template: Random Number Generator
// There's basically no way I can validate this but this is correct
// Useful for hashing (64-bit hash, check if set is equal in O(1) with failing probability 2^64)

mt19937_64 rng((int)std::chrono::steady_clock::now().time_since_epoch().count());
long long rnd(long long l, long long r) { // returns a random number in the range [l, r]
    return uniform_int_distribution<long long>(l, r)(rng);
}
