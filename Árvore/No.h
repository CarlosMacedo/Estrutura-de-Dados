#include <iostream>
using namespace std;

class No {
	public:
		No(string item);

		string item;
		No* esq;
		No* dir;
};
