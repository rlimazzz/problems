#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	freopen("shuffle.in", "r", stdin);
	int n;
	cin >> n;

	vector<pair<int,int>> ord(n);
	for(int i = 0;i < n;i++) {
		cin >> ord[i].first;
	}

	for(int i = 0;i < n;i++) {
		cin >> ord[i].second;
	}

	sort(ord.begin(), ord.end());

	freopen("shuffle.out", "w", stdout);
	for(int i = 0;i < n;i++) {
		cout << ord[i].second << "\n";
	}
	return 0;
}	
