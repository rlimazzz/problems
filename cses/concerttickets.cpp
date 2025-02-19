#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    multiset<int> b;
    vector<int> copy(m);

    for(int i = 0;i < n;i++) {
        cin >> a[i];
    }
    
    for(int i = 0;i < m;i++) {
        int entr;
        cin >> entr;
        copy[i] = entr;
        b.insert(entr);
    }

    map<int,int> respostas;
    for(int i = n - 1;i >= 0;i--) { 
        auto it = lower_bound(b.begin(),b.end(),a[i]);

        if(it != b.end()) {
            int valor = *it;

            if(a[i] <= valor) {
                respostas[valor] = a[i];
                b.erase(it);
            }
        }
    }

    for(int i = 0;i < m;i++) {
        cout << respostas[copy[i]] << endl;
    }

}

int32_t main() {
    int t = 1;
    
    while(t--) {
        solve();
    }

    return 0;
}