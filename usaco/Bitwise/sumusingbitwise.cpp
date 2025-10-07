#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	while(b > 0) {
		int carry = a & b;

		a ^= b;
		b = carry << 1;
	}

	cout << a << endl;


	return 0;
}
