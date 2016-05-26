// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Faça um programa que calcule as raízes da equação do 2o grau e mostre ao usuário o
resultado.
*/

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#include<stdlib.h>
#include<cmath>

int main() {

    // declarando as variaves
    float a, b, c,      // coeficientes
          delta,        // delta
          raiz1, raiz2, // raizes
          sqrtdelta,    // raiz quadrada de delta
          quest;        // variavel que armazena sim ou nao


    cout << "---------------------------------------------" << endl;
    cout << endl;
    cout << "Equação do 2º grau: ax² + bx + cx = 0" << endl;
    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << endl;


    //recebendo os coeficientes
    do{
    cout << "Digite o valor de 'a' : " << endl;
    cin >> a;

    if( a != 0 ){ // checando se a equação é válida
        cout << "Digite o valor de 'b' : " << endl; // recebendo o restante dos coeficientes
        cin >> b;
        cout << "Digite o valor de 'c' : " << endl;
        cin >> c;

        delta = (b*b) - (4*a*c); // determinando o valor de delta
        sqrtdelta = sqrt(delta); // determinando a raiz quadrada de delta

        if( delta >= 0){    // se delta for maior ou igual a zero as raizes são dadas por

            raiz1 = (-b + sqrtdelta) / (2*a); // determinando o valor da raiz 1
            raiz2 = (-b - sqrtdelta) / (2*a); // determinando o valor da raiz 2
            cout << "Raiz 1 = " << raiz1 << endl;   // saída dos valores
            cout << "Raiz 2 = " << raiz2 << endl;


            } else {    // se delta for menor que zero, suas raizes serão complexas

                delta = -delta; // determinando o valor de delta como negativo
                sqrtdelta = sqrt(delta); // determinando a raiz quadrada de delta

                raiz1 = (-b )/(2*a); // determinando o valor da raiz complexa 1
                raiz2 = (-b )/(2*a); // determinando o valor da raiz complexa 2
                cout << "Raizes complexas " << endl;
                cout << "Raiz 1 = " << raiz1 << " + " << "i " << (sqrtdelta) / (2*a) << endl; // saída dos valores
                cout << "Raiz 2 = " << raiz2 << " - " << "i " << (sqrtdelta) / (2*a) << endl;
                }


        }else { // caso a equação seja inválida o programa aborta
            cout << "Coeficiente inválido, não é uma equação de 2º grau!!" << endl;
            exit(0);

        }
        cout << "Deseja informar uma nova equação?\n" // menu para retornar o programa ou finalizá-lo
             << "[ 1 ] SIM\n"
             << "[ 2 ] NÃO" << endl;
        cout << "Sua escolha: " << endl;
        cin >> quest;
    }
    while (quest == 1); // caso quest igual a sim(1) o programa retorna

    cout << "Programa finalizado !!" << endl;
    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << endl;
    cout << "Criado por: Luiz Felipe";



    return 0;


}
