#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

const int maxn = 1e5+10;
const int inf = 1e9+10;

int n , m;

int dist[maxn];

bool mark[maxn];

vector<pii> grafo[maxn];

void dijkstra(int S) {
	for(int i = 1;i <= n;i++) {
		dist[i] = inf;
	}

	dist[S] = 0;

	priority_queue<pii, vector<pii>, greater<pii>> fila;

	fila.push({0, S});

	while(!fila.empty()) {
		int u = fila.top().second;

		fila.pop();
		
		if(mark[u]) continue;

		mark[u] = 1;

		for(auto V : grafo[u]) {
			int v = V.first, w = V.second;

			if(dist[v] > dist[u] + w) {
				dist[v] = dist[u] + w;

				fila.push({dist[v], v});
			}
		}
	}
}

void solve() {
	cin >> n >> m;

	for(int i = 0;i < m;i++) {
		int a, b, c;
		cin >> a >> b >> c;

		grafo[a].push_back({b, c});
		grafo[b].push_back({a, c});
	}

	dijkstra(1);

	for(int i = 1;i <= n;i++) {
		cout << dist[i] << ",";
	}	
	cout << endl;
}

int32_t main() {
	int t = 1;
	//cin >> t;
	
	while(t--) {
		solve();
	}

	return 0;
}
