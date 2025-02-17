#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    string entr;
    cin >> n >> entr;

    stack<char> open;

    int ans = 0;
    for(int i = 0;i < n;i++) {
        if(entr[i] == '(') {
            open.push('(');
        }else {
            if(open.empty()) {
                ans++;
            }else {
                open.pop();
            }
        }
    }

    if((int)open.size() > 0) {
        ans += open.size();
    }

    cout << ans / 2 << "\n";
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}