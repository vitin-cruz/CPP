// 4. FUP que mostre uma tabela com os valores de x e x2
// para todos os valores de x, tais que 1 <= x <= 30

#include <iostream>
using namespace std;

int main(){

    int x, y;
    x = 0;
    y = 0;

    while (x<30) {
        x = x + 1;
       
        y = x * x;
        cout << "X:" << x <<" X²:" << y << endl;
    }

    return 0;
}