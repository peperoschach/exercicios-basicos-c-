// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Na aula anterior aprendemos a parte teórica da estrutura de seleção Switch.
Agora, iremos desenvolver uma aplicação para que consigamos entender e aprimorar
o nosso conhecimento acerca dessa estrutura. O nosso aplicativo ira pedir para o
usuário informar um caractere, feito isso, armazenaremos esse caractere numa variável
e então, iremos verificar se o caractere digitados esta contido nos caracteres que nós
pré-definimos com a estrutura switch. Caso esteja contido, será impressa uma mensagem dizendo
que o caractere está contido, do contrário, ou seja, caso nenhum do 8 caracteres possíveis
tenha sido informado, nós exibiremos uma mensagem para o nosso usuário dizendo que o caractere
não está no grupo de caracteres solicitado.
*/



#include<iostream>
using namespace std;

int main() {

    char c;
    cout << "Por favor, digite uma letra entre 'A' & 'G' " << endl;
    cin >> c;

    switch(c){
        case 'a':
        case 'A':
            cout << "Você digitou a letra 'A' ou 'a'.";
            break;
        case 'b':
        case 'B':
            cout << "Você digitou a letra 'B' ou 'b'.";
            break;
        case 'c':
        case 'C':
            cout << "Você digitou a letra 'C' ou 'c'.";
            break;
        case 'd':
        case 'D':
            cout << "Você digitou a letra 'D' ou 'd'.";
            break;
        case 'e':
        case 'E':
            cout << "Você digitou a letra 'E' ou 'e'.";
            break;
        case 'f':
        case 'F':
            cout << "Você digitou a letra 'F' ou 'f'.";
            break;
        case 'g':
        case 'G':
            cout << "Você digitou a letra 'G' ou 'g'.";
            break;
        default:
            cout << "Por favor, digite um valor válido!";


    }


    return 0;

}
