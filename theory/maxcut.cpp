#include <bits/stdc++.h>

using namespace std;

int grafo[20][20];
vector<pair<int,int>> arestas;


void solve() {
    int n, m;
    cin >> n >> m;

    for(int i = 0;i < m;i++) {
        int a, b;
        cin >> a >> b;
        arestas.push_back({a, b});

        //indexed at 0
        grafo[a][b] = 1;
        grafo[b][a] = 1;
    }

    int count = 0;
    for(int mask = 0;mask <= (1 << n) - 1;mask++) {
        int temp = 0;
        for(int j = 0;j < m;j++) {
            int a = arestas[j].first, b = arestas[j].second;

            if((mask & (1 << a)) != 0 && (mask & (1 << b)) != 0) {
                continue;
            }
            else if((mask & (1 << a)) == 0 && (mask & (1 << b)) == 0) {
                continue;
            }
            else {
                temp++;
            }
        }
        count = max(count, temp);
    }

    cout << count << "\n";
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }

    return 0;
}
