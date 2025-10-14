#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	freopen("cownomics.in","r", stdin);
    int n, m;
    cin >> n >> m;

    vector<string> spotty(n), plain(n);
    map<int, set<char>> sp;
    map<int, set<char>> pl;
    for(int i = 0;i < n;i++) {
        cin >> spotty[i];
    }

    
    for(int i = 0;i < n;i++) {
        cin >> plain[i];
    }
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            sp[j].insert(spotty[i][j]);
            pl[j].insert(plain[i][j]);
        }
    }

    int count = 0;
    for(auto x : pl) {
        // cout << x.first << " : ";
        int vai = 0;
        for(auto y : x.second) {
            // cout << y << ", ";
            if(sp[x.first].find(y) == sp[x.first].end()) {
                vai++;
            }
        }
        if(vai == (int)x.second.size()) {
            count++;
        }
        // cout << "\n";
    }
    freopen("cownomics.out","w", stdout);

    cout << count << "\n";
    return 0;
}