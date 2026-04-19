/*05. Dada a equação de Raiz Quadrada de um valor c qualquer, definida por:
F(x) = 1/2*(x + (c/x)))
FUP com uma função que retorna a raiz quadrada de um número informado pelo usuário
sem utilizar a função nativa sqrt.
A utilização da equação da Raiz Quadrada deve seguir os seguintes passos:
(i) utilizar um chute inicial qualquer para x0;
(ii) utilizar o resultado da equação como próximo x;
(iii) repetir o passo (ii) até que ( |(c − (x ∗ x))| < 0,0001)
O chute inicial pode ser informado pelo usuário ou não. Teste sua existência e, em caso negativo, atribua o valor 1 a ele.*/

#include <iostream>
#include <cmath>
using namespace std;

float raizQuadrada(float x, float c) {  
        while (fabs(c -(x*x)) >= 0.0001) {
            x = 0.5*(x+(c/x));
            cout << x << " ";
            cout << c << endl;
            return x;
         }
}

int main (){
    float a, b, raiz;

    cout << "Informe um chute: " << endl;
    cin >> a;
    cout << "Informe um X: " << endl;
    cin >> b;
    raiz = raizQuadrada(a, b);

    cout << raiz << endl;
    return 0;
}
