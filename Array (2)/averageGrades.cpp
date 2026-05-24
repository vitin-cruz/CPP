// 1. FUP que leia e armazene 4 notas de 5 alunos em uma matriz 5x5, e calcule e armazene a média de cada aluno na
// última coluna. Ao final, imprima as médias de todos os alunos e uma mensagem para cada aluno informando se ele
// está aprovado ou não (aprovado se média maior ou igual a 7.0).

#include <iostream>
using namespace std;

int main() {
    float notas[5][5]; 
    int i, j;
    
    cout << "Informe as notas dos alunos: " << endl;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            cin >> notas[i][j];
        }
    }

    for (i = 0; i < 5; i++) {
        float soma = 0;
        for (j = 0; j < 4; j++) {
            soma = soma + notas[i][j];
        }
        notas[i][4] = soma / 4; 
    }

    cout << "\nAs medias dos alunos sao: " << endl;
    for (i = 0; i < 5; i++) {
        cout << "Aluno " << i + 1 << ": " << notas[i][4] << " ";
        
        if (notas[i][4] >= 7.0) {
            cout << "Aprovado!" << endl;
        } else {
            cout << "Reprovado!" << endl;
        }
    }

    return 0;
}