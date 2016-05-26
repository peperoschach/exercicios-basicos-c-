// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*
* Bubble Sort melhorado
* 2ª versão
*
*/

#include <iostream>
//#include <conio>

using namespace std;

int main() {

    int X[9], n, i, aux, troca;
    //clrscr();
    //carregando os números no vetor
    for(i=0; i<=9; i++)
    {
        cout<<"Digite o "<<i+1<<"º número: ";
        cin>>X[i];

    }
    //ordenando de forma dcrescente
    // laço com a quantidade de elementos do vetor
    // e enquanto houver troca
    n = 1;
    troca = 1;
    while (n <= 9 /*&& troca == 1*/)
    {
        troca = 0;
        for(i=0; i<=9;i++)
        {
            if (X[i] < X[i+1])
            {
                troca = 1;
                aux = X[i];
                X[i] = X[i+1];
                X[i+1] = aux;
            }
        }
        n = n + 1;
    }
    //mostrando o vetor ordenado
    for(i=0;i<=9;i++)
    {
        cout<<i+1<<"º número: "<<X[i]<<endl;
    }

    return 0;

}
