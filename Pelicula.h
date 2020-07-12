#pragma once
#include <conio.h>
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

class Pelicula
{
private:

	Persona autor;
	//char autor_ape[120];
	//char autor_naci[120];
	int year = 0;
	int duracion = 0;
	char genero[100];
	string nombre;
	string productora;


public:
	void registro();
	void consult_a();
	void titulo();
	void toString();

};

