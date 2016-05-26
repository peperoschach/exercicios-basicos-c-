// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Como calcular a média dos valores contidos num Array? Podemos utilizar um Array
para armazenar um série numérica, a fim de estabelecer alguns cálculos estatísticos
e obter algumas médias. Sem dúvida, essa é uma principais razões das estruturas de listas,
fornecer a capacidade trabalhar com séries numéricas ou então, conjuntos de valores.
Após construirmos um Array que contenha uma coleção de valores, podemos, através do iteradores,
percorrer todos os elementos a fim de efetuarmos alguma operação. Uma das operações mais simples
que temos a disposição, é o cálculo da média simples dos elementos do Array. Para isso, basta
somente um conjunto de números, uma variável externa ao iterador e um iterador de fato. Em seguida,
percorre-se todos os elementos efetuando-se a soma total para que no final, o valor resultante seja
dividido pela quantidade de elementos.
*/

#include<stdlib.h>
#include<cmath>
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

int main() {

    //entrada de vaores (5 números)
    double val[2];
    double total = 0;
    for(int i = 0; i <= 4; i++){
        cout << "Digite a " << i+1 << "º nota !" << endl;
        cin >> val[i];
    }

    //calcular a média
    for(int i2 = 0; i<=4; i++){
        total = total + val[i2];

    }

    cout << fixed;
    cout << "A média total é: " << (total / 5 ) << endl;





    return 0;

}

