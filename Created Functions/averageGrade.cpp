// 04. FUP com uma função que recebe três notas de um aluno (entre 0,00 e 10,00) e calcula e mostra a média deste aluno
// arredondada para cima com precisão de uma casa decimal.

#include <iostream>
#include <cmath>
using namespace std;


int main(){
    float a, b, c, media, mediaArredondada;

        cout << "Informe a primeira nota (0-10):" << endl;
        cin >> a;
        cout << "Informe a segunda nota (0-10):" << endl;
        cin >> b;
        cout << "Informe a terceira nota (0-10):" << endl;
        cin >> c;

    while (((a < 0) || (a > 10)) || ((b < 0) || (b > 10)) || ((c < 0) || (c > 10))) {
        cout << "Uma das notas está incorreta, tente novamente:" << endl;
        cout << "Informe a primeira nota:" << endl;
        cin >> a;
        cout << "Informe a segunda nota:" << endl;
        cin >> b;
        cout << "Informe a terceira nota:" << endl;
        cin >> c;
    }
 
    media = (a+b+c)/3;
    mediaArredondada = ceil(media);

    
    
    cout << "A media eh: " << mediaArredondada << ",0" << endl;


}