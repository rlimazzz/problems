#include <bits/stdc++.h>

using namespace std;


void solve() {
	int n, k, x;
    cin >> n >> k >> x;

    if(k == 1) {
        cout << "NO\n";
        return;
    }

    if(x != 1) {
        cout << "YES\n";
        cout << n << endl;
        for(int i = 0;i < n;i++) {
            cout << 1 << " ";
        }
        cout << endl;
    }else {
        if(k == 2 && n % 2 != 0) {
            cout << "NO\n";
            return;
        }
        else if(k >= 2 && n % 2 == 0){
            cout << "YES\n";
            cout << n / 2 << endl;
            for(int i = 0;i < n / 2;i++) {
                cout << 2 << " ";
            }
            cout << endl;
            return;
        }
        else if(k > 2) {
            cout << "YES\n";
            cout << n / 2 << endl;
            for(int i = 0;i < n / 2 - 1;i++) {
                cout << 2 << " ";
            }
            cout << 3 << endl;
        }
    }
}

int32_t main( ){
	int t = 1;
	cin >> t;

	while(t--) {
		solve();
	}
	return 0;
}