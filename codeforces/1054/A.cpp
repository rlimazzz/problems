#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> val(n);
	int ans = 0;
	int pares = 0;
	for(int i = 0;i < n;i++) {
		cin >> val[i];

		if(val[i] == 0) {
			ans++;
		}
		else if(val[i] == -1) {
			pares++;
		}
	}

	if(pares % 2 == 0) {
		cout << ans << endl;
	}else {
		cout << ans + 2 << endl;
	}
}

int32_t main() {
	int t = 1;
	cin >> t;

	while(t--) {
		solve();
	}
	return 0;
}
