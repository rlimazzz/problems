#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100

int main()
{
    int t;
    cin >> t;
    for(int i = 0;i < t;i++)
    {
        int m, contador = 0;
        cin >> m;
        vector<int> alunos;
        vector<int> reversos;
        for(int k = 0;k < m;k++)
        {
            int aluno;
            cin >> aluno;
            alunos.push_back(aluno);
            reversos.push_back(aluno);
        }
        sort(alunos.rbegin(), alunos.rend());
        for(int j = 0;j < m;j++)
        {
            if(alunos[j] == reversos[j])
            {
                contador++;
            }
        }
        cout << contador << endl;

    }
	return 0;
}
