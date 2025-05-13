#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);

    int n, m;
    cin >> n >> m; 

    vector<int> v(m);
    for(int i = 0;i < m;i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int mindist = INT_MAX;
    for(int i = 0;i < m;i++) {
        if(i + n - 1 < m) {
            mindist = min(mindist, v[i + n - 1] - v[i]);
        }else {
            break;
        }
    }

    cout << mindist << endl;

    return 0;
}