#include <iostream>
using namespace std;

class Lista {//Lista de inteiros
    public:
        Lista(int);
        void inserir(int);//Inserir final da lista
        void inserir(int, int);//Inserir no indice
        int pop(); //remover ultimo
        int remover(int);//remover pelo indice
        int pesquisar(int); //pesquisar pelo item e retornar o indice
        void imprimir();
        bool cheia();
        bool vazia();
    private:
        int* lista;
        int ultimo, tamanho;
};

Lista::Lista(int tamanho){
    this->ultimo = 0;
    this->lista = new int[tamanho];
    this->tamanho = tamanho;
}

void Lista::inserir(int valor){
    if (cheia()){
        cout << "Está cheia" << endl;
    } else {
        lista[ultimo++] = valor;
    }
}

void Lista::inserir(int valor, int indice){
    if (cheia()){
        cout << "Está cheia" << endl;
    } if (indice > ultimo || indice < 0) {
        cout << "Indice errado, ele deve ser entre 0 e "<< ultimo << endl;
    } else {
        for(int i = ultimo-1; i >= indice; i--) {
            lista[i+1] = lista[i];
        }
        lista[indice] = valor;
        ultimo++;
    }
}

int Lista::pop(){
    if (vazia()){
        cout << "Está vazia" << endl;
    } else {
        return lista[--ultimo];
    }
}

int Lista::remover(int indice){
    if (vazia()){
        cout << "Está vazia" << endl;
    } if (indice >= ultimo || indice < 0) {
        cout << "Indice errado, ele deve ser entre 0 e "<< ultimo-1 << endl;
    } else {
        int valor = lista[indice];

        for(int i = indice; i < ultimo -1; i++) {
            lista[i] = lista[i+1];
        }

        ultimo--;
        return valor;
    }
}

int Lista::pesquisar(int item){
    for (int i = 0; i < ultimo; i++) {
        if (lista[i] == item)
            return i;
    }
    return -1;
}

void Lista::imprimir(){
    for (int i = 0; i < ultimo; i++) {
        cout << " " << lista[i];
    }
    cout << endl;
}

bool Lista::cheia(){
    return ultimo == tamanho;
}

bool Lista::vazia(){
    return ultimo == 0;
}
