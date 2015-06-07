#include "Celula.h"

Celula::Celula(int item){
    this->prox = 0;
    this->item = item;
}

int Celula::getItem(){
    return this->item;
}

void Celula::setItem(int item){
    this->item = item;
}

Celula* Celula::getProx(){
    return prox;
}

void Celula::setProx(Celula *prox){
    this->prox = prox;
}
