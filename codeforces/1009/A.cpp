#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if(a != b || b != c || c != d) {
		cout << "No\n";
	}else {
		cout << "Yes\n";
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
