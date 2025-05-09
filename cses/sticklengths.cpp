#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0;i < n;i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int medio = v[n / 2], count = 0;
    
    for(int i = 0;i < n;i++) {
        if(v[i] != medio) {
            count += abs(v[i] - medio);
        }
    }
    cout << count << endl;
}

int32_t main(){
    int t = 1;

    while(t--) {
        solve();
    }

    return 0;
}
