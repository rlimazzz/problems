#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n, x;
    cin >> n >> x;

    int ans = 0;
    for(int i = 1;i <= n;i++) {
        if(x % i == 0 && x / i <= n) {
            ans++;
        }
    }

    cout << ans << "\n";
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }
    return 0;
}