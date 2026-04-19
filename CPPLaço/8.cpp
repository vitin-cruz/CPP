#include <iostream>
using namespace std;

int main(){

    float n1, n2, soma;
    

    cout << "Digite o primeiro número:" << endl;
    cin >> n1;
    cout << "Digite o segundo número:" << endl;
    cin >> n2;
    
  

    while ( n1 > 0 and n2 > 0) {
        soma = n1 + n2;
        cout << "A soma de " << n1 << " com " << n2 << " eh " << soma << endl;
        cout << "Digite o primeiro número:" << endl;
        cin >> n1;
        cout << "Digite o segundo número:" << endl;
        cin >> n2;
    }

    return 0;
}   