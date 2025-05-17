#include <bits/stdc++.h>
using namespace std;

void solve() {
    string par;
    cin >> par;
    stack<int> pila;
    int n = (int)par.length();
    for (int i = 0; i < n; i++) {
        if (pila.empty()) {
            pila.push(par[i]);
        } else {
            if (pila.top() == '(' && par[i] == ')') {
                pila.pop();
            } else {
                pila.push(par[i]);
            }
        }
    }

    if (pila.empty()) {
        cout << "Es valido" << endl;
    } else {
        cout << "No es valido" << endl;
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
