#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b, c; 
    bool check = true;
    int smallest = INT_MAX;
    for(int i = 0;i < n;i++) {
        cin >> a[i];
        if(i > 0) {
            if(a[i] != a[i - 1]) {
                check = false;
            }
        }
        smallest = min(smallest, a[i]);
    }

    if(check) {
        cout << -1 << endl;
        return;
    }

    for(int i =0;i < n;i++) {
        if(a[i] == smallest) {
            b.push_back(a[i]);
        }else {
            c.push_back(a[i]);
        }
    }

    cout << b.size() << " " << c.size() << endl;
    for(auto x : b) {
        cout << x << " ";
    }
    cout << endl;

    for(auto x : c) {
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