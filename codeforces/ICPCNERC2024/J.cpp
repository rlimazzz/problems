#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n , m;
    cin >> n >> m;

    int fr = 0, ba = 0;
    for(int i = 0;i < m;i++) {
        int a, b;
        cin >> a >> b;
        
        if(a < b) { 
            fr++;
        }else {
            ba++;
        }
    }

    if(fr >= (m + 1) / 2) {
        for(int i = 1;i <= n;i++) cout << i << " ";
    }
    else {
        for(int i = n;i >= 1;i--) cout << i << " ";
    }
    cout << "\n";


}

int32_t main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}