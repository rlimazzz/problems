#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int n;
    scanf("%d", &n);

    vector<int> v(n);
    vector<int> cont(5, 0);
    for(int i = 0;i < n;i++) {
        scanf("%d", &v[i]);
        cont[v[i]]++;
    }

    int p = cont[4];

    if(cont[1] - cont[3] <= 0) {
        cont[3] -= cont[1];
        p += cont[1];
        cont[1] = 0;
    }
    else if(cont[1] - cont[3] > 0) {
        cont[1] -= cont[3];
        p += cont[3];
        cont[3] = 0;
        p += cont[3];
        cont[3] = 0;
    }

    if(cont[3] > 0) {
        p += cont[3];
        cont[3] = 0;
    }

    if(cont[2] > 0){
        p += cont[2] / 2;
        cont[2] %= 2;
    }

    int l = cont[1] + (cont[2]) * 2;

    if(l <= 4 && l > 0) {
        p++;
    }
    else if(l % 4 != 0) {
        p += (l / 4) + 1;
    }else {
        p += (l / 4);
    }


    cout << p << "\n";

    return 0;
}