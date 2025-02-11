#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n , m;
    cin >> n >> m;

    vector<int> first;
    vector<int> second;

    for(int i = 0;i < n;i++) {
        int entr;
        cin >> entr;

        first.push_back(entr);
    }

    int minimum = INT_MAX;
    for(int i = 0;i < m;i++) {
        int entr;
        cin >> entr;

        second.push_back(entr);
        minimum = min(minimum , entr);
    }

    sort(second.begin(), second.end());

    if(minimum - first[0] < first[0]) {
        first[0] = minimum - first[0];
    }


    for(int i = 1;i < n;i++) {
        auto it = lower_bound(second.begin(), second.end(), first[i - 1]);
        auto it2 = lower_bound(second.begin(), second.end(), first[i - 1] + first[i]);
        int number = INT_MIN;
        int number2 = INT_MIN;

        if(it != second.end()) {
            number = *it;
        }

        if(it2 != second.end()) {
            number2 = *it2;
        }

        if(first[i - 1] > first[i]) {
            if(number != INT_MIN || number2 != INT_MIN) {
                if(number - first[i] >= first[i - 1]){
                    first[i] = number - first[i];
                }
                else if(number2 - first[i] >= first[i - 1]) {
                    first[i] = number2 - first[i];
                }
            }else {
                cout << "NO\n";
                return;
            }
            
        }
    }

    cout << "YES\n";
    return;
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