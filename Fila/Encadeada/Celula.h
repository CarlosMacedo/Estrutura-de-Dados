#ifndef Celula_h
#define Celula_h

class Celula {
    public:
        Celula(int);
        void setProx(Celula*);
        Celula* getProx();
		int getItem();
    private:
        Celula *prox;
        int item;
};


#endif // Celula_h
