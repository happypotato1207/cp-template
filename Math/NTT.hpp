// Template: NTT for multiplying 2 polynomials
// Coefficients are taken modulo 998244353
// Time complexity: O(n log n), n is degree of polynomial

const int MOD = 998244353;

#include "Big Mod.hpp"

void NTT(vector<int> &v, bool invert) {
	int n = v.size();

	for (int i = 1, j = 0; i < n; i++) {
		int bit = n >> 1;
		for (; j & bit; bit >>= 1) {
			j ^= bit;
		}
		j ^= bit;

		if (i < j) {
			swap(v[i], v[j]);
		}
	}

	for (int len = 2; len <= n; len <<= 1) {
		int wlen = (invert ? 15311432 : 469870224);
		for (int i = len; i < (1 << 23); i <<= 1) {
			wlen = (int)(1LL * wlen * wlen % MOD);
		}

		for (int i = 0; i < n; i += len) {
			int w = 1;
			for (int j = 0; j < (len >> 1); j++) {
				int odd = v[i + j];
				int even = (int)(1LL * v[i + j + (len >> 1)] * w % MOD);
				v[i + j] = odd + even; v[i + j + (len >> 1)] = odd - even;
				if (v[i + j] >= MOD) v[i + j] -= MOD;
				if (v[i + j + (len >> 1)] < 0) v[i + j + (len >> 1)] += MOD;
				w = (int)(1LL * w * wlen % MOD);
			}
		}
	}

	if (invert) {
		int ninv = modinv(n);
		for (int &x : v) {
			x = (int)(1LL * x * ninv % MOD);
		}
	}
}
vector<int> Multiply(vector<int> &l, vector<int> &r) {
	int n = 1;
	while (n < (l.size() + r.size())) {
		n <<= 1;
	}
	vector<int> vl = l, vr = r;
	vl.resize(n); vr.resize(n);
	NTT(vl, false);
	NTT(vr, false);
	for (int i = 0; i < n; i++) {
		vl[i] = (int)(1LL * vl[i] * vr[i] % MOD);
	}
	NTT(vl, true);
	vl.resize((int)(l.size()) + (int)(r.size()) - 1);
	return vl;
}
