#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100

int main()
{
    int n;
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        stack<char> abertos;
        int contador = 0;
        string entrada;
        cin >> entrada;
        for(int k = 0;k < entrada.size();k++)
        {
            if(entrada[k] == '<')
            {
                abertos.push('<');
            }
            else if(entrada[k] == '>')
            {
                if(abertos.empty() != true)
                {
                    contador++;
                    abertos.pop();
                }
            }
        }
        cout << contador << endl;
    }
	return 0;
}
