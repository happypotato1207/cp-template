#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D"

#include "../Header/header.cpp"
#include "../Miscellaneous/LIS.hpp"

void init() {
	// initialize

}
void solve(int case_no) {
	// implementation
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	cout << LIS(v).size() << endl;
}
