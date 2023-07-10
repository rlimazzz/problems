#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100;
#define endl '\n';

int main(){
  map<string , string> trad;
  string palavra;
  int t , m , n;
  cin >> t;
  for(int i = 0;i < t;i++){
    cin >> m >> n;
    for(int k = 0;k < m;k ++){
      string a , b;
      cin >> a;
      getline(cin >> ws, b);
      trad[a] = b;
    }
    for(int j = 0;j < n;j++){
      palavra.clear();
      string pra;
      getline(cin >> ws , pra);
      for(int p = 0;p <= (int)pra.size();p++){
        if(pra[p] != ' ' && p != (int)pra.size()){
           palavra += pra[p];
        }else{
          if(trad.find(palavra) != trad.end()){
            cout << trad[palavra] << " ";
            palavra.clear();
          }else{
            cout << palavra << " ";
            palavra.clear();
          }
        }
      
      }
      cout << endl;
    }
    if(i == t){
      cout << endl;
    }
  }
  return 0;
}
