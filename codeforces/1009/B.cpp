#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a;
    cin >> a;

    vector<int> vals;
    for(int i = 0;i < a;i++) {
        int entr;
        cin >> entr;

        vals.push_back(entr);
    }

    for(int i = 0;i < (int)vals.size();i++){

        int j = i + 1;

        vals.push_back(vals[i] + vals[j] - 1);
        i++;
    }

    cout << vals[(int)vals.size() - 2] << endl;
}

int32_t main() {
	int t = 1;
	cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
