// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*===========================================================
*Programa de introduão a Stream
*Stream é uma sequencia de dados
*Tipos de Stream:
*Stream de texto : Stream constituído por caracteres ASCII(texto)
*Steam binários : Stream de bytes "puros"
*A biblioteca <iostream.h> --> Biblioteca que contem as ferramentas para a manipulação de entrada
*e saída de dados do C++ . PS.: a biblioteca <iostream.h> é uma versão evoluída da biblioteca
*<stdio.h> da linguagem C.
*============================================================
Você já conhece os objetos cin, cout, clog e cerr? Sabe quando e como utilizá-los? Nesta aula você aprenderá tudo isso!
Já tivemos uma introdução às Stream, agora, vamos aprofundar um pouco o nosso conhecimento estudando os outros objetos
que a linguagem tem implementado por padrão.
cout = console output
cin = console input
clog = console log
cerr = console erro
Assim, ao enviar uma informação para o console que o usuário precisa ler, utilizamos o objeto Console Output, que numa tradução,
significa: Saída do Console. Para extraírrmos os dados digitados pelo usuário, iremos utilizar os objetos Console Input, que numa tradução significa:
Entrada do/pelo Console. Quando tiver que adicionar informações ao LOG do programa, vamos utilizar o objeto Console LOG, que numa tradução significa,
"Console de informações de estado e funcionamento do programa". E para administrarmos os erros ocorrido ou então, lê-los, temos um objeto especifico
de nome Console Error, que numa tradução seria: Console de Erros da Aplicação. Todos esses objetos são recursos exclusivos da Linguagem C++ que
tornaram a administração de informações muito mais fácil e prática.*/

#include<iostream>
#include<iomanip>
#include<stdlib.h>

using namespace std;

int main() {


    //obj cout
    // (<<) Operador de inserção
    cout << "Estudando a saída de dados. " << endl;
    cout << "A soma de 50 + 10 em hexadecimal é igual a: " << hex << 10 + 50 << endl;
    cout << endl;
    cout << "A soma de 50 + 10 é igual a: " << setw(3) << 10 + 50 << endl;
    cout << endl;
    cout << setw(10) << 1<< endl;
    cout << setw(10) << 2<< endl;
    cout << setw(10) << 3<< endl;
    cout << setw(10) << 4<< endl;
    cout << setw(10) << 5<< endl;
    cout << endl;
    cout << setw(5) << 1;
    cout << setw(5) << 2;
    cout << setw(5) << 3;
    cout << setw(5) << 4;
    cout << setw(5) << 5;
    cout << endl;
    cout << "==================================" << endl;
    std::cout << "Console OUTPUT  = cout "<<endl;
    cerr << "Console error = cerr" << endl;
    clog << "Console error type 2 = clog" << endl;
    std::clog << "Standard log??\n";





    return 0;
}
