#include <iostream>
using namespace std;

int main(){
    /* 
    saber qual a quantidade máxima de contêineres que podem ser colocados no navio e
    sua função é determinar quantos contêineres podem ser carregados no navio respeitando as restrições abaixo.
    
    Todos os contêineres da IFPR são idênticos, medindo A metros de largura, B metros de comprimento e C metros de
    altura. Um navio porta-contêineres pode ser visto como um retângulo horizontal de X metros de largura e Y metros de
    comprimento, sobre o qual os contêineres são colocados. Nenhuma parte de contêiner pode ficar para fora do navio.
    Além disso, para possibilitar a travessia de pontes, a altura máxima da carga no navio não pode ultrapassar Z metros.
    Devido a limitações do guindaste utilizado, os contêineres só podem ser carregados alinhados com o navio. Ou seja, os
    contêineres só podem ser colocados sobre o navio de tal forma que a largura e o comprimento do contêiner estejam
    paralelos à largura e ao comprimento do navio, respectivamente.
    
    
    
    FUP que dada uma determinada entrada contendo as dimensões dos contêineres e do navio exiba a quantidade
máxima de contêineres que o navio consegue transportar.
    
    */


    float larguraPcontainer, comprimentoPcontainer, larguraContainer, comprimentoContainer, alturaContainer, areaNavio, areaContainer, areaTotal;
    int qtdContainer;
    // Nenhuma parte de contêiner pode ficar para fora do navio.
    // contêineres só podem ser colocados sobre o navio de tal forma que a largura e o comprimento do contêiner estejam
    // paralelos à largura e ao comprimento do navio, respectivamente.

    cout << "Qual a largura do Navio Porta-Containeres em metros?" << endl;
    cin >> larguraPcontainer;
    cout << "Qual o ccomprimento do Navio Porta-Containeres em metros?" << endl;
    cin >> comprimentoPcontainer;
    areaNavio = larguraPcontainer / comprimentoPcontainer;
    cout << "Quantos containeres deve ter?" << endl;
    cin >> qtdContainer;
}