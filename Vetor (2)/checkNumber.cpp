// 6. FUP que receba um vetor de 10 números. Depois, receba um novo número e, percorrendo o vetor, mostre se esse
// novo número faz parte do vetor de números ou não.
// Exemplo de entrada/saída:
// Informe um conjunto de 10 números inteiros:
// 3 2 5 8 10 7 9 4 4 1 <ENTER>
// Informe um número a ser buscado: 7 <ENTER>
// Vetor recebido: 3 2 5 8 10 7 9 4 4 1
// O número 7 está no vetor!

#include <iostream>
using namespace std;

int main() {
    int i, num, cont;
    int vetor[10];
    
    i = 0;
    cout << "Informe os numeros: ";
        while (i < 10) {
            cin >> vetor[i];
            i = i + 1;
        }

    cout << "Informe um numero a ser buscado: ";
    cin >> num;

    cont = 0;
    for (i = 0; i < 10; i++) {
        if (vetor[i] == num) {
            cont++;
        }
    }

    if (cont > 0) {
        cout << "O numero " << num << " esta no vetor!" << endl;
    } else {
        cout << "O numero " << num << " nao esta no vetor!" << endl;
    }

    return 0;
}