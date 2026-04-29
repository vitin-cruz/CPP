/*
3. FUP que receba do usuário 9 valores inteiros e, usando a função maior() do exercício anterior, determine
e mostre na tela o maior valor dente os 9 números.
*/

#include <iostream>
using namespace std;

int maior(int a, int b, int c) { // receba 3 numeros int e retorne o maior
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else if (c > a && c > b) {
        return c;
    } else {
        return c;
    }
}


int main () {
    int n1, n2, n3;

    cout << "Informe tres valores:" << endl;
    cin >> n1 >> n2 >> n3;

    cout << "O maior valor entre os tres eh: " << maior(n1,n2,n3) << endl;

    return 0;
}
