#include <bits/stdc++.h>

using namespace std;

void solve() {
    int entr;
    cin >> entr;

    int copy = entr + 1, copy2 = entr + 1;
    while(1) {
        set<int> valores;
        copy2 = copy;

        for(int i = 0;i < 4;i++) {
            valores.insert(copy2%10);
            copy2 /= 10;
        }

        if(valores.size() >= 4) {
            cout << copy << "\n";
            return;
        }
        copy++;
    }
}

int32_t main() {
    int t= 1;
    
    while(t--) {
        solve();
    }

    return 0;
}