#ifndef CELULA_H
#define CELULA_H

class Celula {
    public:
        Celula(int, Celula*);
        Celula* getAnterior();
        int getValor();
    private:
        int valor;
		Celula* anterior;
};
#endif // CELULA_H
