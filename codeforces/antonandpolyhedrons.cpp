#include <bits/stdc++.h>

using namespace std;

void solve() {
    int entr;
    cin >> entr;

    int sum = 0;
    for(int i = 0;i < entr;i++) {
        string in;
        cin >> in;

        if(in == "Icosahedron") {
            sum += 20;
        }
        else if(in == "Dodecahedron") {
            sum += 12;
        }
        else if(in == "Octahedron") {
            sum += 8;
        }
        else if(in == "Cube") {
            sum += 6;
        }else {
            sum += 4;
        }
    }
    cout << sum << endl;
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }

    return 0;
}