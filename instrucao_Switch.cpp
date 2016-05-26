// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*A estrutura de seleção switch proporciona a escolha de uma opção dentre várias. Diferentemente
da instrução "if", onde verificamos se uma condição é verdadeira e então programamos o que deve ser
feito caso seja, e em seguida, programamos o que deve ser feito caso NÃO seja. Com a estrutura switch,
conseguimos verificar dezenas e até centenas de condições sem que tenhamos um código bagunçado e de difícil manutenção.
Fato é que conseguimos os mesmo resultados tanto com a instrução "if" como também, com a instrução "swicth".
Porém, a qualidade final do código, ou seja, o código que teremos de dar manutenção futuramente, fica muito
mais simples quando utilizamos a instrução "switch". Então, todas as vezes que tiver que testar uma, duas ou três
condições, melhor é utilizarmos a estrutura de seleção simples, o nosso amigo "if". Porém, quando forem muitas as escolhas,
é melhor optarmos pela estrutura de seleção switch, até porque, a mesma confere melhor legibilidade e torna os nossos programas
mais simples de serem lidos.
*/

#include<iostream>
using namespace std;

int main() {

    int num1 = 0;
    cout << "Por favor, digite um número referente ao mês desejado: ";
    cin >> num1;

    switch(num1){
        case 1:
            cout << "Janeiro";
            break;
        case 2:
            cout << "Fevereiro";
            break;
        case 3:
            cout << "Março";
            break;
        case 4:
            cout << "Abril";
            break;
        case 5:
            cout << "Maio";
            break;
        case 6:
            cout << "Junho";
            break;
        case 7:
            cout << "Julho";
            break;
        case 8:
            cout << "Agosto";
            break;
        case 9:
            cout << "Setembro";
            break;
        case 10:
            cout << "Outubro";
            break;
        case 11:
            cout << "Novembro";
            break;
        case 12:
            cout << "Dezembro";
            break;
        default:
            cout << "O valor digitado, não corresponde a nenhum mês do ano.";

    }

    return 0;

}
