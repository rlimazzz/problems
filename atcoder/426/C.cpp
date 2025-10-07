#include <bits/stdc++.h>

using namespace std;


int32_t main() {
	int n ,q;
	cin >> n >> q;


	vector<int> v(n + 1 ,0);
	for(int i = 1;i <= n;i++) {
		v[i] = 1;
	}	

	int salva = 1;
	for(int i = 0;i < q;i++) {
		int a, b;
		cin >> a >> b;
		
		int sum = 0;
		if(a >= salva) {
			for(int j = salva;j <= a;j++) {
				sum += v[j];
			}	
			v[b] += sum;
			salva = a + 1;
		}

		cout << sum << "\n";
	}
	return 0;
}
