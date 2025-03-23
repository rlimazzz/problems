#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector<string> val(10);
    vector<pair<int,int>> pos;
    for(int i = 0;i < 10;i++) {
        cin >> val[i];
    }

    for(int i = 0;i < 10;i++) {
        for(int j = 0;j < 10;j++) {
            if(val[i][j] == 'X') {
                pos.push_back({i,j});
            }
        }
    }

    int sum = 0;
    for(int i = 0;i < (int)pos.size();i++) {
        if((pos[i].first == 0 || pos[i].first == 9) || (pos[i].second == 0 || pos[i].second == 9)) {
            sum += 1;
        }
        else if(((pos[i].first == 1 || pos[i].first == 8) && pos[i].second >= 1 && pos[i].second <= 8) || ((pos[i].second == 1 || pos[i].second == 8) && pos[i].first >= 1 && pos[i].first <= 8)) {
            sum += 2;
        }
        else if(((pos[i].first == 2 || pos[i].first == 7) && pos[i].second >= 2 && pos[i].second <= 7) || ((pos[i].second == 2|| pos[i].second == 7) && pos[i].first >= 2 && pos[i].first <= 7)) {
            sum += 3;
        }
        else if(((pos[i].first == 3 || pos[i].first == 6) && pos[i].second >= 3 && pos[i].second <= 6) || ((pos[i].second == 3|| pos[i].second == 6) && pos[i].first >= 3 && pos[i].first <= 6)) {
            sum += 4;
        }else {
            sum += 5;
        }
    }

    cout << sum << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}