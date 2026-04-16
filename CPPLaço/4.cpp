#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Informe um número:" << endl;
    cin >> num;

    for (int n = 0; n < num; n++){
        if (n % 2 == 0){
            cout << n << " Par." << endl;
        } else {
            cout << n << " Impar." << endl;
        }
    }

    return 0;
}