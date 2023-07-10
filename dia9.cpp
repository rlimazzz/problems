#include <bits/stdc++.h>

using namespace std;

int main(){
  int a = 1, b = 1, teste = 1;
  while(a != 0 && b !=0){
    cin >> a >> b;
    if(a == 0 && b == 0){
      break;
    }
    int ar[a];
    for(int i = 1;i <= a;i++){
      ar[i] = 0;
    }
    for(int i = 1;i <= b;i++){
      int voo1, voo2;
      cin >> voo1 >> voo2;
      ar[voo1] += 1;
      ar[voo2] += 1;
    }
    vector<int> maiores;
    for(int i = 1 ;i <= a;i++){
      int contador = 0;
      for(int k = 1;k <= a;k++){
        if(ar[i] < ar[k]){
          i++;
        }
      }
      if(contador == 0){
        maiores.push_back(i);
      }
    }
    cout << "Teste " << teste << endl;
    teste++;
    for(int i = 0;i < (int)maiores.size() - 1; i++){
      if(i + 1 == (int)maiores.size() - 1){
        cout << maiores[i] << endl;
      }else{
        cout << maiores[i] << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
