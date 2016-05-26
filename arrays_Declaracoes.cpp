// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Como declarar um Array em C++? A declaração de Array se distingue da declaração de variáveis
pela utilização de uma par de colchetes após a definição do nome, por exemplo:
int valor[10];
Acima, nós estamos dizendo que queremos uma variável, do tipo Array de nome valor e que contenha
10 elementos do tipo inteiro. Logo, após a declaração, já podemos acessar os elementos e atribuir
valores a estes, isto porque, um Array é uma estrutura de dados incorporada a linguagem C++ e assim,
dispensa inicialização. Tecnicamente, temos que a definição é a seguinte:
&lt;tipo&gt; &lt;nome&gt; [];
Aqui utilizamos a barra para definir, até porque, nos comentários do YouTube não é permitido a utilização
dos símbolos de maior e menor. Nós podemos declarar Arrays de qualquer tipo, primitivo ou composto, sendo
que com o tipo composto, seremos obrigados a criar uma nova instância e atribuí-la a uma determinada posição.
*/

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {

    int nums[10];

    nums[0] = 100;
    nums[1] = 10;
    nums[2] = 23;
    nums[3] = 40;
    nums[4] = 50;
    nums[5] = 14;
    nums[6] = 42;
    nums[7] = 9;
    nums[8] = 34;
    nums[9] = 21;

    cout << nums[7] + nums[3] - nums[1] << endl;



    return 0;

}
