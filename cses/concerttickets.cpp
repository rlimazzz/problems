#include <bits/stdc++.h>

using namespace std;

multiset<int> val;
void solve() {
    int n , m;

    cin >> n >> m;

    for(int i = 0;i < n;i++) {
        int entr;
        cin >> entr;
        val.insert(entr);
    }

    for(int i = 0;i < m;i++) {
        int entr;
        cin >> entr;
        
        /*
        this is better to use in sets and multisets because if we use lower_bound(val.begin(), val.end(), entr) directly it will try
        to access the elements by index, and the sets and multisets and maps are not continuous in the memory
        */
        auto it = val.lower_bound(entr);

        if(!val.empty() && it == val.end() ) {
            it--;
            int num = *it;
            cout << num << endl;
            val.erase(it);
        }else {
            if(!val.empty() && it == val.begin() ) {
                if(*it == entr) {
                    cout << *it << endl;
                    val.erase(it);
                }else {
                    cout << -1 << endl;
                }
            }
            else if(!val.empty() && it != val.begin() ){
                if(*it == entr) {
                    cout << *it << endl;
                    val.erase(it);
                }else {
                    it--;
                    cout << *it << endl;
                    val.erase(it);
                }
            }else {
                cout << -1 << endl;
            }
        }
    }
}

int32_t main( ){
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int t = 1;

    while(t--) {
        solve();
    }
    return 0;
}
