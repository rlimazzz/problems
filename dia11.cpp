#include<bits/stdc++.h>

using namespace std;

#define endl '\n';
#define MAXN 10100;

typedef long long ll;
typedef double long dl;

vector<int> indexes;

int main(){
  int n , m;
  cin >> n >> m;
  int ar[n][n];
  for(int i = 1;i <=n;i++){
    for(int k = 1;k <= n;k++){
      ar[i][k] = 0;
    }
  }
  for(int i = 0 ;i < m;i++){
    int a , b , c;
    cin >> a >> b >> c;
    if(a == 1){
      ar[b][c] = 1;
      ar[c][b] = 1;
    }else{
      if(ar[b][c] == 1 || ar[c][b] == 1){
        cout << 1 << endl;
      }else{
        cout << 0 << endl;
      }
    }

  }


  return 0;
}
