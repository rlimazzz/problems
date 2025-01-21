#include <bits/stdc++.h>

using namespace std;
#define int long long

void solve() {
  int entr, numb = 1;
  cin >> entr;

  for(int i = 0;i < entr;i++) {
    numb *= 2;
    numb %= (1000000000 + 7);

  }
  cout << numb << "\n";
  
}

int32_t main(){
  int t = 1;

  while(t--){ 
    solve();
  }

  return 0;
}
