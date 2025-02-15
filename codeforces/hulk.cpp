#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    string inicial = "I hate";
    for(int i = 1;i < n;i++) {
        if(i % 2 == 0) {
            inicial += " that I hate";
        }else {
            inicial += " that I love";
        }
    }
    cout << inicial << " it\n";
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }
}