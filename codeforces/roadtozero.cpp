#include <bits/stdc++.h>

using namespace std;


#define int long long
int x, y, a, b;

/*
x -= x => actual += x * a, y -= y => actual += y * b

other case

take the minimum of x and y, increase or decrease for both until one is 0


*/


void solve() {
	cin >> x >> y >> a >> b;
	
	int p1 = 0;
	int p2 = 0;

	p1 += abs(x- y) * a;

	if(x >= y) {
		p1 += y * b;
	}else {
		p1 += x * b;
	}

	p2 += (x + y) * a;

	cout << min(p1, p2) << "\n";
}

int32_t main() {
	int t = 1;
	cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}

