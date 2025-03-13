#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, b,c = 0;
	cin >> n;
	b = n;

	while(b > 0) {
		c += b % 10;
		b /= 10;
	}

	if(n % c == 0) {
		cout << "Yes\n";
	}else {
		cout << "No\n";
	}
}

int32_t main() {
	int t = 1;

	while(t--) {
		solve();
	}

	return 0;
}
