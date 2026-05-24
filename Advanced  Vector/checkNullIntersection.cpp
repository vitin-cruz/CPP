// 12. FUP que leia duas sequências com quantidades arbitrárias de valores inteiros positivos, as quais denotam dois
// conjuntos da matemática. Os valores de uma sequência nunca conterão duplicatas, mas podem vir fora de ordem.
// Cada sequência termina com o valor 0 (que não é elemento de nenhum dos conjuntos). Depois da leitura dos dados, o
// programa deve determinar se os conjuntos possuem interseção vazia. Se isso ocorrer, a palavra “Sim” deve ser
// impressa. No caso contrário, a palavra “Não” deve ser impressa.
// Exemplo de entrada/saída:
// 11 7 1 18 5 9 0 <ENTER>
// 22 4 5 6 0 <ENTER>
// Não

#include <iostream>
using namespace std;

int main() {
    int i, j;
    int vetor1[100], vetor2[100];
    
    i = 0;
    cout << "Informe os valores do primeiro vetor: ";
        while (true) {
            cin >> vetor1[i];
            if (vetor1[i] == 0) {
                break;
            }
            i = i + 1;
        }

    j = 0;
    cout << "Informe os valores do segundo vetor: ";
        while (true) {
            cin >> vetor2[j];
            if (vetor2[j] == 0) {
                break;
            }
            j = j + 1;
        }

    bool intersecaoVazia = true;
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            if (vetor1[i] == vetor2[j]) {
                intersecaoVazia = false;
                break;
            }
        }
        if (!intersecaoVazia) {
            break;
        }
    }

    if (intersecaoVazia) {
        cout << "Sim" << endl;
    } else {
        cout << "Nao" << endl;
    }

    return 0;
}