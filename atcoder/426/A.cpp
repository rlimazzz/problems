#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	string x, y;
	cin >> x >> y;

	if(x == "Ocelot") {
		if(y == "Ocelot") {
			cout << "Yes\n";
		}else {
			cout << "No\n";
		}
	}
	else if(x == "Serval") {
		if(y == "Lynx") {
			cout << "No\n";
		}else {
			cout << "Yes\n";
		}
	}
	else if(x == "Lynx") {
		cout << "Yes\n";
	}
	return 0;
}
