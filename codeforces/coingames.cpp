#include <bits/stdc++.h>

using namespace std;

void solve() {
	int tam;
	cin >> tam;
	string entr;
	cin >> entr;

	//objective : take the pos where we can eliminate the greatest number of U
	int maxi = INT_MIN, maxpos = 0;
	int j = (int)entr.size(), defi = 0;
	while(j--) {
		for(int i = 0;i < entr.size();i++) {
			int count = 0;
			if(i == 0) {
				count += (entr[i + 1] == 'U') ? 1 : 0;
				count += (entr[(int)entr.size() - 1] == 'U') ? 1 : 0;

			}	
			else if(i > 0 && i < (int)entr.size() - 1) {
				count += (entr[i + 1] == 'U') ? 1 : 0;
				count += (entr[i - 1] == 'U') ? 1 : 0;
			}	
			else if(i == (int)entr.size() - 1) {
				count += (entr[0] == 'U' ) ? 1 : 0;
				count += (entr[i - 1] == 'U') ? 1 : 0;
			}


			if(count > maxi) {
				maxi = count;
				maxpos = i; 
			}
		}

		if(maxpos > 0 && maxpos < j - 1) {
			entr.erase(entr.begin() + maxpos);
			
			entr[maxpos + 1] = (entr[maxpos + 1] == 'D') ? 'U' : 'D';
			entr[maxpos - 1] = (entr[maxpos - 1] == 'D') ? 'U' : 'D';

		}
		else if(maxpos == 0) {
			entr.erase(entr.begin());

			entr[1] = (entr[1] == 'D') ? 'U' : 'D';
			entr[j - 1] = (entr[j - 1] == 'D') ? 'U' : 'D';
		}
		else if(maxpos == j - 1) {
			entr.erase(entr.begin() + j - 1);
			entr[0] = (entr[0] == 'D') ? 'U' : 'D';
			entr[j - 2] = (entr[j - 2] == 'D') ? 'U' : 'D';
		}
		defi++;
	}
	if(defi % 2) {
		cout << "YES\n";
	}else {
		cout << "NO\n";
	}
}

int32_t main() {
	int n;
	cin >> n;

	while(n--) {
		solve();
	}
		
	return 0;
}
