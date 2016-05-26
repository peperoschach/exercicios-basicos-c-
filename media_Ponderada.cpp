// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Faça um programa que calcule a média ponderada de um aluno, sendo que foram
aplicadas duas provas e dois trabalhos durante o semestre. O peso de cada avaliação é
definido pelo usuário.
*/

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#include<stdlib.h>

int main() {

    double nota1, nota2, tbr1, tbr2, mdpond;
    int mdp1, mdp2, mdp3, mdp4;
    cout << "Digite a primeira nota: " << endl;
    cin >> nota1;
    cout << "Digte a segunda nota: " << endl;
    cin >> nota2;
    cout << "Digite a nota do trabalho 1: " << endl;
    cin >> tbr1;
    cout << "Digite a nota do trabalho 2: " << endl;
    cin >> tbr2;
    cout << "Digte o peso da primeira nota: " << endl;
    cin >> mdp1;
    cout << "Digte o peso da segunda nota: " << endl;
    cin >> mdp2;
    cout << "Digte o peso do trabalho 1: " << endl;
    cin >> mdp3;
    cout << "Digte o peso do trabalho 2: " << endl;
    cin >> mdp4;
    mdpond = (nota1*mdp1 + nota2*mdp2 + tbr1*mdp3 + tbr2*mdp4) / (mdp1 + mdp2 + mdp3 + mdp4);
    cout << "Sua média ponderada é de: " << mdpond << endl;




    return 0;


}
