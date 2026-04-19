// 5. FUP que imprima as tabuadas do 1 ao 10.

#include <iostream>
using namespace std;

int main(){

    int n, p;
     
    
    for (p=1; p < n; p++) {
        for (n = 1; n <= 10; n++) {
            cout << n << "*" << p << "=" << n * p << endl;
        }
    }
    
    return 0;
}
