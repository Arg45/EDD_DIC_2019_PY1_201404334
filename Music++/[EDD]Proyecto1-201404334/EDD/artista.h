#ifndef ARTISTA_H
#define ARTISTA_H

#include "Albumes.h"
#include <string>

using namespace std;

class Artista {
public:
	string nombre;
	float rating;
	Albumes* albums;
	Artista* siguiente;
	Artista* anterior;
	Album* existe(string nombreAlbum);
	Artista(string nombre, float rating);
private:

};

#endif /* ARTISTA_H */