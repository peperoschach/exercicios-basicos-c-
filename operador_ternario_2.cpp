// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Na aula anterior estudamos com utilizar a condição ternária.
Nessa segunda aula estudaremos algumas peculiaridades e truques que podemos utilizar
junto a condição ternária. Para isso, faremos um exemplo em que a condição ternária
substituira a estrutura de seleção múltipla 'switch'. Esse será somente um exemplo para
que consigamos entender e visualizar as diversas maneiras que podemos utilizar uma mesma
estrutura e obter códigos mais legíveis e otimizados. A seguir, temos um exemplo de utilização
da condição ternária:
int num = (true) ? 10 : 20;
No exemplo acima, declaramos uma variável do tipo inteiro e de nome 'num'. Em seguida,
verificamos uma condição, utilizamos o sinal de interrogação e então definimos que: o valor 10
será retornado caso a nossa condição seja verdadeira, senão, o valor 20 será retornado.
Essa é sem dúvida uma excelente forma para decidirmos entre uma opção de dois valores.
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {

    int num, num2, num3;
    cout << "Digite o dia de seu nascimento: " << endl;
    cin >> num2;
    cout << "Digite o numero corresponte ao mês de seu nascimento: " << endl;
    cin >> num;
    cout << "Digite o ano de seu nascimento: " << endl;
    cin >> num3;



    string mes = (num==1) ? "Janeiro":
                 (num==2) ? "Fevereiro":
                 (num==3) ? "Março":
                 (num==4) ? "Abril":
                 (num==5) ? "Maio":
                 (num==6) ? "Junho":
                 (num==7) ? "Julho":
                 (num==8) ? "Agosto":
                 (num==9) ? "Setembro":
                 (num==10) ? "Outubro":
                 (num==11) ? "Novembro":
                 (num==12) ? "Dezembro":
                            "Valor inválido!!";
    cout << "Você nasceu no dia "<< num2<< " do mês de " << mes << " do ano de "<< num3<< endl;

    return 0;

}
