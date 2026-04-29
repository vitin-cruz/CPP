/*
5. FUP que simule lançamentos de um dado conforme os requisitos a seguir.
(i) Possua uma função chamada aleatorio() que receba dois valores “a” e “b” e gere um número
aleatório entre esses dois valores;
(ii) No corpo do programa principal gere um número aleatório entre 1 e 6 e armazene-o;
(iii) Faça um laço de repetição e conte quantas vezes esse laço é rodado até que o número obtido no passo
(ii) seja obtido 2x consecutivas;
(iv) Faça um laço de repetição e conte quantas vezes esse laço é rodado até que o número obtido no passo
(ii) seja obtido 3x consecutivas;
(v) Simule um milhão de números aleatórios entre 1 e 6 e verifique o número de ocorrências de cada
número. Exiba a porcentagem obtida de cada número.
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int aleatorio(int a, int b) {
    srand (time(NULL));
    int numero = (rand() % b) + a;

    return numero;
}

int main() {
    int a, b, consecutivas, intervalo, contador, numero1, numero2;
    a = 1;
    b = 6;
    consecutivas = 0;
    contador = 0;
    intervalo = aleatorio(a,b);

    while(consecutivas < 2) {
        numero1 = (rand() % 6) + 1;

        if (numero1 == intervalo) {
            consecutivas++;
        } else {
            consecutivas = 0;
        }

        contador++;
    }    
    cout << "O laço rodou " << contador << "x " << "consecultivas" << endl;
    contador = 0;

    while(consecutivas < 3) {
        numero1 = (rand() % 6) + 1;

        if (numero1 == intervalo) {
            consecutivas++;
        } else {
            consecutivas = 0;
        }

        contador++;
    }    

    cout << "O laço rodou " << contador << "x " << "consecultivas" << endl;

//     (v) Simule um milhão de números aleatórios entre 1 e 6 e verifique o número de ocorrências de cada
// número. Exiba a porcentagem obtida de cada número.

     
    float p1, p2, p3, p4, p5, p6, i1, i2, i3, i4, i5, i6;
    i1 = 0;
    i2 = 0;
    i3 = 0;
    i4 = 0;
    i5 = 0;
    i6 = 0;
    for (int i=0; i < 1000000; i++) {
        numero2 = (rand() % 6) + 1;
        if (numero2 == 1) {
            i1++;
        } else if (numero2 == 2) {
            i2++;
        } else if (numero2 == 3) {
            i3++;
        } else if (numero2 == 4) {
            i4++;
        } else if (numero2 == 5) {
            i5++;
        } else {
            i6++;
        }
    }

    p1 = (i1 / 1000000) * 100;
    p2 = (i2 / 1000000) * 100;
    p3 = (i3 / 1000000) * 100;
    p4 = (i4 / 1000000) * 100;
    p5 = (i5 / 1000000) * 100;
    p6 = (i6 / 1000000) * 100;

    cout << "1 > " << p1 << "%" << endl;
    cout << "2 > " << p2 << "%" << endl;
    cout << "3 > " << p3 << "%" << endl;
    cout << "4 > " << p4 << "%" << endl;
    cout << "5 > " << p5 << "%" << endl;
    cout << "6 > " << p6 << "%" << endl;

    return 0;
}

