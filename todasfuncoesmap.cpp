#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100;
#define endl '\n';

int main(){
  map<string , int> nomes;
  nomes.insert(make_pair("Alana" , 10));
  nomes.insert(make_pair("Joao", 20));
  nomes.insert(make_pair("Frederico" , 5));
  if(nomes.find("Frederico") != nomes.end()){
    cout << "OLA MUNDO" << endl;
  }else{
    cout << "TCHAU MUNDO" << endl;
  }
  for(auto x: nomes){
    cout << x.first << " " << x.second << endl;
  }
  nomes.erase("Frederico");
  return 0;
}
