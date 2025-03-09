#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n, m;
	cin >> n >> m;

	queue<pair<int,int>> kids;
	for(int i = 0;i < n;i++) {
		int entr;
		cin >> entr;
		
		kids.push({entr, i + 1});
	}
	
	int last;
	while(!kids.empty()) {
		auto fron = kids.front();
		kids.pop();

		fron.first -= m;

		if(fron.first > 0) {
			kids.push({fron});
		}

		last = fron.second;
	}

	cout << last << endl;

}

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	int t = 1;

	while(t--) {
		solve();
	}

	return 0;
}
