#include <bits/stdc++.h>

using namespace std;

int main()
{
    int matriz[5][5];
    pair<int, int> posicao1;
    for(int i = 0;i < 5; i++)
    {
        for(int k = 0;k < 5;k++)
        {
            cin >> matriz[i][k];
            if(matriz[i][k] == 1)
            {
                posicao1.first = i;
                posicao1.second = k;
            }
        }
    }
    int solucao = abs(posicao1.first - 2) + abs(posicao1.second - 2);
    cout << solucao << endl;
    return 0;
}
