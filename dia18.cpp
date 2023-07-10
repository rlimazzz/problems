#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;
typedef double long dl;

vi adj[1001];
vector<bool> visited;

void bfs(int k){
  queue<int> list;
  list.push(k);
  while(!list.empty()){
    visited[k] = true;
    cout << k << " ";
    list.pop();
    for(auto x : adj[k]){
      if(!visited[x]){
        list.push(x);
      }
    }
  }
}

int main(){
  int n;
  cin >> n;
  for(int i = 0;i < n;i++){
    int k , x;
    cin >> k >> x;
    adj[k].push_back(x);
  }
  bfs(0);
  return 0;
}
