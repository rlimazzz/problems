#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n + 5);
    vector<int> b(n + 5);

    for(int i = 1;i <= n;i++) {
        cin >> a[i];
    }

    for(int i = 1;i <= n;i++) {
        int present = a[i];
        if(present != i) {
            while(present != i) {
                if(a[present] == i) {
                    cout << present << " ";
                    break;
                }
                present = a[present];
            }
       }else {
        cout << present << " ";
       }
    }
    cout << endl;

    
}

int32_t main() {
    int t = 1;
    
    while(t--) {
        solve();
    }
    return 0;
}