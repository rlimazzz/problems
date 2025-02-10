#include <bits/stdc++.h>

using namespace std;

int main()
{
    string assassino, assassinado;
    map<string, int> pessoas;
    while(cin >> assassino >> assassinado)
    {
        if(pessoas[assassino] != -1)
        {
            pessoas[assassino] += 1;
        }
        pessoas[assassinado] = -1;
    }
    cout << "HALL OF MURDERERS" << endl;
    for(auto x : pessoas)
    {
        if(x.second != -1)
        {
            cout << x.first << " " << x.second << endl;
        }
    }
    return 0;
}
