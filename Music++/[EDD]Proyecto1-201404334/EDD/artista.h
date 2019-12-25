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
	Artista(string nombre, float rating);
	Album* existe(string nombreAlbum);
private:

};

#endif /* ARTISTA_H */