// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Faça um programa que calcule o IMC de uma pessoa e exiba o resultado seguindo a
tabela:
    |Resultado Final   |   Categoria          |
    |< 18,5            |   Abaixo do Peso     |
    |18,5 – 24,9       |   Peso normal        |
    |25,0 – 29,9       |   Excesso de Peso    |
    |30,0 – 34,9       |   Obesidade Grau I   |
    |35,0 – 39,0       |   Obesidade Grau II  |
    |> 40, 0           |   Obesidade Grau III |

*/

#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#include<stdlib.h>
#include<cmath>


int main() {

    double peso, altura, imc;
    //int imc;

    cout << "==========================================" << endl;
    cout << endl;
    cout << "Calcule o seu IMC " << endl;
    cout << endl;
    cout << "==========================================" << endl;

    cout << "Por favor digite seu peso: " << endl;
    cin >> peso;
    cout << "Por favor digite sua altura: " << endl;
    cin >> altura;
    imc = peso / (altura * altura);

    string seu_imc = (imc < 18.5) ? "Abaixo do peso":
                     (imc >= 18.5 && imc <= 24.9) ? "Peso Normal":
                     (imc >= 25.0 && imc <= 29.9) ? "Excesso de Peso":
                     (imc >= 30.0 && imc <= 34.9) ? "Obesidade Grau I":
                     (imc >= 35.0 && imc <= 39.0) ? "Obesidade Grau II":
                     (imc > 40.0) ? "Obesidade Grau III":
                                    "Valor Inválido";


    cout << "O seu IMC é de " << imc << " !! " << "Você esta na categoria " << seu_imc << endl;

    return 0;

}
