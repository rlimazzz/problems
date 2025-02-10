#include <bits/stdc++.h>

using namespace std;

int main()
{
        int p, r;
        cin >> p >> r;
        if(p == 1)
        {
                if(r == 0)
                {
                        cout << "B" << endl;
                }
                else if(r == 1)
                {
                        cout << "A" << endl;
                }
        }
        else if(p == 0)
        {
                cout << "C" << endl;
        }
        return 0;
}
