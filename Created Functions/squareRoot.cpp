#include <iostream>
#include <cmath>
using namespace std;

float raizQuadrada(float x, float c) {
    while (fabs(c -(x*x)) >= 0.0001) {
            x = 0.5*(x+(c/x));
    }

    return x;
}

int main (){
    float x, y, raiz;

    cout << "Informe um chute: " << endl;
    cin >> y;
    cout << "Informe um X: " << endl;
    cin >> x;
    raiz = raizQuadrada(y, x);

    cout << raiz << endl;
    return 0;
}
