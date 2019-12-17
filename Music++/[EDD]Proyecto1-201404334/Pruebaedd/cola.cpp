#include "cola.h"
#include "nodo.cpp"
#include <stdlib.h>
#include <ostream>
#include <iostream>

cola::cola() {
	inicio = NULL;
	fin = NULL;

}
void cola::insertar(int id) {
	nodo *nuevo = new nodo(id);
	if (inicio == NULL) {
		inicio = nuevo;
		fin = nuevo;
	}
	else {
		fin->siguiente = nuevo;
		fin = nuevo;
	}
}
void cola::mostrar() {
	nodo* aux = inicio;
	while (aux != NULL) {
		std::cout << aux->ID << std::endl;
		aux = aux->siguiente;

	}
}
void cola::eliminar() {
	inicio = inicio->siguiente;
}



