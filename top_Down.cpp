// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Formulando algoritmos com refinamento top-down, passo a passo,
repetição controlada pro sentinela


Desenvolva um programa que calcula a média da turma e que processa um número arbitrário de notas cada
vez que o programa é executado
*/

#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;

#include<iomanip>
using std::setprecision;
using std::setiosflags;



int main() {

    int total = 0,  // soma das notas
        gradeCounter = 0,   // número de digitadas
        grade;  // uma nota
    double average; // número com ponto decimal para a média


    // fase de processamento
    cout << "Forneça nota ou -1 para finalizar: ";
    cin >> grade;

    while (grade != -1) {
        total += grade;
        gradeCounter++;
        cout << "*Forneça nota ou -1 para finalizar: ";
        cin >> grade;

    }

    // fase de término
    if (gradeCounter != 0) {
        average = static_cast <double> (total) / gradeCounter;
        cout << "A média da turma é " << setprecision(2)
             << setiosflags(ios::fixed | ios::showpoint)
             << average << endl;


    } else
        cout << "Nenuma nota foi fornecida!" << endl;

    return 0;   //indica que o programa terminou com sucesso

}
