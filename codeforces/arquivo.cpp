#include <bits/stdc++.h>

using namespace std;

#define int long long

int dp[1010], a[1010];

int recursao(int n , int k, int m) {
  if(dp[k] != -1) {
    return dp[k];
  }
  dp[k] = 0;
  for(int i = 1;i <=n;i++) {
    dp[k] += (recursao(n, k - i, m) * a[i]) % m;
    dp[k] = ((dp[k] % m)+ m) % m;
  }
  return dp[k] = ((dp[k] % m)+ m) % m;
}


void solve() {
  int n, k , m;
  cin >> n >> k >> m;
  for(int i = 0;i <= 1010;i++) {
    dp[i] = -1;
  }
  for(int i = 1;i <= n;i++) {
    int en;
    cin >> en;
    a[i] = en;
  }
  for(int j = 1;j <= n;j++) {
    int en;
    cin >> en;
    dp[j] = en;
  }


  cout << (recursao(n, k, m) + m )%m << endl;


}

int32_t main(){
  solve();
  return 0;
}
