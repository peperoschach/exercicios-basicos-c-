// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*O que é um programa em looping? Diz-se que um programa está em looping quando este executa um
laço de repetição indefinidamente, ou seja, o programa fica sempre repetindo o mesmo bloco de código
e a condição nunca é satisfeita. Em desenvolvimento, é comum a nossa aplicação entrar em looping, até porque,
muitas vezes executamos um código pela primeira vez e sem querer, acabamos por não verificar que determinada condição não será atendida.
Como estudamos, o código PHP é executado na maior parte das vezes em um servidor, logo, nós temos uma situação onde o servidor
web finalizara o nosso script, até porque, o mesmo nunca finaliza a sua execução. Assim, nós temos que nenhuma informação será
retornada para quem solicitou e então, dizemos que ocorreu um erro em nossa aplicação.
*/

#include<iostream>

using namespace std;

int main() {

    int i = 0;
    while(i <= 0) {
        std::cout << i << endl;

    }

    return 0;

}
