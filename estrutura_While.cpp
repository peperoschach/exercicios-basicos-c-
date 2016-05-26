// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Como a instrução "while" funciona? A instrução "while" funciona de maneira semelhante a instrução "for".
A diferença é que com a instrução "while" nós conseguimos construir laços de repetição indefinidos ou então,
laços que sejam executados enquanto uma condição for verdadeira.
Por exemplo, a seguir, o bloco de instrução será repetido até que a condição definida no cabeçalho da estrutura
deixe de ser verdadeiro:

int x = 0;
while(x != 1000)
{
x++;
printf(x);
}

Assim, nós temos que a cada laço a variável "x" será incrementada em uma unidade e em seguida, ira imprimir na tela
o valor da variável "x".

*/
#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    int num = 0;


    while(num < 10000){
        cout << num <<setw (10) << num <<setw (10) << num << setw (10) <<
        num << setw (10) << num << setw (10) << num << setw (10) << num << setw (10) << num << endl;
        num++;

    }
    int num2 = 1000;
    while(num2 > 0 ){
        cout << num2 <<setw (10) << num2 <<setw (10) << num2 << setw (10) <<
        num2 << setw (10) << num2 << setw (10) << num2 << setw (10) << num2 << setw (10) << num2 << endl;
        num2--;

    }

    return 0;

}
