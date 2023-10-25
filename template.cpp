#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define I insert
#define P push
#define REP(i, a , b) for(int i = a; i < b; i++)


typedef vector<int> vi;
typedef pair<int, int> pii;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	REP(i,0, 10) {
		cout << i << " REPETITION" << endl;
		REP(a, 0 , 20) {
			cout << i << " " << a << endl;
		}
	}
	
	
	return 0;
}
