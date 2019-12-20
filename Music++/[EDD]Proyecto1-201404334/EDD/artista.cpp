#include "artista.h"

using namespace std;

Artista::Artista(string nom, float rat) {
	nombre = nom;
	rating = rat;
	siguiente = NULL;
	anterior = NULL;
}
Album* Artista::existe(string c) {
	Artista* aux = inicio;
	while (aux != NULL) {
		if (aux->nombre == c) {
			return aux;
		}
		aux = aux->siguiente;
	}
	return aux;
}