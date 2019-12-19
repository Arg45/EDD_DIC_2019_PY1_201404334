#include "artista.h"

using namespace std;

Artista::Artista(string nom, float rat) {
	nombre = nom;
	rating = rat;
	siguiente = NULL;
	anterior = NULL;
}