#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<double> vec;
    int n;
    cin >> n;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;
        vec.push_back(x);
        sum += x;
    }
    double promedio = sum / n;
    cout << promedio << endl;
    for (int i = 0; i < n; i++) {
        if (promedio > vec[i]) {
            cout << vec[i] << " ";
        }
    }
    cout << endl;
}
signed main() {
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    t = 1;
    while (t--) {
        solve();
    }
}
