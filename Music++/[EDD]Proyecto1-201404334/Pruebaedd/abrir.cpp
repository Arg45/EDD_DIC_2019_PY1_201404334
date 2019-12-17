#pragma once

#include "abrir.h"
#include <string>

#include <fstream>

#include <stdlib.h>
#include <cstdlib>
#include <iostream>

using namespace std;
abrir::abrir(string url) {
	string lineas,texto="";
	ifstream archivos(url);//cambiar nombre a las x variables!
	if (archivos.is_open()) {
		while (getline(archivos,lineas)){
			//vrear variable
			texto += lineas;
		}
	}
	archivos.close();
	url = url.substr(url.find("_") + 1, url.find("."));

}