// Template: Disjoint Set Union
// Maintaining and merging sets of nodes
// O(\alpha(n)) per query, where \alpha(n) is inverse Ackermann function (basically O(1) as \alpha(10^600) < 4)
// Without path compression, O(\log n) per query

class DisjointSetUnion {
public:
    DisjointSetUnion(int n, bool directed_temp = false, bool path_compression_temp = true) {
        par.resize(n + 1, -1);
        rr.resize(n + 1, 1);
        sz.resize(n + 1, 1);
        directed = directed_temp;
        path_compression = path_compression_temp;
    }
    int FindRoot(int u) {
        if (par[u] == -1) return u;
        if (path_compression) return par[u] = FindRoot(par[u]);
        else return FindRoot(par[u]);
    }
    bool Union(int u, int v) { // if directed then assign u -> v
        u = FindRoot(u);
        v = FindRoot(v);
        if (u != v) {
            if (!directed) {
                if (sz[u] < sz[v]) swap(u, v);
            }
            par[v] = u;
            rr[v] = rr[u] + 1;
            sz[u] += sz[v];
            return true;
        }
        return false;
    }
    bool CheckConnected(int u, int v) {
        return (FindRoot(u) == FindRoot(v));
    }
    int GetRank(int u) {
        return rr[u];
    }
    int GetSize(int u) {
        return sz[FindRoot(u)];
    }
    void Reset() {
        for (int i = 0; i < par.size(); i++) {
            par[i] = -1;
            rr[i] = 1;
            sz[i] = 1;
        }
    }
private:
    vector<int> par, rr, sz;
    bool directed, path_compression;
};
