#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<int> entrada;
    for(int i = 0;i < n;i++)
    {
        int x;
        cin >> x;
        if(x != 0)
        {
            entrada.push(x);
        }else
        {
            entrada.pop();
        }
    }
    int soma = 0;
    while(!entrada.empty())
    {
        soma += entrada.top();
        entrada.pop();
    }
    cout << soma << endl;
	return 0;
}
