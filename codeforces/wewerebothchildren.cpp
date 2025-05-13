#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    //problema : achar a maior quantia de números cujo minímo múltiplo comum seja n e que esteja no vetor

    int n;
    cin >> n;

    vector<int> v(n + 1, 0), c(n + 1, 0);

    for(int i = 0;i < n;i++) {
        int x;
        cin >> x;

        if(x <= n) ++c[x];
    }

    for(int i = 1;i <= n; ++i) {
        for(int j = i; j <= n; j += i) v[j] += c[i];
    }

    cout << *max_element(v.begin(), v.end()) << endl;


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