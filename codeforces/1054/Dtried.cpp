#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    string st;
    cin >> st;
    /*
        theres two problems
        1 : whats the optimal way to change the position of characters so that we can group the characters of a type
        2 : how can we count the continuous number of characters of the same type

        first test case
        abab - sum of distances of groups 'a' characters = 1 , sum of distances of groups 'b' characters = 1, so we can pick any of them

        bababa - sum of distances of groups 'a' characters = 2, sum of distances of groups 'b' characters = 2, so we can pick any of them

        ab - all characters are already grouped so theres no reason to make any operations

    */  


    vector<pair<int,int>> a, b;
    int ini = 0;
    for(int i = 1;i < n;i++) {
        if(st[i] != st[i - 1]) {
            if(st[i - 1] == 'a') {
                a.push_back({ini, i - 1});
            }
            else if(st[i - 1] == 'b') {
                b.push_back({ini, i - 1});
            }
            ini = i;
        }
        
        if(i + 1 == n) {
            if(st[i] == 'a') {
                a.push_back({ini, i});
            }
            else if(st[i] == 'b') {
                b.push_back({ini, i});
            }
        }
    }

    if((int)a.size() == 1 || (int)b.size() == 1) {
        cout << "0\n";
    }else {
        int ta = 0, tb = 0;
        for(int i = 1; i < a.size();i++) {
            ta += min(a[i - 1].second - a[i - 1].first + 1, a[i].first - a[i - 1].second);

            // aaabbaaabbb
        }

        for(int i = 1; i < b.size();i++) {
            tb += min(b[i - 1].second - b[i - 1].first + 1, b[i].first - b[i - 1].second);
        }

        cout << min(ta, tb) << "\n";
    }

}

/*
a b 
a b a
b a
b a b

X 
0   X
1 X-1
...
X 0

0 1 2 3 4 5 6
b b a a b a 
*/

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