// C++ program of the above approach
#include <bits/stdc++.h>
using namespace std;

#define MAXN 1001;

int main()
{
	int n, X , Y;
	set<int> uniao;
	cin >> n;
	cin >> X;
	for(int i = 0;i < X;i++) {
		int entr;
		cin >> entr;
		uniao.insert(entr);
	}
	cin >> Y;
	for(int i = 0;i < Y; i++) {
		int entr;
		cin >> entr;
		uniao.insert(entr);
	}
	if(uniao.size() == n) {
		cout << "I become the guy." << endl;
	}else {
		cout << "Oh, my keyboard!" << endl;
	}
	return 0;
}
 
