// 16. Vegeta e Nappa, dois Saiyajins, estão vindo para o planeta Terra em busca das Esferas do Dragão (artefatos que
// realizam desejos) e destruirão tudo e todos em seu caminho para consegui-las. Os guerreiros Z, sabendo da iminente
// invasão, treinaram duro e aumentaram seu poder de luta, elevando seu chacra (ki) o máximo que conseguiram,
// chegando nos seguintes valores:
// Guerreiro Z ki
// (antes do treinamento)

// ki
// (depois do treinamento)
// Goku 924 10000
// Kuririn 206 1750
// Piccolo 408 3500
// Gohan 101 981
// Tenshinhan 250 1830
// Chaos 145 610
// Yamcha 177 1480
// Yajirobe 4 4
// FUP com arrays para armazenar:
// i. o nome dos guerreiros Z;
// ii. o ki antigo de cada lutador;
// iii. o ki novo de cada lutador; e
// iv. o percentual de aumento de ki de cada lutador após o treinamento.
// Depois, mostre na página:
// i. o guerreiro com maior percentual de aumento de ki;
// ii. os lutadores com ki (depois do treinamento) acima da média de ki;
// iii. o lutador mais fracote.
// Use o tipo de dado string para declarar uma variável/vetor que guarde informações em texto; e atribua valores entre
// aspas duplas para a variável/vetor. Ex.: string guerreiros[8]; guerreiros[0] = "Goku";

#include <iostream>
using namespace std;

int main() {
    string guerreiros[8];
    int kiAntigo[8], kiNovo[8];
    float percentualAumento[8];
    
    guerreiros[0] = "Goku";
    guerreiros[1] = "Kuririn";
    guerreiros[2] = "Piccolo";
    guerreiros[3] = "Gohan";
    guerreiros[4] = "Tenshinhan";
    guerreiros[5] = "Chaos";
    guerreiros[6] = "Yamcha";
    guerreiros[7] = "Yajirobe";

    kiAntigo[0] = 924;
    kiAntigo[1] = 206;
    kiAntigo[2] = 408;
    kiAntigo[3] = 101;
    kiAntigo[4] = 250;
    kiAntigo[5] = 145;
    kiAntigo[6] = 177;
    kiAntigo[7] = 4;

    kiNovo[0] = 10000;
    kiNovo[1] = 1750;
    kiNovo[2] = 3500;
    kiNovo[3] = 981;
    kiNovo[4] = 1830;
    kiNovo[5] = 610;
    kiNovo[6] = 1480;
    kiNovo[7] = 4;

    for (int i = 0; i < 8; i++) {
        percentualAumento[i] = ((float)kiNovo[i]/kiAntigo[i]) * 100 - 100;
        cout << "O percentual de aumento de ki do " << guerreiros[i] << " eh: " << percentualAumento[i] << "%" << endl;
    }

    return 0;
}