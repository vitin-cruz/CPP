#include <iostream>
using namespace std;

int main(){
    int n;

    for ( n = 1; n <= 100000; n++){ // dura 10.63s
        cout << n << endl;
    }
    cout << "Acabou!" << endl;

    return 0;
    
    for ( n = 1; n <= 100000; n++){ // dura 6s
    }
    cout << "Acabou!" << endl;

    return 0;
}