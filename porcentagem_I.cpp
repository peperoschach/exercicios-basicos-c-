// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Ex: 1 - Suponhamos que um produto que custe R$ 178,00 sofra um acréscimo de
15%. Qual o valor final do produto?
*/

#include<iostream>
using namespace std;


int main(int argc, char *argv[]) {

    float valor =  178.00; // valor orininal do produto
    float percentual = 15.0 / 100.0; // calculo para o desconto de 15%
    float valor_final = valor + (percentual * valor); // cáculo de acrescimo do valor

    cout << "Suponhamos que um produto que custe R$ 178,00 sofra um acréscimo de\n"
         << "15%. Qual o valor final do produto?" << endl;
    cout << "O valor original é de R$ " << valor << endl;
    cout << "O valor final com o acréscimo foi de R$ " << valor_final << endl;



    return 0;

}
