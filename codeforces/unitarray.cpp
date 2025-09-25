#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> pref(3, 0);

	int sum = 0;
	for(int i = 0;i < n;i++) {
		int entr;
		cin >> entr;

		if(entr == 1) {
			pref[1]++;
		}
		else if(entr == -1) {
			pref[0]++;
		}
		sum += entr;
	}

	int count = 0;
	while(pref[1] < pref[0] || pref[0] % 2 == 1) {
		pref[0]--;
		pref[1]++;
		count++;
	}

	cout << count << endl;

}

int32_t main() {
	int t = 1;
	cin >> t;

	while(t--) {
		solve();
	}
	return 0;
}
