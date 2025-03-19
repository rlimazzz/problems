#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b;
    string entr;
    cin >> a >> b >> entr;

    int f = -1, l = -1, cnt = INT_MIN, variable = 0;
    vector<pair<int,int>> entrs;
    for(int i = 0;i < (int)entr.size();i++) {
        if(entr[i] == 'W' && f == -1) {
            f = i;
            l = i;
            cnt = max(cnt, variable);
            variable = 0;
        }
        else if(entr[i] == 'W') {
            l = i;
            cnt = max(cnt, variable);
            variable = 0;
        }
        else if(entr[i] == 'B' && f != -1) {
            entrs.push_back({f, l});
            f = -1;
        }
        
        if(i + 1 == (int)entr.size() && f != -1) {
            entrs.push_back({f, l});
        }
        if(entr[i] == 'B') {
            variable++;
        }


        cout << f << " !! ";
    }
    cout << endl;

    cout << cnt << endl;

    if(cnt == b) {
        cout << 0 << endl;
        return;
    }

    int ans = 0;
    for(int i = 0;i < entrs.size();i++) {
        if(i == 0) {
    
        }   
    }

}

int32_t main() {
    int t =1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}   
