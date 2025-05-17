#include <bits/stdc++.h>
using namespace std;

void solve() {
    deque<int> de;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string x;
        int y;
        cin >> x >> y;
        if (x == "normal") {
            de.push_back(y);
        } else {
            de.push_front(y);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << de[i] << " ";
    }
}

signed main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    int t;

    t = 1;
    // memset(dp, -1, sizeof(dp));
    //  cin >> t;
    while (t--) {
        solve();
    }
}
