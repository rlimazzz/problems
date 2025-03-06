#include <bits/stdc++.h>

using namespace std;

int main()
{
    int entrada, polos, grupos_polos = 0;
    vector<int> grupos;
    cin >> entrada;
    for(int i = 0;i < entrada;i++)
    {
        cin >> polos;
        grupos.push_back(polos);
    }
    for(int j =0;j < grupos.size();j++)
    {
        if(grupos[j] != grupos[j + 1])
        {
            grupos_polos++;
        }
    }
    cout << grupos_polos << endl;
    return 0;
}
