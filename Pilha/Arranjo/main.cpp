#include <iostream>
#include "Pilha.cpp"
using namespace std;

int main() {
	int size = 5;
	Pilha pilha(size);

	for (int i = 0; i < size; i++) {
		pilha.empilha(i);
	}
	pilha.empilha(1);
cout << "Desempilha" <<	pilha.desempilha() << endl;
	pilha.empilha(1);
	cout << "Pilha vazia: "<< pilha.vazia() << endl;
	pilha.imprimir();
	cout << "cheiua" << pilha.cheia() << endl;
	cout << "size" << pilha.sizePilha() << endl;
	for (int i = 0; i < size; i++) {
		pilha.desempilha();
	}
		cout << "size" << pilha.sizePilha() << endl;
		cout << "cheiua" << pilha.cheia() << endl;
		cout << "Pilha vazia: "<< pilha.vazia() << endl;

	return 0;
}
