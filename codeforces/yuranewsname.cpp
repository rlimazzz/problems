#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int entr;
    cin >> entr;

    for(int i = 0;i < entr;i++) {
        int count = 0;
        string ex;
        cin >> ex;

        if(ex[0] == '_' && (int)ex.size() != 1) count++;
        if(ex[(int)ex.size() - 1] == '_' && (int)ex.size() != 1) count++;
        if((int)ex.size() == 1 && ex[0] == '^' ) {
            count++; 
            cout << count << "\n";

            continue;
        }
        if((int)ex.size() == 1 && ex[0] == '_') {
            count += 2;
            cout << count << "\n";
            continue;
        }

        for(int j = 0; j < ex.size() - 1;j++) {
            if(ex[j] == ex[j + 1] && ex[j + 1] == '_') count++;
        }
        cout << count << "\n";
    }
    return 0;
}