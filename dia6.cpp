#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100;
#define endl '\n';

int inicial = 0, meio = 0, ex[MAXN];

int binary(int a[],int n, int enc){
  meio = (inicial + n) / 2;
  if(a[meio] == enc){
    return meio;
  }
  else if(a[meio] > enc){
    n = meio + 1;
    binary(ex, n, enc);
  }else{
    inicial = meio - 1;
    binary(ex, n, enc);
  }
}
int main(){
  int ar[4] = {1 , 2 , 3 , 4};
  for(int i = 1;i <= 4;i++){
    ex[i] = i;
  }
  binary(ar , 4 , 4);
  return 0;
}
