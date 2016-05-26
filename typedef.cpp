// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
// Typedef.cpp
// Ilustra o uso do typedef

#include<iostream>
#include<stddef.h>
using namespace std;
using std::cin;
using std::cout;
using std::endl;
// Cria um sinônimo usando o typedef
// typedef usingned short int USHORT

int main(){

        // Declara duas variaveis,
        // inicializa uma.
        typedef int larg = 7, compr;
        // Atribui valor
        compr = 8;
        // Declara e inicializa mais uma variavel
        typedef int area = larg * compr;
        // Exibe valores
        cout << "*** Valores Finais ***\n";
        cout << "Largura = " << larg << "\n";
        cout << "Comprimento = " << compr << "\n";
        cout << "Area = " << area << "\n";

        return 0;

}
