// 2. Considere um array (semanal) com o número de acessos diários de um sistema, declarado como abaixo:
// int acessos[] = {120, 135, 160, 200, 180, 90, 150};
// FUP que (i) mostre o maior e o menor acesso da semana, (ii) calcule a média semanal de acessos. E (iii) liste os dias
// com mais de 150 acessos.

#include <iostream>
using namespace std;

int main() {
    int acessos[7], soma[7], dias[7];
    int maior, menor, media, somar, i;
    acessos[0] = 120;
    acessos[1] = 135;
    acessos[2] = 160;
    acessos[3] = 200;
    acessos[4] = 180;
    acessos[5] = 90;
    acessos[6] = 150;
    i = 0;
    
    maior = 0;
    menor = acessos[0];
    for (i = 0; i < 7; i++) {
        if (acessos[i] > maior) {
            maior = acessos[i];
        }

        if (menor > acessos[i]){
            menor = acessos[i];
        }
    }
    somar = 0;
    for (i = 0; i < 7; i++) {
        soma[i] = acessos[i];
        somar = somar + soma[i];
    }

    media = somar/7;
    cout << "O maior eh: " << maior << " e o menor eh " << menor << endl;
    cout << "A media semanal eh " << media << endl;
    cout << "Os acessos maiores que 150 são: " << endl;
    for (i = 0; i < 7; i++) {
        if (acessos[i] > 150) {
            cout << i << " ";
        }
        
    }

    return 0;
}