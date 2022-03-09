// Template: Kuhn's algorithm for Bipartite Matching
// I'm really not familiar with flow, will learn more soon
// Theoreticall should be O(nm / [some constant]), where n is no. of nodes and m is no. of edges
// Dinic's algorithm works in O(n sqrt(n)), will code template asap
class BipartiteMatching {
public:
	BipartiteMatching(int l, int r) {
		left = l; right = r;
		if (left < right) {
			swap(left, right);
			swapped = true;
		}
		adj.resize(right + 1);
		mt.resize(left + 1, -1);
		used.resize(right + 1);
		matched.resize(right + 1);
	}
	void AddEdge(int u, int v) { // (left, right) matching
		if (swapped) swap(u, v);
		adj[v].push_back(u);
	}
	vector<pair<int, int> > FindMatching() {
		// initial matching using simple heuristics
		for (int u = 1; u <= right; u++) {
			for (int v : adj[u]) {
				if (mt[v] == -1) {
					mt[v] = u;
					matched[u] = true;
					break;
				}
			}
		}
		// Kuhn's algorithm to improve matching
		for (int u = 1; u <= right; u++) {
			if (matched[u]) continue;
			for (int i = 0; i <= right; i++) used[i] = false;
			TryKuhn(u);
		}
		vector<pair<int, int> > ans;
		for (int u = 1; u <= left; u++) {
			if (mt[u] != -1) {
				if (swapped) ans.emplace_back(mt[u], u);
				else ans.emplace_back(u, mt[u]);
			}
		}
		return ans;
	}
private:
	bool swapped = false;
	int left, right;
	vector<vector<int> > adj; // right -> left
	vector<int> mt; // mt[left] = right
	vector<bool> used, matched; // right
	bool TryKuhn(int u) {
		if (used[u]) return false;
		used[u] = true;
		for (int v : adj[u]) {
			// Either unsaturated or recursive call successful
			if (mt[v] == -1 || TryKuhn(mt[v])) {
				mt[v] = u;
				return true;
			}
		}
		return false;
	}
};
