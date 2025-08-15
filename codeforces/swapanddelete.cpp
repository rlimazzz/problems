#include <bits/stdc++.h>

using namespace std;

void solve() {
	string entr, nova;
	cin >> entr;

	int ze = 0, um = 0,cz =0 , cu= 0;

	for(int i = 0;i < entr.size();i++) {
		if(entr[i] == '0') {
			ze++;
		}else {
			um++;
		}	
	}	

	for(int i = 0;i < entr.size();i++) {
		if(entr[i] == '0') {
			if(um > 0) {
				um--;
			}else {
				cout << (int)entr.size() - i << endl;
				return;
			}
		}else {
			if(ze > 0) {
				ze--;
			}else {
				cout << (int)entr.size() - i  << endl;
				return;
			}	
		}
	}
	cout << 0 << endl;
	return;

}

int32_t main() {
	int t;
	cin >> t;

	while(t--) {
		solve();
	}
	return 0;
}
