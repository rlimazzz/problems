#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;
typedef double long dl;

int main(){
  int n;
  cin >> n;
  for(int i = 0;i < n;i++){
    int cont = 0;
    string entrada, num1 , num2, op;
    getline(cin >> ws, entrada);
    for(int k = 0;k < (int)entrada.size(); k++){
     if((int)entrada[k] >= 48 && (int)entrada[k] <=57){
        num1 += entrada[k];
     }
     else if(entrada[k] == '/' && cont){
        op = divisão;
        cont++;
     }
    }
  }
  return 0;
}
