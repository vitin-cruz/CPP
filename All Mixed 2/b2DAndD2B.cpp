// Podemos converter um número decimal para binário realizando sucessivas divisões por 2 e agrupando os
// restos destas divisões ao contrário.
// 11/2 = 5 (resto 1)
// 5/2 = 2 (resto 1)
// 2/2 = 1 (resto 0)
// 1/2 = 0 (resto 1)
// 11(10) = 1011(2)
// Por outro lado, podemos converter um número binário para decimal realizando a soma das multiplicações de
// seus dígitos por potências de 2.
// 1011(2) = 11(10)
// 1×23 + 0×22 + 1×21 + 1×20
// .
// 8 + 0 + 2 + 1 = 11


#include <iostream>
#include <cmath>
using namespace std;

void menu() { // exibição do menu
    cout << "1. Converter de Decimal para Binario" << endl;
    cout << "2. Converter de Binario para Decimal" << endl;
    cout << "3. Sair" << endl;
    cout << "Digite opção desejada: " << endl;
}

void dec2bin(int numero) { // recebe um inteiro na base decimal e retorna seu correspondente em binario
    while (numero > 0) {
        if ((numero % 2) == 0) {
            numero = numero / 2;
            cout << 0;
        } else {
            numero = numero / 2;
            numero = floor(numero);
            cout << 1;
        }
    }
    cout << " " << endl;
}

int bin2dec(int numero) { // recebe um inteiro na base binaria e retorna seu correspondente em decimal
    int dec = 0;
    int base = 1;

    while (numero > 0) {
        int ult = numero % 10;
        numero = numero / 10;
        dec = dec + (ult * base);
        base = base * 2;
    }

    return dec;
}

int main() {
    int num, opcao;
    opcao = 0;
    menu();
    cin >> opcao;

    while (opcao != 3) {
        if (opcao == 1) {
            cout << "Informe um numero em base decimal:" << endl;
            cin >> num;
            cout << "O seu correspondente em binario eh : " << endl;
            dec2bin(num);

            menu();
            cin >> opcao;
        } else if (opcao == 2) {
            cout << "Informe um numero em binario:" << endl;
            cin >> num;
            cout << "O seu correspondente em decimal eh: " << bin2dec(num) << endl;;

            menu();
            cin >> opcao;
        } else {
            cout << "Opcao incorreta! Tente novamente." << endl;
            menu();
            cin >> opcao;
        }               
    }
    return 0;
}