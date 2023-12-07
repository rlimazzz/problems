#include <bits/stdc++.h>

using namespace std;

int multiplicacao_recursiva(int a, int b) {
	if(b == 1) {
		return a;
	}
	return a + multiplicacao_recursiva(a, b - 1);
}

int main()
{
	int entr1, entr2;
	cin >> entr1 >> entr2;
	cout << multiplicacao_recursiva(entr1, entr2) << "\n";

	return 0;
}
