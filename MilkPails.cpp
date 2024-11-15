#include <bits/stdc++.h>

using namespace std;

#define double int

void solve() {
	freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);
	int x,y, m;
	cin >> x >> y >> m;

	int maiorx = m / x, maiory = m / y;
	int solve = -1000;

	while(maiory >= 0) {
		for(int i = maiorx; i >= 0;i--) {
			if(i * x + maiory * y <= m){
				solve = max(solve, i * x + maiory * y);
			}
		}

		maiory--;
	}

	cout << solve << "\n";

}

int32_t main() {
	int t = 1;

	while(t--) {
		solve();
	}

	return 0;
}
