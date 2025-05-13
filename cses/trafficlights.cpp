#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;

  
  set<int> ranges{0, n};
  multiset<int> dist{n};
  for(int i = 0;i < k;i++) {
    int entr;
    cin >> entr;

    auto it1 = ranges.upper_bound(entr);
    auto it2 = it1;
    it2--;

    dist.erase(dist.find(*it1 - *it2));
    dist.insert(entr - *it2);
    dist.insert(*it1 - entr);
    ranges.insert(entr);

    auto ans = dist.end();
    --ans;
    cout << *ans << " ";
  }
}

int32_t main() {
  ios_base::sync_with_stdio(NULL);
  cin.tie(0);
  int t = 1;
  while(t--) {
    solve();
  }
  return 0;
}
