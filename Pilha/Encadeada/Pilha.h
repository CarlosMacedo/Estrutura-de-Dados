#ifndef PILHA_H
#define PILHA_H
#include "Celula.cpp"
class Pilha {
    public:
        Pilha();
        bool vazia();
        void empilha(int);
        int desempilha();
        int tamanho();
        void imprimir();
    private:
        int size;
        Celula* topo;
};
#endif // PILHA_H
