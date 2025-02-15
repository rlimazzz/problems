#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n, k, ans = 0;
    cin >> n >> k;

    if(n % 2 == 0) {
        if(k <= n / 2) {
            ans = 2 * (k - 1) + 1;
        }else {
            ans = 2 * (k - n / 2);
        }
    }else {
        if(k <= n / 2 + 1) {
            ans = 2 * (k - 1) + 1;
        }else {
            ans = 2 * (k - (n / 2 + 1));
        }
    }

    cout << ans << "\n";
}

int32_t main() {
    int t =1;
    while(t--) {
        solve();
    }
}