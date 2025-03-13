#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    string entr;
    cin >> n >> entr;

    map<char, bool> percorri;
    set<char>

    int ans = INT_MIN;
    for(int i = 0;i < n;i++) {
        if(!percorri[entr[i]]) {
            percorri[entr[i]] = true;
        }
        else if(percorri[entr[i]]) {
            ans = i + 1;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
