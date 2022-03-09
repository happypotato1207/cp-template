// Template: Longest Increasing/Decreasing Subsequence
// Pass in a vector (call by reference)
// strict: Longest [Strictly] Increasing/Decreasing
// Returns answer in O(n log n)
vector<int> LIS(vector<int> &a, bool strict = true) {
    int n = a.size();
    vector<int> d(n + 1, 2e9);
    vector<int> idx(n + 1), p(n);
    d[0] = -2e9;
    idx[0] = -1;
    for (int i = 0; i < n; i++) {
        if (strict) {
            int j = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
            if (d[j - 1] < a[i] && a[i] < d[j]) {
                d[j] = a[i];
                idx[j] = i;
                p[i] = idx[j - 1];
            }
        } else {
            int j = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
            if (d[j - 1] <= a[i] && a[i] <= d[j]) {
                d[j] = a[i];
                idx[j] = i;
                p[i] = idx[j - 1];
            }
        }
    }
    vector<int> sub;
    int ptr = -1;
    for (int i = n; i >= 1; i--) {
        if (d[i] == 2e9) continue;
        if (ptr == -1) ptr = idx[i];
        sub.push_back(a[ptr]);
        ptr = p[ptr];
    }
    reverse(sub.begin(), sub.end());
    return sub;
}
vector<int> LDS(vector<int> &a, bool strict = true) {
    int n = a.size();
    int maxi = 0;
    for (int x : a) maxi = max(maxi, x);
    for (int i = 0; i < n; i++) a[i] = (maxi + 1) - a[i];
    vector<int> sub = LIS(a, strict);
    for (int i = 0; i < n; i++) a[i] = (maxi + 1) - a[i];
    for (int i = 0; i < sub.size(); i++) sub[i] = (maxi + 1) - sub[i];
    return sub;
}
