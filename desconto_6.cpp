// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Em uma loja será feita uma liquidação. Faça um programa que leia o valor em reais de
um produto e o valor desejado em % do desconto. Ao final, o programa deverá informar
o preço final do produto (com o desconto).
*/

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#include<stdlib.h>

int main() {

    double valor, desc, tdesc;

    cout << "Por favor digite o valor da compra R$ " << endl;
    cin >> valor;

    cout << "Digite a porcentagem do desconto " << endl;
    cin >> desc;
    desc /= 100.0;
    tdesc =  valor - (desc * valor);

    cout << "Valor da compra com o desconto R$ " << tdesc <<  endl;


    return 0;

}
