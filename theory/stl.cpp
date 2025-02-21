#include <bits/stdc++.h>

using namespace std;

void printe(deque<int> &valores) {
	for(auto x : valores) {
		cout << x << " ";
	}	
	cout << "\n";
}

void solve() {
	deque<int> valores;

	valores.push_back(1);
	valores.push_back(2);
	valores.push_front(3);

	printe(valores);

	valores.pop_front();

	printe(valores);

	valores.push_back(5);

	printe(valores);

}

int32_t main() {
	int t = 1;

	while(t--) {
		solve();
	}

	return 0;
}
