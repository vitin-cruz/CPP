// 04. FUP com uma função que recebe o salário de um colaborador
// (informado pelo usuário) e o reajusta segundo o critério abaixo (baseado no
// salário atual). Mostre o salário antes do reajuste e o novo salário após o
// aumento.

// Salário Reajuste
// Salário <= R$ 1000,00 Aumento de 20%
// R$ 1000,00 < Salário <= R$ 2000,00 Aumento de 15%
// R$ 2000,00 < Salário <= R$ 3000,00 Aumento de 10%
// Salário > R$ 3000,00 Aumento de 05%

#include <iostream>
using namespace std;

float reajuste(float salario) {
    if (salario <= 1000) {
        salario = (salario * 0.20) + salario;
    } else if (salario > 1000 && salario <= 2000) {
        salario = (salario * 0.15) + salario;
    } else if (salario > 2000 && salario <= 3000) {
        salario = (salario * 0.10) + salario;
    } else {
        salario = (salario * 0.05) + salario;
    }

    return salario;
}

int main(){
    float salario;
    cout << "Informe um salario em reais: " << endl;
    cin >> salario;
    cout << "Salario antes do reajuste: " << salario << "R$" << endl;
    cout << "Salario depois do reajuste: " << reajuste(salario) << "R$" << endl;
}