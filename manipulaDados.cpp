// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*===========================================================
*Programa de introduão a Stream
*Stream é uma sequencia de dados
*Tipos de Stream:
*Stream de texto : Stream constituído por caracteres ASCII(texto)
*Steam binários : Stream de bytes "puros"
*A biblioteca <iostream.h> --> Biblioteca que contem as ferramentas para a manipulação de entrada
*e saída de dados do C++ . PS.: a biblioteca <iostream.h> é uma versão evoluída da biblioteca
*<stdio.h> da linguagem C.
*============================================================*/

#include<iostream>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int main() {

    cout << "Por favor informe um número: " << endl;
    int num1 = 0;
    cin >> num1;

    cout << "Por favor digite mais um número: " << endl;
    int num2 = 0;
    cin >> num2;

    cout << "A soma dos dois números é: " << num1+num2 << endl;





    return 0;

}
