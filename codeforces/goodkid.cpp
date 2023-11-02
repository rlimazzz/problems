#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0; i < n;i++) {
		int gifts, menor = 0, contador = 0;
		vector<int> quant;
		cin >> gifts;
		for(int k = 0; k < gifts;k++) {
			int n1;
			cin >> n1;
			quant.push_back(n1);
			if(k == 0) {
				menor = n1;
			}
			if(n1 == 0 && contador == 0) {
				quant[k]++;
				contador++;
			}else {
				if(menor > quant[k]) {
					menor = quant[k];
				}
			}
			
		}
		if(contador == 0) {
			for(int g = 0;g < gifts;g++) {
				if(quant[g] == menor) {
					quant[g]++;
					break;
					}
			}
		}
		
		int quantidade = 1;
		for(int m = 0; m < gifts;m++) {
			quantidade *= quant[m];
		}
		cout << quantidade << endl;
	}
	
	return 0;
}
