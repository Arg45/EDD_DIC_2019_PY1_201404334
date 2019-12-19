#ifndef NODOPL_H
#define NODOPL_H

#include "cancion.h"

using namespace std;

class NodoPL {
public:
	Cancion* cancion;
	NodoPL* siguiente;
	NodoPL* anterior;
	NodoPL(Cancion* c);
private:

};

#endif /* NODOPL_H */