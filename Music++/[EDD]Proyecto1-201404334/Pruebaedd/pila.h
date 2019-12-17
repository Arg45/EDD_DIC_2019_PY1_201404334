
#ifndef PILA_H
#define PILA_H
#include "nodo.h"

class Pila {
public:
	Pila();
	nodo* inicio;
	nodo* fin;
	void insertar(int id);
	void eliminar();
	void mostrar();
private:

};

#endif /* PILA_H */