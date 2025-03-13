#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<pair<string, int>> people;

	int minage= INT_MAX, pos = 0;

	for(int i = 0;i < n;i++) {
		string s;
		int age;

		cin >> s >> age;

		if(min(age, minage) == age) {
			minage = age;
			pos = i;
		}
		people.push_back({s, age});
	}

	for(int i = pos;i < n;i++) {
		cout << people[i].first << endl;
	}
	
	for(int i = 0;i < pos;i++) {
		cout << people[i].first << endl;
	}
}

int32_t main() {
	int t = 1;

	while(t--) {
		solve();
	}

	return 0;
}
