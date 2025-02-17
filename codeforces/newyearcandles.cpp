#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int a , b;
    cin >> a >> b;

    int mainly = a, temp = 0, bla =0 ;    
    while(a >= b) {
        bla = a / b;
        mainly += bla;
        temp = a % b;
        a = bla + temp;
    }


    cout << mainly << "\n";
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }
}