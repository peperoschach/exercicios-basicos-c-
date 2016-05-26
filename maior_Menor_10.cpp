// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Faça um programa que leia dois números e imprima qual deles é o maior e o menor
ou se são iguais.
*/

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#include<cmath>

int main() {

    int num1, num2;

    cout << "Digite um número: " << endl;
    cin >> num1;
    cout << "Digite outro número: " << endl;
    cin >> num2;

    if (num1 > num2)
        cout << "O número " << num1 << " é maior que o número " << num2 << endl;
    else if (num1 == num2)
        cout << "O número " << num1 << " é igual ao número " << num2 << endl;
    else
        cout << "O número " << num1 << " é menor que o número " << num2 << endl;


    return 0;

}
