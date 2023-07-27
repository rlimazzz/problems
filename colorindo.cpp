#include <bits/stdc++.h>

using namespace std;

int cc;

void rec(vector<vector<int> > &A, int i, int j, int prevC, int newC)
{
	if (i < 0 || i >= A.size() || j < 0 || j >= A[0].size())
	{
		return;
	}
	if (A[i][j] != prevC)
	{
		return;
	}

	cc++;
	A[i][j] = newC;

	rec(A, i + 1, j, prevC, newC);
	rec(A, i - 1, j, prevC, newC);
	rec(A, i, j + 1, prevC, newC);
	rec(A, i, j - 1, prevC, newC);
	rec(A, i + 1, j + 1, prevC, newC);
	rec(A, i + 1, j - 1, prevC, newC);
	rec(A, i - 1, j + 1, prevC, newC);
	rec(A, i - 1, j - 1, prevC, newC);
}

int main(void)
{
	int m;
	cin >> m;
	int n;
	cin >> n;
	vector<vector<int> > A(m, vector<int>(n));
	for (int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
	}

	int cmx = INT_MIN;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cc = 0;
			rec(A, i, j, 1, 2);
			cmx = max(cmx, cc);
		}
	}
	cout << cmx << endl;
	return 0;
}
