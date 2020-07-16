#pragma once

#include <conio.h>
#include <iostream>
#include <string>
#include "Prestamos.h"
using namespace std;

class Pelicula
{
private:

	//peliculas prestadas
	int prestamos[11];

	//num de usuario que solicito prestamo;

	
	string nombre;
	string genero;
	string director;
	int year;
	string productora;

public:
	void registrar();
	void toString();
	void titulo();
	string return_peli();

};

