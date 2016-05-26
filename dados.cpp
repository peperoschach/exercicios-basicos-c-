// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*=================================================================
*
*
*=================================================================*/

#include<iostream>

using namespace std;

int main() {

    int varInt = 100;
    char c = 'r';
    double pFlutuante = 5.99;

    //imprimindo os valores das variaveis
    cout << "O valor da variável varInt é: " << varInt << endl;
    cout << "O valor da variável c é: " << c << endl;
    cout << "O valor da variável pFlutuante é: " << pFlutuante << endl;
    cout << endl;

    //imprimindo a quantidade alocada na mémoria de cada variável
    cout << "Quantidade de memória da varInt = " << sizeof(varInt) << " Bytes" << endl;
    cout << "Quantidade de memória de c = " << sizeof(c) << " Bytes" << endl;
    cout << "quantidade de memória de pFlutuante = " << sizeof(pFlutuante) << " Bytes" << endl;


    return 0;

}
