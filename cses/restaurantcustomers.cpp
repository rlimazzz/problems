#include <bits/stdc++.h>

using namespace std;

/*
   a ideia desse problema é assimilar aos de entrada um valor e aos de saída o mesmo valor negativo
   assim temos a possibilidade de ordenar todo o vetor e somar seus valores achando o maximo em um intervalo
   de tempo
*/

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> val;


    for(int i = 0;i < n;i++) {
        int a , b;
        cin >> a >> b;

        val.push_back({a, 1});
        val.push_back({b, -1});
    }

    sort(val.begin(), val.end());
    
    int maxim = 0, cont = 0;
    for(int i = 0;i < val.size();i++) {
        cont += val[i].second;
        maxim = max(maxim, cont);
    }
    cout << maxim << endl;
}

int32_t main() {
    int t = 1;
    while(t--) {
        solve();
    }

    return 0;
}
