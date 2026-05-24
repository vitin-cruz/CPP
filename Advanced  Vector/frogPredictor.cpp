// 17. Berenice Cururu do Córrego, apelidada de BCC pelos familiares e amigos, passou as férias de janeiro de 2026 no
// sítio de seus avós. Durante sua estadia, uma das atividades prediletas da BCC era nadar no rio que havia no fundo da
// casa onde morava. Uma das características do rio que mais impressionava BCC era um belo caminho, feito
// inteiramente com pedras brancas. Há muito tempo, o avô de BCC notara que os habitantes do sítio atravessavam o rio
// com grande frequência e, por isso, construiu um caminho no rio com pedras posicionadas em linha reta; ao fazê-lo,
// tomou muito cuidado para que o espaçamento das pedras fosse de exatamente um metro.
// Hoje em dia, a única utilidade do caminho é servir de diversão para os sapos que vivem no rio, que pulam de uma
// pedra a outra agitadamente. Certo dia, enquanto descansava e nadava nas águas, BCC assistiu atentamente às
// acrobacias dos bichos e notou que cada sapo sempre pulava (zero, uma ou mais vezes) uma quantidade fixa de
// metros.
// BCC, que é da sua família, resolveu desafiar-te com o seguinte problema: Dado o número de pedras no rio, o número
// de sapos, a pedra inicial sobre a qual cada sapo está (cada pedra é identificada por sua posição na sequência de
// pedras) e a distância que cada sapo pula, determinar as posições onde pode existir um sapo depois que BCC chega no
// rio.
// FUP que dada uma determinada entrada contendo (i) o número de pedras no rio, (ii) o número de sapos, (iii) a posição
// inicial de cada sapo e (iv) a distância fixa de pulo de cada sapo, mostre a possibilidade ou não de ter um sapo em cada
// pedra. Para as pedras onde pode ter um sapo, imprima 1; para as pedras que com certeza não terão sapos, imprima 0.
// Exemplo de entrada/saída:
// Informe o número de pedras no rio:
// 5 <ENTER>
// Informe o número de sapos:
// 2 <ENTER>
// Informe a posição inicial e a distância
// de pulo de cada sapo (um sapo por linha):
// 3 2 <ENTER>
// 4 4 <ENTER>
// Podem ter sapos nas pedras:
// 1 0 1 1 1
// /*
// Explicação da Entrada e Saída do programa:
// Com os dados acima, existem 2 afirmações:
// > De início existem 2 sapos:
// > o primeiro na 3a pedra, e pula 2 metros
// > o segundo na 4a pedra, e pula 4 metros.
// > Os sapos podem ir para frente e para trás
// > o primeiro sapo pode ir para a 5a ou para a 1a pedra
// > o segundo não pode pular para pedra alguma.
// Com isso, poderíamos ter sapos nas pedras 1, 3, 4, e 5.
// A saída do programa, nesse caso, deveria ser: 1 0 1 1 1
// */

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Informe o numero de pedras no rio: ";
    cin >> n;
    cout << "Informe o numero de sapos: ";
    cin >> m;

    int posInicial[m];
    int distPulo[m];

    for (int i = 0; i < m; i++) {
        cout << "Informe a posicao inicial e a distancia de pulo do sapo " << i + 1 << ": ";
        cin >> posInicial[i] >> distPulo[i];
    }
    int pedras[n];
    for (int i = 0; i < n; i++) {
        pedras[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        int posicao = posInicial[i];
        int distancia = distPulo[i];
        
        while (posicao >= 1 && posicao <= n) {
            pedras[posicao - 1] = 1; 
            posicao += distancia;
        }


        posicao = posInicial[i] - distancia; 
        while (posicao >= 1 && posicao <= n) {
            pedras[posicao - 1] = 1;
            posicao -= distancia;
        }
    }

    cout << "Podem ter sapos nas pedras: " << endl;
    for (int i = 0; i < n; i++) {
        cout << pedras[i] << " ";
    }
    cout << endl;

    return 0;
}