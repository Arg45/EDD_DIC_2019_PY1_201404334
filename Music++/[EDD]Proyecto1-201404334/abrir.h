#ifndef ABRIR_H
#define ABRIR_H

#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include "json/json.h"

using namespace std;

class Abrir {
public:
	Abrir(string url, int tipo);
	void filtro(string texto, int tipo, string url);
	bool tipoCorrecto(string url);
	void leerLibreria(Json::Value libreria);
	void leerListaR(Json::Value libreria, string nombre);
private:

};

#endif /* ABRIR_H */

