#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> vec = {16, 6, 5, 8, 6, 43, 11};
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    for (auto x : vec) {
        cout << x << " ";
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
