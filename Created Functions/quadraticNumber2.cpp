// 02. FUP com uma função nativa que receba um número qualquer vindo do usuário e retorne o quadrado deste número.

#include <iostream>
#include <cmath>
using namespace std;


int main(){
	
	int x;
	cout << "Informe um numero: " << endl;
	cin >> x;
	
	cout << "O quadrado de " << x << " eh: " << pow(x, 2) << endl; 




	return 0;
}
