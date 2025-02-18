#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    if(n == 0) {
        cout << "1\n";
    }else {
        if(n % 4 == 0) {
            cout << "6\n";
        }
        else if(n % 4 == 1) {
            cout << "8\n";
        }
        else if(n % 4 == 2) {
            cout << "4\n";
        }
        else if(n % 4 == 3) {
            cout << "2\n";
        }
    }
}

int32_t main() {
    int t = 1;
    
    while(t--) {
        solve();
    }

    return 0;
}