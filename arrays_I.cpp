// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* que são os Arrays? Array é um conjunto de elementos em sequência, onde cada elemento está associado a
um valor inteiro não negativo que o identifica. Ao conjunto dos números que identificam elementos, chamamos
de índice, e este tem a função de fazer com que todos os elementos tenham um número inteiro não negativo e
crescente. Podemos utilizar um Array para armazenar qualquer tipo de dado, porém, todos os elementos do Array,
obrigatoriamente, irão armazenar o mesmo tipo. Assim, nós temos que definimos qual o tipo que os elementos que
faram parte da nossa estrutura de dados irá ter. Nós utilizamos o índice do Array das mais variadas formas e
combinações, até porque, acessar o valor de um elemento, alterar ou mesmo, efetuar operações matemáticas é
relativamente simples e pode ser feito de forma individual ou através de um laço de repetição. A seguir, temos
um exemplo da declaração de uma Array de inteiros:
- Array unidimensional
int lista[5];

- Array bidimensional
int tabela[5][10];

- Inicializando um Array e atribuindo zero a todos os elemetos
int lista[10] = {};
*/

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#include<stdlib.h>


int main() {

        int nums [5];

        nums[0] = 10;
        nums[1] = 20;
        nums[2] = 30;
        nums[3] = 40;
        nums[4] = 50;

        double valores [100];

        valores[30] = 6.66;


    return 0;

}
