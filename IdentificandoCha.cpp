#include <bits/stdc++.h>

using namespace std;

void solve() {
	string entr;
	set<string> possibilidades;
	set<char> remove;
	cin >> entr;

	for(int i = 0;i < (int)entr.size();i++) {
		string bosta;
		remove.insert(entr[i]);
		bosta += entr[i];
		possibilidades.insert(bosta);
		for(int j = i;j < (int)entr.size();j++) {
			bosta += entr[j];
			possibilidades.insert(bosta);	
		}
	}
	cout << (int)possibilidades.size() - (int)remove.size() << "\n";
}

int32_t main() {
	int t = 1;

	while(t--) {
		solve();
	}

	return 0;	
}
