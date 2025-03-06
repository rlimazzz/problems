#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, a , b;
    cin >> n >> a >> b;

    int count = 0;
    for(int i = 1;i <= n;i++) {
        if(n - i >= a && i - 1 <= b) {
            count++;
        }
    }

    cout << count << endl;
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }

    return 0;
}