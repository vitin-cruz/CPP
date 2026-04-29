#include <iostream>

using namespace std;


int somaDigitos(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + somaDigitos(n / 10);
}

int main() {
    int num;

    cout << "Informe um número: ";
    cin >> num;

    if (num < 0) {
        num = num - 1;
    }

    cout << "Soma dos algarismos: " << somaDigitos(num) << endl;

    return 0;
}