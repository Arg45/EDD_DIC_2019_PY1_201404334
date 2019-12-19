#include "circular.h"

Circular::Circular() {
	inicio = fin = NULL;
	inicio->siguiente = inicio;
	inicio->anterior = inicio;
}
void Circular::insertar(Cancion* c) {
	NodoPL* nuevo = new NodoPL(c);
	if (estaVacia()) {
		inicio = fin = nuevo;
		nuevo->siguiente = fin;
		nuevo->anterior = inicio;
	}
	else {
		fin->siguiente = nuevo;
		nuevo->anterior = fin;
		nuevo->siguiente = inicio;
		inicio->anterior = nuevo;
		fin = nuevo;
	}
}
bool Circular::estaVacia() {
	return (inicio == NULL) ? true : false;
}