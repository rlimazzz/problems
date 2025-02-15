#include <bits/stdc++.h>

using namespace std;

void solve() {
    string n;
    int t;
    map<char, bool> existe;
    
    for(char i = 'A'; i <= 'Z';i++) {
        existe[i] = false;
    }

    cin >> t >>  n;

    int count = 0;
    if((int)n.size() < 24) {
        cout << "NO\n";
        return;
    }else {
        for(int i = 0;i < n.size();i++) {
            if(n[i] >= 'A' && n[i] <= 'Z') {
                if(!(existe[n[i]])) {
                    count++;
                }
                existe[n[i]] = true;
            }
            else if(n[i] >= 'a' && n[i] <= 'z') {
                if(!(existe[n[i] - 32])) {
                    count++;
                }
                existe[n[i] - 32] = true;
            }
        }
    }

    if(count == 26) {
        cout << "YES\n";
    }else {
        cout << "NO\n";
    }
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }

    return 0;
}