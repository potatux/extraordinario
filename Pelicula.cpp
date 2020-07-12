#include "Pelicula.h"
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;


void Pelicula::registro() {
	autor.registro();
	cout << "Ingrese el nombre de la pelicula" << endl;
	cin.sync();
	getline(cin >> ws, nombre);

	cout << "Ingrese el nombre de la productora" << endl;
	cin.sync();
	getline(cin >> ws, productora);

	cout << "Ingrese el genero " << endl;
	cin >> genero;

	printf("Ingrese el a%co de publicacion \n", 164);
	cin >> year;




}

void Pelicula::consult_a() {
	autor.tostring();
}


void Pelicula::titulo() {
	cout << nombre << endl;
}


void Pelicula::toString() {
	cout << "===Titutlo===" << endl;
	cout << nombre << endl;
	cout << "=============" << endl;
	autor.tostring();
	cout << "Genero: " << genero << endl;
	cout << "anio de publicacion: " << year << endl;
	cout << "Duracion: " << duracion << endl;
	
}