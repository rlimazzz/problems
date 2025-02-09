#include <bits/stdc++.h>

using namespace std;

void solve() {
    string entr;
    cin >> entr;
    for(int i = 0;i < (int)entr.size() - 2;i++) {
        cout << entr[i];
    }
    cout << "i\n";
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}