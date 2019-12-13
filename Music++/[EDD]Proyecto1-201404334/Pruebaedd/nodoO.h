#ifndef NODOO_H
#define NODOO_H

#include"listaAnioMes.h"

#include <string>

using namespace std;

class nodoO {
public:
	string nombre;
	int fila;
	int columna;
	nodoO* derecha;
	nodoO* izquierda;
	nodoO* arriba;
	nodoO* abajo;
	listaAnioMes* arriba;
	listaAnioMes* izquierda;
	nodoO();
	nodoO(int fil, int col, string nom);
private:

};

#endif /* NODOO_H */

