#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100
#define endl '\n'

typedef long long ll;
typedef double long dl;
typedef vector<int> vi;
typedef pair<int, int> pii;

int n, m, vetor[MAXN];

int buscab(int x){ // declaro a função buscab, que recebe um int como parâmetro

    // declaro os inteiros ini, meio e fim
  int ini=1, fim=n, meio; // ini já começa com 1 e fim com n

  while(ini<=fim){ // enquanto houver algum elemento no intervalo

    meio=(ini+fim)/2; // meio recebe a posição do meio

    if(vetor[meio]==x) return meio; // se achei o número, retorno o valor de meio
    if(vetor[meio]<x) ini=meio+1; // se o número está na frente, olho para a metade depois de meio
    if(vetor[meio]>x) fim=meio-1; // se o número está atrás, olho para a metade antes de meio
  }

  return -1; // se o while terminar sem a função retornar, o número não está no vetor
}

int main(){

  cin >> n >> m; // leio os valores de n e m

  for(int i=1; i<=n; i++){
      cin >> vetor[i]; // leio os valores do vetor
  }
  for(int i=1; i<=m; i++){ // para cada pergunta

      // leio o número a ser procurado e salvo na int num
    int num;
    cin >> num;

    cout << buscab(num) << "\n"; // e imprimo o valor de buscab(num)
  }

  return 0;
}

