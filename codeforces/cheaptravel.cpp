#include <bits/stdc++.h>

using namespace std;

int n, m , a , b;

void solve() {
	cin >> n >> m >> a >> b;

	double med = b / m;

	if(med < (double)a) {
		int k = (n / m) * b;
		int resto = (n % m) * a;
		cout << min(k + resto, k + b) << "\n";
	} else {
		cout << n * a << "\n";
	}
}

int32_t main() {
	int t = 1;

	while(t--) {
		solve();
	}
	return 0;	
}
