class IntervalTree {
public:
    map<int, int> range;
    IntervalTree(bool keep_small) {
        small = keep_small;
    }
    void AddRange(int l, int r) {
        if (small) {
            CheckContain(l, r);
            if (it != range.end()) return;
            while (true) {
                CheckContainBy(l, r);
                if (it == range.end()) break;
                range.erase(it);
            }
        } else {
            CheckContainBy(l, r);
            if (it != range.end()) return;
            while (true) {
                CheckContain(l, r);
                if (it == range.end()) break;
                range.erase(it);
            }
        }
        range[l] = r;
    }
    pair<int, int> GetRangeIn(int x) {
        // returns the range which includes x (first <= x <= second)
        it = range.upper_bound(x);
        if (it == range.begin()) return {-1, -1};
        --it;
        return {it->first, it->second};
    }
    pair<int, int> GetRangeOut(int x) {
        // returns the range which excludes x (x < first)
        it = range.upper_bound(x);
        if (it == range.end()) return {-1, -1};
        return {it->first, it->second};
    }
private:
    bool small = true;
    map<int, int>::iterator it;
    void CheckContain(int l, int r) { 
        // assign pointer of range being contained
        if (range.empty()) {
            it = range.end();
            return;
        }
        it = range.lower_bound(l);
        if (it != range.end() && it->second > r) it = range.end();
        return;
    }
    void CheckContainBy(int l, int r) {
        // assign pointer of range containing
        if (range.empty()) {
            it = range.end();
            return;
        }
        it = range.upper_bound(l);
        if (it == range.begin()) {
            it = range.end();
            return;
        }
        --it;
        if (it->second < r) it = range.end();
        return;
    }
};
