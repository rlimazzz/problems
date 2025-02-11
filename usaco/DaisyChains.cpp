#include <bits/stdc++.h>

using namespace std;


void solve() {
    double entr;
    vector<double> values;
    cin >> entr;

    for(int i =0;i < entr;i++) {
        double n;
        cin >> n;
        values.emplace_back(n);
    }

    int total = 0;
    for(int i = 0;i < entr;i++) {
        set<int> subsets;
        int sum = 0;
        for(int j = i;j < entr;j++) {
            sum += values[j];
            int size = j - i + 1;
            subsets.insert(values[j]);

            if(sum % size == 0){
                int average = sum / size;

                if(subsets.find(average) != subsets.end()) {
                    total++;
                }

            }
        }
        
    }

    cout << total << "\n";
}

int32_t main() {
	int t = 1;

	while(t--) {
		solve();
	}

	return 0;
}
