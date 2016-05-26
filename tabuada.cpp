// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Nesta aula, iremos desenvolver um programa que pergunta ao usuário qual a tabuada o mesmo deseja e então,
com a utilização de uma laço de repetição "for", calcula e imprime na tela a tabuada solicitada.
Esse é um excelente exercício para aprimorarmos a forma como lidamos com os laços de repetição e também,
faz com que tenhamos que utilizar técnicas distintas para percorrer os números de 1 até 10.
No exemplo realizado nesse vídeo, nós inicializamos a variável chamada de 'n' da seguinte maneira:
int n = 0;
Quando declaramos que queremos um espaço de memória, ou melhor, quando declaramos uma variável qualquer,
o que acontece é que um espaço de memória é reservado e o tamanho desse espaço é o tamanho do tipo da variável.
Então, temos que o nome da variável, o nome que utilizamos para fazer uso da mesma é chamado de REFERÊNCIA.
Então, temos uma referência para uma determinada região de memória.
O que acontece, é que as regiões de memória contém valores comumente chamado de lixo - são os lixos de memória.
Logo, quando declaramos uma variável, não temos a certeza de que a mesma irá conter, por exemplo o valor 0.
Fato é que o valor que a variável ira ter na inicialização é impossível de prever!
Na aplicação que fizemos para essa aula, não havia necessidade de inicializar a variável que chamamos de 'n',
até porque, conseguiríamos facilmente ver que a mesma receberia um valor que o usuário digitará.
Porém, em aplicações maiores, acontece de nós declararmos uma variável e fazermos uso da mesma antes de inicializarmos
[esse é um erro simples, clássico e corriqueiro].
Por isso, uma boa prática é sempre, mas sempre mesmo, inicializar todas as variáveis! Tenha isso como um bom hábito
e trabalhe dessa maneira! Tenha a certeza de que você estará conferindo segurança a suas aplicações!
É obrigatório? Não! Mas trabalhe assim que é muito mais seguro!!!
*/

#include<iostream>
#include<iomanip>
#include<stdlib.h>


using namespace std;

int main () {


    cout << "Por favor informe a tabuada desejada: " << endl;
    int n = 0;
    cin >> n;
    cout << endl;
    cout << "=== " << "TABUADA DE " << n << " ===" << endl;
    cout << endl;

    for(int i = 1; i<=10; i++){
        //cout << "______________________________" << endl;
        //cout<<endl;
        cout << n << " x " << i << " = " << i*n << endl;
    }


    return 0;

}
