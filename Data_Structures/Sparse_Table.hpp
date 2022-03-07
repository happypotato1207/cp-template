// Template: Sparse Table
// Supports range query in O(n log n) / O(1)
// Offline DS - Cannot update after compute
class SparseTable {
public:
    // Method 1: Construct using size
    SparseTable(int sz) {
        n = sz + 1;
        sp.push_back({});
        sp[0].resize(n);
    }
    // Update() can only call before Compute()
    void Update(int pos, int val) {
        if (finished) return;
        sp[0][pos] = val;
    }
    // Method 2: Construct using vector
    SparseTable(vector<int> &v) {
        n = v.size();
        sp.push_back(v);
    }
    // Computes the Sparse Table
    void Compute() {
        for (int depth = 1; ; depth++) {
            if ((1 << depth) > n) break;
            sp.push_back({});
            for (int j = 0; j <= n - (1 << depth); j++) {
                // change function below
                sp[depth].push_back(min(sp[depth - 1][j], sp[depth - 1][j + (1 << depth)]));
            }
        }
        finished = true;
    }
    int Query(int l, int r) {
        if (l > r) return 0;
        if (l == r) return sp[0][l];
        int depth = floor(log2(r - l));
        // change below
        return min(sp[depth][l], sp[depth][r - (1 << depth) + 1]);
    }
private:
    int n;
    vector<vector<int> > sp;
    bool finished = false;
};
