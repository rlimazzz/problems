#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9;
using ll = long long;

void solve() {
    //good integers between 1 and 20
    //2 = 2pow1 * 1pow2, 4 = 2pow2 * 1 pow2, 8 = 2pow3 * 1pow2, 16 = 2pow4 * 1 pow2, 18 = 2pow1 * 3pow2
    int n;
    cin >> n;

    ll ans =0;
   for(int i = 1;i <= 60;++i) {
        ll x = 1LL<<i;

        if(x > n) break;

        long double limit = (long double)n / x;
        cout << limit << " << " << endl;

        ll maxi = sqrt(limit);

        ans += (maxi + 1) / 2;
        cout << ans << " !! " << endl;

   }
   cout << ans << endl;

}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }
    return 0;
}
