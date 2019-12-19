//cola

#ifndef QUEUE_H
#define QUEUE_H

#include "nodoPL.h"
#include "cancion.h"

class Cola {
public:
	NodoPL* inicio;
	NodoPL* fin;
	Cola();
	void insertar(Cancion* cancion);
	void eliminar();
	bool estaVacia();
private:

};

#endif /* QUEUE_H */