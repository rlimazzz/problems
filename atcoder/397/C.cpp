#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    //solution is copy from a solution in atcoder live of the 397 contest
    int n;
    cin >> n;

    vector<int> a;
    for(int i = 0;i < n;++i) {
        int entr;
        cin >> entr;

        a.push_back(entr);
    }

    vector<int> l(n + 1), r(n + 1);

    unordered_set<int> st;
    for(int i = 0;i < n;++i) {
        st.insert(a[i]);
        l[i + 1] = (int)st.size();
    }

    unordered_set<int> st2;
    for(int i = n - 1;i >= 0;i--) {
        st2.insert(a[i]);
        r[i] = (int)st2.size();
    }

    int ans = 0;
    for(int i = 1;i < n;i++) {
        ans = max(ans, l[i] + r[i]);
    }

    cout << ans << endl;
    return 0;
}
