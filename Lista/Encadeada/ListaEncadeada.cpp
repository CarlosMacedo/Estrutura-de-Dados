#include <iostream>
#include "ListaEncadeada.h"
using namespace std;

Lista::Lista(){
    this->inicio = this->fim = new Celula(0);
    this->tamanho = 0;
}

void Lista::inserir(int item){
    Celula *celula = new Celula(item);
    this->fim->setProx(celula);
    this->fim = celula;
    this->tamanho++;
}

void Lista::inserir(int item, int indice){
    if (indice < 0 || indice > tamanho){
        cout << "O indice deve está entre 0 e " << tamanho << endl;
    } else {
        Celula *celula = new Celula(item);
        Celula *prt = this->inicio;

        for (int i = 0; i < indice; i++)
            prt = prt->getProx();

        celula->setProx(prt->getProx());
        prt->setProx(celula);

        if (indice == tamanho)//Se adicionou no final
            fim = celula;

        tamanho++;
    }

}

int Lista::remover(int indice){
    if (indice < 0 || indice >= tamanho){
        cout << "O indice deve está entre 0 e " << tamanho-1 << endl;
    } else {
        Celula *prt = this->inicio;
        int item;

        for (int i = 0; i < indice; i++)
            prt = prt->getProx();

        Celula *deletar = prt->getProx();
        prt->setProx(deletar->getProx()) ;

        if (indice == tamanho-1)//Se removeu no final
            fim = prt;

        item = deletar->getItem();
        delete deletar;
        tamanho--;
        return item;
    }
}

Celula* Lista::pesquisar(int item){
    Celula *prt = this->inicio;

    while (prt->getProx() != 0) {
        if ( prt->getProx()->getItem() == item)
            return prt->getProx();
        prt = prt->getProx();
    }
    return NULL;
}

void Lista::imprimir(){
    Celula *print = this->inicio;
    while (print->getProx() != 0) {
        cout << print->getProx()->getItem() << " ";
        print = print->getProx();
    }
    cout << endl;
}

bool Lista::vazia(){
    return this->inicio->getProx() == 0;
}
