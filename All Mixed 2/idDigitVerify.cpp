// 7. Para evitar erros de digitação em números de grande importância, como código de uma conta bancária
// ou um CPF, geralmente se adiciona ao número um dígito verificador. Por exemplo, o número 1841 é
// utilizado normalmente como 1841-4, onde o 4 é o dígito verificador. Ele é calculado da seguinte forma:
// • Cada algarismo do número é multiplicado por um peso começando de 2 da direita para a
// esquerda. Para cada algarismo o peso é acrescido de 1. Soma-se os produtos obtidos.
// o 1x5 + 8x4 + 4x3 + 1x2 = 51
// • Calcula-se o resto da divisão desta soma por 11:
// o 51 % 11 = 7
// • Subtrai-se de 11 o resto obtido:
// o 11 - 7 = 4
// • Se o valor obtido for 10 ou 11, o dígito verificador será o 0, nos outros casos, o dígito verificador é
// o próprio valor encontrado.
// FUP com uma função que receba um número inteiro de 1 a 9999 e retorne o seu correspondente dígito
// verificador. O programa deve ser encerrado quando for fornecido um número fora da faixa estabelecida (1
// a 9999). Para obter o valor do dígito verificador utilize a função calculaDigito().
// Exemplos de entrada/saída:
// (Ex. 1)
// Informe um número para visualizar seu dígito verificador: 1841 <ENTER>
// Digito verificador: 4
// Informe um número para visualizar seu dígito verificador: 999 <ENTER>
// Digito verificador: 7
// Informe um número para visualizar seu dígito verificador: 11 <ENTER>
// Digito verificador: 6
// Informe um número para visualizar seu dígito verificador: 10000 <ENTER>
// (Processo terminado)

#include <iostream>

using namespace std;


int calculaDigito(int numero) {
    int soma = 0;
    int peso = 2;

    
    while (numero > 0) {
        int algarismo = numero % 10; 
        soma = soma + (algarismo * peso);    
        peso++;                      
        numero = numero / 10;              
    }
    int resto = soma % 11;
    int dv = 11 - resto;
    if (dv == 10 || dv == 11) {
        return 0;
    } else {
        return dv;
    }
}

int main() {
    int num;

    while (true) {
        cout << "Informe um numero para visualizar seu digito verificador: " << endl;
        cin >> num;

        
        if (num < 1 || num > 9999) {
            cout << "Numero incorreto!" << endl;
        }

        cout << "Digito verificador: " << calculaDigito(num) << endl;
    }

    return 0;
}