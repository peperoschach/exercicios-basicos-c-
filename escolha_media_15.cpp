// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Faça um programa que será utilizado pelos professores para o cálculo da nota final do
semestre. Durante o semestre foram feitas duas provas e um trabalho. O programa deverá
pedir para o usuário escolher entre média aritmética ou ponderada (sendo o peso de cada
nota definido pelo usuário). Ao final, o programa deverá exibir qual foi o tipo de média
utilizada para calcular a nota e também a média final do aluno.
*/

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#include<stdlib.h>
#include<cmath>


int main () {

    double notamp1, notamp2, tbrmp1, tbrmp2, mdpond,
           notama1, notama2, trabma, mdar;
    int mdp1, mdp2, mdp3, mdp4, op;

    do {
        cout << "Esolha uma da opções:\n"
             << "[ 1 ] Média ponderada.\n"
             << "[ 2 ] Média aritmética.\n"
             << "Digite qualquer número para sair."<< endl;
        cout << endl;
        cin >> op;

        switch(op){

            case 1: {

                cout << "Digite a primeira nota: " << endl;
                cin >> notamp1;
                cout << "Digte a segunda nota: " << endl;
                cin >> notamp2;
                cout << "Digite a nota do trabalho 1: " << endl;
                cin >> tbrmp1;
                cout << "Digite a nota do trabalho 2: " << endl;
                cin >> tbrmp2;
                cout << "Digte o peso da primeira nota: " << endl;
                cin >> mdp1;
                cout << "Digte o peso da segunda nota: " << endl;
                cin >> mdp2;
                cout << "Digte o peso do trabalho 1: " << endl;
                cin >> mdp3;
                cout << "Digte o peso do trabalho 2: " << endl;
                cin >> mdp4;
                mdpond = (notamp1*mdp1 + notamp2*mdp2 + tbrmp1*mdp3 + tbrmp2*mdp4) / (mdp1 + mdp2 + mdp3 + mdp4);
                cout << "Sua média ponderada é de: " << mdpond << endl;


            break;

            }

            case 2: {

                cout << "Digite o valor da primeira nota >>  " << endl;
                cin >> notama1;
                cout << "Digte o valor da segunda nota >> " << endl;
                cin >> notama2;
                cout << "Digite o valor do trabalho >> " << endl;
                cin >> trabma;
                mdar = (notama1 + notama2 + trabma) / 3;
                cout << "Sua média foi de " << mdar << endl;



            break;

            }

            default:
                exit(0);


        }




    } while(op != 0);





    getchar();
    return 0;
    //system("PAUSE");
    //return EXIT_SUCCESS;


}
