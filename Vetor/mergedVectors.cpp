// 5. FUP que leia dois vetores com 10 elementos cada. Gere um terceiro vetor de 20 elementos, cujos valores deverão
// ser compostos pelos elementos intercalados dos dois outros vetores.
// Exemplos de entrada/saída:
// Informe o primeiro vetor:
// 1 1 1 1 1 1 1 1 1 1 <ENTER>
// Informe o segundo vetor:
// 2 2 2 2 2 2 2 2 2 2 <ENTER>
// Vetor intercalado: 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2

#include <iostream>
using namespace std;

int main() {
    int i, j;
    int vetor1[10], vetor2[10], vetor3[20];
    
    i = 0;
    cout << "Informe o primeiro vetor: ";
        while (i < 10) {
            cin >> vetor1[i];
            i = i + 1;
        }

    i = 0;
    cout << "Informe o segundo vetor: ";
        while (i < 10) {
            cin >> vetor2[i];
            i = i + 1;
        }

    i = 0;
    j = 0;
        while (i < 20) {
            if (i % 2 == 0) {
                vetor3[i] = vetor1[j];
            } else {
                vetor3[i] = vetor2[j];
                j++;
            }
            i++;
        }

    i = 0;
        cout << "Vetor intercalado: " << endl;
        while (i < 20) {
            cout << vetor3[i] << " ";
            i++;
        }
        cout << endl;

    return 0;
}