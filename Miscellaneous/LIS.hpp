vector<int> LIS(vector<int> v) {
	int n = v.size();
	vector<int> ret;
	ret.push_back(v[0]);
	for (int i = 1; i < n; i++) {
		if (v[i] > ret.back()) ret.push_back(v[i]); // change to >= for non-decreasing
		else {
			int index = lower_bound(ret.begin(), ret.end(), v[i]) - ret.begin();
			ret[index] = v[i];
		}
	}
	return ret;
}
