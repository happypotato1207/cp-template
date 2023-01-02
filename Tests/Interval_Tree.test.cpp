#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/1148"

#include "../header.cpp"
#include "../Data_Structures/Interval_Tree.hpp"

void init() {
	// initialize
    
}
void solve(int &case_no) {
	// implementation
    int n, m;
    vector<IntervalTree_Selective> record;
    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0) return;
        record.clear();
        IntervalTree_Selective temp(false);
        for (int i = 0; i <= m; i++) record.pb(temp);
        int r;
        cin >> r;
        map<pii, int> mp;
        while (r--) {
            int t, x, y, s;
            cin >> t >> x >> y >> s;
            if (s == 1) mp[{x, y}] = t;
            else record[y].AddRange(mp[{x, y}], t);
        }
        int q;
        cin >> q;
        while (q--) {
            int lb, ub, x;
            cin >> lb >> ub >> x;
            int ans = 0;
            int prev = lb;
            if (record[x].GetRangeIn(lb).first == -1) {
                prev = record[x].GetRangeLarger(lb).first;
            }
            while (prev < ub && prev != -1) {
                pii cur = record[x].GetRangeIn(prev);
                cur.ss = min(cur.ss, ub);
                if (cur.ss == prev) {
                    prev = record[x].GetRangeLarger(prev).first;
                } else {
                    ans += cur.ss - prev;
                    prev = cur.ss;
                }
            }
            out(ans);
        }
    }
}
