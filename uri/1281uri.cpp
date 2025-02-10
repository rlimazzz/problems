#include <bits/stdc++.h>

using namespace std;

#define MAXN 100100

int main()
{
    int t;
    cin >> t;
    cout << fixed << setprecision(2);
    for(int i = 0;i < t;i++)
    {
        int m;
        float valor = 0;
        map<string , float> produtos;
        cin >> m;
        for(int k = 0;k < m;k++)
        {
            string nome;
            float preco;
            cin >> nome >> preco;
            produtos.insert(make_pair(nome, preco));
        }
        int p;
        cin >> p;
        for(int j = 0;j < p;j++)
        {
            string quero;
            int quant;
            cin >> quero >> quant;
            valor += produtos[quero] * quant;
        }
        cout << "R$ " << valor << endl;
    }
	return 0;
}
