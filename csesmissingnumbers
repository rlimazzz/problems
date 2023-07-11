#include <bits/stdc++.h>
 
using namespace std;
 
#define endl '\n';
 
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef long long ll;
typedef double long dl;
 
int main(){
  ll n;
  set<ll> entr;
  cin >> n;
  for(int i = 1;i <= n - 1;i++){
    ll a;
    cin >> a;
    entr.insert(a);
  }
  for(int i = 1;i <= n;i++){
    if(entr.find(i) == entr.end()){
      cout << i << endl;
    }
  }
  return 0;
}
