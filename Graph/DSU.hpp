// Template: Disjoint Set Union
// Maintaining and merging sets of nodes
// O(\alpha(n)) per query, where \alpha(n) is inverse Ackermann function (basically O(1) as \alpha(10^600) < 4)
// Without path compression, O(\log n) per query

class DisjointSetUnion {
public:
	DisjointSetUnion(int n, bool directed_temp = false, bool path_compression_temp = true) {
		parent.resize(n + 1, -1);
		rank.resize(n + 1, 1);
		size.resize(n + 1, 1);
		directed = directed_temp;
		path_compression = path_compression_temp;
	}
	int FindRoot(int u) {
		if (parent[u] == -1) return u;
		if (path_compression) return parent[u] = FindRoot(parent[u]);
		else return FindRoot(parent[u]);
	}
	bool Union(int u, int v) { // if directed then assign u -> v
		u = FindRoot(u);
		v = FindRoot(v);
		if (u != v) {
			if (!directed) {
				if (rank[u] < rank[v]) swap(u, v);
			}
			parent[u] = v;
			rank[u] = rank[v] + 1;
			size[v] += size[u];
			return true;
		}
		return false;
	}
	bool CheckConnected(int u, int v) {
		return (FindRoot(u) == FindRoot(v));
	}
	int GetRank(int u) {
		return rank[u];
	}
	int GetSize(int u) {
		return size[FindRoot(u)];
	}
	void Reset() {
		for (int i = 0; i < parent.size(); i++) {
			parent[i] = -1;
			rank[i] = 1;
			size[i] = 1;
		}
	}
private:
	vector<int> parent, rank, size;
	bool directed, path_compression;
};
