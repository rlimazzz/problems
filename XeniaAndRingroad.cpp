#include <bits/stdc++.h>

using namespace std;

#define int long long

using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;

void solve() {
  int n , m;
  cin >> n >> m;
  vector<int> ar(m , 0);

  for(int i = 0;i < m;i++) {
    cin >> ar[i]; 
  }

  int ans = ar[0] - 1;
  for(int i = 1;i < m;i++) {
    if(ar[i - 1] <= ar[i]){
      ans += ar[i ] - ar[i - 1];
    }else {
      ans += (n - ar[i - 1] + 1) + ar[i] - 1;
    }
  }

  cout << ans << "\n";

}

int32_t main() {
  int t =1;
  //cin >> t;
  
  while(t--) {
    solve();
  }
  return 0;
}
