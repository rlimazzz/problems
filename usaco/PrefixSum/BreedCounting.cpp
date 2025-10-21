#include <bits/stdc++.h>

using namespace std;

struct pauladas {
    int x, y, z;
};

int32_t main(){
    int n, q;
    freopen("bcount.in", "r", stdin);
    cin >> n >> q;

    vector<pair<int, pair<int, int>>> vals;
    for(int i = 0;i <= n + 5;i++) {
        vals.push_back({0, {0, 0}});
    }

    // for(auto x : vals) {
    //     cout << x.first << ", "<< x.second.first << ", " << x.second.second << "\n";
    // }

    for(int i =1;i <= n;i++) {
        int entr;
        cin >> entr;

        if(entr == 1) {
            vals[i].first += vals[i - 1].first + entr;
            vals[i].second.first = vals[i - 1].second.first;
            vals[i].second.second = vals[i - 1].second.second;
            // cout << vals[i].first << " <<\n ";
        }
        else if(entr == 2) {
            vals[i].second.first += vals[i - 1].second.first + entr;
            vals[i].second.second = vals[i - 1].second.second;
            vals[i].first = vals[i - 1].first;
            // cout <<  vals[i].second.first << " <<\n";
        }
        else if(entr == 3) {
            vals[i].second.second += vals[i - 1].second.second + entr;
            vals[i].first = vals[i - 1].first;
            vals[i].second.first = vals[i -1].second.first;
            // cout << vals[i].second.second << " <<\n";
        }
    }

    vector<pauladas> saida;
    for(int i = 0;i < q;i++) {
        int a , b;
        cin >> a >> b;

        pauladas temp;
        temp.x = vals[b].first - vals[a - 1].first;
        temp.y =  (vals[b].second.first  - vals[a - 1].second.first) / 2;
        temp.z = (vals[b].second.second - vals[a - 1].second.second) / 3;

        saida.push_back(temp);
    }

    freopen("bcount.out", "w", stdout);
    for(int i = 0;i < saida.size();i++) {
        cout << saida[i].x << " " << saida[i].y << " " << saida[i].z << "\n";
    }
    return 0;
} 
