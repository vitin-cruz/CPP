// 13. Por definição, uma subsequência é aquela constituída por 2 (duas) ou mais ocorrências seguidas do mesmo valor.
// FUP que receba um vetor de n elementos inteiros entre 1 e 9 (com entrada terminada por zero que não faz parte do
// conjunto) e mostre o valor componente da subsequência que ocorre o maior número de vezes.
// Exemplo de entrada/saída:
// 4 4 2 5 5 5 2 8 8 8 1 1 2 5 5 2 8 8 5 1 1 1 2 8 8 2 9 5 0 <ENTER>
// 8

#include <iostream>
using namespace std;

int main() {
    int i, j, cont, maxCont, valorSubsequencia;
    int vetor[1000];
    
    i = 0;
    cout << "Informe os numeros inteiros entre 1 e 9 (termina com 0): " << endl;
        while (true) {
            cin >> vetor[i];
            if (vetor[i] == 0) {
                break;
            }
            i++;
        }
    int t = i;

    maxCont = 0;
    valorSubsequencia = 0;
    for (i = 0; i < t; i++) {
        cont = 1;
        for (j = i + 1; j < t; j++) {
            if (vetor[i] == vetor[j]) {
                cont++;
            } else {
                break;
            }
        }

        if (cont > maxCont) {
            maxCont = cont;
            valorSubsequencia = vetor[i];
        }
    }

    cout << "O valor componente da subsequencia que ocorre o maior numero de vezes eh: " << valorSubsequencia << endl;

    return 0;
}
