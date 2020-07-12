
#include "Persona.h"
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

Persona::Persona() {};
Persona::Persona(char autor[100],char autor_ape[100], char autor_naci[100]) {
	strcpy_s(this->autor, autor);
	strcpy_s(this->autor_ape, autor_ape);
	strcpy_s(this->autor_naci, autor_naci);
};
void Persona::registro() {
	cout << "ingrese el nombre del autor: ";
	cin >> autor;
	cout << "ingrese el apeido del autor: ";
	cin >> autor_ape;
	cout << "ingrese la nacionalidad del autor: ";
	cin >> autor_naci;
}


void Persona::tostring() {
	cout << "Autor: " << autor << " " << autor_ape << endl;
	cout << "Nacionalidad: " << autor_naci << endl;
}