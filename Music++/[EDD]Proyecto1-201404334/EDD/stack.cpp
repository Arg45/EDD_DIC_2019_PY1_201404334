//pila
#include "stack.h"
#include <iostream>

using namespace std;

Pila::Pila() {
	inicio = fin = NULL;
	inicio->siguiente = NULL;
}
void Pila::insertar(Cancion* c) {
	NodoPL* nuevo = new NodoPL(c);
	if (estaVacia()) {
		inicio = nuevo;
		inicio->siguiente = NULL;
	}
	else {
		nuevo->siguiente = inicio;
		inicio = nuevo;
	}
}
void Pila::eliminar() {
	if(estaVacia()) {
		cout << "  La cola esta vacia." << endl;
	}
	else {
	inicio = inicio->siguiente;
	}
}
bool Pila::estaVacia() {
	return (inicio == NULL) ? true : false;
}