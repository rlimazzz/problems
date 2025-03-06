#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, contador = 0;
    string stones;
    cin >> n;
    cin >> stones;
    for(int i = 0;i < n;i++)
    {
        if(stones[i] == stones[i + 1])
        {
            contador++;
        }
    }
    cout << contador << endl;
    return 0;
}
