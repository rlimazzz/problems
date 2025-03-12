#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int a, b;
    cin >> a >> b;

    /*
    the problem is that we need to create an array that the sum is divisible by the number b
    and the maximum number of this array is the minimum possible
    */

    //1 5 => [5], 5 / 1 = 5
    //4 3 => [1, 2, 1, 2], 6 / 4 = 1 but the rest is 2
    //8 8 => [1, 1, 1, 1, 1, 1, 1, 1], 8 / 8 = 1
    //8 17 => [2, 2, 2, 2, 2, 2, 2, 3], 17 / 8 = 2 but the rest is 1
    //8 18 => [2]

    long long s = (a + b - 1) / b;
    b *= s;

    cout << (a + b - 1) / a << endl;
}

int32_t main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}