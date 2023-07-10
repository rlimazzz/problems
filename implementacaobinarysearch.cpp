#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100;
#define endl '\n';

void binary(int A[], int n, int numb){
  bool as = false;
  int inicial = 0;
  n = n - 1;
  while(inicial <= n){
    int meio = (n + inicial) / 2;
    if(A[meio] == numb){
      cout << "FOI ACHADO NO INDEX " << meio + 1<< endl;
      as = true;
      break;
    }
    else if(A[meio] > numb){
      n = meio - 1;
    }else{
      inicial = meio + 1;
    }
  }
  if(as == false){
    cout << "NAO FOI ENCONTRADO" << endl;
  }
}
int main(){
  int ar[4] = {1 , 2 , 3 , 4};
  binary(ar , 4 , 4);
  return 0;
}
