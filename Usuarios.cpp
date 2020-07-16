#include "Usuarios.h"
#include <conio.h>
#include <iostream>
#include <string>
#include "Prestamos.h"
#include "Pelicula.h"

using namespace std;

void Usuarios::registro() {
	cout << "Ingrese el nombre del usuario: ";
	cin.sync();
	getline(cin >> ws, usuario);
	cout << "Ingrese su genero: ";
	cin.sync();
	getline(cin >> ws, genero);
	cout << "Ingrese su edad: ";
	cin >> edad;
}

void Usuarios::consultar() {
	cout << "===Nombre de usuario===" << endl;
	cout << usuario << endl;
	cout << "===Genero===" << endl;
	cout << genero << endl;
	cout << "===Edad===" << endl;
	cout << edad << endl;
	cout << "==========" << endl;
}

void Usuarios::nombre() {
	cout << usuario << endl;
}