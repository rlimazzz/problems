#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9;

void solve() {
    int n, m;
    cin >> n >> m;

    long long sum = 0;
    for(int i = 0;i <= m;i++) {
        sum += pow(n, i);
        if(sum > inf) {
            cout << "inf\n";
            return;
        }
    }

    if(sum > inf) {
        cout << "inf\n";
    }else {
        cout << sum << "\n";
    }
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }
    return 0;
}
