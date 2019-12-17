#pragma once

#include "nodoO.h"
#include <stdlib.h>

nodoO::nodoO() {
	fila = 0;
	columna = 0;
	nombre = "null";
	derecha = NULL;
	izquierda = NULL;
	arriba = NULL;
	abajo = NULL;
	arriba = NULL;
	izquierda = NULL;
}
nodoO::nodoO(int fil, int col, string nom) {
	fila = fil;
	columna = col;
	nombre = nom;
	derecha = NULL;
	izquierda = NULL;
	arriba = NULL;
	abajo = NULL;
	arriba = NULL;
	izquierda = NULL;
}