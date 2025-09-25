#include <bits/stdc++.h>

using namespace std;


void solve() {
	int n, k , q;
	cin >> n >> k >> q;

	vector<int> temp(n);

	int seg = 0;
	unsigned long long ans = 0;
	for(int i = 0;i < n;i++) {
		cin >> temp[i];

		if(temp[i] <= q) {
			seg++;
		}else {
			if(seg >= k) {
				ans += ((1ll) * (seg - k + 1) * (seg - k + 2)) / 2;
			}
			seg =0;
		}
	
	}


	if(seg >= k) {
		ans += (seg - k + 1) * (1ll) * (seg - k + 2)/2;
	}
	cout << ans << "\n";
	
}

int32_t main() {
	int t = 1;
	cin >> t;

	while(t--) {
		solve();
	}
	return 0;
}
