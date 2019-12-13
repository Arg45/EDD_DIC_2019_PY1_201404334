#pragma once

#ifndef CANCIONES_H
#define CANCIONES_H

#include "cancion.h"
#include <string>
#include "json/json.h"

using namespace std;

class Canciones {
public:
	Canciones();
	void insertarAlInicio(string nom, double rat);
	void insertarAlFinal(string nom, double rat);
	void insertarIndice(string nom, double rat, int index);

	bool estaVacia();

	cancion* inicio;
	cancion* fin;
private:

};


#endif /* CANCIONES_H */

