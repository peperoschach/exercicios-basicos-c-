// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Utilizando comandos if, operadores relacionais e operadores de igualdade*/

#include<iostream>

using std::cout;    // o programa usa cout
using std::cin;     // o programa usa cin
using std::endl;    // o programa usa endl

int main()
{
    int num1, num2;

    cout << "Digite dois inteiros e lhe direi quais os relacionamentos\n"
         << " que eles satifazem: ";
    cin >> num1 >> num2; // lê dois númeors inteiros

    if (num1 == num2)
        cout << num1 << " é igual a " << num2 << endl;
    if (num1 != num2)
        cout << num1 << " é diferente de " << num2 << endl;
    if (num1 < num2)
        cout << num1 << " é menor que " << num2 << endl;
    if (num1 > num2)
        cout << num1 << " é maior que " << num2 << endl;
    if (num1 <= num2)
        cout << num1 << " é menor que ou igual a " << num2 << endl;
    if (num1 >= num2)
        cout << num1 << " é maior que ou igual a " << num2 << endl;


    return 0;       //indixa que o programa terinou com sucesso

}
