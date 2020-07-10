
#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
#include "stdio.h"
#include "conio.h"
#include <time.h>
#include <cstdlib>

using namespace std;
void menu() {
	cout << "1. Lista de libros" << endl;
	cout << "2. Prestamo de libro" << endl;
	cout << "3. Devolucion de libros" << endl;
	cout << "4. Información del libro" << endl;
	cout << "5. Finalizar programa" << endl;



}

void lista() {
	string libros[10]{ "pinocho","Matematicas de baldor", "La biblia", "Poemas haiku", "manifiesto comunista", "Divina comedia de dante", "Flatworld"
	,"Manual de supervivencia", "Historia de mexico","Historias de terror" };

	for (int i = 0; i <= 9; i++) {
		cout << i + 1 << ") " << libros[i] << "." << endl;
	}
	cout << endl;
}

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

string prestamo() {

	string nom;
	string ape;
	cout << "ingresa tu nombre: " << endl;
	cin >> nom;
	cout << "ingresa tu primer apeido: " << endl;
	cin >> ape;
	string completo = nom + " " + ape;

	return completo;
}

void informacion(string titulox, string nombrex, string autorx) {


	cout << "Titulo: " << titulox << endl;
	cout << "autor: " << autorx << endl;
	cout << "Estado: ";
	if (nombrex != " ") {
		cout << "prestado a: " << nombrex << endl;;
	}

	else {
		cout << "Disponible" << endl;
	}
	finish();


}


int main()
{
	int ciclo = 1;
	int opcion;
	using namespace std;
	int op = 1;


	string autores[10]{ "Autor desconocido", "Baldor Martinez", "Jesu cristo", "Hanma Baki" , "Karlx max", "Autor desconocido", "Clint Wilson",
	"Ruben Fuentes", "Organizacion CYTATIR", "Andres Manuel" };
	string nombres[10];
	string titulos[10]{ "pinocho","Matematicas de baldor", "La biblia", "Poemas haiku", "manifiesto comunista", "Divina comedia de dante", "Flatworld"
	,"Manual de supervivencia", "Historia de mexico","Historias de terror" };


	while (ciclo == 1) {
		menu();
		cout << endl;
		cout << "que desea hacer?" << endl;
		cin >> opcion;
		system("cls");
		switch (opcion) {

		case 1:
			cout << "---Lista de libros---" << endl;
			lista();
			finish();
			break;

		case 2:
			//prestamo
			cout << "---prestamo---" << endl;
			lista();

			while (op > 0 && op <= 5) {

				cout << "que libro deseas solicitar" << endl;
				cin >> op;
				if (op < 0 || op > 5) {
					cout << "opcion invalida pruebe con una opcion valida" << endl;
					finish();
					op = 1;
				}
				else {
					nombres[op - 1] = prestamo();

				}

				finish();
				break;
		case 3:
			//devolucion
			
			while (op > 0 && op <= 5) {
				cout << "---devoluciones---" << endl;
				cout << "que libro va devolver? " << endl;
				lista();
				cin >> op;
				if (op < 0 || op > 5) {
					op = 1;
					cout << "opcion invalida pruebe con otra opcion" << endl;
					finish();
				}
				else {
					cout << "libro devuelto :)" << endl;;
					nombres[op - 1] = " ";
					finish();
					break;
				}
			}

			break;
		case 4:
			//informacion

			while (op > 0 && op <= 5) {
				cout << "---informacion---" << endl;
				lista();
				cout << "que libro deseas solicitar su informacion" << endl;
				cin >> op;
				if (op < 0 || op > 5) {
					cout << "opcion invalida pruebe con una opcion valida" << endl;
					finish();
					op = 1;
				}
				else {
					informacion(titulos[op - 1], nombres[op - 1], autores[op - 1]);
					break;
				}
			}
			


			break;
		case 5:
			//salir
			cout << "gracias por usar el programa automatizado bibliotecario" << endl;


			return 0;
		default:
			cout << "opcion invalida porfavor intente con otra opcion" << endl;
			finish();
			break;

			}


		}

	}
}