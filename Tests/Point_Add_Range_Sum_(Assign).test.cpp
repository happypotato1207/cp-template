#define PROBLEM "https://judge.yosupo.jp/problem/point_add_range_sum"

#include "../Template/template.cpp"
#include "../Data_Structures/Segment_Tree/Point_Assign_Range_Sum.hpp"

void init() {
	
}
void solve(int case_no) {
	int n, q;
	cin >> n >> q;
	vector<Data> v(n);
	for (int i = 0; i < n; i++) cin >> v[i].val;
	SegmentTree ST(v);
	while (q--) {
		int cmd;
		cin >> cmd;
		if (cmd == 0) {
			Data new_val;
			int ptr;
			cin >> ptr >> new_val.val;
			new_val.val += v[ptr].val;
			v[ptr] = new_val;
			ST.Update(ptr, new_val);
		} else {
			int x, y;
			cin >> x >> y;
			cout << ST.Query(x, y - 1).val << endl;
		}
	}
}
