#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    cout << fixed << setprecision(10);
    int n, l;
    cin >> n >> l;

    set<int> entr;
    for(int i = 0;i < n;i++) {
        int num;
        cin >> num;
        entr.insert(num);
    }

    int i = 0;
    double maxi = *entr.begin();
    maxi = max(maxi,(double)(l-*prev(entr.end())));
    auto it = entr.begin();
    while(it != entr.end()) {
        if(i != 0){
            maxi = max(maxi, (double)((*it - (*prev(it))) / 2.0));
        }
        i++;
        it++;
    }

    cout << maxi << "\n";

    return 0;
}