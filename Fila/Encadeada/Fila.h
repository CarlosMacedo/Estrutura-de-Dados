#ifndef Fila_h
#define Fila_h

#include "Celula.h"

class Fila {
    public:
        Fila();
        bool vazia();
        void enfileirar(int);
        int desenfileirar();
        void imprimir();
    private:
        Celula *inicio, *fim;
        int tamanho;
};


#endif // Fila_h
