#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a;
    cin >> a;

    if(400 % a == 0) {
        cout << 400 / a << endl;
    }else {
        cout << -1 << endl;
    }
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }
    return 0;
}
