#include <bits/stdc++.h>
#include <string>

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    string a1, b1;
    cin >> a1 >> b1;

    int i = 0;

    while(i < 6) {
        if(a1.size() >= b1.size()) {
            for(int j = 0;j < a1.size() - b1.size() + 1;j++) {
                if(a1.substr(j, b1.size()) == b1) {
                    cout << i << endl;
                    return;
                }
            }
        }
        a1 += a1;

        i++;
    }
    cout << -1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
