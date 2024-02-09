#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0;i < n;i++) {
		int tam, contador = 0, maximo = 0;
		vector<int> entrada;
		cin >> tam;
		for(int k =0;k < tam;k++) {
			int entr;
			cin >> entr;
			entrada.push_back(entr);
		}
		for(int j = 0;j < tam;j++) {
			if(entrada[j] == 0) {
				contador++;
				maximo = max(maximo, contador);
			}
			if(entrada[j] == 1) {
				maximo = max(maximo, contador);
				contador = 0;
			}
		}
		cout << maximo << endl;
	}

	return 0;
}
