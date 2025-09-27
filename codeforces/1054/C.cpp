#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	
	vector<int> v(n), vet(k, 0);
	int kc = 0;
	for(int i = 0;i < n;i++) {
		cin >> v[i];

		if(v[i] < k) {
			vet[v[i]]++;

		}else if(v[i] == k) {
			kc++;
		}
	}

	int ans = 0;
	for(int i = 0;i < k;i++) {
		if(!vet[i]) {
			ans++;
		}
	}

	cout << max(ans, kc) << endl;

}

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	int t = 1;
	cin >> t;

	while(t--) {
		solve();
	}
	return 0;
}
