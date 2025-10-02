#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    freopen("lostcow.in", "r", stdin);
    int x, y;
    cin >> x >> y;

    int now = x, next = x,dist = 0, factorq = 1;

    while(true) {
	now = next;
	next = x + factorq;
	factorq  *= -2;

	if((now <= y && y <= next) || (now >= y && y >= next)) {
		dist += abs(y - now);
		break;
	}
	dist += abs(now - next);
    }
    freopen("lostcow.out", "w", stdout);
    printf("%d\n", dist);
    return 0;
}
