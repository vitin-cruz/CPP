/*
3. Quando fazemos uma declaração de variável em uma linguagem de programação, estamos informando qual a
maneira que será utilizada para o armazenamento daquela variável.
Na linguagem C++, por exemplo, é possível declarar uma variável da seguinte maneira:
unsigned short int nome_variavel;
, o que corresponde a dizer que a variável “nome_variavel” será armazenada com o tipo “unsigned short int”;
ou seja, utilizará no máximo 2 bytes (16 bits) e todos os bits serão utilizados para o armazenamento de números
inteiros (números sem sinal, sempre positivos). No caso de armazenamento com sinal, um bit fica reservado para o
sinal.
FUP que receba um número representando o número de bytes utilizados para o armazenamento de uma variável e 1
ou 2 representando se serão armazenados valores negativos e positivos, ou apenas positivos, e mostre qual é o maior
número que poderia ser armazenado nesta variável.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
    // FUP que receba um numero representando o numero de bytes para o armazenamento de uma variavel
    int numBytes, numBits, r;
    cout << "Numero de Bytes: " << endl;
    cin >> numBytes;
    numBits = numBytes * 8;

    // FUP que representa se receberá valores negativos e positivos, ou só positivos.
    cout << "Serão armazenados valores menores que 0? Digite 0 para Não e 1 para Sim" << endl;
    cin >> r;

    if (r == 1) {  // mostre qual o maior numero que pode ser armazenado
        numBits = numBits - 1; 
        int maiorNumero = pow(2, numBits);
        cout << "O maior numero que pode ser armazenado eh: " << maiorNumero - 1 << endl;
        
    } else {
        int maiorNumero = pow(2, numBits);
        cout << "O maior numero que pode ser armazenado eh: " << maiorNumero - 1 << endl;
    }
}
