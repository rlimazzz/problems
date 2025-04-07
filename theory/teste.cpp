#include <bits/stdc++.h>

using namespace std;

#define MAXN 10010

int n, k, pai[MAXN], qtd[MAXN], peso[MAXN];

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

    else if(peso[x] < peso[y]) {
        pai[x] = y;
        qtd[y] += qtd[x];
    }
    else if(peso[x] > peso[y]) {
        pai[y] = x;
        qtd[x] += qtd[y];
    }else {
        pai[x] = y;
        qtd[y] += qtd[x];
        peso[y]++;
    }
}

int main() {
    cin >> n >> k;

    for(int i = 1;i <= n;i++) {
        pai[i] = i;
        qtd[i] = 1;
    }
    return 0;
}
