#ifndef DEVOLVER_H
#define DEVOLVER_H

#include "EDD/Artistas.h"
#include "EDD/Albumes.h"
#include "EDD/Canciones.h"

using namespace std;

class Estructuras {
public:

	Artista* artista;

	Albumes* albumes;
	Canciones* canciones;
	Artistas* artistas;

	Estructuras(Artistas* artista, Albumes* album, Canciones* canciones);
private:

};

#endif /* DEVOLVER_H */
