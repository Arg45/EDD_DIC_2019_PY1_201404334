#include "pila.h"
#include <iostream>
#include <stdlib.h>

Pila::Pila() {
	inicio = NULL;
	fin = NULL;
}
void Pila::insertar(int id) {
	nodo* nuevo = new nodo(id);
	if (inicio == NULL) {
		inicio = nuevo;
		fin = nuevo;
	}
	else {
		nuevo->siguiente = inicio;
		inicio = nuevo;
	}
}
void Pila::mostrar() {
	nodo *aux = inicio;
	while (aux != NULL) {
		std::cout << aux->ID << std::endl;
		aux = aux->siguiente;
	}
}
void Pila::eliminar() {
	inicio = inicio->siguiente;
}


