#pragma once

#include "abrir.h"
#include "EDD/Artistas.h"
#include "EDD/Albumes.h"
#include "EDD/Canciones.h"
#include "EDD/cancion.h"
#include <fstream>

using namespace std;

Abrir::Abrir(string ruta, int tipo) {
	string l,texto="";
	ifstream archivos(ruta);//cambiar nombre a las x variables!
	if (archivos.is_open()) {
		while (getline(archivos,l)){
			texto += l;
		}
	}
	archivos.close();
	ruta = ruta.substr(ruta.find("_") + 1, ruta.find("."));
	filtro(texto, tipo, ruta);
}
void Abrir::filtro(string texto, int tipo, string ruta) {
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
			leerListaR(archivo, ruta);
		}
	}
}
bool Abrir::tipoCorrecto(string ruta) {
	return (ruta.substr(ruta.find_last_of(".") + 1) == "json") ? true : false;
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
		Albumes* alb = new Albumes();
		cout << "c. " << nombreArtista << endl;
		int j;
		for (j = 0; j < artista.size(); j++) {
			nombreAlbum = artista[j]["Name"].asString();
			mes = artista[j]["Month"].asString();
			anio = artista[j]["Year"].asString();
			album = artista[j]["Songs"];
			cantAlbums++;
			promedioCancion = 0.0;
			cantCanciones = 0;
			Canciones* can = new Canciones();
			cout << " b. " << nombreAlbum << endl;
			int k;
			for (k = 0; k < album.size(); k++) {
				nombreCancion = album[k]["Name"].asString();
				ratingCancion = atof(album[k]["Rating"].asString().c_str());
				cantCanciones++;
				promedioCancion += ratingCancion;
				can->insertar(nombreCancion, ratingCancion);
				cout <<"  a. " <<nombreCancion <<" "<< endl;
			}
			ratingAlbum = promedioCancion / cantCanciones;
			promedioAlbum += ratingAlbum;
			alb->insertar(nombreAlbum, mes, anio, ratingAlbum);
		}
		ratingArtista = promedioAlbum / cantAlbums;
		Artista* artista = new Artista(nombreArtista, ratingArtista);
		artista->albums = alb;
	}	
}
void Abrir::leerListaR(Json::Value libreria, string nombre) {
	string tipo = libreria["Type"].asString();
	//creacion de edd de playlist
	Albumes* album;
	Canciones* cancio;
	Artista* Nartista;
	Album* Nalbum;
	Cancion* Ncancion;
	string artist;
	string albu;
	string mes; 
	string anio;
	string cancion;
}