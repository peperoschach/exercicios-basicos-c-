// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
#include<iostream>
#include<linux/a.out.h>
using namespace std;

void foo()
{


}

void bar(int x)
{


}

int main () {

    std::thread first(foo);
    std::thread second(bar,0);

    std::cout << "Executando foo e bar agora... \n";


    first.join();
    second.join();

    std::cout<< "foo e bar completos \n";

    return 0;

}
