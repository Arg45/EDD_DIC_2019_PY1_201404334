#pragma once

#include "cancion.h"
#include <stdlib.h>

cancion::cancion() {
	nombre = "null";
	tipo = "null";
	rating = 0.0;
	siguiente = NULL;
}
cancion::cancion(string nom, double rat) {
	nombre = nom;
	rating = rat;
	siguiente = NULL;
}