#ifndef CELULA_H_INCLUDED
#define CELULA_H_INCLUDED
class Celula {
    public:
        Celula(int);
        int getItem();
        void setItem(int);
        Celula* getProx();
        void setProx(Celula*);
    private:
        int item;
        Celula* prox;
};
#endif // CELULA_H_INCLUDED
