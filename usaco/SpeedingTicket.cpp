#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int n, m;
    cin >> n >> m;
    
    vector<pair<int,int>> tr, ma;
    for(int i = 0;i < n;i++) {
        int a, b;
        cin >> a >> b;
        tr.push_back({a, b});
    }

    for(int i = 0;i < m;i++) {
        int a, b;
        cin >> a >> b;
        ma.push_back({a, b});
    }

    int maxi = 0, start = 0;
    for(int i = 0;i < n;i++) {
        for(int j = start;j < m;j++) {
            maxi = max(maxi, ma[j].second - tr[i].second);
            if(tr[i].first > ma[j].first) {
                tr[i].first -= ma[j].first;
                start++;
            }else {
                ma[j].first -= tr[i].first;
                if(ma[j].first == 0) {
                    start++;
                }
                break;
            }
        }
    }
    cout << maxi << "\n";
    return 0;
}