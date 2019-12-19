#include "Artistas.h"
#include "artista.h"
#include <string>

Artistas::Artistas() {
	inicio = NULL;
	fin = NULL;
}
void Artistas::insertar(string nom, float rat){
	Artista* nuevo = new Artista(nom, rat);
	if (inicio == NULL) {//vacia
		inicio = fin = nuevo;
	}
	else if(nuevo->nombre<inicio->nombre){//inicio
		nuevo->siguiente = inicio;
		inicio->anterior = nuevo;
		inicio = nuevo;
	}
	else if (nuevo->nombre>fin->nombre) {//al final
		fin->siguiente = nuevo;
		nuevo->anterior = fin;
		fin = nuevo;
	}
	else {//en medio
		Artista* aux = inicio;
		while (aux != NULL) {
			if (aux->nombre < nuevo->nombre && aux->siguiente->nombre > nuevo->nombre) {
				aux->siguiente->anterior = nuevo;
				nuevo->siguiente = aux->siguiente;
				nuevo->anterior = aux;
				aux->siguiente = nuevo;
			}
		}
	}
}