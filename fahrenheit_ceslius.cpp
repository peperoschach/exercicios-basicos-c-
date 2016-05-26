// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Faça um programa que leia a temperatura em Fahrenheit e apresente ao usuário o valor
da conversão para Celsius.
*/

#include<iostream>
using namespace std;

using std::cout;
using std::cin;
using std::endl;

int main () {

    int f = 0;
    cout << "Por favor digite uma temperatura em Fahrenheit: " << endl;
    cin >> f;
    cout << "A temperatura  " << f << " ºFarenheit equivale a " << f * -17.7778 << " ºCelsius."<< endl;

    return 0;

}
