#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    freopen("circlecross.in", "r", stdin);
    string entr;
    cin >> entr;

    map<char, pair<int,int>> si;
    for(int i = 0;i < 52;i++) {
        if(si.find(entr[i]) == si.end()) {
            si[entr[i]].first = i;
        }
        else {
            si[entr[i]].second = i;
        }
    }

    int count = 0;
    for(auto it = si.begin(); it != si.end(); it++){
        for(auto prox = si.begin(); prox != si.end();prox++) {
            if(it == prox) {
                continue;
            }
            // cout << it->second.first << ' ' << it->second.second << ' ' << prox->second.first << ' ' << prox->second.second << endl;
            if(it->second.second > prox->second.first && it->second.second < prox->second.second && prox->second.first > it->second.first) {
                count++;
            }
        }
    }

    freopen("circlecross.out", "w", stdout);
    cout << count << "\n";
    return 0;
}