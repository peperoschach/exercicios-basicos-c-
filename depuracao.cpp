// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/**/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {

    cout << "Digite um número entre 1 e 3: ";
    int num = 0;
    cin >> num;


    if(num == 1) {
        for(int i = 0; i < 5; i++){
            cout << "O valor da instrução FOR é igual: " << i << endl;
        }
    } else {
        if(num == 2) {
            int i2 = 0;
            while(i2 < 5) {
                i2++;
                cout << "O valor da variável i2 utilizada\n"
                     << "na instrução WHILE é igual: " << i2 << endl;

            }

        } else {
            if(num == 3 ) {
                int i3 = 0;
                do {
                    i3++;
                    cout << "O valor da variável i3 utilizada\n"
                     << "na instrução DO WHILE é igual: " << i3 << endl;

                } while(i3 < 5);

            }
        }

    }
    if (num != 1 | num != 2 | num != 3){
                cout << "O programa se encerrou!" << endl;

            }

    return 0;

}
