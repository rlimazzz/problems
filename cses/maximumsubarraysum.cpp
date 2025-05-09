#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    int best = INT_MIN, sum = 0;
    for(int i = 0;i < n;i++) {
        cin >> v[i];
        sum = max(v[i], sum + v[i]);
        best = max(best, sum);
    }
    cout << best << endl;
}

int32_t main() {
    int t = 1;
    while(t--) {
        solve();
    }
    return 0;
}   
