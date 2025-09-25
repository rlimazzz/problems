#include <bits/stdc++.h>

using namespace std;


int n, m , a , b;
int recursion() {

}	

void solve() {
	cin >> n >> m >> a >> b;

	if(n * a <= b) {
		cout << n * a << "\n";
	}
	else {
		cout << (n / m) * b + min((n % m) * a, b) << "\n";
	}
}

int32_t main() {
	int t = 1;

	while(t--) {
		solve();
	}
	return 0;	
}
