#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector<double> valores(3);
    vector<double> valores2(3);

    for(int i = 0;i < 3;i++) {
        cin >> valores[i];
        valores2[i] = valores[i];
    }

    sort(valores.begin(), valores.end());

    if(valores[0] + valores[1] > valores[2]) {
        cout << "Perimetro = " << valores[0] + valores[1] + valores[2] << "\n";
    }else {
        cout <<  "Area = " << ((valores2[0] + valores2[1]) * valores2[2]) / 2 << "\n";
    }
}

int32_t main() {
    int t = 1;
    
    cout << fixed << setprecision(1);

    while(t--) {
        solve();
    }
}