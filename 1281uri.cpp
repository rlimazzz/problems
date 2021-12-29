#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100

int main()
{
    string entrada;
    while(cin >> entrada)
    {
        int contador = 0;
        stack<char> aberta;
        for(int k = 0;k < entrada.size();k++)
        {
            if(entrada[k] == '(')
            {
                aberta.push('(');
            }
            else if(entrada[k] == ')')
            {
                if(aberta.empty() == true)
                {
                    contador++;
                    break;
                }
                else
                {
                    aberta.pop();
                }
            }
        }
        if(aberta.empty() == false || contador > 0)
        {
            cout << "incorrect" << endl;
        }
        else
        {
            cout << "correct" << endl;
        }
    }
	return 0;
}
