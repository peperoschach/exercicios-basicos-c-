// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Como percorrer todos elementos do Array? A principal vantagem de utilizar a estrutura Array,
deve-se a capacidade de podermos facilmente, percorrer todos os seus elementos e efetuarmos uma
determinada operação sobre os mesmos. Então, de quase nada serviria essa estrutura se não fosse
a nossa capacidade de percorrer a mesma e processar elemento por elemento. Já estudamos a iteração,
logo, a mesma é que será responsável por executar um mesmo bloco por uma quantidade de vezes e alterar
o valor de uma variável. Assim, como o valor de uma variável será incrementado ou decrementado, temos
que iremos alterar o índice em que estamos manipulando, logo, percorreremos todos os elementos da
estrutura de maneira bastante simples.
*/

#include<stdlib.h>
#include<cmath>
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {

    double preco[10] = {};
    preco[0] = 14.55;
    preco[1] = 1.1;
    preco[7] = 10.7;
    preco[2] = 9.65;

    for(int i = 0; i <=9; i++){
        //preco[i] = 0;
        cout << preco[i] << endl;

    }




    return 0;

}
