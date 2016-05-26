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

    int i = 0;
    cout << "Digite um número: " << endl;
    cin >> i;
    if(i==1){
        while(i<10){
            i++;
            cout << "variavel i na instrução WHILE!" << endl;
        }
    }else {
        cout << i*i << endl;


    }

    return 0;

}
