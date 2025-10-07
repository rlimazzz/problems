#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	string entr;
	cin >> entr;

	map<char,int> v;
	
	for(int i = 0;i < entr.size();i++) {
		if(v.find(entr[i]) != v.end()) {
			v[entr[i]]++;
		}else {
			v[entr[i]] = 1;
		}
	}

	for(auto x : v) {
		if(x.second == 1) {
			cout << x.first << "\n";
			return 0;
		}
	}
	return 0;	
}
