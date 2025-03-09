#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int n, ant = 0;
	cin >> n;

	if(n == 1) {
		cout << 0 << endl;
		return;
	}

	int ans = 0;
	for(int i = 1;i <= n/2;++i) {
		ans += i * 1ll *  i;
	}
	cout << ans * 8 << endl;
}

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	int t;
	cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
