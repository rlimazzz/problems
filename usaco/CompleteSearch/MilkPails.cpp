#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	freopen("pails.in", "r", stdin);
	int x, y, m;
	cin >> x >> y >> m;

	int top = m / y, maxi = INT_MIN;

	int topmaxi = 0;
	while(top >= 0 ) {
		int cont = 0;
		int maxi = x * cont + y * top;	
		while(x * cont + y * top <= m) {
			int vari = x * cont + y * top;
			maxi = max(maxi, vari);	
			cont++;
		}
		top--;
		topmaxi = max(topmaxi, maxi);
	}
	freopen("pails.out", "w", stdout);
	cout << topmaxi << "\n";

	return 0;
}
