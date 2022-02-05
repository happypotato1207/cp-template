class DisjointSetUnion {
public:
	DisjointSetUnion(int n, bool directed_temp = true, bool path_compression_temp = true) {
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
	void Union(int u, int v) { // if undirected then assign u -> v
		u = FindRoot(u);
		v = FindRoot(v);
		if (u != v) {
			if (directed) {
				if (rank[u] < rank[v]) swap(u, v);
			}
			parent[u] = v;
			rank[u] = rank[v] + 1;
			size[v] += size[u];
		}
		return;
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
private:
	vector<int> parent, rank, size;
	bool directed, path_compression;
};
