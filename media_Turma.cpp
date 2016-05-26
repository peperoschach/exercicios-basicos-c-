// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Uma turma de dez estudantes resolve um teste. As notas(inteiros no intervalo de 0  a 100) dadas à solução
deste teste estão disponíveis para você. Determine a média das notas da turma para a solução do teste*/

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    int total = 0, //soma das notas
        gradeCounter = 1, //número de notas digitadas
        grade, // uma nota
        average; // media das notas

    // fase de processamento
    while (gradeCounter <= 10){     //repete o laço 10 vezes

        cout << "Forneça a média de um aluno: ";   //solicita a entrada de dados
        cin >> grade;   //lê a nota digitada
        total += grade;     //soma a nota ao total
        gradeCounter++;     // incrementa contador

    }

    // fase de término
    average = total / 10;   //divisão inteira
    cout << "A média da turma é: " << average << endl;  // impressão na tela da maior nota da turma


    return 0;   // indica que o programa terminou normalmente

}
