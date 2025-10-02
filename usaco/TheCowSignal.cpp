#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    freopen("cowsignal.in", "r", stdin);
    int n, m , k;
    cin >> n >> m >> k;

    string mat[n];
    
    for(int i = 0;i < n;i++) {
        cin >> mat[i];
    }

    vector<string> ans;
    for(int i = 0;i < n;i++) {
        string montada;
        for(int j = 0;j < m;j++) {
            for(int v = 0;v < k;v++) {
                montada += mat[i][j];
            }
        }
        for(int v = 0; v < k;v++) {
            ans.push_back(montada);
        }
    }

    freopen("cowsignal.out", "w", stdout);
    for(auto x : ans) {
        cout << x << "\n";
    }

    return 0;
}
