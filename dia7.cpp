#include <bits/stdc++.h>

using namespace std;

int main(){
  int ar[9] = {0 , 4 , 2 , 7, 7, 7, 7 , 1, 3};
  int n = 9, k, inicial = 0, finale = 0;
  cin >> k;
  while(inicial <= n){
    int meio = (inicial + n) / 2;
    if(ar[meio] == k){
      finale = meio;
      for(int i = meio;i <= n;i++){
        if(ar[i] == k){
          finale += 1;
        }
      }
      meio -= 1;
      finale -= 1;
      cout << meio << " " << finale << endl;
      break;
    }
    else if(ar[meio] > k){
      n = meio + 1;
    }
    else if(ar[meio] < k){
      inicial = meio - 1;
    }
  }

  return 0;
}
