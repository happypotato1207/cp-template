#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pii pair<int, int>
#define pll pair<ll int, ll int>
#define ff first
#define ss second
#define pb push_back
#pragma GCC optimize("O2")
using namespace std;
// debug template
#ifdef POTATO
#include "debug.h"
#define debug(...) cerr << "[" << #__VA_ARGS__ << "] = ["; _print(__VA_ARGS__)
#else
#define debug(...)
#endif
// convenient functions
inline void yes() { cout << "YES" << endl; return; }
inline void no() { cout << "NO" << endl; return; }
template <class T>
inline void out(T temp) { cout << temp << endl; return; }
// global

void init();
void solve(int &case_no);

signed main() {
#ifdef POTATO
    freopen("../input.txt", "r", stdin);
    // freopen("../output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    srand(time(NULL));
    init();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) solve(i);
}
/*

*/
