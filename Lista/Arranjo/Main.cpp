#include <iostream>
#include "Arranjo.cpp"
using namespace std;

int main() {
    Lista *lista = new Lista(10);

    lista->inserir(0);lista->inserir(1);lista->inserir(2);
    lista->imprimir();

    cout << "-" << endl;

    lista->inserir(55,3);lista->inserir(555,3);
    lista->imprimir();
    cout << ":: " << lista->pesquisar(555) << endl;
    lista->imprimir();

    return 0;
}
