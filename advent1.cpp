#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    string linha;
    int fim = 0;
    while(1) {
        cin >> linha;
        if(linha == "000") {
            break;
        }
        int contador = 0;
        char numerozin;
        string finale;
        for(int i = 0;i < linha.size();i++) {
            if(linha[i] - '0' >= 0 && linha[i] - '0' <= 9 && contador == 0) {
                finale = linha[i];
                contador++;
            }
            else if(linha[i] - '0' >= 0 && linha[i] - '0' <= 9){
                numerozin = linha[i];
            }
        }
        if(numerozin == '\0') {
            stringstream resposta;
            int aaa = 0;
            string aux;
            aux[0] = finale[0];
            aux[1] = finale[0];
            resposta << aux;
            resposta >> aaa;
            cout << aaa << endl;
            fim += aaa;
        }else {
            finale += numerozin;
            stringstream resposta;
            int aaa = 0;
            resposta << finale;
            resposta >> aaa;
            cout << aaa << endl;
            fim += aaa;
        }
    }
    cout << fim << "\n";
    return 0;
}
