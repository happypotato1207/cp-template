#define PROBLEM "https://judge.yosupo.jp/problem/bipartitematching"

#include "../Template/template.cpp"
#include "../Flow/Bipartite_Matching.hpp"

void init() {
	// initialize

}
void solve(int case_no) {
	// implementation
	int l, r, m;
	scanf("%d %d %d", &l, &r, &m);
	BipartiteMatching BM(l, r);
	while (m--) {
		int u, v;
		scanf("%d %d", &u, &v);
		u++; v++;
		BM.AddEdge(u, v);
	}
	vector<pii> ans = BM.FindMatching();
	printf("%d\n", int(ans.size()));
	for (pii x : ans) {
		printf("%d %d\n", x.ff - 1, x.ss - 1);
	}
}
