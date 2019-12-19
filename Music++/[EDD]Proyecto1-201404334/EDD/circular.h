#ifndef CIRCULAR_H
#define CIRCULAR_H

#include "nodoPL.h"

using namespace std;

class Circular {
public:
	NodoPL* inicio;
	NodoPL* fin;
	Circular();
	void insertar(Cancion* cancion);
	bool estaVacia();
private:

};

#endif /* CIRCULAR_H */