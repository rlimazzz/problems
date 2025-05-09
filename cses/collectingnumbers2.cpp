#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> pos(n);
    vector<int> numb(n);

    int round = 1;
    for(int i = 0;i < n;i++) {
        cin >> numb[i];
        numb[i]--;
        pos[numb[i]] = i;

    }

    for(int i = 1;i < n;i++) {
        if(pos[i] < pos[i - 1]) {
            round++;
        }   
    }


    for(int i = 0;i < m;i++) {
        bool checka = false, checkb = false;
        int a, b;
        cin >> a >> b;

        if(a - 1 > 0 && pos[numb[a- 1]] < pos[numb[a - 1]]) {
            checka = true;
        }
        else if(a - 1 == 0 && pos[numb[a - 1]] > pos[numb[a + 1]]) {
            checka = true;
        }


        if(b - 1 > 0 && pos[numb[b- 1]] < pos[numb[b - 1]]) {
            checkb = true;
        }
        else if(b - 1 == 0 && pos[numb[b - 1]] > pos[numb[b + 1]]) {
            checkb = true;
        }

        pos[numb[a - 1]] = b - 1;
        pos[numb[b - 1]] = a - 1;

        int aux = numb[a - 1];

        numb[a - 1] = numb[b - 1];
        numb[b - 1] = aux;

        if(a - 1 > 0 && pos[numb[a - 1]] < pos[numb[a - 2]] && checka == false) {
            round--;
        }
        else if(a - 1 > 0 && pos[numb[a - 1]] > pos[numb[a - 2]] && checka == true) {
            round++; 
        }
        else if(a - 1 == 0 && pos[numb[a - 1]] > pos[numb[a]] && checka == true) {
            round++;
        }
        else if(a - 1 == 0 && pos[numb[a - 1]] < pos[numb[a]] && checka == false){
            round--;
        }


        if(b - 1 > 0 && pos[numb[b - 1]] < pos[numb[b - 2]] && checkb == false) {
            round--;
        }
        else if(b - 1 > 0 && pos[numb[b - 1]] > pos[numb[b - 2]] && checkb == true) {
            round++; 
        }
        else if(b - 1 == 0 && pos[numb[b - 1]] > pos[numb[b]] && checkb == true) {
            round++;
        }
        else if(b - 1 == 0 && pos[numb[b - 1]] < pos[numb[b]] && checkb == false){
            round--;
        }

        cout << round << endl;
    }
}

int32_t main() {
    int t = 1;

    while(t--) {
        solve();
    }
    return 0;
}
