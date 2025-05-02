#include <bits/stdc++.h>

using namespace std;

vector<int> primes;

void precompute() {
    for(int j = 2;j <= 3000;j++) {
        bool c = false;
        for(int i =2;i * i <= j;i++) {
            if(j % i == 0) {
                c = true;
            }
        }

        if(!c) {
            primes.push_back(j);
        }
    }
}

void solve() {
    int entr;
    cin >> entr;

    precompute();

    int count = 0;
    for(int i = 1;i <= entr;i++) {
        int count2 = 0;
        for(int j = 0;j < i;j++) {
            if(primes[j] > i) {
                break;
            }
            if(i % primes[j] == 0) {
                count2++;
            }
        }

        if(count2 == 2) {
            count++;
        }
    }

    cout << count << endl;
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }
    return 0;
}
