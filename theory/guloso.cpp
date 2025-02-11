#include <bits/stdc++.h>

#define MAXN 100100

using namespace std;

struct gas{
  double preco, estoq; 
}; // declaro a struct gas

bool compara(gas x, gas y){ //Cria a função para comparar tipo gas
  return x.preco < y.preco; 
} 

gas forn[MAXN]; // crio um array de gas de nome "forn" para representar a lista

// declaro as variáveis que vou usar
int n;
double d, custo;

int main(){

  cin >> n >> d;  // leio os valores de n e d

  // leio o preço e o estoque de cada fornecedor
  for(int i=1; i<=n; i++){
    cin >> forn[i].preco >> forn[i].estoq;
  }

  // ordeno o veotor de gas
  sort(forn+1, forn+n+1, compara);

  // percorro o vetor
  for(int i=1; i<=n; i++){

    // o fornecedor davez será o que estou olhando no vetor, no momento
    gas davez=forn[i];

    // se todo o seu estoque não consegue preencher o que ainda preciso
    if(davez.estoq < d){

      custo+=davez.estoq*davez.preco; // somo a custo o valor de comprar todo o estoque
      d-=davez.estoq; // e subtraio de d o litros que comprei
    }

    // caso contrário, ou seja, dá pra encher tudo só com esse fornecedor
    else{

      custo+=d*davez.preco; // somo  acusto o valor de comprar o que preciso
      d=0; // zero a quantidade que a inda falta comprar
      break; // e paro de percorrer o vetor, pois já comprei o que precisava
    }
  }

  // se o loop acabar e ainda houver alguma quantidade em d
  if(d != 0){
    cout << "Impossivel\n"; // então não foi possível comprar tudo o que precisava
  }
  // caso contrário, foi possível
  else{
    cout << fixed << setprecision(2) << custo << "\n"; // e imprimo o valor gasto na compra
  }
  return 0;
}


