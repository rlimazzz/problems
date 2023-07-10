#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100;
#define endl '\n';

int main(){
  int a , b, contador = 1;
  while(true){
    cin >> a >> b;
    vector<int> A[a];
    vector<int> ot;
    if(a == 0 && b == 0){
      break;
    }else{
      for(int i = 1;i <= b;i++){
        int chegou , partiu;
        cin >> chegou >> partiu;
        A[chegou].push_back(chegou);
        A[partiu].push_back(partiu);
      }
      int maximo;
      for(int i = 1; i <= a;i++){
        if((int)A[i].size() >= maximo){
          maximo = A[i].size();
          ot.push_back(maximo);
        }
      }
      cout << "Teste " << contador << endl;
      contador++;
      for(int k = (int)ot.size();k >= 0;k--){
        if(ot[k] != ot[k - 1]){
          cout << ot[k] << endl;
          break;
        }else{
          cout << ot[k] << " ";
        }
      }
      cout << endl;
    }
  }
  return 0;
}
