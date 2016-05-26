// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*A instrução DO-WHILE é uma outra forma de nós repetirmos um bloco de instrução
por um determinado período de tempo. Se compararmos a instrução WHILE com a instrução
do-while, veremos que a diferença entre essas estruturas e a sua forma de execução está
no fato de que com a instrução do-while o bloco sempre será executado por no mínimo uma vez.
Enquanto que com a instrução WHILE, o bloco dessa instrução só será executado se e somente se
a condição for atendida. Por exemplo:

do{
// código
}while(1==1)

while(1==1){
// código
}

No código acima, a instrução do{}while() sempre terá seu bloco executado por no mínimo uma única vez,
ate porque, nenhuma condição é verificada antes da execução desse bloco. Enquanto que na estrutura da instrução WHILE()
o bloco de instrução só sera executado SE E SOMENTE SE a condição contida no cabeçalho da instrução for verdadeiro.*/

#include<iostream>
using namespace std;

int main() {

    int i = 10;
    std::cout << "Looping DO-WHILE" << endl;
    do {
        i++;
        std::cout<< "O valor da variavel i é ===> " << i << endl;

    }while(i >= 10 && <= 20);
    std::cout << endl;
    std::cout << "Looping WHILE" << endl;
    int i2 = 10;
    while(i2 >= 10 && <= 20) {
        i2++;
        std::cout << "O valor da variavel i2 é ===> " << i2 << endl;
    }

    return 0;

}
