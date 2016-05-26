// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {

    int a = 0; //4 bytes de memória
    short int b = 0; //2 bytes de memória
    long int c = 0; //8 bytes de memória, mas esse tamanho pode variar de compilador e de formato de arquitetura

    int a2 = 0;
    signed int b2 = -10;
    unsigned int c2 = -10;

    cout << sizeof(a) << "  |=======|  " << a2 << endl;
    cout << sizeof(b) << "  |=======|  " << b2 << endl;
    cout << sizeof(c) << "  |=======|  " << c2 << endl;


    return 0;
}
