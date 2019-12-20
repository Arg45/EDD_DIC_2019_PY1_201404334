//cola
#include "queue.h"
#include <iostream>

using namespace std;

Cola::Cola() {
	inicio = fin = NULL;
}
void Cola::insertar(Cancion* c) {
	NodoPL* nuevo = new NodoPL(c);
	if (estaVacia()) {
		inicio = nuevo;
	}
	else {
		nuevo->siguiente = inicio;
		inicio = nuevo;
		/*
		NodoPL* aux = inicio;
		while (aux->siguiente != NULL) {
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo;
		*/
	}
}
void Cola::eliminar() {
	if (estaVacia()) {
		cout << "  La cola esta vacia." << endl;
	}
	else {
		inicio = inicio->siguiente;
	}
}
bool Cola::estaVacia() {
	return (inicio == NULL) ? true : false;
}