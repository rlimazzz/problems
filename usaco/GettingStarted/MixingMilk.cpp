#include <bits/stdc++.h>

using namespace std;

int32_t main() {
	freopen("mixmilk.in", "r", stdin);

	vector<pair<int,int>> buckets(3);

	for(int i = 0;i < 3;i++) {
		cin >> buckets[i].first >> buckets[i].second;
	}

	for(int i = 1;i <= 100;i++) {
		if(buckets[i % 3].second + buckets[(i - 1) % 3].second <= buckets[i % 3].first) {
			buckets[i % 3].second += buckets[(i - 1) % 3].second;
			buckets[(i - 1) % 3].second = 0;
		}
		else {
			buckets[(i -1) % 3].second -= (buckets[i % 3].first - buckets[i % 3].second);
			buckets[i % 3].second = buckets[i % 3].first;
		}


	 }

	// freopen("mixmilk.out", "w", stdout);
	
	for(int i = 0;i < 3;i++) {
		printf("%d %d\n", buckets[i].first, buckets[i].second);
	}
	return 0;	
}


