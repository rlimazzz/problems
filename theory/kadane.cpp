#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100;
#define endl '\n';

int main(){
  int entr;
  vector<int> ls;
  cin >> entr;
  for(int i = 0;i < entr;i++){
    int a;
    cin >> a;
    ls.push_back(a);
  }
  int best = 0;
  int ans = INT_MIN;
  for(auto x : ls){
    best = max(x , x + best);
    ans = max(ans, best);
  }
  cout << ans << endl;

  return 0;
}
