#include <bits/stdc++.h>

using namespace std;


int binary(int a[], int n, int k){
  int inicial = 0;
  while(true){
    int meio = (inicial + n) / 2;
    if(a[meio] == k){
      return meio;
    }
    else if(a[meio] > k){
      n = meio + 1;
    }else{
      inicial = meio - 1;
    }
  }
  
}
int main(){
  int tam, el, b = 0, finale = 0;
  cin >> tam >> el;
  int ar[tam];
  for(int i = 0;i < tam;i++){
    int entr;
    cin >> entr;
    ar[i] = entr;
  }
  b = binary(ar, tam, el);
  finale = b;
  for(int k = b;k < tam;k++){
     if(ar[k] == el){
        finale+= 1;
     }
  }
  cout << b << " " << finale << endl;
  return 0;
}
