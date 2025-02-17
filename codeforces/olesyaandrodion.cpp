#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n , t;
    cin >> n >> t;
    string monta;

    if(n !=1 || t != 10) {
        int soma = 0;
        
        if(t != 10){
            for(int i = 0;i < n;i++) {
                char b;
                stringstream a;
                a << t;
                a >> b;
                monta += b;
            }
        }else {
            for(int i = 0;i < n - 1;i++) {
                monta += '1';
            }
            monta += '0';
        }
    }else {
        printf("-1\n");
        return;
    }
    cout << monta << "\n";
}

int32_t main() {
    int t = 1;
    
    while(t--) {
        solve();
    }

    return 0;
}