#pragma once

#include "cancion.h"
#include <stdlib.h>

Cancion::Cancion() {
	nombre = "null";
	tipo = "null";
	rating = 0.0;
	siguiente = NULL;
}
Cancion::Cancion(string nom, double rat) {
	nombre = nom;
	rating = rat;
	siguiente = NULL;
}