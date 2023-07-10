#include <bits/stdc++.h>

using namespace std;

int main(){
  set<int> alice;
  set<int> beatriz;
  int a, b;
  cin >> a >> b;
  for(int i = 0;i < a;i++){
    int entr;
    cin >> entr;
    alice.insert(entr);
  }
  for(int i = 0;i < b;i++){
    int entr;
    cin >> entr;
    beatriz.insert(entr);
  }
  if(alice.size() <= beatriz.size()){
    for(auto x : alice){
      if(beatriz.find(x) != beatriz.end()){
        alice.erase(x);
      }
    }
    cout << alice.size() << endl;
  }else{
    for(auto x : beatriz){
      if(alice.find(x) != alice.end()){
        beatriz.erase(x);
      }
    }
    cout << beatriz.size() << endl;
  }
  return 0;
}
