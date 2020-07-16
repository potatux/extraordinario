#pragma once

#include <conio.h>
#include <iostream>
#include <string>
#include "Prestamos.h"
#include "Pelicula.h"
#include "Usuarios.h"
using namespace std;


class Prestamos
{
private:

	
	
	int usuario[11]{0,0,0,0,0,0,0,0,0,0};
		int pelicula_p[11]{ 0,0,0,0,0,0,0,0,0,0 };
		
	



public:

	void prestar(int, int);
	int regresar(int,int);

	void reajuste_u(int);
	void reajuste_p(int);


	int consulta_u(int);
	int consulta_p(int);

};

