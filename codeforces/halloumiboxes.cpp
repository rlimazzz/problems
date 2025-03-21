#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n, -1), copy(n, -1);

    for(int i = 0;i < n;i++) {
        cin >> v[i];
        copy[i] = v[i];
    }

    sort(copy.begin(), copy.end());

    if(k >= 2) {
        cout << "YES\n";
        return;
    }else {
        if(k == 1) {
            for(int i = 0;i < n;i++) {
                if(copy[i] != v[i]) {
                    cout << "NO\n";
                    return;
                }
            }
        }
        cout << "YES\n";
        return;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
