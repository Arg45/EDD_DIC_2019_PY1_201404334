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
			
		}
	}
	/*
	//vacia
        if(listaColumna == null){
            inicio.setSiguienteColumna(nuevo);
            nuevo.setAnteriorColumna(inicio);
            finCol = nuevo;
        }else{ 
            //en medio y final
            NodoMatriz auxiliar = inicio;
            while(auxiliar!= null){
                //al final
                if(auxiliar.getIdColumna()< columna && auxiliar.getSiguienteColumna()==null){                    
                    nuevo.setSiguienteColumna(null);
                    nuevo.setAnteriorColumna(auxiliar);
                    auxiliar.setSiguienteColumna(nuevo);
                    finCol = nuevo;
                //en medio
                }else if(auxiliar.getIdColumna()< columna && auxiliar.getSiguienteColumna().getIdColumna()>columna){  
                    nuevo.setSiguienteColumna(auxiliar.getSiguienteColumna());
                    auxiliar.getSiguienteColumna().setAnteriorColumna(nuevo);
                    nuevo.setAnteriorColumna(auxiliar);
                    auxiliar.setSiguienteColumna(nuevo);
                }else{	
                    auxiliar = auxiliar.getSiguienteColumna();
                }
            }            
        }
	*/

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