#include <bits/stdc++.h>

using namespace std;

int v[100000000];

int main()
{
        int x, b;
        cin >> x;
        for(int i = 0;i < x;i++)
        {
                cin >> b;
                v[b]++;
        }
        for(int k = 0;k < 100000000;k++)
        {
                if(v[k] != 0)
                {
                        cout << k << " aparece " << v[k] << " vez(es)" << endl;
                }
        }
        return 0;
}
