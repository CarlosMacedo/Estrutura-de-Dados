#include <iostream>
#include "Pilha.cpp"
using namespace std;

int main(){
    Pilha pilha;


	pilha.empilha(1);
	pilha.empilha(2);
    pilha.empilha(3);
    pilha.empilha(4);


	pilha.imprimir();

    cout << pilha.tamanho() << "|" << pilha.vazia() << endl;



        pilha.desempilha();
        pilha.desempilha();pilha.desempilha();
        pilha.desempilha();pilha.desempilha();




        cout << "HAHAHA" << endl;
    cout << pilha.tamanho() << "|" << pilha.vazia() << endl;
    pilha.imprimir();
    return 0;
}
