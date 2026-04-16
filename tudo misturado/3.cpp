// cin valor quantia de dinheiro
// minima de cada celulas

// 1, 2, 5, 10, 20, 50, 100 e 200

#include  <iostream>
using namespace std;


int main() {
    int valor, qtd1, qtd2,qtd3 , qtd4, qtd5, qtd6, qtd7, qtd8, um, dois, cinco, dez, vinte, cinquenta, cem, duzentos;
    cout << "Diga um valor:" << endl;
    cin >> valor;
    um = 1;
    dois = 2;
    cinco = 5;
    dez = 10;
    vinte = 20;
    cinquenta = 50;
    cem = 100;
    duzentos = 200;
    qtd1 = 1;
    qtd2 = 1;
    qtd3 = 1;
    qtd4 = 1;
    qtd5 = 1;
    qtd6 = 1;
    qtd7 = 1;
    qtd8 = 1;
    
    while (um < valor){
        um++;
        qtd1++;
    }

    while (dois < valor){
        dois = dois + 2;
        qtd2++;
    }

    while (cinco < valor){
        cinco = cinco + 5;
        qtd3++;
    }

    while (dez < valor){
        dez = dez + 10;
        qtd4++;
    }

    while (vinte < valor) {
        vinte = vinte + 20;
        qtd5++;
    }

    while (cinquenta < valor) {
        cinquenta = cinquenta + 50;
        qtd6++;
    }

    while (cem < valor) {
        cem = cem + 100;
        qtd7;
    }

    while (duzentos < valor) {
        duzentos = duzentos + 200;
        qtd8;
    }

    cout << "A quantidade mínima de cédulas necessárias de R$1 é: " << qtd1 << endl;
    cout << "A quantidade mínima de cédulas necessárias de R$2 é: " << qtd2 << endl;
    cout << "A quantidade mínima de cédulas necessárias de R$5 é: " << qtd3 << endl;
    cout << "A quantidade mínima de cédulas necessárias de R$10 é: " << qtd4 << endl;
    cout << "A quantidade mínima de cédulas necessárias de R$20 é: " << qtd5 << endl;
    cout << "A quantidade mínima de cédulas necessárias de R$50 é: " << qtd6 << endl;   
    cout << "A quantidade mínima de cédulas necessárias de R$100 é: " << qtd7 << endl;   
    cout << "A quantidade mínima de cédulas necessárias de R$200 é: " << qtd8 << endl;    
    
    return 0;
}