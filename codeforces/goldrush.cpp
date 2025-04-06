#include <bits/stdc++.h>

using namespace std;

int n, m;
bool recursion(int x){
    if(x == m) {
        return 1;
    }
    else if(x % 3 == 0) {
        return max(recursion((2 * x) / 3), recursion(x / 3));
    }
    return 0;
}

void solve(){
    cin >> n >> m;

    if(n == m) {
        cout << "YES\n";
        return;
    }else {
        recursion(n) ? cout << "YES\n" : cout << "NO\n";
    }
}

int32_t main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
