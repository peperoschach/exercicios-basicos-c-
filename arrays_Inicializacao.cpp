// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Como devemos inicializar os Arrays em C++? Um Array é um conjunto de valores dispostos
em listas e acessíveis através de um índice numérico positivo. Assim, temos que cada posição
do nosso Array é uma variável do tipo do nosso Array, sendo assim, temos que ter uma forma
para inicializar esse conjunto de variáveis. O C++ fornece a capacidade de declararmos o conjunto
de valores iniciais delimitando-os através de um para de chaves, por exemplo:
int num[] = {1, 2, 3};
No código acima, nós estamos inicializando um Array de inteiros e estamos definindo o valor para
as 3 primeiras posições. Nesse caso, como não informamos a quantidade de elementos que o nosso Array
irá ter, o C++ irá assumir que o mesmo possui somente 3 posições, até porque, só foram definidos 3 valores.
Nós também podemos iniciar um Array de inteiros atribuindo o valor 0 a todos os elementos, por exemplo:
int num2[5] = {};
Agora, nos estamos dizendo que queremos uma Array de inteiros e que todas as posições do nosso Array sejam
inicializados com o valor igual a 0;
*/


#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#include<stdlib.h>
#include<vector>
using std::vector;

int main() {


    int nums[3];
    nums[0] = 100;
    nums[1] = 1000;
    nums[2] = 1100;

    int nums2[] = {1, 3, 5, 7, 11, 13, 17};

    cout << nums2[0] << endl;
    cout << nums2[1] << endl;
    cout << nums2[2] << endl;
    cout << nums2[3] << endl;
    cout << nums2[4] << endl;
    cout << "-------------------------------------------------" << endl;

    vector<int> v1(10,-1);// v1 contém 10 elementos do tipo inteiro inicializados a -1
    vector<int> v2;
    v1.size(); // retorna o tamanho do vetor v1
    cout << v1.size() << " --> Tamanho do vector!"<< endl;
    v1.empty(); // determina se o vector v1 está vazio
    cout << v1.empty()<< " --> Determina se o vector está vazio! "<< endl;
    v1.resize(15, -2); // redimensiona o vector v1
    v2=v1; // cópia de dois vetores



    return 0;

}
