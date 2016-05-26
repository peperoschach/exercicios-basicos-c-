// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Faça um programa que leia a temperatura em Celsius e apresente ao usuário o valor da
conversão para Fahrenheit.
*/

#include<iostream>
using namespace std;

using std::cout;
using std::cin;
using std::endl;

int main () {

    int c = 0;
    cout << "Por favor digite uma temperatura em Celsius: " << endl;
    cin >> c;
    cout << "A temperatura  " << c << " ºCelsius equivale a " << c * 33.8 << " ºFahrenheit."<< endl;

    return 0;

}
