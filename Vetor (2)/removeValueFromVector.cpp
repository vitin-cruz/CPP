// 9. FUP que receba um vetor de n elementos inteiros (com entrada terminada por zero que não faz parte do conjunto)
// e ordene tal vetor em ordem crescente. Depois, receba um novo elemento único igual a um elemento já presente no
// vetor e remova-o do vetor. Ao final, mostre o vetor, já sem o elemento informado, ordenado (obviamente, não deixe
// “buracos” no vetor). Declare o vetor com um tamanho máximo suficiente para armazenar os dados (limite fictício para
// n).
// Exemplo de entrada/saída:
// Informe um conjunto de números inteiros:
// 3 4 12 32 1 9 0 <ENTER>
// 9 <ENTER>
// Vetor final: 1 3 4 12 32


#include <iostream>
using namespace std;

int main() {
    int t, i, ref, veri, num;
    cout << "Informe o conjunto de numeros inteiros do vetor: " << endl;
    int vetor[28328];
    i = 0;
    while (true) {
        cin >> vetor[i];
        if (vetor[i] == 0) {
            break;
        }
        i++;
    }
    t = i;

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

    cout << "Informe um numero a ser removido: ";
    cin >> num;

    for (i = 0; i < t; i++) {
        if (vetor[i] == num) {
            for (int j = i; j < t - 1; j++) {
                vetor[j] = vetor[j + 1];
            }
            break;
        }
    }

     cout << endl;
     cout << "Vetor final: " << endl;
    for (i = 0; i < t - 1; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}