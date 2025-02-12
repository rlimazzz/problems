#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n , m;
    cin >> n >> m;

    vector<int> a(n + 1);
    vector<int> b(m + 1);

    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }

    for(int i = 0;i < m;i++) {
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    int p = min(a[1], b[1] - a[1]);

    for(int i = 1;i < n;i++) {
        if(min(b[1] - a[i], a[i]) < p) {
            cout << "NO\n";
            return;
        }

        int p = min(b[1] - a[i], a[i]);

    }


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