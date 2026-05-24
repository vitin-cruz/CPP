// 3. FUP que receba uma matriz NxM (com dimensões informadas pelo usuário) e verifique se existem elementos
// repetidos na matriz.

#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, k, l, cont;
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

    cont = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            for (k = 0; k < n; k++) {
                for (l = 0; l < m; l++) {
                    if (matriz[i][j] == matriz[k][l] && !(i == k && j == l)) {
                        cont++;
                    }
                }
            }
        }
    }

    if (cont > 0) {
        cout << "Existem elementos repetidos na matriz." << endl;
    } else {
        cout << "Nao existem elementos repetidos na matriz." << endl;
    }
    return 0;
}