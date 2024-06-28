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
	int n , m;
	cin >> n;

    for(int i =0 ;i < n;i++) {
        int entr;
        cin >> entr;
    }

	for(int i = 1;i <= n;i++) {
		rep[i] = i;
		tam[i] = 1;
	}
	int qtd =n;

    vector<pair<int,pair<int,int>>> arestas;  
    cin >> m;

	for(int i = 0;i < m;i++) {
		int x,y, z;
		cin >> x >> y >> z;

		arestas.push_back({z, {x, y}});
	}

    sort(arestas.begin(), arestas.end());

    set<int> marcados;
    long long total_price = 0;
    for(int i =0;i < (int)arestas.size();i++) {
        auto [preco , tmp] = arestas[i];
        auto [primeiro, segundo] = tmp;
        if(find(primeiro) != find(segundo) && marcados.find(segundo) == marcados.end()) {
            unite(primeiro, segundo);
            marcados.insert(segundo);
            total_price += (long long)preco;
        }
    }

    int paiz = 0;
    for(int i = 1;i <= n;i++) {
        if(i == 1) {
            paiz = find(i);
        }
        else if(paiz != find(i)) {
            cout << "-1\n";
            return 0;
        }
    }

    cout << total_price << "\n";


	return 0;
}
