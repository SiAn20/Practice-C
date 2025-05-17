#include <bits/stdc++.h>
using namespace std;

void solve() {
    set<int> se;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (se.count(x) != 1) {
            cout << "SI" << endl;
        } else {
            cout << "NO" << endl;
        }
        se.insert(x);
    }
    for (auto x : se) {
        cout << x << " ";
    }
    auto it = se.find(20);
    if (it == se.end()) {
        cout << "No lo encontro" << endl;
    } else {
        cout << "Si" << endl;
    }
}
signed main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    t = 1;
    while (t--) {
        solve();
    }
}
