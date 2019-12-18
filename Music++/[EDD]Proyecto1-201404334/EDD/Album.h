#pragma once

#ifndef ALBUM_H
#define ALBUM_H

#include "Canciones.h"
#include <string>

class Album {
public:
	string nombre, mes, anio;
	float rating;
	Canciones* listaCanciones;
	Album* derecha;//columnas
	Album* izquierda;//filas
	Album* arriba;
	Album* abajo;
	Album* z;
	Album(string nombre, string mes, string anio, float rating);

private:

};

#endif /*ALBUM_H */