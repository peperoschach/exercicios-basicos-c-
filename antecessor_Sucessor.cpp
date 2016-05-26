// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Faça um programa que leia um valor do tipo numérico e imprima o seu sucessor e
antecessor.*/

#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Favor digite um número: " << endl;
    cin >> num;
    cout << "O sucessor do número " << num << " é " << num + 1 << endl;
    cout << "O antecessor do número " << num << " é " << num -1 << endl;

    return 0;

}
