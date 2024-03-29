#pragma once

#include "Canciones.h"
#include <stdlib.h>

using namespace std;

Canciones::Canciones() {
	inicio = NULL;
	fin = NULL;
}
//la lista de canciones no tiene orden!
void Canciones::insertar(string nom, float rat) {
	Cancion* nuevo = new Cancion(nom, rat);
	if (estaVacia()) {
		inicio = fin = nuevo;
	}
	else {
		nuevo->siguiente = inicio;
		inicio = nuevo;
	}
}
void Canciones::insertarAlInicio(string nom, float rat) {
	Cancion* nuevo = new Cancion(nom,rat);
	//nuevo->nombre = nom;
	//nuevo->rating = rat;
	if (estaVacia()) {
		inicio = fin = nuevo;
	}
	else {
		nuevo->siguiente = inicio;
		inicio = nuevo;
	}
}
void Canciones::insertarAlFinal(string nom, float rat) {
	Cancion* nuevo = new Cancion();
	nuevo->nombre = nom;
	nuevo->rating = rat;
	if (estaVacia()) {
		inicio = fin = nuevo;
	}
	else {
		fin->siguiente = nuevo;
		fin = nuevo;
	}
}
Cancion* Canciones::existe(string c) {
	Cancion* aux = inicio;
	while (aux != NULL) {
		if (aux->nombre==c) {
			return aux;
		}
		aux = aux->siguiente;
	}
	return aux;
}
bool Canciones::estaVacia() {
	return (inicio == NULL) ? true : false;
}
