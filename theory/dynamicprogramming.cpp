#include <bits/stdc++.h>

using namespace std;

#define ROW 3
#define COL 3

int ans[ROW][COL];

int dp(int row, int col) {
    if(row == 0 && col == 0) return 1;
    if(ans[row][col] != 0) return ans[row][col];

    int cur = 0;

    if(row > 0) cur += dp(row - 1, col);
    if(col > 0 ) cur += dp(row, col - 1);

    ans[row][col] = cur;
    return cur;
}

int main() {
    cout << dp(3, 3) << endl;
    return 0;
}