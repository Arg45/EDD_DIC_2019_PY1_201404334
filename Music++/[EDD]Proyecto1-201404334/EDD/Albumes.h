#pragma once

#ifndef ALBUMES_H
#define ALBUMES_H

#include "album.h"

class Albumes {
public:
	Album* raiz;
	Albumes();
	void insertar(string nombre, string mes, string anio, float rating, Canciones* listaCanciones);
	Album* obtenerFila(string mes);
	Album* obtenerColumna(string anio);
	void insertarMes(string mes);
	void insertarAnio(string anio);
	void insertarAlbum(string nombre, string mes, string anio, float rating, Canciones* listaCanciones);
	Album* existe(string alb, Album* mes, Album* anio);
	bool existeFila(string mes);
	bool existeColumna(string anio);
private:

};

#endif /*ALBUMES_H */

