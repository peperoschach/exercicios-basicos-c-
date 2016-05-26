// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*
*/

#include<iostream>

using namespace std;

int main() {

    int num1=0;
    cout << "Digite um número no intervalo de 45 até 72 |>>> " << endl;
    cin >> num1;

    if(num1 >=45 && num1 <= 72){
        cout << "O número " << num1 << " está no intervalo entre 45 e 72 !" << endl;
        if(num1 == 45 || num1 == 72)
            cout << "O número " << num1 << " corresponde a um dos extremos!" << endl;

    }else
        cout << "O número " << num1 << " não corresponde ao intervalo de 45 a 72 !" << endl;


    return 0;

}
