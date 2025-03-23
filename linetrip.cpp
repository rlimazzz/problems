#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n + 2, 0);
        int maximo = 0;
        for(int i = 1;i <= n;i++) {
            cin >> v[i];
        }
        v[n + 1] = k;

        for(int i = 1;i <= n + 1;i++) {
            if(i == n + 1) {
                maximo = max(maximo, (v[i] - v[i - 1]) * 2);
            }else {
                maximo = max(maximo, (v[i] - v[i - 1]));
            }
        }

        cout << maximo << endl;
    }

    return 0;
}
