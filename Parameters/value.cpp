#include <iostream>
using namespace std;

float ajuste(float preco, float percentual) {
    float taxa = percentual / 100;
    preco = (preco*taxa) + preco;
}

int main(){
    float a, b;

    cout << "Informe o preco de uma mercadoria: " << endl;
    cin >> a;
    cout << "Informe a porcentagem de um ajuste: " << endl;;
    cin >> b;

    
    cout << "O novo preco eh: " << ajuste(a,b) << endl;;

    return 0;
}