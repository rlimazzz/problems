#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100

int ar[MAXN];

int main(){
  int entrada;
  cin >> entrada;
  for(int i = 0;i < entrada; i++){
    int k;
    cin >> k;
    ar[k] += 1;
  }
  for(int i = 0;i < MAXN; i++){
    if(ar[i] != 0){
      for(int j = 0;j < ar[i];j++)
      {
        cout << i << endl;
      }
    }
  }
  return 0;
}
