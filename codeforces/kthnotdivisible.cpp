#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;

    cin >> n >> k;

    cout << k + ((k - 1) / (n - 1)) << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
