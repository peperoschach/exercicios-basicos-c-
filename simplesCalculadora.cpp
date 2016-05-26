// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*==============================================================================
*===============================================================================
*========================SIMPLES=CALCULADORA====================================
*===============================================================================
*===============================================================================*/

#include<iostream>

using namespace std;

int main() {

    int soma, sub, multi;
    float num1, num2,div;

    cout << "======================================================" << endl;
    cout << "======================================================" << endl;
    cout << "======Seja bem vindo a minha primeira calculadora=====" << endl;
    cout << "======================================================" << endl;
    cout << "======================================================" << endl;
    cout << endl;
    cout << "Digite o primeiro número: " << endl;
    cin >> num1;
    cout << "Digite o segundo número: " << endl;
    cin >> num2;

    soma  = num1 + num2;
    sub   = num1 - num2;
    multi = num1 * num2;
    div   = num1 / num2;

    cout << endl;
    cout << "=======================================================" << endl;
    cout << endl;
    cout << "O resultado da soma é: " << soma << endl;
    cout << "o resultado da subtração é: " << sub << endl;
    cout << "O resultado da multiplicação é: " << multi << endl;
    cout << "O resultado da divisão é: " << div << endl;
    cout << endl;
    cout << "=======================================================" << endl;
    cout << endl;
    cout << "Resultados em hexadecimal"<<endl;
    cout << endl;
    cout << "O resultado da soma é: " << hex <<soma << endl;
    cout << "o resultado da subtração é: " << hex << sub << endl;
    cout << "O resultado da multiplicação é: " << hex << multi << endl;
    cout << "O resultado da divisão é: " << hex <<div << endl;

    return 0;

}
