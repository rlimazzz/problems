#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double long dl;
typedef vector<int> vi;
typedef pair<int, int> pii;

#define MAXN 100100;
#define endl '\n';

int main(){
  int n, con1 = 0, con2 = 0;
  vector<int> cartas;
  vector<int> cres;
  vector<int> decr;
  for(int i = 0; i < 5;i++){
    cin >> n;
    cartas.push_back(n);
    cres.push_back(n);
    decr.push_back(n);
  }
  sort(cres.begin(), cres.end());
  sort(decr.rbegin(), decr.rend());
  for(int i = 0;i < 5;i++){
    if(cartas[i] == cres[i]){
      con1++;
    }
    else if(cartas[i] == decr[i]){
      con2++;
    }
  }
  if(con1 == 5){
    cout << "C" << endl;
  }
  else if(con2 == 5){
    cout << "D" << endl;
  }else{
    cout << "N" << endl;
  }
  return 0;
}
