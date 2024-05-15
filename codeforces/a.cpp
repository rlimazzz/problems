#include <bits/stdc++.h>

using namespace std;

int dp[10010], a[10010];

int recursao(int n, int f) {
  int soma = 0;
  if(f >= 0) {
    cout << "AQUI\n";
    for(int i = 1;i <= n;i++) {
      if(dp[f - i] != 0) {
         soma += dp[f - i]; 
         cout << "Entra para : " << dp[f - i] << "\n";
      }else {
        dp[f - i] = a[i] * recursao(n, f - i);
        soma += dp[f - i];
        cout << "Trava em : " << dp[f - i] << "\n";
      }
   }
  }else {
    return 0;
  }
  return soma += dp[f];
}

void solve() {
  int n, k , m;
  cin >> n >> k >> m;
  for(int i = 1;i <= k;i++) {
    int en;
    cin >> en;
    dp[i] = en;
  }
  for(int j = 1;j <= k;j++) {
    int en;
    cin >> en;
    a[j] = en;
    
  }
  recursao(n, k);

}

  int main(){
  int entr = 1;
  while(entr--) {
    solve();
  }
  return 0;
}
