#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100

int main()
{
    int n;
    cin >> n;
    vector<int> pares;
    vector<int> impares;
    for(int i = 0;i < n;i++)
    {
        int entrada;
        cin >> entrada;
        if(entrada % 2 == 0)
        {
            pares.push_back(entrada);
        }else
        {
            impares.push_back(entrada);
        }
    }
    sort(pares.begin() , pares.end());
    sort(impares.begin(), impares.end());
    reverse(impares.begin() , impares.end());
    for(int k = 0;k < pares.size();k++)
    {
        cout << pares[k] << endl;
    }
    for(int j = 0;j < impares.size();j++)
    {
        cout << impares[j] << endl;
    }
	return 0;
}
