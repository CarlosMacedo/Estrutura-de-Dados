#include "Celula.h"

Celula::Celula(int valor, Celula* anterior) {
    this->valor = valor;
    this->anterior = anterior;
}

Celula* Celula::getAnterior(){
    return anterior;
}

int Celula::getValor(){
    return this->valor;
}
