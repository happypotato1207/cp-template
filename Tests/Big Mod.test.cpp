#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B"

#include "../header.cpp"

const int MOD = 1e9 + 7;
#include "../Math/Big Mod.hpp"

void init() {
	// initialize

}
void solve(int &case_no) {
	// implementation
	int n, m;
	cin >> n >> m;
	cout << bigmod(n, m) << endl;
}
