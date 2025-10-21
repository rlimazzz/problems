#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main() {
    ifstream cin ("div7.in");
    ofstream cout ("div7.out");

    int n;
    cin >> n;

    vector<int> val(n), sum(n + 5, 0), ocur(7, -1);
    for(int i = 0;i < n;i++) {
        cin >> val[i];
    }

    sum[0] = val[0] % 7;
    int maximo = INT_MIN;
    for(int i = 1;i < n;i++) {
        sum[i] = (sum[i - 1] + val[i]) % 7;
    }

    for(int i = 0;i < n;i++) {
        if(ocur[sum[i]] == -1) ocur[sum[i]] = i;
        else maximo = max(maximo, i - ocur[sum[i]]);
    }
    cout << maximo << "\n";
    return 0;
}