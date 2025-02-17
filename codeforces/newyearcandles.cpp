#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int a , b;
    cin >> a >> b;

    int ans = a;
    while(a / b > 0) {
        ans += a / b;
        a /= b;

        if(a / b < 0) {
            ans += a % b;
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }
}