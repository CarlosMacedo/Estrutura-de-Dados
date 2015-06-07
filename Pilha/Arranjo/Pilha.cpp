#include <iostream>
#include "Pilha.h"
using namespace std;


Pilha::Pilha(int tamanho){
	this->itens = new int[tamanho];
	this->topo = 0;
	this->tamanho = tamanho;
}

bool Pilha::vazia(){
	return topo == 0;
}

bool Pilha::cheia(){
	return topo == tamanho;
}

int Pilha::sizePilha(){
	return topo;
}

void Pilha::empilha(int valor){
	if (cheia())
		cout << "Como lançar exeção, pilha cheia." << endl;
	else
		itens[topo++] = valor;
}

int Pilha::desempilha(){
	if (vazia()) {
		cout << "Como lançar exeção, pilha vazia." << endl;
		return -1;
	} else {
		return itens[--topo];
	}
}

void Pilha::imprimir(){
	for (int i = 0; i < topo; i++) {
		cout << itens[i] << " ";
	}
	cout << endl;
}

