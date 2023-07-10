#include<bits/stdc++.h>

using namespace std;

#define MAXN 100100;
#define endl '\n';

typedef long long ll;
typedef double long dl;

int main(){
  int tam;
  string n;
  vector<int> letras;
  cin >> tam >>n;
  for(int i = 0;i < 5;i++){
    letras.push_back(0);
  }
  for(int i = 0 ; i < tam;i++){
    if(n[i] == 'A' || n[i] == 'a'){
      letras[0] += 1;
    }
    else if(n[i] == 'E' || n[i] == 'e'){
      letras[1] += 1;
    }
    else if(n[i] == 'I' || n[i] == 'i'){
      letras[2] += 1;
    }
    else if(n[i] == 'O' || n[i] == 'o'){
      letras[3] += 1;
    }
    else if(n[i] == 'U' || n[i] == 'u'){
      letras[4] += 1;
    }
  }
  if(letras[0] >= 1 && letras[1] >= 1 && letras[2] >= 1 && letras[3] >= 1 && letras[4] >= 1){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

  return 0;
}   
