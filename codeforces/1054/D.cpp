#include <bits/stdc++.h>

using namespace std;

#define int long long

int n;

int get(vector<int> a) {
    if(a.empty()) return 0;

    int pos = (int)a.size() / 2, val = 0;
    for(int i = 0; i < a.size();i++) {
        val += abs(a[pos] - a[i]) - abs(pos - i);
        // abababaaa
        // a = {1, 3, 5, 7, 8, 9}, val += abs(7 - 1) - abs(3 - 0) = 3
    }
    return val;
}

void solve() {
    cin >> n;

    vector<int> a, b;
    
    for(int i = 1;i <= n;i++) { 
        char c;
        cin >> c;

        if(c == 'a') {
            a.push_back(i);
        }
        else b.push_back(i);
    }

    cout << min(get(a), get(b)) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}