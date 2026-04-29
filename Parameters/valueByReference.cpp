#include <iostream>
using namespace std;

void ajuste(float &preco, float &percentual) {
    float taxa = percentual / 100;
    preco = (preco*taxa) + preco;
}

int main(){
    float a, b;

    cout << "Informe o preco de uma mercadoria: " << endl;
    cin >> a;
    cout << "Informe a porcentagem de um ajuste: " << endl;;
    cin >> b;

    ajuste(a,b);
    cout << "O novo preco eh: " << a << endl;;

    return 0;
}