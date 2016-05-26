// Luiz Felipe Massaneiro - "Compartilhe o conhecimento"
/* Procura um valor x num vetor v. Retorna o índice da primeira
ocorrência de x em v, se encontrar; senão, retorna -1. Supõe que os
elementos do array são comparáveis com o operador de igualdade ( == )
*/


//---------* ALGORITMO DE BUSCA SEQUENCIAL *--------------------

template <class Comparable>
int sequentialSearch(const vector<Comparable> &v, Comparable x) {
    for(int i = 0; i < v.size(); i++)
        if (v[i] == x)
            return i; // encontrou

    return -1; // não encontrou
}
