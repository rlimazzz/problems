#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<int> elementos;
int n , m;

int two_pointers() {
    int ini = 0, fim = n - 1, result = n;

    while(ini < fim) {
        if(elementos[ini] + elementos[fim] <= m) {
            result--;
            ini++;
            fim--;
        }else {
            fim--;
        }
    }

    return result;
}

void solve() {
    cin >> n >> m;

    for(int i = 0;i < n;i++) {
        int entr;
        cin >> entr;
        elementos.push_back(entr);
    }

    sort(elementos.begin(), elementos.end());

    int maximum = n;

    cout << two_pointers() << "\n";
}

int32_t main() {
    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}