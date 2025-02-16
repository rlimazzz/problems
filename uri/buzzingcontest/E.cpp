#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve(int n) {
    vector<int> a(n);
    map<int,int> index;

    for(int i = 0;i < n;i++) {
        cin >> a[i];

        if(index.find(a[i]) != index.end()) {
            index[a[i]]++;
        }else {
            index[a[i]] = 1;
        }
    }

    for(auto x : index) {
        if(x.second % 2 != 0) {
            cout << x.first << "\n";
            return;
        }
    }

}

int32_t main() {
    int t;
    cin >> t;

    while(t != 0) {
        solve(t);
        cin >> t;
    }

    return 0;
}