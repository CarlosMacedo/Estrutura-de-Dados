#ifndef PILHA_H
#define PILHA_H

class Pilha {
	public:
		Pilha(int);
		bool vazia();
		bool cheia();
		int sizePilha();
		void empilha(int);
		int desempilha();
		void imprimir();
	private:
		int topo;
		int* itens;
		int tamanho;
};
#endif // PILHA_H
