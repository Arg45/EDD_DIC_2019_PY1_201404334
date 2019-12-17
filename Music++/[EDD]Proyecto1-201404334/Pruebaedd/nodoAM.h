#ifndef NODOAM_H
#define NODOAM_H

//#include "listaAnioMes.h"
#include "nodoO.h"
#include <string>

using namespace std;

class nodoAM {
public:
	nodoAM();
	nodoO* sigNO;
	string nombre;
	int posicion;
	nodoAM* siguiente;
	nodoAM* anterior;
private:

};

#endif /* NODOAM_H */