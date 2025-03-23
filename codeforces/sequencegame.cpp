#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v;
    for(int i =0;i < n;i++) {
        int x;
        cin >> x;
        if(i && v.back() > x) {
            v.push_back(1);
        }
        v.push_back(x);
    }

    cout << v.size() << endl;
    for(auto x : v) {
        cout << x << " ";
    }
    cout << endl;
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