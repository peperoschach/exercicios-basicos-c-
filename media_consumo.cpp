// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Escreva um algoritmo para calcular o consumo médio de um automóvel (medido em
Km/l), dado que são conhecidos a distância total percorrida e o volume de combustível
consumido para percorrê-la (medido em litros).
*/

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {

    double km, combus;
    cout << "Insira a distância total percorrida: " << endl;
    cin >> km;
    cout << "Insira o volume de combustivel consumido: " << endl;
    cin >> combus;
    cout << "Seu carro fez uma média de " << km/combus << " Km/l !!" << endl;



    return 0;

}
