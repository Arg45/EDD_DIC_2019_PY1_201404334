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
void Albumes::insertar(string nombre, string mes, string anio, float rating){
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
	/*
	 Insercion de filas en 2do recorrido 
	  Columna-Anios
	    vacia 
	     se utiliza abajo-arriba porque estas buscando en filas!!!!
	*/
	//vacia
	if (auxC->abajo == NULL){
		nuevo->arriba = auxC;
		auxC->abajo = nuevo;
	}
	else {
		if (mes < auxC->abajo->mes) {//al inicio
			auxC->abajo->arriba = nuevo;
			nuevo->abajo = auxC->abajo;
			auxC->abajo = nuevo;
			nuevo->arriba = auxC;
		}
		else {
			Album* cabeceraC = auxC->abajo;
			while (cabeceraC != NULL) {
				if (cabeceraC->mes < mes && cabeceraC->abajo == NULL) {//al final
					cabeceraC->abajo = nuevo;
					nuevo->arriba = cabeceraC;
					break;
				}
				else if (cabeceraC->mes < mes && cabeceraC->abajo->mes > mes) {//en medio
					cabeceraC->abajo->arriba = nuevo;
					nuevo->abajo = cabeceraC->abajo;
					nuevo->arriba = cabeceraC;
					cabeceraC->abajo = nuevo;
					break;
				}
				else if (cabeceraC->mes == mes) {//mas de un album en el mismo mes
					while (cabeceraC->z != NULL) {
						cabeceraC = cabeceraC->z;
					}
					cabeceraC->z = nuevo;
					break;
				}
				else {
					cabeceraC = cabeceraC->abajo;
				}
			}
		}
	}

	/*
	 Insercion de anios en 2do recorrido
	  Fila-Mes
		vacia
		 se utiliza derecha-izquierda porque estas buscando en anios!!!!
	*/
	//vacia
	if (auxF->derecha == NULL) {
		nuevo->izquierda = auxF;
		auxF->derecha= nuevo;
	}
	else {
		if (anio < auxF->derecha->anio) {//al inicio
			auxF->derecha->izquierda = nuevo;
			nuevo->derecha = auxF->derecha;
			auxF->derecha = nuevo;
			nuevo->izquierda = auxF;
		}
		else {
			Album* cabeceraF = auxF->derecha;
			while (cabeceraF != NULL) {
				if (cabeceraF->anio < mes && cabeceraF->derecha == NULL) {//al final
					cabeceraF->derecha = nuevo;
					nuevo->izquierda = cabeceraF;
					break;
				}
				else if (cabeceraF->anio < anio && cabeceraF->derecha->anio > anio) {//en medio
					cabeceraF->derecha->izquierda = nuevo;
					nuevo->derecha = cabeceraF->derecha;
					nuevo->izquierda = cabeceraF;
					cabeceraF->derecha = nuevo;
					break;
				}
				else if (cabeceraF->anio == anio) {//mas de un album en el mismo anio
					break;
				}
				else {
					cabeceraF = cabeceraF->derecha;
				}
			}
		}
	}
}

void Albumes::insertarAnio(string anio) {
	Album* nuevo = new Album("", "", anio, 0.0);
	//vacia
	if (raiz->derecha == NULL) {
		raiz->derecha = nuevo;
		nuevo->izquierda = raiz;
	}
	else {//al inicio
		if (raiz->derecha->anio > anio) {
			raiz->derecha->izquierda = nuevo;
			nuevo->derecha = raiz->derecha;
			nuevo->izquierda = raiz;
			raiz->derecha = nuevo;
		}
		else {
			Album* aux = raiz->derecha;
			while (aux != NULL) {
				if (aux->anio < anio && aux->derecha == NULL) {//al final
					nuevo->derecha = NULL;
					nuevo->izquierda = aux;
					aux->derecha = nuevo;
					break;
				}
				else if (aux->anio<anio && aux->derecha->anio>anio) {//al medio
					nuevo->derecha = aux->derecha;
					aux->derecha->izquierda = nuevo;
					nuevo->izquierda = aux;
					aux->derecha = nuevo;
					break;
				}
				else if (aux->anio==anio) {//mas de un album en el mismo anio
					/*while (aux->z != NULL) {
						aux = aux->z;
					}
					aux->z = nuevo;*/
					break;
				}
				else {
					aux = aux->derecha;
				}
			}
		}
	}
}
void Albumes::insertarMes(string mes) {
	Album* nuevo = new Album("", mes,"", 0.0);
	//vacia
	if (raiz->abajo == NULL) {
		raiz->abajo= nuevo;
		nuevo->arriba = raiz;
	}
	else {//al inicio
		if (raiz->abajo->mes>mes) {
			raiz->abajo->arriba = nuevo;
			nuevo->abajo = raiz->abajo;
			raiz->abajo = nuevo;
			nuevo->arriba = raiz;

		}
		else {
			Album* aux = raiz->abajo;
			while (aux != NULL) {
				if (aux->mes < mes && aux->abajo == NULL) {//al final
					nuevo->abajo = NULL;
					nuevo->arriba = aux;
					aux->abajo = nuevo;
					break;
				}
				else if (aux->mes<mes && aux->abajo->mes>mes) {//al medio
					nuevo->abajo = aux->abajo;
					aux->abajo->arriba = nuevo;
					nuevo->arriba = aux;
					aux->abajo = nuevo;
					break;
				}
				else if (aux->mes == mes) {//mas de un album en el mismo mes
					/*while (aux->z != NULL) {
						aux = aux->z;
					}
					aux->z = nuevo;*/
					break;
				}
				else {
					aux = aux->abajo;
				}
			}
		}
	}
}

Album* Albumes::obtenerColumna(string anio) {
	Album* aux = raiz->derecha;
	while (aux!=NULL) {
		if (aux->anio == anio) {
			return aux;
		}
		aux = aux->derecha;
	}
	return aux;
}
Album* Albumes::obtenerFila(string mes) {
	Album* aux = raiz->abajo;
	while (aux != NULL) {
		if (aux->mes == mes) {
			return aux;
		}
		aux = aux->abajo;
	}
	return aux;
}