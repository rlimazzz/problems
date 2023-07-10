#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100;
#define endl '\n';

int main(){
  map<int, int> instaladas;
  map<int , int > resp;
  int c, n;
  cin >> c >> n;
  for(int i = 0;i < c;i++){
    int a , b;
    cin >> a >> b;
    instaladas[a] = b;
  }
  for(int i = 0;i < n;i++){
    int a , b;
    cin >> a >> b;
    if(instaladas.find(a) != instaladas.end()){
      if(b > instaladas[a] && resp.find(a) == resp.end()){
        resp[a] = b;
      }
      else if(b > instaladas[a] && resp.find(a) != resp.end()){
        if(resp[a] < b){
          resp[a] = b;
        }
      }
    }else{
      if(resp.find(a) != resp.end()){
        if(resp[a] < b){
          resp[a] = b;
        }
      }else{
        resp[a] = b;
      }
    }
  }
  for(auto x : resp){
    cout << x.first << " " << x.second << endl;
  }
  return 0;
}
