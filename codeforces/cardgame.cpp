#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector<int> a(2);
    vector<int> b(2);

    int ans = 0;
    for(int i = 0;i < 4;i++) {
        if(i < 2) {
            cin >> a[i];
        }else {
            cin >> b[i- 2];
        }
    }

    if(a[0] >= b[0] && a[1] > b[1]) {
        ans++;
    }
    if(a[1] >= b[0] && a[0] > b[1]) {
        ans++;
    }
    if(a[0] >= b[1] && a[1] > b[0]) {
        ans++;
    }
    if(a[1] >= b[1] && a[0] > b[0]) {
        ans++;
    }
    if(a[0] > b[0] && a[1] == b[1]) {
        ans++;
    }
    if(a[1] > b[0] && a[0] == b[1]) {
        ans++;
    }
    if(a[0] > b[1] && a[1] == b[0]) {
        ans++;
    }
    if(a[1] > b[1] && a[0] == b[0]) {
        ans++;
    }

    cout << ans << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
