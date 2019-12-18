#pragma once

#include "abrir.h"
#include "EDD/Artistas.h"
#include "EDD/Albumes.h"
#include "EDD/Canciones.h"
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
	Json::Value artista, album, cancion;
	float promedioAlbum, promedioCancion, ratingArtista, ratingAlbum, ratingCancion;
	int cantAlbums, cantCanciones;
	string nombreArtista, nombreAlbum, nombreCancion, mes, anio;
	int i;
	for (i = 0; i < libreria.size(); i++) {
		nombreArtista = libreria[i]["Artist"]["Name"].asString();
		artista = libreria[i]["Artist"]["Albums"];
		promedioAlbum = 0.0;
		cantAlbums = 0;
		Albumes* a = new Albumes();
		int j;
		for (j = 0; j < artista.size(); j++) {
			nombreAlbum = artista[j]["Name"].asString();
			mes = artista[j]["Month"].asString();
			anio = artista[j]["Year"].asString();
			album = artista[j]["Songs"];
			cantAlbums++;
			promedioCancion = 0.0;
			cantCanciones = 0;
			Canciones* c = new Canciones();
			for
		}
	}	
}
void Abrir::leerListaR(Json::Value libreria, string nombre) {

}