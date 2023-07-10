#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100;
#define endl '\n';

int ar[100100];

int main(){
  int n , m, soma = 0;
  cin >> n >> m;
  for(int i = 0;i < n;i++){
    int entrada;
    cin >> entrada;
    if(ar[entrada] == 0){
      ar[entrada] += 1;
    }
  }
  for(int k = 0;k < m;k++){
    int entrada;
    cin >> entrada;
    if(ar[entrada] == 0){
      ar[entrada]+= 1;
    }
  }
  for(int j = 0;j < 100100;j++){
    if(ar[j] != 0){
      soma += 1;
    }
  }
  cout << soma << endl;

  return 0;
}
