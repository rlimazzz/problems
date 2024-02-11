#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, c, trocas = 0;
	cin >> n >> m >> c;
	map<int,vector<int>> od_ad;

	for(int i = 0;i < n;i++) {
		int a , b;
		cin >> a >> b;
		od_ad[b].push_back(a);
	}
	
	while(1) {
		if(od_ad.find(c) != od_ad.end() && trocas <= m) {
			if(od_ad[c].size() > 1) {
				sort(od_ad[c].begin(), od_ad[c].end());
				c = od_ad[c][0];
				trocas++;
			}else {
				c = od_ad[c][0];
				trocas++;
			}
		}else {
			break;
		}
	}
	if(trocas > m) {
		cout << -1 << endl;
	}else {
		cout << trocas << endl;
	}	



	return 0;
}
