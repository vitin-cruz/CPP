#include <iostream>
using namespace std;

int main(){
    int nmax, i, linha, qtdLinha;

    linha = 1;
    cout << "Informe nmax" << endl;
    cin >> nmax;

    i = 1;
    while (i <= nmax) {
        cout << i << " ";
        qtdLinha = qtdLinha + 1;
        i = i + 1;

        if (qtdLinha == linha) {
            cout << endl;
            linha = linha + 1;
            qtdLinha = 0;
        }
    }

return 0;
}
