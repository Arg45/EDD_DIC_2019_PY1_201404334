#pragma once

#include "abrir.h"
#include <fstream>

using namespace std;

Abrir::Abrir(string url, int tipo) {
	string l,texto="";
	ifstream archivos(url);//cambiar nombre a las x variables!
	if (archivos.is_open()) {
		while (getline(archivos,l)){
			texto += l;
		}
	}
	archivos.close();
	url = url.substr(url.find("_") + 1, url.find("."));
	filtro(texto, tipo, url);
}
void Abrir::filtro(string texto, int tipo, string url) {
	//creacion de char asignandole el parseo del string
	//inicio del parser
	const char* c = texto.c_str();
	Json::Value r;
	Json::CharReaderBuilder charreaderbuilder;
	Json::CharReader* lector(charreaderbuilder.newCharReader());
	JSONCPP_STRING error;
	bool estaBien = lector->parse(c, c + strlen(c), &r, &error);
	if (estaBien&&error.size()==0) {
		Json::Value archivo;
		if (tipo == 1) {
			archivo = r["Library"];
			leerLibreria(archivo);
		}
		else {
			archivo = r;
			leerListaR(archivo, url);
		}
	}
}
bool Abrir::tipoCorrecto(string url) {
	return (url.substr(url.find_last_of(".") + 1) == "json") ? true : false;
}
void Abrir::leerLibreria(Json::Value libreria) {

}
void Abrir::leerListaR(Json::Value libreria, string nombre) {

}