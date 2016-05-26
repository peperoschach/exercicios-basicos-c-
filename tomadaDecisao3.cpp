// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Estrutura de seleção múltipla, ou seja, estrutra de if aninhada
*/

//calculo de média de quatro notas

#include<iostream>
using namespace std;

int main () {

    double  X[4],soma=0, div=0;
    int i;

    for(i=0; i<4; i++){
        cout << "Digite sua "<<i+1<<"ª nota: ";
        cin>>X[i];

    }
    for(i=0; i<4; i++){
        soma = soma + X[i];
        div = soma / 4;
    }
    cout << "A sua média no semestre foi: " << div << endl<<endl;

    if(div >= 7){
        cout << "Parabéns!! Você foi aprovado !!!" << endl;

    }else {
        cout << "Poxa !! Você foi reprovado !!" << endl;
    }

    return 0;

}
