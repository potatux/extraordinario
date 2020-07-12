

#include "Libro.h"
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

Libro::Libro(){}




void Libro::registro() {
	autor.registro();
	cout << "Ingrese el nombre del libro" << endl;
	cin.sync();
	getline(cin >> ws, nombre);

	cout << "Ingrese el nombre de la editorial" << endl;
	cin.sync();
	getline(cin >> ws, editorial);

	cout << "Ingrese el genero "<< endl;
	cin >> genero;

	printf("Ingrese el a%co de publicacion \n",164) ;
	cin >> year;

	cout << "Ingrese isbn " << endl;
	cin >> isbn;


}

void Libro::consult_a() {
	autor.tostring();
}


void Libro::titulo() {
	cout << nombre << endl;
}


void Libro::toString() {
	cout << "===Titutlo===" << endl;
	cout << nombre <<endl;
	cout << "=============" << endl;
	cout <<"Genero: " <<genero <<endl;
	cout << "anio de publicacion: "<<year <<endl;
	cout << "Codigo ISBN: " << isbn <<endl;
	autor.tostring();
}