#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include "stdio.h"
#include "conio.h"
#include <cstdlib>
#include "Persona.h"

using namespace std;


void final() {
	int exp = 0;
	while (exp == 0) {
		if (_kbhit()) {
			char key = _getch();
			char _key = 0;
			if (key == 13) {
				exp = 1;
				system("cls");

			}

		}
	}
}

void finish() {
	cout << endl;
	printf("*Presione %c Enter %c para finalizar", 34, 34);
	final();
}



void menu() {
	cout << "---Bienvenido---" << endl;
	cout << "Que desea efectuar?" << endl;
	printf("1.- A%cdir persona", 164); cout << endl;
	cout << "2.- Consultar edad" << endl;
	cout << "3.- Consultar IMC" << endl;
	cout << "4.- Consultar datos del usuario" << endl;
	cout << "5.- Cerrar programa" << endl;
	cout << "Ingrese una opcion: " << endl;

};

int main()
{
	int ciclo = 1, usuario = 0,op,usuario_p;
	Persona cuenta[10];

	while (ciclo == 1) {
		menu();
		cin >> op;
		switch (op) {
		case 1:
			system("cls");
			cuenta[usuario].registro();
			cout << "su numero de usuario es: "<< usuario << endl;
			usuario += 1;
			finish();
			break;

		case 2:
			system("cls");
			cout << "Ingrese el numero de usuario" << endl;
			cin >> usuario_p;
			system("cls");
			cuenta[usuario_p].mayor();
			finish();
			break;
		case 3:
			system("cls");
			cout << "Ingrese el numero de usuario" << endl;
			cin >> usuario_p;
			system("cls");
			cuenta[usuario_p].calculo();
			finish();
			break;
		case 4:
			system("cls");
			cout << "Ingrese el numero de usuario" << endl;
			cin >> usuario_p;
			system("cls");
			cuenta[usuario_p].toString();
			finish();
			break;
		case 5:
			system("cls");
			cout << "Gracias por utilizar esta estacion automatica :)" << endl;
			return 0;


			break;
		default:
			system("cls");
			cout << op << endl;
			cuenta[0].toString();
			cout << "Opcion no valida, intente con otra opcion " << endl;
			finish();
			break;
		}
	}


}

