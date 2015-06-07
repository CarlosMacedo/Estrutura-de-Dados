#include <iostream>
#include <stdexcept>
#include "Pilha.h"
using namespace std;

Pilha::Pilha() {
    topo = 0;
    size = 0;
}

bool Pilha::vazia() {
    return size == 0;
}

void Pilha::empilha(int valor) {
    Celula *celula = new Celula(valor, topo);
    topo = celula;
    size++;
}

int Pilha::desempilha() throw (runtime_error) {
    if (vazia()) {
        throw runtime_error("A pilha está vazia!");
    } else {
        int valor = topo->getValor();

        Celula *apagar = topo;
        topo = topo->getAnterior();

        delete apagar;
        size--;
        return valor;
    }
}

int Pilha::tamanho() {
    return size;
}

void Pilha::imprimir() {
    Celula *impressora = topo;

    while (impressora != 0) {
        cout << impressora->getValor() << " ";
        impressora = impressora->getAnterior();
    }
    cout << endl;
}
