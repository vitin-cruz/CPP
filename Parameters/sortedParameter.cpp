// 03. FUP com uma função que recebe três parâmetros (a, b e c informados pelo usuário) e devolve o menor
// deles em a, o maior em c, e o valor do meio em b. Caso sejam passados valores iguais, a ordem não importa.
// No final, o programa deve mostrar os valores ordenados 
#include <iostream>
using namespace std;

void ordem(float &a, float &b, float &c) {
    float menor, meio, maior;
    float ref = 0;
    if (a > b) {
        ref = b;
        b = a;
        a = ref;
    }

    if (b > c) {
        ref = c;
        c = b;
        b = ref;
    }

    if (a > b) {
        ref = b;
        b = a;
        a = ref;
    }
}

int main(){
    
    float x, y, z, referencia;
    cin >> x >> y >> z;
    ordem(x,y,z);
    cout << x << ", "  << y << ", " << z << endl;
    

    return 0;
}
