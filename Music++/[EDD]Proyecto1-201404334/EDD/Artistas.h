#ifndef ARTISTAS_H
#define ARTISTAS_H

#include "artista.h"

using namespace std;

class Artistas {
public:
	Artista* inicio;
	Artista* fin;
	Artistas();
	void insertar(string nombre, float rating);
private:

};

#endif /* ARTISTAS_H */
