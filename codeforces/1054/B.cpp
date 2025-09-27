#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> val(n);
	for(int i = 0;i < n;i++) {
		cin >> val[i];
	}
	sort(val.begin(), val.end());

	int maximum = INT_MIN;

	for(int i = 1;i < n;i+=2) {
		maximum = max(maximum, abs(val[i] - val[i - 1]));
	}
	cout << maximum << endl;
}

int32_t main() {
	int t;
	cin >> t;

	while(t--) {
		solve();
	}
	return 0;
}
