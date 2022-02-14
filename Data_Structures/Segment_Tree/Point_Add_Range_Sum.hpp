struct Data {
	long long int val = 0;
};
class SegmentTree_PointAddRangeSum {
public:
	SegmentTree_PointAddRangeSum(vector<Data> v) {
		arr = v;
		n = arr.size();
		seg.resize((n << 1));
		Build();
	}
	void Build() {
		for (int i = 0; i < n; i++) seg[i + n] = arr[i];
		for (int i = n - 1; i > 0; i--) seg[i] = Combine(seg[(i << 1)], seg[((i << 1) | 1)]);
	}
	void Update(int ptr, Data new_val) {
		ptr += n;
		seg[ptr] = Combine(seg[ptr], new_val);
		for (; ptr > 1; ptr >>= 1) seg[(ptr >> 1)] = Combine(seg[ptr], seg[(ptr ^ 1)]);
	}
	Data Query(int l, int r) { // query on interval [l, r]
		r++;
		Data ret;
		for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
			if (l & 1) ret = Combine(ret, seg[l++]);
			if (r & 1) ret = Combine(ret, seg[--r]);
		}
		return ret;
	}
protected:
	int n;
	vector<Data> arr;
	vector<Data> seg;
	Data combine_ret;
	Data Combine(Data x, Data y) { // remember to assign everything, not add
		combine_ret.val = x.val + y.val;
		return combine_ret;
	}
};
