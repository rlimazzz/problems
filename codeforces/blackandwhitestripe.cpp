#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b;
    string entr;
    cin >> a >> b >> entr;

    vector<int> v(a + 1, 0);
    for(int i = 1;i <= a;i++) {
        v[i] = v[i - 1] + int(entr[i - 1] == 'W');
    }

    int ans = INT_MAX;
    for(int i = b;i <= a;i++) {
        ans = min(ans, v[i] - v[i - b]);
    }
    cout << ans << endl;

}

int32_t main() {
    int t =1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}   
