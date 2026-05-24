// 7. FUP que receba um vetor de n elementos e ordene tal vetor em ordem crescente. Ao final, mostre o vetor
// ordenado.
// Exemplo de entrada/saída:
// Informe o tamanho do vetor: 6
// Informe um conjunto de números inteiros:
// 3 4 12 32 1 9 <ENTER>
// Vetor recebido: 3 4 12 32 1 9
// Vetor ordenado: 1 3 4 9 12 32


#include <iostream>
using namespace std;

int main() {
    int t, i, ref, veri;
    cout << "Informe o tamanho do Vetor:" << endl;
    cin >> t;
    int vetor[t];
    cout << "Informe o conjunto de numeros inteiros do vetor: " << endl;
    for (i = 0; i < t; i++) {
        cin >> vetor[i];
    }

    for (i = 0; i < t; i++) {
        cout << vetor[i] << " ";
    }

    for (i = 0; i < t; i++) {
        ref = vetor[i];
        veri = i - 1;
        while (veri >= 0 && vetor[veri] > ref) {
            vetor[veri + 1] = vetor[veri];
            veri = veri - 1;
        }
        vetor[veri + 1] = ref;
    }
     cout << endl;
     cout << "Vetor ordenado: " << endl;
    for (i = 0; i < t; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;


    return 0;
}