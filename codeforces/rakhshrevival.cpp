#include <bits/stdc++.h>

using namespace std;

int n, m, k;
string entr;


void solve() {
    cin >> n >> m >> k >> entr;

    int count = 0, ans = 0;

    for(int i = 0;i < (int)entr.size();i++) {
        if(entr[i] == '0') {
            count++;
            if(count == m) {
                ans++;
                count = 0;
                i += k - 1;
            }
        }else {
            count = 0;
        }
    }

    cout << ans << "\n";

}

int32_t main() {
    int t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}