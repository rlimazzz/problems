#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl "\n"

void solve() {
    int a, b;
    cin >> a >> b;

    int c = a * b;

    if(b == 1) {
        cout << "NO" << endl;
        return;
    }

    int i = 1;
    while(1) {
        int op1 = (c * i) - a;

        if(op1 != a && ((c * i) - a) % c != 0 && op1 + a == c * i) {
            cout << "YES" << endl;
            cout << op1 << " " << a  << " " << (c * i) << endl;
            return;
        }
        i++;
    }

    cout << "NO" << endl;
    return;
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