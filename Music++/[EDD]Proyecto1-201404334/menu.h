#pragma once

#ifndef MENU_H
#define MENU_H

#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>

#include "abrir.h"

using namespace std;

class Menu {
public:

	Artista* artista;

	Albumes* albumes;
	Canciones* canciones;
	Artistas* artistas;

	Menu();
	void menu1();
	void menu2();
	int var1,var2;
	string urlOriginal;
private:

};

#endif /* MENU_H */
