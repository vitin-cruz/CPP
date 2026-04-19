// FUP com uma função que implementa a função “Maior” da página 1.

#include <iostream>
using namespace std;

int maior(int a, int b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

int main(){
	
	int x, y;
	cout << "Informe A: " << endl;
	cin >> x;
	cout << "Informe B : " << endl;
	cin >> y;
	
	cout << "O maior numero entre " << x << " e " << y << " eh: " << maior(x,y) << endl; 




	return 0;
}
