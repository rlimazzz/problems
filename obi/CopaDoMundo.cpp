#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e6 + 10;
int rep[MAXN], tam[MAXN];

int find(int u) {
	if(rep[u] == u) return u;
	else {
		rep[u] = find(rep[u]);
		return rep[u];
	}
}

void unite(int u, int v) {
	u = find(u);
	v = find(v);

	if(tam[u] > tam[v]) {
		rep[v] = u;
		tam[u] += tam[v];
	}else {
		rep[u] = v;
		tam[v] += tam[u];
	}
}

int32_t main() {
	ios::sync_with_stdio(false); cin.tie(nullptr);
	int n , m, z;
	cin >> n >> m >> z;

	for(int i = 1;i <= n;i++) {
		rep[i] = i;
		tam[i] = 1;
	}
	int qtd =n;

    vector<pair<int,pair<int,int>>> ferrovias;
    vector<pair<int, pair<int,int>>> rodovias;  

	for(int i = 0;i < m;i++) {
		int x,y, v;
		cin >> x >> y >> v;

		ferrovias.push_back({v, {x, y}});
	}

    for(int i = 0;i < z;i++) {
		int x,y, v;
		cin >> x >> y >> v;

	    rodovias.push_back({v, {x, y}});
	}

    sort(ferrovias.begin(), ferrovias.end());
    sort(rodovias.begin(), rodovias.end());

    long long total_price = 0;
    for(int i =0;i < (int)ferrovias.size();i++) {
        auto [preco , tmp] = ferrovias[i];
        auto [primeiro, segundo] = tmp;
        if(find(primeiro) != find(segundo)) {
            unite(primeiro, segundo);
            total_price += (long long)preco;
        }
    }

    for(int i =0;i < (int)rodovias.size();i++) {
        auto [preco , tmp] = rodovias[i];
        auto [primeiro, segundo] = tmp;
        if(find(primeiro) != find(segundo)) {
            unite(primeiro, segundo);
            total_price += (long long)preco;
        }
    }

    cout << total_price << "\n";


	return 0;
}
