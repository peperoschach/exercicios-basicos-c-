// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Este programa calcula a média, mediana e a moda de 99 valores
*/

#include<iostream>

using std::cout;
using std::endl;
using std::ios;

#include<iomanip>

using std::setw;
using std::setiosflags;
using std::setprecision;

void mean(const int [], int);
void median(int[], int);
void mode(int[], int[], int);
void bubbleSort(int[], int);
void printArray(const int[], int);

int main()
{
    const int responseSize = 99;
    int frequency[10] = { 0 },
    response[ responseSize ] =
    { 6, 7,  8,  9,  8,  7,  8,  9,  8,  9,
      7, 8,  9,  5,  9,  8,  7,  8,  7,  8,
      6, 7,  8,  9,  3,  9,  8,  7,  8,  7,
      7, 8,  9,  8,  9,  8,  9,  7,  8,  9,
      6, 7,  8,  7,  8,  7,  9,  8,  9,  2,
      7, 8,  9,  8,  9,  8,  9,  7,  5,  3,
      5, 6,  7,  2,  5,  3,  9,  4,  6,  4,
      7, 8,  9,  6,  8,  7,  8,  9,  7,  8,
      7, 4,  4,  2,  5,  3,  8,  7,  5,  6,
      4, 5,  6,  1,  6,  5,  7,  8,  7};

    mean(response, responseSize);
    median(response, responseSize);
    mode(frequency, response, responseSize);

    return 0;

}

void mean(const int answer[], int arraySize)
{
    int total = 0;

    cout<<"********\n Média \n*******\n";

    for(int j = 0; j < arraySize; j++)
        total += answer[j];

    cout << "A média é valor médio dos itens de \n"
         << "dados. A média é igual a soma de todos os\n"
         << "itens de dados dividido pelo número de\n"
         << "itens de dados de (" << arraySize
         << "). O valor médio para\n este caso é: "
         << total << " / " << arraySize << " = "
         << setiosflags(ios::fixed | ios::showpoint)
         << setprecision(4)
         << static_cast< double > (total) / arraySize << "\n\n";

}

void median(int answer[], int size)
{
    cout << "\n*******\n Mediana \n*******\n"
         << "O array de respostas não ordenado é ";

    printArray(answer, size);
    bubbleSort(answer, size);
    cout << "\n\nO Array ordenado é ";
    printArray(answer, size);
    cout << "\n\nA mediana é o elemento " << size /2
         << "do\narray ordenado de " << size
         << " elementos, \nPara este caso de median é "
         << answer[ size / 2 ] << "\n\n";

}

void mode(int freq[], int answer[], int size)
{
    int rating, largest = 0, modeValue = 0;

    cout << "\n*******\n Moda \n*******\n";

    for(rating = 1; rating <= 9; rating++)
        freq[rating] = 0;

    for(int j = 0; j < size; j++)
        ++freq[ answer[j] ];

    cout << "Resposta " << setw(11) << "Frequência"
         << setw(19) << "Histograma\n\n" << setw(55)
         << "1     1     2     2\n" << setw(60)
         << "5     0     5     0     5\n\n";

    for(rating = 1; rating <= 9; rating++) {
        cout << setw(8) << rating << setw(11)
             << freq[rating] << "                ";

        if (freq[rating] > largest) {
            largest = freq[rating];
            modeValue = rating;

        }

    for(int h = 1; h <= freq[rating]; h++)
        cout << '*';

    cout << "\n";

    }

    cout << "A moda é valor mais frequente.\n"
         << "Para este caso a moda é " << modeValue
         << " que ocorreu " << largest << " vezes." << endl;

}

void bubbleSort (int a[], int size)
{
    int hold;

    for( int pass = 1; pass < size; pass++)

        for(int j = 0; j < size -1; j++)

            if (a[j] > a[j+1]) {
                hold = a [j];
                a[j] = a[j+1];
                a[j+1] = hold;
            }


}

void printArray(const int a[], int size)
{
    for(int j = 0; j < size; j++) {
        if(j % 20 == 0)
            cout << endl;

        cout << setw(2) << a[j];

    }


}
