// Template: Sparse Table
// Supports some range queries in O(n log n) / O(1)
// Not to be confused with Binary Lifting - O(log n) per query
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
        for (int depth = 1; (1 << depth) <= n; depth++) {
            sp.push_back({});
            for (int j = 0; j < n - (1 << depth) + 1; j++) {
                // change function below
                sp[depth].push_back(min(sp[depth - 1][j], sp[depth - 1][j + (1 << (depth - 1))]));
            }
        }
        finished = true;
    }
    // Query [l, r]
    int Query(int l, int r) {
        if (l > r || l < 0 || r >= n) return 0;
        if (l == r) return sp[0][l];
        int depth = floor(log2(r - l));
        // change function below
        return min(sp[depth][l], sp[depth][r - (1 << depth) + 1]);
    }
private:
    int n;
    vector<vector<int> > sp;
    bool finished = false;
};
