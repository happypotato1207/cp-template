// Range Assign Range Sum Query (Implicit)
// Tested on CF, validate later
// testing
struct node {
    int val;
    int l, r;
    node *left = nullptr, *right = nullptr;
    bool marked = false;
    int lazy = 0;
    node(int l, int r, int val = 0): l(l), r(r), val(val) {}
};
node* seg = new node(0, 100000);
void extend(node* cur) {
    if (cur->left != nullptr) return;
    int mid = (cur->l + cur->r) >> 1;
    cur->left = new node(cur->l, mid);
    cur->right = new node(mid + 1, cur->r);
    return;
}
void pushdown(node* cur) {
    extend(cur);
    if (cur->marked) {
        int mid = (cur->l + cur->r) >> 1;
        cur->left->val = cur->lazy * (mid - cur->l + 1);
        cur->right->val = cur->lazy * (cur->r - mid);
        cur->left->lazy = cur->lazy;
        cur->right->lazy = cur->lazy;
        cur->lazy = 0;
        cur->left->marked = true;
        cur->right->marked = true;
        cur->marked = false;
    }
    return;
}
void update(int tl, int tr, int val, node* cur = seg) {
    if (tl <= cur->l && cur->r <= tr) {
        cur->val = val * (cur->r - cur->l + 1);
        cur->marked = true;
        cur->lazy = val;
        return;
    }
    pushdown(cur);
    int mid = (cur->l + cur->r) >> 1;
    if (tl <= mid) update(tl, min(tr, mid), val, cur->left);
    if (tr > mid) update(max(tl, mid + 1), tr, val, cur->right);
    cur->val = cur->left->val + cur->right->val;
    return;
}
int query(int tl, int tr, node* cur = seg) {
    if (tl <= cur->l && cur-> r <= tr) {
        return cur->val;
    }
    pushdown(cur);
    int mid = (cur->l + cur->r) >> 1;
    int res = 0;
    if (tl <= mid) res += query(tl, min(tr, mid), cur->left);
    if (tr > mid) res += query(max(tl, mid + 1), tr, cur->right);
    return res;
}
