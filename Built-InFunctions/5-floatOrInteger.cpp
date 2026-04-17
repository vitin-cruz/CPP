// 5. FUP que receba um número em uma variável do tipo float e mostre se o número informado armazenado na
// variável é realmente um float ou é um integer.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float aFloat;
    int aInt;
    cout << "Digite um numero: " << endl;
    cin >> aFloat;
    aInt = int(aFloat);

    if (aFloat == aInt) {
        cout << "O numero não eh um float" << endl;
    } else {
        cout << "O numero realmente eh um float!" << endl;
    }

    
}