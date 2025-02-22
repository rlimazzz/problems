#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int cost = 0;

    for(int i = 0;i < (int)nums.size();i++) {
        if(i + 1 != (int)nums.size()){
            cost += nums[i] + nums[i + 1];
            nums.push_back(nums[i] + nums[i + 1]);
            i += 1;
        }else {
            break;
        }
    }

    cout << cost << "\n";
}

int32_t main() {
    int t =1;

    while(t--) {
        solve();
    }

    return 0;
}