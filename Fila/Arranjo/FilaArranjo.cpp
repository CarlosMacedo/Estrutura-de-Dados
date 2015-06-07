#include <iostream>
using namespace std;

class Fila {
	public:
		Fila(int);
		void adicionar(int);
		int remover();
		bool vazia();
		bool cheia();
		void imprimir();
	//private:
		int inicio;
		int fim;
		int capacidade;
		int *fila;
};

Fila::Fila(int capacidade){
	this->capacidade = capacidade+1;
	this->fila = new int[capacidade];
}

void Fila::adicionar(int valor){
	if (cheia()){
		cout << "Cheia" << endl;
	} else {
		fila[fim] = valor;
		fim = ++fim % capacidade;	
	}

}

int Fila::remover(){
	int valor;
	
	if (vazia()) {
		cout << "Vazia" << endl;
	} else {
		valor = fila[inicio];
		inicio = ++inicio % capacidade;
	}

	return valor;	
}

bool Fila::vazia(){
	return fim == inicio;
}

bool Fila::cheia(){
	return (fim + 1)%capacidade == inicio;
}

void Fila::imprimir(){
	for (int i = inicio; i != fim && !vazia(); i = ++i % capacidade) {
		cout << ":: " << fila[i] << endl;
	}
}

int main(){
	Fila *fila = new Fila(3);
	
	fila->adicionar(1);fila->adicionar(2);fila->adicionar(3);
	fila->remover();
	fila->adicionar(4);
	
	fila->imprimir();
	
	return 0;
}
