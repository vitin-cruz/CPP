// 8. FUP que receba um vetor de n elementos inteiros (com entrada terminada por zero que não faz parte do conjunto)

// e ordene tal vetor em ordem crescente. Depois, receba um novo elemento único ainda não presente no vetor e insira-
// o na posição correta no vetor. Ao final, mostre o vetor, já com o novo elemento inserido, ordenado. Declare o vetor

// com um tamanho máximo suficiente para armazenar os dados (limite fictício para n).
// Exemplo de entrada/saída:
// Informe um conjunto de números inteiros:
// 3 4 12 32 1 9 0 <ENTER>
// 8 <ENTER>
// Vetor final: 1 3 4 8 9 12 32

#include <iostream>
using namespace std;

int main() {
    int t, i, ref, veri, num;
    cout << "Informe o conjunto de numeros inteiros do vetor (termina com 0): " << endl;
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

    cout << "Informe um numero a ser inserido: ";
    cin >> num;

    if (num < vetor[0]) {
        for (i = t; i > 0; i--) {
            vetor[i] = vetor[i - 1];
        }
        vetor[0] = num;
    } else if (num > vetor[t - 1]) {
        vetor[t] = num;
    } else {
        for (i = t - 1; i >= 0; i--) {
            if (vetor[i] < num) {
                break;
            }
            vetor[i + 1] = vetor[i];
        }
        vetor[i + 1] = num;
    }

     cout << "Vetor final: " << endl;
     for (i = 0; i <= t; i++) {
         cout << vetor[i] << " ";
     }
     cout << endl;

     return 0;
}