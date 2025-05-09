#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    int l = 0, r = 0;

    vector<int> v(n);
    for(int i = 0;i < n;i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0;i < n;i++) {
        int a = l, b = r;
        if(i == 0 && v[i] != 1) {
            cout << 1 << endl;
            return;
        }else {
            if((a + v[i]) - r > 1) {
                cout << r + 1 << endl;
                return;
            }else {
                r += v[i];
            }
        }
    }
    cout << r + 1 << endl;

}

int32_t main(){
    int t = 1;

    while(t--) {
        solve();
    }

    return 0;
}
