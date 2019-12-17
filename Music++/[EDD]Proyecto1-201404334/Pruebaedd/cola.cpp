#include "cola.h"
#include "nodo.h"
#include <stdlib.h>
#include <ostream>
#include <iostream>

Cola::Cola() {
	inicio = NULL;
	fin = NULL;

}
void Cola::insertar(int id) {
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
void Cola::mostrar() {
	nodo* aux = inicio;
	while (aux != NULL) {
		std::cout << aux->ID << std::endl;
		aux = aux->siguiente;

	}
}
void Cola::eliminar() {
	inicio = inicio->siguiente;
}



