#pragma once

#ifndef CANCION_H
#define CANCION_H

#include <string>

using namespace std;

class Cancion {
public:
	Cancion();
	Cancion(string nombre, double rat);
	string nombre, tipo;
	double rating;
	Cancion* siguiente;
private:

};

#endif /* CANCION_H */
