#include <bits/stdc++.h>
using namespace std;

void solve() {
    multiset<int> multi;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        if (x == "add") {
            int y;
            cin >> y;
            multi.insert(y);
        } else {
            int z = *multi.begin();
            cout << z << endl;
            multi.erase(multi.begin());
        }
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
