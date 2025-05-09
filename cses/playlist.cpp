#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0;i < n;i++) {
        cin >> v[i];
    }

    int l = 0, r = 0;

    int maxi = 0;
    set<int> b;
    while(l < n && r < n) {
        if((int)b.size() < (r - l)) {
            if(v[l] == v[r - 1]) {
                l++;
                continue;
            }

            b.erase(v[l]);
            l++;
        }else {
            b.insert(v[r]);
            r++;
        }
        maxi = max(maxi, (int)b.size());
    }
    cout << maxi << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int t = 1;

    while(t--) {
        solve();
    }

    return 0;
}   
