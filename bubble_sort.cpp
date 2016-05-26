// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
#include<stdlib.h>
#include<string.h>

int main() {

    int a[] = {2,3,1,5,7,8,4}, i = 0, j = i +1,aux,cont;

    for(cont = 0; cont < size(a); cont++){
        for(i = 0; i < size(a); i++) {
            if (a[i] > a[j]){
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }

        }

    }
    for(cont = 0; cont < size(a); cont++)
        cout << a[cont] << endl;



    return 0;

}
