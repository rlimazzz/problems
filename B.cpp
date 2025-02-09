#include <bits/stdc++.h>

using namespace std;

void solve() {
    string entr;
    cin >> entr;
    int answer = (int)entr.size();

    for(int i =(int)entr.size() - 1;i >= 1;i--) {
        if(entr[i] == entr[i - 1]) {
            answer = 1;
        }
    }

    cout << answer << "\n";
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}