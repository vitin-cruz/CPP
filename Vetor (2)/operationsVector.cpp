// 1. FUP que leia um vetor de 5 números inteiros e mostre os números, a soma e a multiplicação deles.

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;


int main () {
    int i, res;
    int mostra[5], soma[5], mult[5];
   
    cout << "Informe 5 numeros: ";
    for (i = 0; i < 5; i++) {
            cin >> mostra[i];
        }
    cout << endl;
   
    cout << "Os numeros são: ";
    for (i = 0; i < 5; i++) {
            cout << mostra[i] << " ";
        }
    cout << endl;
       
    res = 0;
    for (i = 0; i < 5; i++) {
        soma[i] = mostra[i];
        res = res + soma[i];
    }

    cout << "A soma dos numeros eh: " << res << endl;
    i = 0;
    res = 1;

    while (i<5){
        soma[i] = mostra[i];
        res = res * soma[i];
        i++;
    }
    cout << "E a sua multiplicacao eh: " << res << endl;

    return 0;
}