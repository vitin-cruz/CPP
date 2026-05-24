// 4. FUP que leia 20 números inteiros e armazene-os num vetor. Depois, armazene os números pares em um vetor
// “par” e os números ímpares em um vetor “impar”. Ao final, imprima os três vetores.
// Exemplo de entrada/saída:
// Informe 20 números inteiros:
// 1 2 3 4 5 4 3 5 10 13 11 20 32 1 7 9 10 20 41 17 <ENTER>
// Vetor recebido:
// 1 2 3 4 5 4 3 5 10 13 11 20 32 1 7 9 10 20 41 17
// Vetor de pares: 2 4 4 10 20 32 10 20
// Vetor de ímpares: 1 3 5 3 5 13 11 1 7 9 41 17


#include <iostream>
using namespace std;

int main() {
    int i, ipar, iimpar;
    int num[20], par[20], impar[20];
    
    i = 0;
    ipar = 0;
    iimpar = 0;
    cout << "Informe os numeros: ";
        while (i < 20) {
            cin >> num[i];
            if (num[i] % 2 == 0) {
                par[ipar] = num[i];
                ipar++;
            } else {
                impar[iimpar] = num[i];
                iimpar++;
            }
            i++;
        }

    i = 0;
    cout << "Vetor de pares: " << endl;
        while (i < ipar) {
            cout << par[i] << " ";
            i++;
        }
        cout << endl;

    i = 0;
        cout << "Vetor de impares: " << endl;
        while (i < iimpar) {
            cout << impar[i] << " ";
            i++;
        }
        cout << endl;

    return 0;
}