// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Faça um programa que calcule a média aritmética de um aluno, sendo que foram
aplicadas duas provas e um trabalho durante o semestre.
*/


#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#include<stdlib.h>

int main() {


    double nota1, nota2, trab, media;

    cout << "Digite o valor da primeira nota >>  " << endl;
    cin >> nota1;
    cout << "Digte o valor da segunda nota >> " << endl;
    cin >> nota2;
    cout << "Digite o valor do trabalho >> " << endl;
    cin >> trab;
    media = (nota1 + nota2 + trab) / 3;
    cout << "Sua média foi de " << media << endl;




    return 0;


}
