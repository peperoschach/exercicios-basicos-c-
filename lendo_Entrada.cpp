// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/*Este exemplo mostra como ler entrada do usuário usando
  o método getline da classe istream. Veja a assinatura que
  usaremos:

  istream& getline(char* s, streamsize n);

  Aqui s é um ponteiro para uma string estilo C que
  receberá a linha lida e n é a quantidade de bytes que
  poderão ser lidos. A linha é encerrada ao pressionar
  Enter.
*/

#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {

    char nome[100], cidade[50];

    cout << "Informe seu nome: "; // saída mensagem
    cin.getline(nome, sizeof(nome)); // entrada do dado e a leitura

    cout << "Informe sua cidade: ";
    cin.getline(cidade, sizeof(cidade));

    cout << "Seu nome é: " << nome << "\n";
    cout << "Sua cidade é: " << cidade << "\n\n";





    return 0;

}
