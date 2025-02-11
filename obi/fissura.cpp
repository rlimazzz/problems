#include <bits/stdc++.h>

using namespace std;

vector<string> adj;
bool visited[501][501];
int viz[4][2] = {{0, 1}, {1, 0},{0, -1}, {-1, 0}};

bool valido(int posa, int posb, int maximo, int forca) {
	if(posa >= 0 && posa < maximo && posb >= 0 && posb < maximo) {
		stringstream transfere;
		int transformado;
		transfere << adj[posa][posb];
		transfere >> transformado;
		if(transformado <= forca) {
			return true;
		}
	}
	return false;
}

void DFS(int x,int y, int tam, int forca) {
	for(int i = 0;i < 4;i++) {
		int nextR = x + viz[i][0];
		int nextC = y + viz[i][1];

		if(valido(nextR, nextC,tam, forca) == true && visited[nextR][nextC] != 1) {
			visited[nextR][nextC] = 1;
			adj[nextR][nextC] = '*';
			DFS(nextR, nextC, tam, forca);
		}
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	for(int i =0;i < n;i++) {
		string entrada;
		cin >> entrada;
		adj.push_back(entrada);
	}

	stringstream transforma;
	int recebe;
	transforma << adj[0][0];
	transforma >> recebe;
	if(recebe <= m) {
		visited[0][0] = 1;
		adj[0][0] = '*';
		DFS(0, 0, n , m);	
	}

	for(auto x : adj) {
		cout << x << endl;
	}


	return 0;
}
