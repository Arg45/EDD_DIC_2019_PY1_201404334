#include "menu.h"

using namespace std;

int main() {
	string salida;
	Menu mn;

	
	//cin.ignore();
	//cin.get();
	cout << "\n\n  Ingrese \'exit\' para salir." << endl;
	cin >> salida;
	while (salida != "exit") {
		if (salida != "exit") {
			cout << "   Dato incorrecto. Ingrese \'exit\' para salir." << endl;
			cin >> salida;
		}
	}
	return 0;
}