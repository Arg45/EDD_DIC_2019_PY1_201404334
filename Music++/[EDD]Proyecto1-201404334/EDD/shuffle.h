//lista doble

#ifndef SHUFFLE_H
#define SHUFFLE_H

#include "nodoPL.h"
#include "cancion.h"

class Doble {
public:
	NodoPL* inicio;
	NodoPL* fin;
	int tam;
	Doble();
	void insertar(Cancion* cancion);
	void eliminar();
	bool estaVacia();
	void random();
private:

};

#endif /* SHUFFLE_H */