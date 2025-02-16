#include <bits/stdc++.h>

using namespace std;

void solve() {
    string entr;
    cin >> entr;

    for(int i = 0;i < (int)entr.size();i++) {
        if(entr[i] == 'H' || entr[i] == 'Q' || entr[i] == '9') {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }

    return 0;
}