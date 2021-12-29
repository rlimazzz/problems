#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, feedback , num;
    cin >> a;
    for(int i = 0; i < a; i++)
    {
        cin >> feedback;
        for(int j = 0; j < feedback; j++)
        {
            cin >> num;
            if(num == 1)
            {
                cout << "Rolien" << endl;
            }
            else if(num ==2)
            {
                cout << "Naej" << endl;
            }
            else if(num == 3)
            {
                cout << "Elehcim" << endl;
            }
            else if(num == 4)
            {
                cout << "Odranoel" << endl;
            }
        }
    }
}
