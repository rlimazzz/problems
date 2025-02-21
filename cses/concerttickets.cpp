#include <bits/stdc++.h>

using namespace std;

multiset<int> a;

auto bs() {
    auto ini = a.begin(), fim = a.end();
    int val1 = *ini, val2 = *fim;
}


void solve() {
    int n , m;
    cin >> n >> m;

    vector<int> valores(m);

    for(int i = 0;i < n;i++) {
        int entr;
        cin >> entr;

        a.insert(entr);
    }

    for(int i = 0;i < m;i++) {
        cin >> valores[i];
        
        auto it = lower_bound(a.begin(), a.end(), valores[i]);
    }


}

int32_t main() {
    int t = 1;
    
    while(t--) {
        solve();
    }

    return 0;
}