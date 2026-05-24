// 3. FUP que leia quatro notas de 5 alunos, calcule e armazene num vetor a média de cada aluno. Ao final, imprima as
// médias de todos os alunos e o número de alunos com média maior ou igual a 7.0.
// Exemplos de entrada/saída:
// Digite as 4 notas do aluno 1: 10 10 10 10 <ENTER>
// Digite as 4 notas do aluno 2: 9 8 9 8 <ENTER>
// Digite as 4 notas do aluno 3: 10 5 10 5 <ENTER>
// Digite as 4 notas do aluno 4: 1 2 3 4 <ENTER>
// Digite as 4 notas do aluno 5: 6 7 8 7 <ENTER>
// Média dos alunos:
// Aluno 1: 10.0
// Aluno 2: 8.5
// Aluno 3: 7.5
// Aluno 4: 2.5
// Aluno 5: 7.0
// Alunos acima da média: 1 2 3 5

#include <iostream>
using namespace std;

int main() {
    float notas[4], media[5];
    int i, j, k;
    float soma;
    
    // receber nota e calcular a media
    for (i = 0; i < 5; i++) {
        cout << "Digite as 4 notas do aluno " << i + 1 << endl;
        for (j = 0; j < 4; j++) {
            cin >> notas[j];
            soma = notas[j] + soma;
        }
        
        k = 0;
        media[k] = soma / 4;
        cout << "Media do aluno " << i + 1 << ": " << media[k] << endl;
        soma = 0;
        k++;
    }
    cout << "Alunos acima da média: ";
    for (k = 0; k < 4; k++) {
        if (media[k] >= 7) {
            cout << k+1 << " ";
        }
    }

    
    return 0; 
}