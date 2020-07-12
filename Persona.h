#pragma once



#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

class Persona
{	private:
	char autor[120];
	char autor_ape[120];
	char autor_naci[120];
	public:

		Persona();
		Persona(char[], char[], char[]);


		void registro();
		void tostring();
};

