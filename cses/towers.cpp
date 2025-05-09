#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0;i < n;i++) {
        cin >> v[i];
    }

    /*
        PROBLEMA 1 : COMO SABER QUAL TORRE ESCOLHER?
        PROBLEMA 2 : COMO REPRESENTAR A TORRE?

        IDEIAS: MULTISET PARA CRIAR TORRES E VERIFICAR LOWER_BOUNDS, O PROBLEMA É QUE PRECISAMOS MUDAR
        VALORES REPRESENTANTES

        3 8 2 1 5
        3

        (multi.lower_bound(8) == multi.end()) ???
        sim pois teremos somente 3 no nosso multiset, se o lower_bound é o ponteiro para o fim do multiset
        adicionamos o número atual no multiset, caso contrário trocamos o representante da torre

        3, 8

        2, 8
        1, 5
        logo precisamos apenas de duas torres
    */


    multiset<int> val;
    for(int i = 0;i < n;i++) {
        if(i == 0) {
            val.insert(v[i]);
        }else {
            auto ite = val.upper_bound(v[i]);
            if(ite == val.end()) {
                val.insert(v[i]);
            }else {
                int valor = *ite;

                if(valor > v[i]) {
                    val.erase(ite);
                    val.insert(v[i]); 
                }
                else if(valor == v[i]){
                    if(ite != val.end()) {
                        val.erase(next(ite));
                        val.insert(v[i]);
                    }else {
                        val.insert(v[i]);
                    }
                }
            }   
        }
    }

    cout << (int)val.size() << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    int t = 1;

    while(t--) {
        solve();
    }
    return 0;   
}

