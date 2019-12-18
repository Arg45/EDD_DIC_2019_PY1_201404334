#pragma once

#include "menu.h"

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
		cin.get();
		getline(cin,urlOriginal);
		cout << "\' " << urlOriginal <<" \'"<< endl;
		
		cout << "Ruta ingresada correctamente" << endl;
		break;
	case 2:
		cout << "  Ingrese la ruta del archivo: " << endl;
		getline(cin, urlOriginal);
		cout << "Ruta ingresada correctamente" << endl;
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
