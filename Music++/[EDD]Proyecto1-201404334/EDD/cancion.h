#pragma once

#ifndef CANCION_H
#define CANCION_H

#include <string>

using namespace std;

class cancion {
public:
	cancion();
	cancion(string nombre, double rat);
	string nombre;
	string tipo;
	double rating;
	cancion* siguiente;
private:

};

#endif /* CANCION_H */
