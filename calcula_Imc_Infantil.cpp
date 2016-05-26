// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Programa que calcula o IMC infantil*/

#include<stdlib.h>
#include<cmath>
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main() {

  int idade_meninos, idade_meninas, op;
  double altura_meninos,altura_meninas, peso_meninos, peso_meninas, imc_me, imc_ma;

  cout << "==========================================" << endl;
  cout << endl;
  cout << "Cálculadora de IMC Infantil " << endl;
  cout << endl;
  cout << "==========================================" << endl;

  do{
    cout << "Esolha o sexo:\n"
      << "[ 1 ] MASCULINO.\n"
      << "[ 2 ] FEMININO.\n"
      << "[ Digite qualquer número para SAIR. ]"<< endl;
    cout << endl;
    cin >> op;

    switch(op){
      case 1: {
        cout << "Digite sua idade de 6 a 15 anos: " << endl;
        cin >> idade_meninos;
        cout << "Digite seu peso: " << endl;
        cin >> peso_meninos;
        cout << "Digte sua altura: " << endl;
        cin >> altura_meninos;
        imc_me = peso_meninos / (altura_meninos * altura_meninos);

        string imc_meninos = (idade_meninos == 6 && imc_me >= 14.5 && imc_me <= 16.6) ? "Peso Normal":
                             (idade_meninos == 6 && imc_me > 16.6 && imc_me <= 18.0) ? "Sobrepeso":
                             (idade_meninos == 6 && imc_me > 18.0) ? "Obesidade":
                             (idade_meninos == 7 && imc_me >= 15 && imc_me <= 17.3) ? "Peso Normal":
                             (idade_meninos == 7 && imc_me > 17.3 && imc_me <= 19.1) ? "Sobrepeso":
                             (idade_meninos == 7 && imc_me > 19.1) ? "Obesidade":
                             (idade_meninos == 8 && imc_me >= 15.6 && imc_me <= 16.7) ? "Peso Normal":
                             (idade_meninos == 8 && imc_me > 16.7 && imc_me <= 20.3) ? "Sobrepeso":
                             (idade_meninos == 8 && imc_me > 20.3) ? "Obesidade":
                             (idade_meninos == 9 && imc_me >= 16.1 && imc_me <= 18.8) ? "Peso Normal":
                             (idade_meninos == 9 && imc_me > 18.8 && imc_me <= 21.4) ? "Sobrepeso":
                             (idade_meninos == 9 && imc_me > 21.4) ? "Obesidade":
                             (idade_meninos == 10 && imc_me >= 16.7 && imc_me <= 19.6) ? "Peso Normal":
                             (idade_meninos == 10 && imc_me > 19.6 && imc_me <= 22.5) ? "Sobrepeso":
                             (idade_meninos == 10 && imc_me > 22.5) ? "Obesidade":
                             (idade_meninos == 11 && imc_me >= 17.2 && imc_me <= 20.3) ? "Peso Normal":
                             (idade_meninos == 11 && imc_me > 20.3 && imc_me <= 23.7) ? "Sobrepeso":
                             (idade_meninos == 11 && imc_me > 23.7) ? "Obesidade":
                             (idade_meninos == 12 && imc_me >= 17.8 && imc_me <= 21.1) ? "Peso Normal":
                             (idade_meninos == 12 && imc_me > 21.1 && imc_me <= 24.8) ? "Sobrepeso":
                             (idade_meninos == 12 && imc_me > 24.8) ? "Obesidade":
                             (idade_meninos == 13 && imc_me >= 18.5 && imc_me <= 21.9) ? "Peso Normal":
                             (idade_meninos == 13 && imc_me >= 21.9 && imc_me <= 25.9) ? "Sobrepeso":
                             (idade_meninos == 13 && imc_me > 25.9) ? "Obesidade":
                             (idade_meninos == 14 && imc_me >= 19.2 && imc_me <= 22.7) ? "Peso Normal":
                             (idade_meninos == 14 && imc_me > 22.7 && imc_me <= 26.9) ? "Sobrepeso":
                             (idade_meninos == 14 && imc_me > 26.9) ? "Obesidade":
                             (idade_meninos == 15 && imc_me >= 19.9 && imc_me <= 23.6) ? "Peso Normal":
                             (idade_meninos == 15 && imc_me > 23.6 && imc_me <= 27.7) ? "Sobrepeso":
                             (idade_meninos == 15 && imc_me > 27.7) ? "Obesidade":
                             "Valor Inválido";

        cout << "Sua idade é " << idade_meninos << " e seu IMC é de " << imc_me << ". Você está com" << imc_meninos << endl;
        cout << endl;
        cout << "==========================================" << endl;
        cout << endl;

        break;
        }
      case 2:{
        cout << "Digite sua idade de 6 a 15 anos: " << endl;
        cin >> idade_meninas;
        cout << "Digite seu peso: " << endl;
        cin >> peso_meninas;
        cout << "Digte sua altura: " << endl;
        cin >> altura_meninas;
        imc_ma = peso_meninas / (altura_meninas * altura_meninas);

        string imc_meninas = (idade_meninas == 6 && imc_ma >= 14.3 && imc_ma <= 16.1) ? "Peso Normal":
                             (idade_meninas == 6 && imc_ma > 16.1 && imc_ma <= 17.4) ? "Sobrepeso":
                             (idade_meninas == 6 && imc_ma > 17.4) ? "Obesidade":
                             (idade_meninas == 7 && imc_ma >= 14.9 && imc_ma <= 17.1) ? "Peso Normal":
                             (idade_meninas == 7 && imc_ma > 17.1 && imc_ma <= 18.9) ? "Sobrepeso":
                             (idade_meninas == 7 && imc_ma > 18.9) ? "Obesidade":
                             (idade_meninas == 8 && imc_ma >= 15.6 && imc_ma <= 18.1) ? "Peso Normal":
                             (idade_meninas == 8 && imc_ma > 18.1 && imc_ma <= 20.3) ? "Sobrepeso":
                             (idade_meninas == 8 && imc_ma > 20.3) ? "Obesidade":
                             (idade_meninas == 9 && imc_ma >= 16.3 && imc_ma <= 19.1) ? "Peso Normal":
                             (idade_meninas == 9 && imc_ma > 19.1 && imc_ma <= 21.7) ? "Sobrepeso":
                             (idade_meninas == 9 && imc_ma > 21.7) ? "Obesidade":
                             (idade_meninas == 10 && imc_ma >= 17 && imc_ma <= 20.1) ? "Peso Normal":
                             (idade_meninas == 10 && imc_ma > 20.1 && imc_ma <= 23.2) ? "Sobrepeso":
                             (idade_meninos == 10 && imc_ma > 23.2) ? "Obesidade":
                             (idade_meninas == 11 && imc_ma >= 17.6 && imc_ma <= 21.1) ? "Peso Normal":
                             (idade_meninas == 11 && imc_ma > 21.1 && imc_me <= 24.5) ? "Sobrepeso":
                             (idade_meninas == 11 && imc_ma > 24.5) ? "Obesidade":
                             (idade_meninas == 12 && imc_ma >= 18.3 && imc_me <= 22.1) ? "Peso Normal":
                             (idade_meninas == 12 && imc_ma > 22.1 && imc_me <= 25.9) ? "Sobrepeso":
                             (idade_meninas == 12 && imc_ma > 25.9) ? "Obesidade":
                             (idade_meninas == 13 && imc_ma >= 18.9 && imc_me <= 23) ? "Peso Normal":
                             (idade_meninas == 13 && imc_ma >= 23 && imc_me <= 27.7) ? "Sobrepeso":
                             (idade_meninas == 13 && imc_ma > 27.7) ? "Obesidade":
                             (idade_meninas == 14 && imc_ma >= 19.3 && imc_me <= 23.8) ? "Peso Normal":
                             (idade_meninas == 14 && imc_ma > 23.8 && imc_me <= 27.9) ? "Sobrepeso":
                             (idade_meninas == 14 && imc_ma > 27.9) ? "Obesidade":
                             (idade_meninas == 15 && imc_ma >= 19.6 && imc_me <= 24.2) ? "Peso Normal":
                             (idade_meninas == 15 && imc_ma > 24.2 && imc_me <= 28.8) ? "Sobrepeso":
                             (idade_meninas == 15 && imc_ma > 28.8) ? "Obesidade":
                             "Valor Inválido";

        cout << "Sua idade é " << idade_meninas << " e seu IMC é de " << imc_ma << ". Você está com " << imc_meninas << endl;
        cout << endl;
        cout << "==========================================" << endl;
        cout << endl;

        break;
        }
       default:{
          cout << "O Programa foi finalizado!!" << endl;
          cout << "==========================================" << endl;
          cout << endl;
          cout << "Criado por.: Luiz Felipe Massaneiro 31/10/2015" << endl;
          exit(0);
        }
      }

    }while(op == 1 && op == 2);

  return 0;

}
