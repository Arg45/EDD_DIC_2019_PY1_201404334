//lista doble
#include "shuffle.h"
#include <iostream>
#include <time.h>

using namespace std;

Doble::Doble() {
	inicio = fin = NULL;
	tam = 0;
}
void Doble::insertar(Cancion* c) {
	NodoPL* nuevo = new NodoPL(c);

	tam++;
}
void random() {
	srand(time(NULL));
}
bool Doble::estaVacia() {
	return (inicio == NULL) ? true : false;
}