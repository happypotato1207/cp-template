vector<int> LIS(vector<int> arr, bool strict = true) {
	vector<int> sub;
	for (int x : arr) {
		if (sub.empty() || sub[sub.size() - 1] < x || (!strict && sub[sub.size() - 1] == x)) { // Append to LIS if new element is >=/> last element in LIS
			sub.push_back(x);
		} else {
			int idx = lower_bound(sub.begin(), sub.end(), x + (!strict)) - sub.begin(); // Find the index of the smallest number >/>= x
			sub[idx] = x;
		}
	}
	return sub;
}
