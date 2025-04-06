#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    vector<int> psum(n);
    int sum = 0;
    for(int i = 0;i < n;i++) {
        cin >> v[i];
        sum += v[i];
        psum[i] = sum;
    }

    if(n > 2) {
        for(int i = 0;i < n;i++) {
            if((sum - psum[i]) % 2 != 0 && psum[i] % 2 != 0) {
                cout << "YES\n";
                return;
            }
            else if((sum - psum[i]) % 2 == 0 && psum[i] % 2 == 0) {
                cout << "YES\n";
                return;
            }
        }
    }else {
        if((v[0] % 2 == 0 && v[1] % 2 == 0) || (v[0] % 2 != 0 && v[1] % 2 != 0) ) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int t = 1;
    cin >> t;
    
    while(t--) {
        solve();
    }

    return 0;
}