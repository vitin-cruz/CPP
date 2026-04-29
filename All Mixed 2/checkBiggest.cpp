/*
2. FUP com uma função chamada maior() que receba como parâmetro três números inteiros e retorne o
maior valor dentre os três. Se os três valores foram iguais, retorne qualquer um dos valores.
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
    int n1, n2, n3, n4, n5, n6, n7, n8, n9;

    cout << "Informe nove valores:" << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9;

    cout << "O maior valor entre os tres eh: " << maior(maior(n1,n2,n3),maior(n4,n5,n6),maior(n7,n8,n9)) << endl;

    return 0;
}

