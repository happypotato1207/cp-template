#define PROBLEM "https://judge.yosupo.jp/problem/convolution_mod"

#include "../header.cpp"
#include "../Math/NTT.hpp"

void init() {
	// initialize

}
void solve(int &case_no) {
	// solve
	int n, m;
	cin >> n >> m;
	vector<int> l(n), r(m);
	for (int i = 0; i < n; i++) cin >> l[i];
	for (int i = 0; i < m; i++) cin >> r[i];
	vector<int> ans = Multiply(l, r);
	for (int &x : ans) cout << x << ' ';
	cout << endl;
}
