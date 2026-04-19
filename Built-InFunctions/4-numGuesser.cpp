/* 4. Faça um jogo de adivinhação no qual o jogador deve adivinhar um número aleatório entre 1 e 1000 com no máximo
10 tentativas. A cada tentativa do jogador, é informado se o número a ser descoberto é maior, menor ou igual ao
número chutado. */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    int numChute, chute;

    srand (time(NULL));
    numChute = rand() % 1001;

    cout << "Um numero aleatorio foi gerado, tente advinha-lo. Voce tem 10 chances: " << endl;
    cin >> chute;

    for (int i = 1; i < 10; i++) {
        if (chute < numChute) {
            cout << "O numero a ser descoberto é maior que o informado, tente novamente." << endl;
            cin >> chute;
        } else if (chute > numChute) {
            cout << "O numero a ser descoberto é menor que o informado, tente novamente." << endl;
            cin >> chute;
        } else {
            cout << "Parabens! Você advinhou o numero abençoado!";
        }
    }

    
}

