#include <bits/stdc++.h>

using namespace std;

int two_sum(vector<int> &vetor, int k) {
    int left = 0, right = (int)vetor.size() - 1, maximum = INT_MIN;

    for(int left = 0;left < (int)vetor.size();left++){
        right = (int)vetor.size() - 1;
        while(left < right) {
            int sum = vetor[right] - vetor[left];

            if(sum <= k) {
                maximum = max(maximum, right - left);
            }
            right--;
        }
    }

    return maximum + 1;
}

void solve() {
	freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);

    vector<int> values;
    int n , k;
    cin >> n >> k;

    for(int i = 0;i < n;i++) {
        int entr;
        cin >> entr;

        values.emplace_back(entr);
    }

    sort(values.begin(), values.end());

    int solve = two_sum(values, k);

    cout << solve << "\n";
}

int32_t main() {
	int t = 1;

	while(t--) {
		solve();
	}

	return 0;
}
