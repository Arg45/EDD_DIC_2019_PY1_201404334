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
	void insertar(string nom, float rat);
	void insertarAlInicio(string nom, float rat);
	void insertarAlFinal(string nom, float rat);
	void insertarIndice(string nom, float rat, int index);

	bool estaVacia();

	Cancion* inicio;
	Cancion* fin;
private:

};


#endif /* CANCIONES_H */