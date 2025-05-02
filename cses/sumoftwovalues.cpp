#include <bits/stdc++.h>

using namespace std;

pair<int,int> tp(vector<pair<int,int>>& v, int val) {
    int ini = 0, fim = (int)v.size() - 1;

    while(ini < fim) {
        if(v[ini].first + v[fim].first > val) {
            fim--;
        }
        else if(v[ini].first + v[fim].first < val) {
            ini++;
        }else {
            return {v[ini].second, v[fim].second};
        }
    }

    return {-1, -1};
}

void solve() {
    int n, x;
    cin >> n >> x;

    vector<pair<int,int>> v(n);
    for(int i = 0;i < n;i++) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    sort(v.begin(), v.end());

    int v1 = tp(v, x).first;    
    int v2 = tp(v, x).second;

    if(v1 == v2 && v2 == -1) {
        cout << "IMPOSSIBLE\n";
    }else {
        cout << v1 << " " << v2 << endl;
    }   
}   

int32_t main() {
    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
