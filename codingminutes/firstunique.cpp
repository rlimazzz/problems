#include <bits/stdc++.h>

using namespace std;

int solve() {
    string in;
    cin >> in;

    map<char, pair<int,int>> itens;

    for(int i = 0;i < (int)in.size();i++) {
        if(itens.find(in[i]) != itens.end()) {
            itens[in[i]].first++;
            itens[in[i]].second = i;
        }else {
            itens[in[i]].first = 1;
        }
    }

    for(int i = 0;i < (int)in.size();i++) {
        if(itens[in[i]].first == 1) {
            return itens[in[i]].second;
        }
    }
    return -1;
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }

    return 0;
}