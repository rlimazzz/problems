#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i = 0;i < n;i++) {
		int entr;
		vector<pair<int, string>> um;
		vector<pair<int, string>> dois;
		vector<pair<int, string>> iguais;
		cin >> entr;
		for(int k =0;k < entr;k++) {
			int min;
			string learn;
			cin >> min >> learn;
			if(learn[0] == '1' && learn[1] == '0') {
				um.push_back({min, learn});
			}
			else if(learn[0] == '0' && learn[1] == '1') {
				dois.push_back({min, learn});
			}
			else if(learn[0] == '1' && learn[1] == '1') {
				iguais.push_back({min, learn});
			}
		}

		sort(um.begin(), um.end());
		sort(dois.begin(), dois.end());
		sort(iguais.begin(), iguais.end());

		if(!um.empty() && !dois.empty() && iguais.empty()) {
			cout << um[0].first + dois[0].first << endl;
		}
		else if(!um.empty() && !dois.empty() && !iguais.empty()) {
			if(um[0].first + dois[0].first <= iguais[0].first) {
				cout << um[0].first + dois[0].first << endl;
			}else {
				cout << iguais[0].first << endl;
			}
		}
		else if((um.empty() == true || dois.empty() == true) && !iguais.empty()) {
			cout << iguais[0].first << endl;
		}else {
			cout << -1 << endl;
		}
	
	}

	return 0;
}
