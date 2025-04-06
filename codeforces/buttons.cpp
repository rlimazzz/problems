#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
	int a, b, c;
    cin >> a >> b >> c;

    int first = 0,second = 0;
    if(c % 2 != 0) {
        first += (c / 2) + 1;
        first += a;
    }else {
        first += c / 2;
        first += a;
    }
    second += c / 2;
    second += b;

    if(first <= second) {
        cout << "Second\n";
    }else {
        cout << "First\n"; 
    }

}

int32_t main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(0);
	int t;
	cin >> t;

	while(t--) {
		solve();
	}

	return 0;
}
