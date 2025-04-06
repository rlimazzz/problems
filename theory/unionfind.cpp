#include <bits/stdc++.h>

using namespace std;

#define MAXN 10010

int n, k, pai[MAXN], peso[MAXN], qtd[MAXN];

int find(int x) {
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}

void join(int x, int y) {
    x = find(x);
    y = find(y);

    if(x == y) {
        return;
    }


    if(peso[x] > peso[y]) {
        pai[y] = x;
        qtd[x] += qtd[y];
    }
    else if(peso[y] > peso[x]) {
        pai[x] = y;
        qtd[y] += qtd[x];
    }
    else {
        pai[x] = y;
        peso[y]++;
        qtd[y] += qtd[x];
    }
}

int main() {
    cin >> n >> k;
    for(int i = 1;i <= n;i++) {
        pai[i] = i; 
        qtd[i] = 1;
    }

    for(int i = 0;i < k;i++) {
        char a;
        int b, c;
        cin >> a >> b >> c;

        if(a == 'C') {
            find(b) == find(c) ? cout << "S\n" : cout << "N\n";
        }else {
            join(b,c);
        }   
    }   
    return 0;
}


