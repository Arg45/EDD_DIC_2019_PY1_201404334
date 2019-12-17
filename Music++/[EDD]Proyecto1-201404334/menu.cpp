#pragma once

#include "menu.h"
#include "Pruebaedd/cola.h"
#include "Pruebaedd/pila.h"


using namespace std;

Menu::Menu() {
	//cout << "menu en otra clase" << endl;
	cout << " Seleccione el indice de la opcion que desee:\n\n  1. Cargar archivo .json\n  2. Salir\n" << endl;
	cin >> var1;
	try {
		if (var1 > 0 && var1 < 3 /*&& isdigit(var1)*/ ){//hay que validar que solo permita digitos
			Menu::menu1();
		}
		else {
			throw 45;
		}
	}catch(int) {
		var1 = 0;
		cout << "\n Opcion invalida. \n" << endl;
		Menu();
	}
	
}
void Menu::menu1() {
	cout << " Seleccione el indice de la opcion que desee:\n\n  1. Library\n  2. Playlist\n  3. Regresar\n" << endl;
	cin >> var1;
	switch (var1)
	{
	case 1:
		cout << "  Ingrese la ruta del archivo: " << endl;
		cin >> urlOriginal;
		cout << "Ruta ingresada correctamente0" << endl;
		break;
	case 2:
		cout << "  Ingrese la ruta del archivo: " << endl;
		cin >> urlOriginal;
		cout << "Ruta ingresada correctamente0" << endl;
		break;
	case 3:
		Menu();
		break;
	default:
		cout << " La opcion seleccionada no es valida, intentelo de nuevo.\n" << endl;
		menu1();
		break;
	}
}
void Menu::menu2() {
	cout << "ingrese ruta" << endl;
	//cin >> ruta;
	cout << "ruta ingresada" << endl;
}

void Menu::edd() {
	Cola *nuevacola = new Cola();
	std::cout << "-----------------" << std::endl;
	std::cout << "Insertando 4,8,5 en cola" << std::endl;
	nuevacola->insertar(4);
	nuevacola->insertar(8);
	nuevacola->insertar(3);
	std::cout << "Muestra datos en cola" << std::endl;
	nuevacola->mostrar();
	std::cout << "eliminar en cola" << std::endl;
	nuevacola->eliminar();
	nuevacola->mostrar();
	std::cout << "-----------------" << std::endl;
	
	Pila *nuevapila = new Pila();
	std::cout<<"Insertando 4,8,5 en pila"<<std::endl;
	nuevapila->insertar(4);
	nuevapila->insertar(7);
	nuevapila->insertar(5);
	std::cout<<"Muestra datos en pila"<<std::endl;
	nuevapila->mostrar();
	std::cout<<"eliminar en pila"<<std::endl;
	nuevapila->eliminar();
	nuevapila->mostrar();
	std::cout<<"-----------------"<<std::endl;

}