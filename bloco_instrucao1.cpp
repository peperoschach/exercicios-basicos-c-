// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Um bloco de instrução, é uma estrutura que está delimitada por chaves, ou seja, todo
o código que estiver contido entre os caracteres { } constituem um bloco de instrução.
Utilizamos blocos de instrução em C++ para agrupar nosso código - para definir, demarcar,
quais instruções devem ser executadas naquele bloco.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {

    int num = 10;
    char c = 's';

    {
        cout << "Estamos dentro de um outro bloco de instrução!" << endl;
        double dinheiro = 5.98;

        cout << "O valor da variável 'dinheiro' é: " << dinheiro << endl;
    }
    cout << "Informe um número: " << endl;
    cin >> num;
    if (num==50){
        cout << "Estou no bloco de instrução IF!!" << endl;
    }else {
        cout << "Estou no bloco de instrução ELSE !!" << endl;
    }


    return 0;

}
