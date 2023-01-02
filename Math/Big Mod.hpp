// Template: Big Mod / Mod inverse
// Finds b^p mod m in O(log p)
// Mod inverse is application of Fermat's little theorem
// [MOD] must be a prime

const int MOD = 1e9 + 7;
int bigmod(int b, int p) {
	b %= MOD;
	if (b == 0) return 0;
	int res = 1;
	while (p) {
		if (p & 1) res = (int)(1LL * res * b % MOD);
		p >>= 1; b = (int)(1LL * b * b % MOD);
	}
	return res;
}
int modinv(int x) {
	return bigmod(x, MOD - 2);
}
