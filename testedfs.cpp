#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

typedef long long ll;
typedef double long dl;
typedef vector<int> vi;
typedef pair<int, int> pii;

vector<bool> visited;
vi adj[1000];

void dfs(int x){
  visited[x] = true;
  cout << x << endl;
  for(auto u : adj[x]){
    if(!visited[u]){
      dfs(u);
    }
  }
}


int main(){
  visited.assign(5, false);
  adj[1].push_back(2);
  adj[2].push_back(3);
  adj[2].push_back(1);
  adj[3].push_back(2);
  dfs(3);
  
  
  return 0;
}
