// C++ program of the above approach
#include <bits/stdc++.h>
using namespace std;

#define MAXN 1001;

int main()
{
	vector<int> lista;
	int n;
	cin >> n;
	for(int i = 0;i < n; i++) {
		int entrada;
		cin >> entrada;
		lista.push_back(entrada);
	}
	sort(lista.begin(), lista.end());
	for(int k = 0;k < n;k++) {
		if(k + 1 != n) {
			cout << lista[k] << " ";
		}else {
			cout << lista[k] << endl;
		}
	}
	return 0;
}
 
