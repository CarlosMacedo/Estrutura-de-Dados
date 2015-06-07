#include <iostream>
#include "Fila.h"
#include "Celula.cpp"
using namespace std;

Fila::Fila(){
    fim = inicio =  new Celula(0);
    tamanho = 0;
}

bool Fila::vazia(){
    return tamanho == 0 ||
           this->fim == this->inicio ||
           this->inicio->getProx() == 0;
}

void Fila::enfileirar(int item){
    Celula *celula = new Celula(item);
    this->fim->setProx(celula);
    this->fim = celula;
    tamanho++;
}

int Fila::desenfileirar(){
    if (!vazia()){
        Celula* celulaPega = this->inicio->getProx();
        int item = celulaPega->getItem();
        this->inicio->setProx(celulaPega->getProx());
        tamanho--;

        if (this->inicio->getProx() == 0)//Evitar erro do null
            fim = inicio;

        delete celulaPega;
        return item;
    } else {
        return 0;
    }

}

void Fila::imprimir(){
    Celula* pecorrer = inicio;
    int tamanhoAux = tamanho;
    while (tamanhoAux != 0) {
        cout << pecorrer->getProx()->getItem() << endl;
        pecorrer = pecorrer->getProx();
        tamanhoAux--;
    }
}
