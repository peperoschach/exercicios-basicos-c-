// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Uma planilha, na programação, é um Array bidimensional. Essa estrutura é, sem dúvida,
a mais utilizada, seja para a realização de pequenos e simples cálculos ou então, para
as situações onde temos que fazer processamento maciço de informações. Nessa aula, aprenderemos
como que podemos manipular planilhas no C++ e também, aprenderemos uma forma de lidar com os
valores através da estrutura de um Array bidimensional.
*/

#include<stdlib.h>
#include<cmath>
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {

    // 1) criar uma planilha com valores aleatórios
    double plan[5][6] = { };

    // função para gerar uma planilha aleatoriamente
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            plan[x][y] = (double)rand() / (RAND_MAX / 1000) ;
        }
    }

    // 2) soma dos valores de cada linha
    double total = 0;
    for(int x = 0; x < 5; x++){
        for(int y = 0; y < 5; y++){
            plan[x][5] += plan[x][y];
        }
    // 3) soma da soma dos valores de cada linha
        total += plan[x][5];
    }

    // função para imprimir a planilha
     for(int x = 0; x < 5; x++){
        for(int y = 0; y < 6; y++){
            string end = (y < 4) ? " + " :
                         (y < 5) ? " = " : "\n";
            cout << plan [x][y] << end;
        }
    }

    // imprimindo a soma da soma dos valores de cada linha
    cout << "O valor total da soma é: " << total << endl;


    return 0;

}
