#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> par(n / 2 + 1);
	vector<int> impar(n / 2 + 1);

	if(n % 2 != 0 && n != 1) {
		cout << -1 << endl;
		return;
	}

	if(n == 1) {
		cout << 1 << endl;
		return;
	}	


	int im = 0, pa = 0;
	for(int i = 1;i <= n;i++) {
		if(i % 2 != 0) {
			impar[im] = i;
			im++;
		}else {
			par[pa] = i;
			pa++;
		}
	}
	
	im = 0, pa = 0;
	for(int i = 0;i < n;i++) {
		if(i % 2 != 0) {
			cout << impar[im] << " ";
			im++;
		}else {
			cout << par[pa] << " ";
			pa++;
		}
	}
	cout << endl;
	
}

int32_t main() {
	int t;
	cin >> t;
	
	while(t--) {
		solve();
	}
	return 0;
}
