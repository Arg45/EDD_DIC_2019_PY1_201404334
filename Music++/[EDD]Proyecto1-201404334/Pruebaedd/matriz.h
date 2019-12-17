#pragma once

#ifndef MATRIZ_H
#define MATRIZ_H

#include "listaAnioMes.h"
#include "nodoO.h"

class matriz {
public:
	matriz();
	listaAnioMes *listaFilas;
	listaAnioMes *listaColumnas;
	void insertarNodo();
	bool existe(int x, int y);
	nodoO* devolverNodo();
private:

};

#endif /*MATRIZ_H */

