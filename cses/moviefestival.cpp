#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> &a, pair<int,int> &b) {
    return (a.second < b.second);
}

void solve() {
    int n;
    cin >> n;

    vector<pair<int,int>> val(n);

    int last = -1;

    for(int i = 0;i < n;i++) {
        cin >> val[i].first >> val[i].second;
    }

    sort(val.begin(), val.end(), cmp);

    int count = 0;
    for(int i = 0;i < n;i++) {
        if(val[i].first >= last) {
            count++;
            last = val[i].second;
        }
    }

    cout << count << endl;
}   

int32_t main() {
    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
