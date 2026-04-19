// 2. Considere o seguinte código e escreva qual será a saída em tela produzida pela execução.

#include <iostream>
#include <cmath>
using namespace std;
int main() {
float a, b;
a = 4.10;
b = 3.90;
cout << a + b << endl; // 8
cout << int(a) + b << endl; // 7.90
cout << a + int(b) << endl; // 7.10
cout << int(a) + int(b) << endl; // 7
cout << ceil(a) + b << endl; // 8.90
cout << a + ceil(b) << endl; // 8.10
cout << ceil(a) + ceil(b) << endl; // 9
cout << floor(a) + ceil(b) << endl; // 8
cout << ceil(a) + floor(b) << endl; // 8
return 0;
}



