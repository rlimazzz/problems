#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int n , m, multiplicando = 0;
    cin >> m >> n;
    multiplicando = m * n;
    if(multiplicando % 2 == 0)
    {
        cout << multiplicando / 2 << endl;
    }else{
        multiplicando -= 1;
        cout << multiplicando / 2 << endl;
    }
    return 0;
}
