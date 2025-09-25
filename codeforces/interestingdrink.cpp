#include <bits/stdc++.h>

using namespace std;


int valores[100005];
int spref[100005];

int32_t main() {
	int t;
	cin >> t;

	for(int i = 0;i < t;i++) {
		int entr;
		cin >> entr;

		valores[entr]++;
	}

	for(int i = 0;i <= 100000;i++) {
		if(i == 0) {
			spref[i] += valores[i];
		}else {
			spref[i] += valores[i] + spref[i - 1];
		}
	}

	int k;
	cin >> k;

	for(int i = 0;i < k;i++) {
		long long entr;
		cin >> entr;

		if(entr > 100000) {
			cout << spref[100000] << endl;
			continue;
		}

		cout << spref[entr] << endl;
	}
	return 0;
}
