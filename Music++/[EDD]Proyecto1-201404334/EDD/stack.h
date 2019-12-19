//pila
#ifndef STACK_H
#define STACK_H

#include "nodoPL.h"

using namespace std;

class Pila {
public:
	NodoPL* inicio;
	NodoPL* fin;
	Pila();
	void insertar(Cancion* cancion);
	void eliminar();
	bool estaVacia();
private:

};

#endif /* STACK_H */