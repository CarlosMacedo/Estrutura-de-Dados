#include <iostream>
#include "Fila.cpp"
using namespace std;

int main() {
    Fila *fila = new Fila();
    fila->enfileirar(1);
    fila->enfileirar(2);
    fila->enfileirar(3);
    fila->enfileirar(4);fila->enfileirar(4);
    cout << "Eita:: " << fila->desenfileirar() << endl;
    cout << "Eita:: " << fila->desenfileirar() << endl;

    fila->imprimir();

    cout << "-" << endl;
    fila->enfileirar(5);fila->enfileirar(6);

    cout << "Eita:: " << fila->desenfileirar() << endl;
cout << "Eita:: " << fila->desenfileirar() << endl;
cout << "Eita:: " << fila->desenfileirar() << endl;cout << "Eita:: " << fila->desenfileirar() << endl;
cout << "Eita:: " << fila->desenfileirar() << endl;


    cout << "VAZIA?" << fila->vazia() << endl;
    fila->imprimir();

    fila->enfileirar(2);
    fila->enfileirar(3);
    cout << "------------VAZIA?" << fila->vazia() << endl;
 fila->imprimir();
    return 0;
}
