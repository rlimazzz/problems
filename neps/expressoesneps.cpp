#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	string expressao;
	cin >> t;
	for(int i = 0; i < t;i++)
	{
		int contagem = 0;
		int contador = 0;
		stack<char> parenteses;
		stack<char> colchetes;
		stack<char> chaves;
		cin >> expressao;
		for(int k = 0;k < expressao.size();k++)
		{
			if(expressao[k] == '(')
			{
				parenteses.push('(');
			}
			else if(expressao[k] == '[')
			{	
				colchetes.push('[');
			}
			else if(expressao[k] == '{')
			{
				chaves.push('{');
			}
			else if(expressao[k] == ')' || expressao[k] == ']' || expressao[k] == '}')
			{
				if(expressao[k] == ')')
				{
					if(parenteses.empty() == true)
					{
						contador++;
						break;
					}else
					{
						parenteses.pop();
					}
				}
				else if(expressao[k] == ']')
				{
					if(colchetes.empty() == true)
					{
						contador++;
						break;
					}else
					{
						colchetes.pop();
					}
				}
				else if(expressao[k] == '}')
				{
					if(chaves.empty() == true)
					{
						contador++;
						break;
					}else
					{
						chaves.pop();
					}
				}	
			}
		}
		if(contador == 0 && colchetes.empty() == true && parenteses.empty() == true && chaves.empty() == true)
		{
			cout << "S" << endl;
		}else
		{
			cout << "N" << endl;
		}
	}
	return 0;
}
