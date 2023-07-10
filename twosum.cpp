#include <bits/stdc++.h>

using namespace std;

int main(){
  int n , t;
  cin >> n >> t;
  vector<pair<int, string>> jogadores;
  vector<string> times[1005];
  for(int i = 0 ; i < n; i++){
    int h;
    string nome;
    cin >> h >> nome;
    jogadores.push_back(make_pair(h , nome));
  }
  sort(jogadores.begin(), jogadores.end());
  int contador = 1;
  for(int i = jogadores.size() - 1; i >= 0;i--){
    if(contador <= t){
      times[contador].push_back(jogadores[i].second);
      contador++;
    }else{
      contador = 1;
      times[contador].push_back(jogadores[i].second);
      contador++;
    }
  }
  for(int i = 1; i <= t;i++){
    cout << "Times " << i << endl;
    sort(times[i].begin(), times[i].end());
    for(int k = 0;k < times[i].size();k++){
      cout << times[i][k] << endl;
    }
    cout << endl;
  }
  return 0;
}
