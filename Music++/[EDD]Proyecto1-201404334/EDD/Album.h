#pragma once

#ifndef ALBUM_H
#define ALBUM_H

#include "Canciones.h"
#include <string>

class Album {
public:
	string nombreAlbum, mes, anio;
	float rating;
	Canciones* listaCan;
	Album* derecha;//columnas
	Album* izquierda;//filas
	Album* arriba;
	Album* abajo;
	Album* z;
	Album(string nommbre, string mes, string anio, float rating, Canciones* listaCanciones);

private:

};

#endif /*ALBUM_H */