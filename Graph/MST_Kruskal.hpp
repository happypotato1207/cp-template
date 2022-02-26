#include "DSU.hpp"

struct edge {
    int u, v;
    long long w;
};
class MST_Kruskal {
public:
    vector<edge> res;
    int n;
    MST_Kruskal(int sz) {
        n = sz;
    }
    void AddEdge(int u, int v, long long w) {
        edges.push_back({u, v, w});
    }
    long long ComputeMST() {
        sort(edges.begin(), edges.end(), [](edge &a, edge &b){ return a.w < b.w; });
        DisjointSetUnion DSU(n);
        long long tot = 0;
        int cnt = 0;
        res.clear();
        for (edge &cur : edges) {
            if (DSU.Union(cur.u, cur.v)) {
                res.push_back(cur);
                tot += cur.w;
                cnt++;
            }
        }
        return tot;
    }
private:
    vector<edge> edges;
};
