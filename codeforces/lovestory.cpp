#include <bits/stdc++.h>

using namespace std;

int main() {
	string code = "codeforces";
	int n;
	cin >> n;
	for(int i = 0;i < n;i++) {
		string entrada;
		int contador = 0;
		cin >> entrada;
		for(int k = 0;k < (int)entrada.size();k++) {
			if(code[k] != entrada[k]) {
				contador++;
			}	
		}
		cout << contador << endl;
	}

	return 0;
}
