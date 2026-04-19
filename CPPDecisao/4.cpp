#include <iostream>
using namespace std;

/*FUP que receba três valores (d, m, a) representando um dia, um mês e um ano e determine se a data é válida.*/

int main() {
    int d,m,a;
    cout << "Digite um ano após o ano 0 no calendário greco-romano: " << endl;
    cin >> a;

    // caso seja bissexto
    if ((a % 400 == 0) or ((a % 4 == 0) and (a % 100 !=0))) {
        if (a <= 0) {
            cout << "O ano escolhido é incorreto!" << endl;
        } else {
            cout << "Digite um mês entre 01 e 12" << endl;
            cin >> m;
                if ((m == 1) or (m == 3) or (m == 5) or (m == 7) or (m == 8) or (m == 10) or (m == 12)) {
                    cout << "Escolha um dia de 01 a 31:" << endl;
                    cin >> d;
                        if ((d < 01) or (d > 31)) {
                            cout << "Dia incorreto!";
                        } else {
                            cout << "A sua data é: " << d << "/" << m << "/" << a;
                        }
                } else if ((m == 4) or (m == 6) or (m == 9) or (m == 11)) {
                    cout << "Escolha um dia de 01 a 30:" << endl;
                    cin >> d;
                        if ((d < 1) or (d > 30)) {
                            cout << "Dia incorreto!";
                        } else {
                            cout << "A sua data é: " << d << "/" << m << "/" << a;
                        }
                } else if (m == 2)
                {
                    cout << "Escolha um dia de 01 a 29:" << endl;
                    cin >> d;
                        if ((d < 1) or (d > 29)) {
                            cout << "Dia incorreto!";
                        } else {
                            cout << "A sua data é: " << d << "/" << m << "/" << a;
                        }
                } else {
                    cout << "Mês incorreto!";
                }
                
                // 04. FUP que receba três valores (d, m, a) representando um dia, um mês e um ano e determine se a data é válida.
                
                
        }
    } // o ano não será bissexto
    else { 
            if (a <= 0) {
            cout << "O ano escolhido é incorreto!" << endl;
        } else {
            cout << "Digite um mês entre 01 e 12" << endl;
            cin >> m;
                if ((m == 1) or (m == 3) or (m == 5) or (m == 7) or (m == 8) or (m == 10) or (m == 12)) {
                    cout << "Escolha um dia de 01 a 31:" << endl;
                    cin >> d;
                        if ((d < 1) or (d > 31)) {
                            cout << "Dia incorreto!";
                        } else {
                            cout << "A sua data é: " << d << "/" << m << "/" << a;
                        }
                } else if ((m == 4) or (m == 6) or (m == 9) or (m == 11))
                {
                    cout << "Escolha um dia de 01 a 30:" << endl;
                    cin >> d;
                        if ((d < 1) or (d > 30)) {
                            cout << "Dia incorreto!";
                        } else {
                            cout << "A sua data é: " << d << "/" << m << "/" << a;
                        }
                } else if (m == 2)
                {
                    cout << "Escolha um dia de 01 a 28:" << endl;
                    cin >> d;
                        if ((d < 1) or (d > 28)) {
                            cout << "Dia incorreto!";
                        } else {
                            cout << "A sua data é: " << d << "/" << m << "/" << a;
                        }
                } else {
                    cout << "Mês incorreto!";
                }
                
    } 
    
}
return 0;
}