#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int op1, op2, op3;
    if(c % a != 0) {
        op1 = c / a + 1;
    }else {
        op1 = c / a;
    }

    op2 = b - op1;
    op3 = b / (op2 + 1);

    if(!op2) cout << b << endl;
    else cout << op3 << endl;


}   

int32_t main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}