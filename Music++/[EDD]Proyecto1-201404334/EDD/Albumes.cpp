#pragma once

#include "Albumes.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Albumes::Albumes() {
	raiz = new Album("","","",0.0);
	/*
	Album* columnas = new Album("", "", "anios", 0.0);
	raiz->derecha = columnas;
	columnas->izquierda = raiz;
	Album* filas = new Album("", "mes", "", 0.0);
	raiz->abajo = filas;
	filas->arriba = raiz;
	*/
}
void Albumes::insertarnodo(string nombre, string mes, string anio, float rating){
	Album* nuevo = new Album(nombre, mes, anio, rating);
	if (obtenerColumna(anio) == NULL) {
		insertarAnio(anio);
	}
	else {
		cout << " Columna existe " << endl;
	}
	if (obtenerFila(mes) == NULL) {
		insertarMes(mes);
	}
	else {
		cout << " Fila existe " << endl;
	}
	insertarAlbum(nombre, mes, anio, rating);

}
void Albumes::insertarAlbum(string nombre, string mes, string anio, float rating) {
	Album* auxC = obtenerColumna(anio);
	Album* auxF = obtenerFila(mes);
	Album* nuevo = new Album(nombre, mes, anio, rating);

	//Insercion en 2do recorrido 
	// Columna
	//   vacia 
	if () {
	
	}
}

void Albumes::insertarAnio(string anio) {
	Album* listaAnio = raiz;
	Album* nuevo = new Album("", "", anio, 0.0);

	if (listaAnio == NULL) {
		raiz->derecha = nuevo;
		nuevo->izquierda = raiz;
	}
	else {
		Album* aux = raiz;
		while (aux != NULL) {
			if (aux->nombre<anio && aux->derecha==NULL) {
				nuevo->derecha = NULL;
				nuevo->izquierda = aux;
				aux->derecha = nuevo;
			}
			else if (aux->nombre<anio && aux->derecha->nombre>anio) {
				nuevo->derecha = aux->derecha;
				aux->derecha = nuevo;
				nuevo->izquierda = aux;
				aux->derecha = nuevo;
			}
			else {
				aux = aux->derecha;
			}
		}
	}
}
void Albumes::insertarMes(string mes) {
	Album* listames = raiz;
	Album* nuevo = new Album("", mes,"", 0.0);
	if (listames == NULL) {
		raiz->abajo= nuevo;
		nuevo->arriba = raiz;
	}
	else {
		Album* aux = raiz;
		while (aux != NULL) {
			if (aux->nombre < mes && aux->abajo == NULL) {
				nuevo->abajo = NULL;
				nuevo->arriba = aux;
				aux->abajo = nuevo;
			}
			else if (aux->nombre<mes && aux->abajo->nombre>mes) {
				nuevo->abajo = aux->abajo;
				aux->abajo = nuevo;
				nuevo->arriba = aux;
				aux->abajo = nuevo;
			}
			else {
				aux = aux->abajo;
			}
		}
	}
}

Album* Albumes::obtenerColumna(string anio) {
	Album* aux = raiz;
	while (aux!=NULL) {
		if (aux->nombre == anio) {
			return aux;
		}
		aux = aux->derecha;
	}
	return aux;
}
Album* Albumes::obtenerFila(string mes) {
	Album* aux = raiz;
	while (aux != NULL) {
		if (aux->nombre == mes) {
			return aux;
		}
		aux = aux->abajo;
	}
	return aux;
}