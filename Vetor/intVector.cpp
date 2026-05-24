// 5. FUP que leia um vetor de 5 números inteiros e mostre-os.

#include <iostream>
using namespace std;

int main () {
    int i, cont;
    int nota[5];
    
    i = 0;
    cout << "Informe os numeros: ";
        while (i < 5) {
            cin >> nota[i];
            i = i + 1;
        }

    i = 0;
        while (i < 5) {
            cout << nota[i] << endl;
            i++;
        }

    return 0;
}

