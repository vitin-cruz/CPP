/*
1. Faça um programa que receba uma velocidade em quilômetros por hora (km/h), converta-a para milhas por
hora (mph) e exiba a velocidade convertida. A conversão deve ser feita por uma função “kmh_mph”, que
recebe a velocidade em km/h e a retorna em mph.
Exemplos de entrada/saída:
(Ex. 1)
Digite uma velocidade (em km/h):
100 <ENTER>
100 km/h = 62.1371 mph.

(Ex. 2)
Digite uma velocidade (em km/h):
1.609344 <ENTER>
1.60934 km/h = 1 mph.
*/

// receba velocidade em km/h

#include <iostream>
using namespace std;

void kmh_mph(float &km) { // converta em milhas
    km = km / 1.60934;
}


int main () {
    float velocidade;

    cout << "Informe uma velocidade em quilometros por hora (km/h)" << endl;
    cin >> velocidade;

    kmh_mph(velocidade);
    cout << "A velocidade convertida em milhas por hora (mp/h) eh: " << velocidade << endl; // exiba a velocidade convertida

    return 0;
}

