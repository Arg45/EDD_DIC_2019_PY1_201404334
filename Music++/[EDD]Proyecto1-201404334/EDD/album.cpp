#pragma once
#include "album.h"

using namespace std;

Album::Album(string nom, string m, string a, float rat) {
	nombreAlbum = nom;
	mes = m;
	anio = a;
	rating = rat;
	derecha = NULL;
	izquierda = NULL;
	arriba = NULL;
	abajo = NULL;
	z = NULL;
}