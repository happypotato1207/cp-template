// Code: HLD (range assign range query max on tree)
const int mxN = 2e5 + 1;
// segtree lazy
int seg[4 * mxN], lazy[4 * mxN];
bool marked[mxN];
void pushdown(int idx) {
    if (marked[idx]) {
        seg[(idx << 1)] = lazy[idx];
        seg[(idx << 1) + 1] = lazy[idx];
        lazy[(idx << 1)] = lazy[idx];
        lazy[(idx << 1) + 1] = lazy[idx];
        lazy[idx] = 0;
        marked[(idx << 1)] = true;
        marked[(idx << 1) + 1] = true;
        marked[idx] = false;
    }
}
void SegUpdate(int tl, int tr, int val, int l = 1, int r = mxN - 1, int idx = 1) {
    if (tl <= l && r <= tr) {
        seg[idx] = val;
        lazy[idx] = val;
        marked[idx] = true;
        return;
    }
    pushdown(idx);
    int mid = (l + r) >> 1;
    if (tl <= mid) SegUpdate(tl, min(tr, mid), val, l, mid, (idx << 1));
    if (tr > mid) SegUpdate(max(tl, mid + 1), tr, val, mid + 1, r, (idx << 1) + 1);
    seg[idx] = max(seg[(idx << 1)], seg[(idx << 1) + 1]);
}
int SegQuery(int tl, int tr, int l = 1, int r = mxN - 1, int idx = 1) {
    if (tl <= l && r <= tr) return seg[idx];
    pushdown(idx);
    int mid = (l + r) >> 1;
    int res = 0;
    if (tl <= mid) res = max(res, SegQuery(tl, min(tr, mid), l, mid, (idx << 1)));
    if (tr > mid) res = max(res, SegQuery(max(tl, mid + 1), tr, mid + 1, r, (idx << 1) + 1));
    return res;
}
// hld
vector<int> adj[mxN];
int par[mxN], rr[mxN], sz[mxN], heavy[mxN];
int root[mxN], corr[mxN];
int n;
void HLDInit(int u = 1, int pp = 0) {
    par[u] = pp;
    rr[u] = rr[pp] + 1;
    sz[u] = 1;
    pii big = {-1, -1};
    for (int v : adj[u]) {
        if (v != pp) {
            HLDInit(v, u);
            sz[u] += sz[v];
            if (sz[v] > big.ff) big = {sz[v], v};
        }
    }
    heavy[u] = big.ss;
}
int segptr = 1;
void HLDProcess(int u = 1, int pp = 0, int high = 1) {
    root[u] = high;
    corr[u] = segptr++;
    if (heavy[u] == -1) return;
    HLDProcess(heavy[u], u, high);
    for (int v : adj[u]) {
        if (v != heavy[u] && v != pp) HLDProcess(v, u, v);
    }
}
int HLDLCA(int u, int v) {
    while (root[u] != root[v]) {
        if (rr[root[u]] > rr[root[v]]) swap(u, v);
        v = par[root[v]];
    }
    return (rr[u] < rr[v] ? u : v);
}
void HLDUpdateAnces(int u, int v, int val) {
    int ptr1, ptr2;
    while (root[u] != root[v]) {
        ptr1 = corr[u]; ptr2 = corr[root[u]];
        if (ptr1 > ptr2) swap(ptr1, ptr2);
        SegUpdate(ptr1, ptr2, val);
        u = par[root[u]];
    }
    ptr1 = corr[u]; ptr2 = corr[v];
    if (ptr1 > ptr2) swap(ptr1, ptr2);
    SegUpdate(ptr1, ptr2, val);
}
void HLDUpdate(int u, int v, int val) {
    int lca = HLDLCA(u, v);
    HLDUpdateAnces(u, lca, val);
    HLDUpdateAnces(v, lca, val);
}
int HLDQueryAnces(int u, int v) {
    int ptr1, ptr2;
    int res = 0;
    while (root[u] != root[v]) {
        ptr1 = corr[u]; ptr2 = corr[root[u]];
        if (ptr1 > ptr2) swap(ptr1, ptr2);
        res = max(res, SegQuery(ptr1, ptr2));
        u = par[root[u]];
    }
    ptr1 = corr[u]; ptr2 = corr[v];
    if (ptr1 > ptr2) swap(ptr1, ptr2);
    res = max(res, SegQuery(ptr1, ptr2));
    return res;
}
int HLDQuery(int u, int v) {
    int lca = HLDLCA(u, v);
    return max(HLDQueryAnces(u, lca), HLDQueryAnces(v, lca));
}
// Note: Initialise segment tree using HLD pointer (corr[u])
