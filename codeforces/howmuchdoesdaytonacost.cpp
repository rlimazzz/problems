#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    bool ans = false;
    for(int i = 0;i < n;i++) {
        cin >> v[i];

        if(v[i] == k) {
            ans = true;
        }
    }

    if(ans) {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
}

int32_t main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}