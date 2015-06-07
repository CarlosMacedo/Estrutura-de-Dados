#include <iostream>
#include "ListaEncadeada.cpp"
using namespace std;

int main() {
    Lista *lista = new Lista();

lista->inserir(0);lista->inserir(1);
    lista->remover(1);lista->remover(0);

    lista->inserir(2);lista->inserir(3);

    lista->imprimir();
    return 0;
}
