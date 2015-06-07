#ifndef LISTAENCADEADA_H_INCLUDED
#define LISTAENCADEADA_H_INCLUDED
#include "Celula.cpp"

class Lista {//Lista de inteiros
    public:
        Lista();
        void inserir(int);//Inserir final da lista
        void inserir(int, int);//Inserir no indice
        int remover(int);//remover pelo indice
        Celula* pesquisar(int); //pesquisar pelo item e retornar o indice
        void imprimir();
        bool vazia();
    private:
        Celula *inicio, *fim;
        int tamanho;
};

#endif // LISTAENCADEADA_H_INCLUDED
