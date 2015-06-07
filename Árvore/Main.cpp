#include "Arvore.cpp"

int main(){
	Arvore *arvore = new Arvore();

	cout << "Vazia: "<< arvore->vazia() << endl;
	arvore->inserir("5", arvore->raiz);
	arvore->inserir("7", arvore->raiz);
	arvore->inserir("6", arvore->raiz);
	cout << "Vazia: "<< arvore->vazia() << endl;
    //arvore->remover("7", arvore->raiz);arvore->remover("5", arvore->raiz);
    cout << "Vazia: "<< arvore->vazia() << endl;

    No *eita = arvore->pesquisar("5",arvore->raiz);
    if (eita == NULL){
        cout << "NULO" << endl;
    } else {
        cout << eita->item << endl;
    }
	return 0;
}
