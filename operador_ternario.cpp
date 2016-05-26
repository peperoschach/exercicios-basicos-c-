// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Como funciona a operação ternária em C++? O funcionamento da operação ternária é
bastante semelhante a estrutura de controle 'if'. Nós declaramos uma condição, definimos
um resultado para caso a nossa condição seja atendida e um outro resultado para caso o
valor da nossa condição seja igual a falso. O que realmente diferencia a operação ternária
da instrução 'if' é que a condição ternária não executara um bloco de instrução como ocorre
com a estrutura de controle 'if', mas sim, retornara um valor. Uma outra diferença é que a
operação ternária é uma estrutura compacta, projetada para ser definida numa única linha (inline),
enquanto que o projeto da estrutura 'if' é para utilizar duas ou mais linhas.A seguir, temos a
definição da operação ternária:
|variável| = (condição) ? |valor1| : |valor2|;
|variável| é a variável que irá receber um dos dois valores definidos na estrutura da operação ternária.
|valor1| valor que será retornado caso a condição seja verdadeira
|valor2| valor que será retornado caso a condição NÃO seja verdadeira
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {

    int i = 0;
    cout << "Digite um número inteiro: " << endl;
    cin >> i;

    string texto = (i<=10) ? "Menor que 10!" : "Maior que 10!";

    cout << "O valor inserido é " << texto << endl;

    return 0;

}
