#include "No.cpp"

class Arvore {
	public:
		Arvore();
		bool vazia();
		void inserir(string, No*&);
		No* remover(string, No*&);
		No* pesquisar(string, No*&);
		void imprimir(No*&);
        void substituir(No* &,No* &);
		No* raiz;
};
