#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9 + 10;

void solve() {
    int n, total= 0;
    cin >> n;
    vector<int> a(n);

    for(int i = 0;i < n;i++) {
        cin >> a[i];
        total += a[i];
    }

    sort(a.begin(), a.end());

    int ans = 0, sum = 0;
    total /= 2;
    for(int i = n - 1;i >= 0;i--) {
        auto it = upper_bound(a.begin(), a.begin() + i, total);

        if(total < 0) {
            break;
        }

        if(it == a.begin() + i) {
            total -= a[i];
            ans++;
            sum += a[i];
        }else {
            total -= *it;
            sum += *it;
            ans++;
            break;
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