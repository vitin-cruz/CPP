// 6. FUP que receba um termo n e gere uma série de Fibonacci (1,1,2,3,5,8,13,21,34,55, . . . ) até tal n-ésimo termo.

#include <iostream>
using namespace std;

int main(){

    int n, fibonnaci, n1, n2;
    cout << "Digite um termo:" << endl;
    cin >> n;
    n1 = 1;
    n2 = 0;

    
    cout << n1 << " ";
    for (int i = 0; i < n; i++) {
     fibonnaci = n1 + n2;
     n2 = n1;
     n1 = fibonnaci;
     cout << fibonnaci << " ";
    }

    return 0;
}

