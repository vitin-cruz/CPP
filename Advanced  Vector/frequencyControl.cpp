// 11. Há tempos um professor passou um filme para os alunos assistirem. Durante este filme, ele passou uma lista de
// presença para verificar a presença dos alunos, onde cada aluno deveria inserir apenas sua matrícula. Alguns alunos,
// contudo, como possuem amigos que fogem da aula, decidiram ser camaradas e inseriram a matrícula de seus amigos
// ausentes. O problema é que muitos alunos são amigos de alunos que fogem da aula e algumas matrículas acabaram
// sendo repetidamente inseridas na lista de presença. Além de tudo, alguns dos alunos que se esperava que não
// estivessem na aula de fato estavam! O professor, ao notar que a lista de presença continha alguns números repetidos,
// decidiu dar um voto de confiança e dar presença a todos os alunos cujas matrículas estavam na lista. Como eram
// muitos alunos na sala e muitos números com repetição, ele está com problemas para determinar o total de alunos
// que receberão presença na aula.
// FUP que receba na primeira linha da entrada um número inteiro N, que informa a quantidade de matrículas que
// apareceram na lista de presença. Depois, cada uma das N linhas seguintes da entrada contém uma matrícula que foi
// inserida na lista de presença. Ao final, mostre única linha com o número de alunos que receberão presença.
// Exemplo de entrada/saída:
// (Ex.1)
// 3 <ENTER>
// 2 <ENTER>
// 3 <ENTER>
// 1 <ENTER>
// 3

// (Ex.2)
// 7 <ENTER>
// 0 <ENTER>
// 5 <ENTER>
// 12 <ENTER>
// 41 <ENTER>
// 7 <ENTER>
// 5 <ENTER>
// 41 <ENTER>
// 5

#include <iostream>
using namespace std;

int main() {
    int n, i, j, cont;
    cout << "Informe a quantidade de matriculas que apareceram na lista de presenca: ";
    cin >> n;
    int vetor[n]; 
    
    i = 0;
    cout << "Informe as matriculas: " << endl;
    while (i < n) {
        cin >> vetor[i];
        i++;
    }

    cont = 0;
    for (i = 0; i < n; i++) {
        int repetido = 0;
        for (j = 0; j < i; j++) {
            if (vetor[i] == vetor[j]) {
                repetido = 1;
            }
        }

        if (repetido == 0) {
            cont++;
        }
    }

    cout << "O numero de alunos que receberao presenca eh: " << cont << endl;

    return 0;
}