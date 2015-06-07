#include <iostream>
#include "Celula.h"

Celula::Celula(int item){
    this->prox = 0;
    this->item = item;
}

void Celula::setProx(Celula* c){
    this->prox = c;
}

Celula* Celula::getProx(){
    return this->prox;
}

int Celula::getItem(){
    return this->item;
}
