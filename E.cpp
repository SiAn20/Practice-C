#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<string, int> mapa;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mapa[s]++;
    }
    for (auto x : mapa) {
        cout << x.first << " " << x.second << endl;
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
