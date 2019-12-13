
#include <cstdlib>
#include <iostream>
#include "main.h"
#include "menu.h"

#include "Pruebaedd/cola.h"
#include "Pruebaedd/pila.h"
#include <string>
using namespace std;

string salida;
/*
 *
 */
int main() {
	menu1();
	//menuP();
	//edd();


	//cin.ignore();
	//cin.get();

	do {
		cout << "---Ingrese \"exit\" para salir. \n" << endl;
		cin >> salida;
	} while (salida != "exit");

	return 0;
}
void menuP() {
	//cout<<"hola mundo111 "<<endl;
	var1;
	cout << " Seleccione el indice de la opcion que desee:\n\n  1. Cargar archivo .json\n  2. Salir\n" << endl;
	cin >> var1;
	switch (var1)
	{
	case 1:
		cout << "cargando" << endl;
		
		break;
	case 2:
		cout << "-Que tenga un buen dia\n" << endl;
		break;
	default:
		cout << "-La opcion seleccionada no es valida, intentelo de nuevo.\n" << endl;
		menu();
		break;
	}
}
void menu1() {
	menu m;
}



void edd() {
	cola *nuevacola = new cola();
	cout << "-----------------" << endl;
	cout << "Insertando 4,8,5 en cola" << endl;
	nuevacola->insertar(4);
	nuevacola->insertar(8);
	nuevacola->insertar(5);
	cout << "Muestra datos en cola" << endl;
	nuevacola->mostrar();
	cout << "eliminar en cola" << endl;
	nuevacola->eliminar();
	nuevacola->mostrar();
	cout << "-----------------" << endl;
	pila *nuevapila = new pila();
	cout << "Insertando 4,8,5 en pila" << endl;
	nuevapila->insertar(4);
	nuevapila->insertar(8);
	nuevapila->insertar(5);
	cout << "Muestra datos en pila" << endl;
	nuevapila->mostrar();
	cout << "eliminar en pila" << endl;
	nuevapila->eliminar();
	nuevapila->mostrar();
	cout << "-----------------" << endl;





	cout << "\n\n Ingrese \"exit\" para salir." << endl;
	cin.ignore();
	cin.get();
}