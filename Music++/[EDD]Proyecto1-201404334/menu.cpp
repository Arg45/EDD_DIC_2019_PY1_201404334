#pragma once

#include "menu.h"
#include "abrir.h"

using namespace std;

Menu::Menu() {
	//cout << "menu en otra clase" << endl;
	cout << " \n\nSeleccione el indice de la opcion que desee:\n\n  1. Cargar archivo .json\n  2. Salir\n" << endl;
	cin >> var1;
	try {
		if (var1 > 0 && var1 < 3 /*&& isdigit(var1)*/ ){//hay que validar que solo permita digitos
			if (var1 == 1) {
				Menu::menu1();
			}
			else {
				cout << "----Que tenga un buen dia----" << endl;
			}
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
		cin.get();
		getline(cin,urlOriginal);
		Abrir::Abrir(urlOriginal, 1);		
		cout << "\nRuta ingresada correctamente" << endl;
		Menu::menu2();
		break;
	case 2:
		cout << "  Ingrese la ruta del archivo: " << endl;
		cin.get();
		getline(cin, urlOriginal);
		Abrir::Abrir(urlOriginal, 2);
		cout << "Ruta ingresada correctamente" << endl;
		Menu::menu2();
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
	cout << " \n\nSeleccione el indice de la opcion que desee:\n" << endl;
	cout << " 1. Navegacion de biblioteca \n 2. Navegacion de playlist \n 3. Reportes  \n 4. Regresar" << endl;
	cin >> var1;
	switch (var1)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		menu1();
		break;
	default:
		cout << " La opcion seleccionada no es valida, intentelo de nuevo.\n" << endl;
		menu2();
		break;
	}
}
