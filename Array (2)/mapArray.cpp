// FUP que receba uma matriz representando o mapa de IFPR e determine a extensão da costa iefepeérreana. A primeira
// linha da entrada contém dois inteiros 𝑀 e 𝑁 indicando, respectivamente, o número de linhas e o número de colunas
// do mapa. Cada uma das 𝑀 linhas seguintes contém 𝑁 caracteres: um caractere ‘.’ indica que aquele quadrado do
// território é ocupado por água; um caractere ‘#’ indica que aquele quadrado do território é ocupado por terra
// (considere que todo o espaço fora da área do mapa é ocupado por água). Ao final, o programa deve mostrar uma
// única linha contendo um único inteiro, indicando quantos quadrados do território fazem parte da costa da
// iefepeérreana.
// Dicas:
// A matriz que representa o mapa pode ser declarada com o tipo char → char mapa[linhas][colunas];
// Para testar se um conteúdo em char, faça de maneira similar a números → if (mapa[x][y] == '#') {

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    char mapa[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mapa[i][j];
        }
    }

    int contadorCosta = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            
            if (mapa[i][j] == '#') {
                bool ehCosta = false;
                if (i == 0 || mapa[i - 1][j] == '.') {
                    ehCosta = true;
                }
                else if (i == m - 1 || mapa[i + 1][j] == '.') {
                    ehCosta = true;
                }
                else if (j == 0 || mapa[i][j - 1] == '.') {
                    ehCosta = true;
                }
                else if (j == n - 1 || mapa[i][j + 1] == '.') {
                    ehCosta = true;
                }

                if (ehCosta) {
                    contadorCosta++;
                }
            }
        }
    }

    cout << "Costa: " << contadorCosta << endl;

    return 0;
}