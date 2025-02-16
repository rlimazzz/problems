#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int a, b;
    cin >> a >> b;

    while(a != 0 || b != 0){

        bitset<68> numbera(a);
        bitset<68> numberb(b);

        int cont = 1;
        while(1){
            if(a / 2 > 0) {
                a /= 2;
                cont++;
            }else {
                break;
            }
        }

        int subs = 0;
        for(int i = 0;i < cont;i++) {
            if(numbera[i] != numberb[i]) {
                subs++;
            }
        }

        cout << subs << "\n";
        cin >> a >> b;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int t = 1;
    //cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}