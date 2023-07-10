#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;
typedef double long dl;

int main(){
  int caso = 1;
  while(true){
    cout << "CASE# " << caso << ":" << endl;
    int n, m;
    vector<int> k;
    cin >> n >> m;
    if(n == 0 && m == 0){
      break;
    }else{
      for(int i = 0;i < n;i++){
        int entr;
        cin >> entr;
        k.push_back(entr);
      }
      sort(k.begin() , k.end());
      for(int i = 0;i < m;i++){
        int entr, apareceu = 0;
        cin >> entr;
        for(int a = 0;a < n;a++){
          if(k[a] == entr && apareceu == 0){
            cout << entr << " found at " << a + 1 << endl;
            apareceu++;
          }
  
        }
        if(apareceu == 0){
          cout << entr << " not found" << endl;
        }
      }
      caso++;
    }
  }
  return 0;
  }
