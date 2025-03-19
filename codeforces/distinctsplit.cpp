#include <bits/stdc++.h>

using namespace std;

void solve() {
    int tam;
    string a;
    cin >> tam >> a;

    vector<int> l(tam + 1), r(tam + 1);

    {
        unordered_set<int> s;
        for(int i = 0;i < tam;i++) {
            s.insert(a[i]);
            l[i + 1] = s.size();
        }
    }


    {
        unordered_set<int> s;
        for(int i = tam - 1;i >= 0;i--) {
            s.insert(a[i]);
            r[i] = s.size();
        }
    }

    int ans = 0;
    for(int i = 1;i < tam ;i++) {
        ans = max(ans, l[i] + r[i]);
    }
    cout << ans << endl;

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
