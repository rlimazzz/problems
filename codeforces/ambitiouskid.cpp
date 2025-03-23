#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int n;
    cin >> n;

    int minimo = INT_MAX;

    for(int i = 0;i < n;i++) {
        int entr;
        cin >> entr;

        minimo = min(minimo, abs(entr));

    }

    cout << minimo << endl;
    return 0;
}