#include "Pelicula.h"
#include <conio.h>
#include <iostream>
#include <string>


void Pelicula::registrar() {
	cout << "Ingrese el nombre de la pelicula: ";
	cin.sync();
	getline(cin >> ws, nombre);

	cout << "Ingrese nombre del director: ";
	cin.sync();
	getline(cin >> ws, director);
	
	cout << "Ingrese el genero de la pelicula: ";
	cin.sync();
	getline(cin >> ws, genero);

	cout << "Ingrese la productora de la pelicula: ";
	cin.sync();
	getline(cin >> ws, productora);
	
	printf("Ingrese el a%co de publicacion: ", 164);
	cin >> year;
	

}



void Pelicula::toString() {
	
	cout << "Titulo: "<< nombre << endl;
	cout << "============" << endl;
	cout << "Director: " << director << endl;
	cout << "============" << endl;
	cout << "Productora: " << productora << endl;
	cout << "============" << endl;
	cout << "Genero: " << genero << endl;
	cout << "============" << endl;
	printf("a%co de publicacion: ", 164); cout<< year << endl;
	cout << "============" << endl;

}



void Pelicula:: titulo() {
	cout << nombre<< endl;

	
	cout << "===========================" << endl;
}

string Pelicula::return_peli() {
	return nombre;
}