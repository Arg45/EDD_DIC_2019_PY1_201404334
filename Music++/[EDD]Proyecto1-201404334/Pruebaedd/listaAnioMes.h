#ifndef LISTAANIOMES_H
#define LISTAANIOMES_H

#include "nodoO.h"
#include "nodoAM.h"
#include <string>

using namespace std;

class listaAnioMes {
public:
	string nombre;
	nodoAM* d;
	nodoAM* inicio;
	nodoAM* fin;
	listaAnioMes();
	void insertarInicio();
	void insertarFinal();
	void insertarIndice();
	nodoAM* devolverNodo(int pos);
	bool estaVacia();
	bool existe(int pos);
private:

};

#endif /* LISTAANIOMES_H */

