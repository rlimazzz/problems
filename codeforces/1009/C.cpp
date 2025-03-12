#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int a;
	cin >> a;
	
	// a eh pot2?
	for(int i=0; i <= 30; i++){
		if(a == (1<<i)){
			cout << -1 << '\n';
			return;	
		}
	}

	// a eh pot2-1?
	for(int i=0; i<= 30; i++){
		if(a == (1<<i) - 1){
			cout << -1 << '\n';
			return;
		}
	}
	
	int b = 0;
	for(int i = 0;i <= 30;i++) {
		if(((1 << i) & a) == 0) {
			b |= (1 << i);
			break;
		}
	}

	for(int i = 0;i <= 30;i++) {
		if(((1 << i) & a) == (1 << i)) {
			b |= (1 << i);
			break;
		}
	}

	cout << b << endl;


}

int32_t main() {
	int t = 1;
	cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
