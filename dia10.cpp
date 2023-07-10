#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100;
#define endl '\n';

typedef long long ll;
typedef long double dl;

int main(){
  int n, k , x, i = 2;
  cin >> n >> k >> x;
  int operac = (n * k)/ (x/100);
  while(true){
    int quadrado = i * i;
    int quadrados = (i + 1) * (i + 1);
    if(operac - quadrado < operac - quadrados){
      cout << i << endl;
    }else{
      i++;
    }
  }
  return 0;
}
