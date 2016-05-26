// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Nessa aula vamos resolver uma função f(x,y) utilizando Arrays. Para a resolução,
passaremos um conjunto de valores para formar uma grade de respostas. Cada resposta
será armazenada na posição x, y que foi passado para a função f(x,y).
*/

#include<stdlib.h>
#include<cmath>
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {
    // f(x,y) = (3*(x+1) + (x*y));
    //  (0 < x < 9) e (0 < y < 9);
    int planilha[10][10] = { };

    for(int x = 0; x < 10; x++){
        for(int y = 0; y < 10; y++){
            planilha[x][y] = (3*(x+1) + (x*y));

            string end = (y < 9) ? ", " : "\n";
            cout << planilha[x][y] << end ;
        }
    }


    return 0;

}
