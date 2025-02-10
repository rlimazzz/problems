#include <bits/stdc++.h>

using namespace std;

int main()
{
        int n, data;
        string carne;
        while(cin >> n){
                vector<pair<int, string>> datas_carnes;
                for(int i = 0; i < n;i++)
                {       
                        cin >> carne >> data;
                        datas_carnes.push_back(make_pair(data, carne));
                }
                sort(datas_carnes.begin(), datas_carnes.end());
                for(int k = 0;k < n;k++)
                {
                        if(k + 1 < n)
                        {
                                cout << datas_carnes[k].second << " ";
                        }else
                        {
                                cout << datas_carnes[k].second << endl;
                        }
                }
        }
        return 0;
}     
