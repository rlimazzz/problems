#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0; i < n;i++) {
		string entrada;
		int contador = 0;
		cin >> entrada;
		if(entrada != "abc") {
			string op1, op2,op3;
			op1 = entrada;
			op2 = entrada;
			op3 = entrada;
			swap(op1[0], op1[1]);
			swap(op2[1], op2[2]);
			swap(op3[2], op3[0]);
			if(op1 == "abc" || op2 == "abc" || op3 == "abc") {
				cout << "YES" << endl;
			}else {
				cout << "NO" << endl;
			}
			

		}else {
			cout << "YES" << endl;
		}
	}
	
	return 0;
}
