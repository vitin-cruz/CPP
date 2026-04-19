// 1. FUP que receba dois números e retorne a diferença entre eles (não a subtração; ex. -2 e 25 = 27).

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a, b;
    cout << "Digite um numero: " << endl;
    cin >> a >> b;

    int diferenca1 = abs(a);
    int diferenca2 = abs(b);
    cout << "A diferença entre " << a << " e " << b << " eh "<< diferenca1 + diferenca2 << endl;

    return 0;
}