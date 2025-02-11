#include <bits/stdc++.h>
 
#define MAXN 100100

using namespace std;

// declaro as variáveis que vou precisar
int n, k, pai[MAXN], peso[MAXN], qtd[MAXN], contador = 0;

// funções do Union-Find otimizadas
int find(int x){
    if(pai[x]==x){
        return x;
    }
    return pai[x]=find(pai[x]);
}
 
void join(int x, int y){
    
    x=find(x);
    y=find(y);
    
    if(x==y){
        return;
    }
    else if(x == 1) {
	pai[y] = x;
	qtd[x] += qtd[y];
    } 
    else if(y == 1) {
	pai[x] = y;
	qtd[y] += qtd[x];
    }else {
	if(peso[x] < peso[y]) {
		pai[x]=y;
		qtd[y] += qtd[x];
	}
	if(peso[x] > peso[y]) {
		pai[y] = x;
		qtd[x] += qtd[y];
	}
	if(peso[x] == peso[y]){
		pai[x] = y;
		peso[y]++;
		qtd[y] += qtd[x];
	}
    }
}

int batalha(int x, int y) {
	if(qtd[find(x)] > qtd[find(y)]) {
		return find(x);
	}
	else if(qtd[find(y)] > qtd[find(x)]){
		return find(y);
	}
	return -1;
}

// os comandos da main seguem os mesmo do código anterior, não otimizado
int main(){
   
    while(true){	
    	cin>>n>>k;
	if(n != 0 && k != 0) {
    
    		for(int i=1; i<=n; i++){
        		pai[i]=i;
    		}
    		for(int i=1; i <= n;i++) {
			int x;
			cin >> x;
			qtd[i] = x;
    		}
    
    		int op;
    		int banco1, banco2 ,contador = 0; 
    		for(int i = 1;i <= k;i++) {
			cin >> op >> banco1 >> banco2;

			if(op == 1) {
				join(banco1, banco2);
			}
			else if(op == 2) {
				int a = batalha(banco1, banco2);
				if(a == 1) {
					contador++;
				}
			}
    		} 
    		cout<< contador << endl;
	}
	else {
		break;
	}
    }
    return 0;
}

