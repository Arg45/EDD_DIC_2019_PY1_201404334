#ifndef ARTISTAS_H
#define ARTISTAS_H

#include "artista.h"

using namespace std;

class Artistas {
public:
	Artista* inicio;
	Artista* fin;
	Albumes* album;
	Artistas();
	void insertar(string nombre, float rating);
	Artista* existe(string nombreArtista);
private:

};

#endif /* ARTISTAS_H */
