/*
4. Refaça o exercício 10 da lista 11 (copiado a seguir) utilizando uma função menu() para exibir o menu de
opções.
    10. FUP que mostre um menu de opções como exposto a seguir, receba uma opção e os dados necessários para
    executar cada operação, e mostre o resultado da operação. Depois disso, mostrar novamente o menu. O
    programa deve repetir o processo até que a opção para sair seja recebida.
    Menu de opções:
    1. Somar dois números.
    2. Subtrair dois números
    3. Multiplicar dois números
    4. Dividir dois números
    5. Sair
    Digite a opção desejada:
*/

#include <iostream>
using namespace std;

void menu() {
    cout << "1. Somar dois numeros" << endl;
    cout << "2. Subtrair dois numeros" << endl;
    cout << "3. Multiplicar dois numeros" << endl;
    cout << "4. Dividir dois numeros" << endl;
    cout << "5. Sair" << endl;
    cout << "Digite opção desejada: " << endl;
}

int main() {
    float a, b, opcao;
    menu();
    cin >> opcao;

    while (opcao != 5) {
        if (opcao == 1) {
            cout << "Informe dois numeros:" << endl;
            cin >> a;
            cin >> b;
            cout << "O resultado eh: " << a + b << endl;

            menu();
            cin >> opcao;
        } else if (opcao == 2) {
            cout << "Informe dois numeros:" << endl;
            cin >> a;
            cin >> b;
            cout << "O resultado eh: " << a - b << endl;

            menu();
            cin >> opcao;
        } else if (opcao == 3) {
            cout << "Informe dois numeros:" << endl;
            cin >> a;
            cin >> b;
            cout << "O resultado eh: " << a * b << endl;

            menu();
            cin >> opcao;
        } else if (opcao == 4) {
            cout << "Informe dois numeros:" << endl;
            cin >> a;
            cin >> b;
            cout << "O resultado eh: " << a / b << endl;

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