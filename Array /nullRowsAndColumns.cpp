// 5. FUP que receba uma matriz NxM (com dimensões informadas pelo usuário) e mostre o número de linhas e o número
// de colunas nulas da matriz.

#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, linhasNulas, colunasNulas;
    cout << "Informe o numero de linhas da matriz: ";
    cin >> n;
    cout << "Informe o numero de colunas da matriz: ";
    cin >> m;
    int matriz[n][m];
    cout << "Informe os elementos da matriz: " << endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> matriz[i][j];
        }
    }

    linhasNulas = 0;
    for (i = 0; i < n; i++) {
        int somaLinha = 0;
        for (j = 0; j < m; j++) {
            somaLinha = somaLinha + matriz[i][j];
        }
        if (somaLinha == 0) {
            linhasNulas++;
        }
    }

    colunasNulas = 0;
    for (j = 0; j < m; j++) {
        int somaColuna = 0;
        for (i = 0; i < n; i++) {
            somaColuna = somaColuna + matriz[i][j];
        }
        if (somaColuna == 0) {
            colunasNulas++;
        }
    }

    cout << "O numero de linhas nulas eh: " << linhasNulas << endl;
    cout << "O numero de colunas nulas eh: " << colunasNulas << endl;

    return 0;
}