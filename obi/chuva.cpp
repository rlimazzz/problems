#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int v[N], cont[N*10], n, k;
int resp=0;

int main(){
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int pref=0;
    cont[0]++;
    for(int i=0; i<n; i++){
        pref += v[i];
        if(pref-k>=0){
            resp += cont[pref-k];
        }
        cont[pref]++;
    }
    cout<<resp<<"\n";
    return 0;
}
