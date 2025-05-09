#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, round = 1;
    cin >> n;

    vector<int> v(n);
    for(int i = 0;i < n;i++) {
        cin >> v[i];
        if(i > 0 && v[i] <= v[i - 1]) {
           round++; 
        }
    }
    cout << round << endl;
}

int32_t main() {
    int t =1;
    while(t--) {
        solve();
    }
    return 0;
}
