#include <bits/stdc++.h>

using namespace std;

#define int long long
using ll = long long;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;

void solve() {
  int a , b;
  cin >> a >> b;

  if((a + b) % 3 == 0 ) {
    if(abs(a - b) > a || abs(a - b) > b || (a == 0 && b != 0) || (a != 0 && b == 0)) {
      cout << "NO\n";
    }else {
      cout << "YES\n";
    }
  }else {
    cout << "NO\n";
  }
}

int32_t main() {
  int t =1;
  cin >> t;
  
  while(t--) {
    solve();
  }
  return 0;
}
