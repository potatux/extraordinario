#pragma once
#include <conio.h>
#include <iostream>
#include <string>
#include "Prestamos.h"
#include "Pelicula.h"

using namespace std;

class Usuarios
{
private:
	string usuario;
	string genero;
	int edad;
public:
	void registro();
	void consultar();
	void nombre();


};

