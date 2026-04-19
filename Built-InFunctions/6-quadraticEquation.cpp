/*
6. FUP que implemente Bhaskara recebendo uma entrada composta por a, b e c (com a, b e c representando as
incógnitas de uma equação na forma ax2 + bx + c = 0), retorne as raízes (x1 e x2) da equação. Mostre ainda uma
mensagem de indeterminação da raiz, no caso de um delta negativo.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b, c, delta, bQuadrado, x1, x2;
    cout << "Digite o valor de 'a', 'b' e 'c' da formula de Bhaskara, respectivamente: " << endl;
    cin >> a >> b >> c;

    bQuadrado = pow(b, 2);
    delta = bQuadrado - (4*a*c);
    int raiz = sqrt(delta);

    if (raiz > 0) {
        x1 = ((-b) + raiz)/2*a;
        x2 = ((-b) - raiz)/2*a;
        cout << "Os valor de x1 eh " << x1 << " e x2 eh " << x2 << endl;
    } else if (raiz == 0) {
        x1 = ((-b) + raiz)/2*a;
        x2 = ((-b) - raiz)/2*a;
        cout << "Os valor de x1 e x2 eh " << x1 << endl;
    } else {
        cout << "Não há raizes reais.";
    }
    
}
