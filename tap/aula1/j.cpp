#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    int a1 = 0, a2 = 0;
    for(int i = 0;i < k;i++) {
        int a, b;
        cin >> a >> b;

        if(i == 0) {
            a1 = a;
            a2 = b;
        }else {
            if(a1 < a) {
                if(a <= a2) {
                    a1 = a;
                    if(b < a2) {
                        a2 = b;
                    }
                }else {
                    cout << 0 << endl;
                    return;
                }
            }
        }
    }

    cout << a2 - a1 + 1 << endl;
}

int32_t main() {
    int t = 1;
    
    while(t--) {
        solve();
    }

    return 0;
}
