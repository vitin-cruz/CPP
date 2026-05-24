// a) acessar os elementos da ultima coluna em todas as linhas da matriz;
#include <iostream>
using namespace std;

int main() {
    int n, m, i, j;
    cin >> n;
    cin >> m;
    int matriz[n][m];
    
    for (i = 0; i < n; i++) {
        cout << matriz[i][m - 1] << endl;
    }

    return 0;
}

// b) acessar os elementos da diagonal principal

#include <iostream>
using namespace std;

int main() {
    int n, m, i;
    cin >> n;
    cin >> m;
    int matriz[n][m];
    
    for (i = 0; i < n && i < m; i++) {
        cout << matriz[i][i] << endl;
    }

    return 0;
}

// c) acessar o elemento central da matriz

#include <iostream>
using namespace std;

int main() {
    int n, m, i, j;
    cin >> n;
    cin >> m;
    int matriz[n][m];
    
    cout << matriz[n / 2][m / 2] << endl;

    return 0;
}

// d) acessar os elementos alternados na primeira e na proxima linha, e assim sucessivamente pulando de dois em dois

#include <iostream>
using namespace std;

int main() {
    int n, m, j;
    cin >> n;
    cin >> m;
    int matriz[n][m];

    for (j = 0; j < m; j += 2) {
        cout << matriz[0][j] << " ";
    }
    cout << endl;
    for (j = 1; j < m; j += 2) {
        cout << matriz[n - 1][j] << " ";
    }
    cout << endl;

    return 0;
}


