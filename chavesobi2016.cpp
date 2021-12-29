#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, contador = 0;
    cin >> n;
    stack<char> chaves;
    string entrada;
    for(int i = 0;i <= n;i++)
    {
        getline(cin , entrada);
        for(int k = 0;k < entrada.size();k++)
        {
            if(entrada[k] == '{')
            {
                chaves.push('{');
            }
            else if(entrada[k] == '}' && !chaves.empty())
            {
                chaves.pop();
            }
            else if(entrada[k] == '}' && chaves.empty())
            {
                contador += 1;
                break;
            }

        }
    }
    if(contador == 0 && chaves.empty())
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
	return 0;
}
