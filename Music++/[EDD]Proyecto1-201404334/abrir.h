#ifndef ABRIR_H
#define ABRIR_H

#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include "json/json.h"

#include "devolver.h"

#include "EDD/Artistas.h"
#include "EDD/Albumes.h"
#include "EDD/Canciones.h"

using namespace std;

class Abrir {
public:
	
	Artista* artist = NULL;
	Albumes* alb;
	Canciones* can;

	Artistas* arti;

	Albumes* album;
	Canciones* cancio;
	
	string ruta;
	int tipo;

	Abrir(string url, int tipo);
	Estructuras abrir1();
	void filtro(string texto, int tipo, string url);
	bool tipoCorrecto(string url);
	void leerLibreria(Json::Value libreria);
	void leerListaR(Json::Value libreria, string nombre);
private:

};

#endif /* ABRIR_H */

