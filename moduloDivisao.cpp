// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*
*Módulo da divisão ou resto da divisão
*
*
*/

#include<iostream>

using namespace std;

int main() {

    int num1, num2;

    cout << "Digite um numero: " << endl;
    cin >> num1;
    cout << "Digite outro numero: " << endl;
    cin >> num2;

    cout << "Divisão = " << num1 / num2 << endl;
    cout << "Resto = " << num1 % num2 << endl;

    return 0;

}
