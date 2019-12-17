#pragma once

#include "listaAnioMes.h"
#include "nodoAM.h"
#include <stdlib.h>

listaAnioMes::listaAnioMes() {
	//nombre = "";
	inicio = NULL;
	fin = NULL;
}
void listaAnioMes::insertarInicio() {
	nodoAM *nuevo = new nodoAM();
	if (estaVacia()) {
		inicio = fin = nuevo;
	}
	else {
		nuevo->siguiente = inicio;
		inicio = nuevo;
	}
}
bool listaAnioMes::estaVacia() {
	return (inicio == NULL) ? true : false;
}
bool listaAnioMes::existe(int pos) {
	nodoAM* aux = inicio;
	while (aux->siguiente == NULL) {
		if (aux->posicion == pos) {
			return true;
		}
		else {
			aux = aux->siguiente;
		}
	}
	return false;
}
nodoAM* listaAnioMes::devolverNodo(int pos) {
	nodoAM* aux = inicio;
	while (aux->siguiente == NULL) {
		if (aux->posicion == pos) {
			return aux;
		}
		else {
			aux = aux->siguiente;
		}
	}
	return false;
}