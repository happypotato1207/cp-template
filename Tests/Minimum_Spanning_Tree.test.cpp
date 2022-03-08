#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/GRL_2_A"

#include "../header.cpp"
#include "../Graph/MST/Kruskal.hpp"

void init() {
	// initialize

}
void solve(int case_no) {
	// implementation
    int n, m;
    cin >> n >> m;
    MST_Kruskal MST(n);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        MST.AddEdge(u, v, w);
    }
    cout << MST.ComputeMST() << endl;
}
