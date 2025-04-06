#include <bits/stdc++.h>

using namespace std;

int op[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
int matriz[1010][1010];
int vis[1010][1010];
int n, m;

bool check(int x, int y) {
    return x < n && x >= 0 && y < m && y>=0 && vis[x][y] == 0 && matriz[x][y] != 0; 
}

int dfs(int x, int y) {
    int sum = 0;
    sum += matriz[x][y];

    vis[x][y] = 1;

    for(int i = 0;i < 4;i++) {
        int x1 = op[i][0], y1 = op[i][1];

        if(check(x + x1, y + y1)) {
            sum += dfs(x + x1, y + y1);
        }
    }
    return sum;
}

void solve() {
    memset(vis, 0, sizeof(vis));
    cin >> n >> m ;

    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            cin >> matriz[i][j];        
        }
    }

    int maxs = 0;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < m;j++) {
            if(matriz[i][j] != 0 && vis[i][j] == 0) {
                maxs = max(maxs, dfs(i,j));
            }
        }
    }  
    cout << maxs << endl;
}

int32_t main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}
