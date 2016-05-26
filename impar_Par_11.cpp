// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Faça um programa que leia um número e verifique se ele é par ou ímpar e mostre ao
usuário o resultado.
*/

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {

    int num, resto;

    cout << "Por favor digite um número: " << endl;
    cin >> num;
    resto = num % 2;

    if(resto = 0)
        cout << "O número " << num << " é par !!" << endl;
    else
        cout << "O número " << num << " é impar !!" << endl;


    return 0;

}
