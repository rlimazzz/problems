#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    // 233 = 1 + 2 + 230
    // 6 - 3 = 3, 1, 1, 4
    if((n - 3) % 3 != 0) {
        cout << "1 2 " << n - 3 << "\n";
    }
    else if(n == 3) {
        cout << "1 1 1\n";
    }else {
        cout << "1 1 " << n - 2 << "\n";
    }

    return 0;
}