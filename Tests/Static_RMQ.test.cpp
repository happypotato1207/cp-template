#define PROBLEM "https://judge.yosupo.jp/problem/staticrmq"

#include "../header.cpp"
#include "../Data_Structure/Sparse_Table.hpp"

void init() {
	// initialize
    
}
void solve(int case_no) {
	// implementation
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    SparseTable ST(v);
    ST.Compute();
    while (q--) {
        int l, r;
        cin >> l >> r;
        out(ST.Query(l, r - 1));
    }
}
