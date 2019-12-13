#pragma once

#include "Canciones.h"
#include <stdlib.h>

using namespace std;

Canciones::Canciones() {
	inicio = NULL;
	fin = NULL;
}
void Canciones::insertarAlInicio(string nom, double rat) {
	cancion* nuevo = new cancion();
	nuevo->nombre = nom;
	nuevo->rating = rat;
	if (estaVacia) {
		inicio = fin = nuevo;
	}
	else {
		nuevo->siguiente = inicio;
		inicio = nuevo;
	}	
}
void Canciones::insertarAlFinal(string nom, double rat) {
	cancion* nuevo = new cancion();
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
void Canciones::insertarIndice(string nom, double rat, int index) {

}
bool Canciones::estaVacia() {
	return (inicio == NULL)? true:false;
}
