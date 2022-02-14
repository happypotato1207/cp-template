#define PROBLEM "https://judge.yosupo.jp/problem/unionfind"

#include "../Header/header.cpp"
#include "../Graph/DSU.hpp"

void init() {
	// initialize

}
void solve(int case_no) {
	// implementation
	int n, q;
	cin >> n >> q;
	DisjointSetUnion DSU(n);
	while (q--) {
		int cmd, u, v;
		cin >> cmd >> u >> v;
		if (cmd == 0) {
			DSU.Union(u, v);
		} else {
			cout << DSU.CheckConnected(u, v) << endl;
		}
	}
}
