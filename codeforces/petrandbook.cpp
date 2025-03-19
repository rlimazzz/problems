#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int n;
    cin >> n;

    vector<int> v(7);
    for(int i = 0;i < 7;i++) {
        cin >> v[i];
    }

    int qtd = 0, i = 0;
    while(qtd < n) {
        if(i == 7) {
            i = 0;
        }

        qtd += v[i];
        i++;
    }

    cout << i << endl;

    return 0;
}
