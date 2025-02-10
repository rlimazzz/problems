#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	map<string, int> inst;
	vector<string> ordem;
	while(true) {
		cin >> n;
		if(n != 0){
			for(int i = 0 ;i < n;i++) {
				string nome, fac;
				cin >> nome >> fac;
				if(inst.find(fac) != inst.end()) {
					inst[fac]++;
				}else {
					inst.insert(make_pair(fac, 1));
					ordem.push_back(fac);
				}
			}
		}else {
			break;
		}
	}
	for(int i = 0;i < (int)ordem.size();i++) {
		cout << ordem[i] << " " << inst[ordem[i]] << endl;
	}
	return 0;
}
