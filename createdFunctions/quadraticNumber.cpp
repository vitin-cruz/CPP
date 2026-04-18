//3. FUP com uma função criada que receba um número qualquer vindo do usuário e retorne o quadrado deste número.

#include <iostream>
using namespace std;

int quadrado(int a) {
	a = a * a;
	
	return a;
}

int main(){
	
	int x;
	cout << "Informe um numero: " << endl;
	cin >> x;
	
	cout << "O quadrado de " << x << " eh: " << quadrado(x) << endl; 




	return 0;
}
