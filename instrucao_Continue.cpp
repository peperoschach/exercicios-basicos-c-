// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Como utilizar a instrução 'continue' em C++? A instrução 'continue' em C++ funciona de maneira
análoga a instrução 'break' a diferença é que ao invés de finalizar o laço de repetição inteiro,
somente um único ciclo será finalizado. Ou seja: a instrução 'continue' finaliza o ciclo que está
sendo executado pulando diretamente ao próximo. Os laços de repetição possui 2 instruções para auxiliar
a sua boa execução, são elas:
- break
- continue
A instrução 'continue' como o nome em inglês sugere, não é pra finalizar, mas sim, continuar na próxima
execução, ou melhor, continuar no próximo ciclo de repetição.
*/

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#include<stdlib.h>

int main() {

    int n = 0;
    while(true) {
        n++;


        if(n>=10){
            break;
        }
        else {
            if (n==4 or n==6){
                continue;
            }
        }

        cout << "O valor da variável n é: " << n << endl;

    }

    return 0;


}
