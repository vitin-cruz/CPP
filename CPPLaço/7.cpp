#include <iostream>
using namespace std;

int main(){

    float depositoInicial, depositoMensal, taxaMensal, porcentoTaxa;
    int meses;

    cout << "Qual seu deposito inicial?" << endl;
    cin >> depositoInicial;
    cout << "Qual seu deposito mensal?" << endl;
    cin >> depositoMensal;
    cout << "Qual a taxa mensal (em porcentagem)?" << endl;
    cin >> taxaMensal;
    cout << "Por quantos meses você aplicará?" << endl;
    cin >> meses;
    porcentoTaxa = taxaMensal / 100;
  

    for (int n = 0; n <= meses; n++) {
        depositoInicial =  (depositoInicial * porcentoTaxa) + depositoMensal + depositoInicial;
        cout << depositoInicial << endl;
    }

    return 0;
}   