#include <iostream>
using namespace std;

int main() {
    int n, i, ref, veri, num;
    cout << "Informe o tamanho do Vetor:" << endl;
    cin >> n;
    int vetor[n];
    cout << "Informe o conjunto de numeros inteiros do vetor: " << endl;
    for (i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    for (i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }

    for (i = 0; i < n; i++) {
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
    for (i = 0; i < n; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    cout << "Informe um numero a ser buscado: ";
    cin >> num;

    int inicio = 0, fim = n - 1, meio;
    bool encontrado = false;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;

        if (vetor[meio] == num) {
            encontrado = true;
            break;
        } else if (vetor[meio] < num) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    if (encontrado) {
        cout << "Parabens! o elemento informado faz parte do vetor!" << endl;
    } else {
        cout << "Que pena, o elemento informado nao faz parte do vetor! :(" << endl;
    }

    return 0;
}