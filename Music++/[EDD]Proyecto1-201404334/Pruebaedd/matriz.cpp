#pragma once

#include "matriz.h"
#include "listaAnioMes.h"

#include <stdlib.h>

matriz::matriz() {
	listaFilas = new listaAnioMes();
	listaColumnas = new listaAnioMes();
}
bool matriz::existe(int x, int y) {
	if (listaFilas->existe(x) && listaColumnas->existe(y)) {
		return true;
	}
	return false;
}
