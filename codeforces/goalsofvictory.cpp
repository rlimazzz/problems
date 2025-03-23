#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int ans = 0;
    for(int i = 0;i < n - 1;i++) {
        int entr;
        cin >> entr;

        ans += entr;
    }

    cout << ans * (-1) << endl;
}

int32_t main()  {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}