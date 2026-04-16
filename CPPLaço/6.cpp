#include <iostream>
using namespace std;

int main(){

    int x, n, y;

    cout << "Informe X:" << endl;
    cin >> x;
    cout <<  "Informe N: " << endl;
    cin >> n;
    y = 0;

    while (y < n) {
        y = y + x;
        cout << y << endl;
    }



    return 0;
}   