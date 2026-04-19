/* 05. O alquimista Balthazar Caelestis Corvinal (BCC)
está tentando completar uma receita mágica e criar
um elixir que pode curar qualquer doença. Para isso,
BCC precisa seguir um conjunto de regras baseadas
nas propriedades das substâncias mágicas que possui.
Ingredientes da Poção:
✓ Água Mágica
✓ Pó de Cristal
✓ Essência do Fogo
✓ Semente da Terra
Preparo da Poção:
▪ A quantidade de Água Mágica deve ser pelo menos o dobro da quantidade de Pó de Cristal.
▪ A Essência do Fogo deve ser maior do que a soma de Água Mágica e Pó de Cristal, mas não pode ser mais que
20 unidades.
▪ A quantidade de Semente da Terra deve ser maior que 5, mas menor que a quantidade de Essência do Fogo.
FUP com os ingredientes da poção, verifique o modo de preparo e mostre uma mensagem informando se a poção foi
criada com sucesso ou não.*/

#include <iostream>
using namespace std;

// agua magica => po cristal * 2
// 20 >= essencia fogo > agua magica + po cristal
// essencia fogo > sementeTerra > 5
int main() {
    int aguaMagica, poCristal, essenciaFogo, sementeTerra;

    cout << "Digite a quantidade de Po de Cristal em unidades:" << endl;
    cin >> poCristal;
    cout << "Digite a quantidade de Agua Mágica em unidades:" << endl;
    cin >> aguaMagica;
    cout << "Digite a quantidade de Essencia de Fogo em unidades:" << endl;
    cin >> essenciaFogo;
    cout << "Digite a quantidade de Semente Terra em unidades" << endl;
    cin >> essenciaFogo;

        while ((aguaMagica < poCristal * 2) or ((essenciaFogo > 20) and (essenciaFogo < aguaMagica + poCristal)) or ((sementeTerra <= 5) and (sementeTerra >= essenciaFogo))) {
            cout << "Poção inválida! Digite novamente a quantidade de Po de Cristal em unidades! " << endl;
            cin >> poCristal;
            cout << "Digite novamente a quantidade de Agua Mágica em unidades (deve ser pelo menos o dobro da quantidade de Po de Cristal):" << endl;
            cin >> aguaMagica;
            cout << "Digite a quantidade de Essencia de Fogo em unidades (Maximo 20; Deve ser maior que a quantidade de Agua Magica e Po de Cristal juntas):" << endl;
            cin >> essenciaFogo;
            cout << "Digite a quantidade de Semente Terra em unidades (deve ser maior que 5; deve ser menor que a Essencia de Fogo): " << endl;
            cin >> essenciaFogo;
        }

        cout << "A sua poção foi feita com sucesso!";


    return 0;
}


