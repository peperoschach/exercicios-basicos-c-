// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Como trabalhar com laços aninhados? A utilização de laços aninhados é um problema
recorrente na programação e é utilizado, principalmente, para o processamento de
informações que estejam dispostas numa estrutura em forma de tabela, ou então, planilha.
Assim, a nossa tarefa é executar um laço que percorra o eixo X e dentro deste, executar
um outro laço, que percorra o eixo Y. Dessa forma, temos que a cada ciclo de X, o laço
aninhado será executado. Essa é uma lógica bastante simples, porém, muito importante e
bastante utilizada em praticamente qualquer software que estivermos desenvolvendo, seja
para o processamento de informações de uma base de dados, ou então, para o posicionamento
dos componentes visuais numa determinada tela.
*/

#include<stdlib.h>
#include<cmath>
#include<iosteam>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {

    int [5][5] valores = {};
    for(int x = 0; x < 5; x++) {
        for(int y = 0; y < 5; y++){
            valores[x,y] = 9;

        }
    }






    return 0;

}
