#include "Arvore.h"

Arvore::Arvore(){
	this->raiz = 0;
}

bool Arvore::vazia(){
	return this->raiz == 0;
}

void Arvore::inserir(string item, No* &no){
	if (no == 0){
		no = new No(item);
	} else {
		if (item > no->item){
			inserir(item, no->dir);
		} else if (item < no->item){
			inserir(item, no->esq);
		}
	}
}

No* Arvore::remover(string item, No* &no){
    if (no == 0) {
        cout << "Nao encontrado..." << endl;
    } else {
        if (item > no->item){
            remover(item, no->dir);
        } else if (item < no->item){
            remover(item, no->esq);
        } else {
            if (no->dir == NULL) {
                no = no->esq;
            } else if (no->esq == NULL) {
                no = no->dir;
            } else {
                substituir(no,no->dir);
            }
        }
    }
}

void Arvore::substituir(No* &excluir,No* &no){
    if (no->esq != NULL) {
        substituir(excluir,no->esq);
    } else {
        excluir->item = no->item;
        no = no->dir;
    }
}

No* Arvore::pesquisar(string item, No* &no){
    if (no == NULL) {
        return NULL;
    } else if (item == no->item){
        return no;
    } else if (item < no->item){
        return pesquisar(item, no->esq);
    } else {
        return pesquisar(item, no->dir);
    }

}

void Arvore::imprimir(No * &no){
	//Testando GitHub
}
