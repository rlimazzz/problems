#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  
  vector<int> v(n + 1);
  int multi = 1, count = 0, mindiff = INT_MAX;
  for(int i = 0;i < n;i++) {
    cin >> v[i];
    multi *= v[i];

    if(v[i] % k == 0) {
      cout << count << endl;
      return;
    }else {
      if(k - v[i] >= 0) {
        mindiff = min(mindiff, k - v[i]);
      }
    }
  }

  cout << mindiff << endl;

}

int32_t main() {
  ios_base::sync_with_stdio(NULL);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}
