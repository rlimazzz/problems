#include <bits/stdc++.h>

using namespace std;


void solve(){
    vector<int> val(3);
    for(int i = 0;i < 3;i++) {
        cin >> val[i];
    }

    sort(val.rbegin(), val.rend());

    int finale = val[0] * 10 + val[1] + val[2];

    cout << finale << endl;

}

int32_t main() {
	int t = 1;

	while(t--) {
		solve();
	}

	return 0;
}
