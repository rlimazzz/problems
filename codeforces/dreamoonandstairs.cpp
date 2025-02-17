#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9 + 10;

void solve() {
    int a , b;
    cin >> a >> b;

    int maximo = a, minimo = (a + 1) / 2;

    if(a < b) {
        cout << -1 << endl;
        return;
    }

    for(int i = minimo;i <= maximo;i++) {
        if(i % b == 0) {
            cout << i << endl;
            return;
        }
    }   
    cout << -1 << endl;
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }

    return 0;
}