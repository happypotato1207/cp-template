// Template: Big Mod / Mod inverse
// Finds b^p mod m in O(log p)
// Mod inverse is application of Fermat's little theorem
// [MOD] must be a prime to use modinv()

//const int MOD = 1e9 + 7;
int bigmod(int b, int p, const int &m = MOD) {
	b %= m;
	if (b == 0) return 0;
	int res = 1;
	while (p) {
		if (p & 1) res = (int)(1LL * res * b % m);
		p >>= 1; b = (int)(1LL * b * b % m);
	}
	return res;
}
int modinv(int x, const int &m = MOD) {
	return bigmod(x, m - 2);
}
