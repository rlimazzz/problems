#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6 + 10;
int rep[MAX], tam[MAX];

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
	cin >> n >> m;

	for(int i = 1;i <= n;i++) {
		rep[i] = i;
		tam[i] = 1;
	}
	int qtd =n, maior = INT_MIN;

	for(int i = 0;i < m;i++) {
		int x,y;
		cin >> x >> y;

		if(find(x) != find(y)) {
			unite(x, y);
			qtd--;
		}
	}

    cout << qtd << "\n";


	return 0;
}
