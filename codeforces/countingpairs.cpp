#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, x, y, soma = 0;
	cin >> n >> x >> y;

	vector<int> vals(n, -1);

	for(int i = 0;i < n;i++) {
		cin >> vals[i];
		soma += vals[i];
	}

	int lim1 = soma - x, lim2 = soma - y;

	sort(vals.begin(), vals.end());

	int ini = 0,ini2 = 0, fim = n, ans = 0;

	while(ini < fim) {
		int maior = lim1 - vals[ini], menor = lim2 - vals[ini];
		while(ini2 < fim && vals[ini2] <= maior) {
			ini2++;
		}
		ans += (n - ini2);
		ini2 = 0;
	}	

	cout << ans << endl;
	
}

int32_t main() {
	int t;
	cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
