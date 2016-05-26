// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
// MaiStr.cpp
// Ilustra outras funções de string
#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

int main (){

    // Declara e inicializa uma variável do tipo string
    string nome = "Luiz Massaneiro";
    //Exibe.cout << "Meu nome = " << nome << "\n";
    // Declara outra string
    string sobreNome;
    // Acessa substring que começa na posição 9 e tem comprimento 5
    sobreNome = nome.substr(5, 5);
    // Exibe sobrenome
    cout << "Meu sobrenome = " << sobreNome << "\n";

} // Fim de main()
