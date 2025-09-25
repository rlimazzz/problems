#include <bits/stdc++.h>

using namespace std;

void solve() {  
    int n, m;
    string a, b, ord;
    cin >> n >> a >> m >> b >> ord;

    for(int i = 0;i < b.size();i++) {
        if(ord[i] == 'D') {
                a.push_back(b[i]);
        }else {
            a.push_back('0');
            for(int j = (int)a.size() - 1;j >= 0;j--) {
                if(j == 0) {
                    a[j] = b[i];
                }else {
                    a[j] = a[j - 1];
                }
            }
        }
    }

    cout << a << endl;

}

int32_t main() {
    int entr;
    cin >> entr;

    while(entr--) {
        solve();
    }
    return 0;
}