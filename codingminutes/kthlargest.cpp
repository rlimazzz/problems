#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector<int> nums = {3, 2, 3, 1 , 2, 4, 5, 5, 6};
    int k = 4;
    set<int> filter;
    vector<int> finale;

    for(auto x : nums) {
        filter.insert(x);
    }

    for(auto x : filter) {
        cout << x << " ";
        finale.push_back(x);
    }
    cout << finale[k - 1] << "\n";
    cout << endl;

}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }

    return 0;
}