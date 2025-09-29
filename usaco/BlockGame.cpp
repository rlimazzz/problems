#include <bits/stdc++.h>

using namespace std;

map<int, map<char,int>> charac;

int32_t main(){
    freopen("blocks.in", "r", stdin);
    int n;
    cin >> n;

    int j = 0;
    map<char, int> finale;
    for(char i = 'a'; i <= 'z';i++) {
        charac[j][i] = 0;
        finale[i] = 0;
        j++;
    }

    for(int i = 0;i < n;i++) {
        string a, b;
        cin >> a >> b;

        map<char,int> temp1, temp2;
        int maxi = 0, counta ;
        for(int j = 0;j < a.size();j++) {
            temp1[a[j]]++;
        }
        for(int j = 0;j < b.size();j++) {
            temp2[b[j]]++;
        }

        for(char j = 'a';j <= 'z';j++) {
            charac[i][j] = max(temp1[j], temp2[j]);
            finale[j] += charac[i][j];
        }

    }
    
    freopen("blocks.out", "w", stdout);
    for(auto x : finale) {
        cout << x.second << "\n";
    }

    return 0;
}