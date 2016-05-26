// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/**/

#include<stdlib.h>
#include<cmath>
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {

    int tabela[2][2],l,c,soma;

    for(int l = 0; l<=2; l++){
        for(int c = 0; c<=2; c++){
            cout << "Digite um número na posição: " << l << " X "<< c << endl;
            cin >> tabela[l][c];
        }

    }
    for (int l = 0; l<=2; l++){
        for(int c = 0; c<=2; c++){
            if(l == c){ // calculando os valores da matriz na transversal
                soma += tabela[l][c];
            }

        }
    }

    cout <<"SOMA =  " << soma << endl;


    return 0;
}
