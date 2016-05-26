// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Procura um valor x num vector v previamente ordenado. Retorna o
índice de uma ocorrência de x em v, se encontrar; senão, retorna -
1. Supõe que os elementos do array são comparáveis com os
operadores de comparação ( ==, < ) */

// -----------* ALGORITMO DE BUSCA BINÁRIA *-------------------------

template <class Comparable>
int binarySearch(const vector<Comparable> &v, Comparable x) {
    int left = 0, right = v.size() -1;
    while (left <= right) {

        int middle (left + right) / 2;
        if (x == v[middle]) return middle; // encontrou
        else if ( x < v[middle]) right = midlle -1;
        else left = middle +1;
    }
    return -1; // não encontrou

}
