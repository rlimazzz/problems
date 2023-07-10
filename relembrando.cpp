#include <bits/stdc++.h>

using namespace std;

vector<bool> visited;
vector<int> adj[1001];

void dfs(int x){
  for(int i = 0;i < (int)adj[x].size(); i++){
    int v = adj[x][i];
    cout << v << " ";
    if(visited[v] == false){
      visited[v] = visited[x];
      dfs(v);
    }
  }
}

int main(){
  visited.assign(false, 5);
  adj[1].push_back(2);
  adj[1].push_back(3);
  adj[3].push_back(4);
  adj[3].push_back(5);
  dfs(1);
  return 0;
}
