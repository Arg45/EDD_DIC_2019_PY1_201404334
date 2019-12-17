#pragma once

#ifndef ALBUM_H
#define ALBUM_H

#include <string>
#include "Canciones.h"
#include "Pruebaedd/listaAnioMes.h"

class Album {
public:
	string nombre;
	int fila;
	int columna;
	string mes;
	string anio;
	double rating;
	Canciones* listaCanciones;

	Album* derecha;
	Album* izquierda;
	Album* arriba;
	Album* abajo;
	listaAnioMes* arriba;
	listaAnioMes* izquierda;
	Album();
	Album(int fil, int col, string nom);
private:

};

#endif /*ALBUM_H */

