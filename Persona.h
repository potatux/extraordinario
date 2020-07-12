#pragma once
#include <conio.h>
#include <iostream>
#include <string>
using namespace std;

class Persona
{
private:
	/*/
	char autor[120];
	char autor_ape[120];
	/*/
	char autor_naci[120];
	string autor;


public:

	Persona();
	Persona(char[]);


	void registro();
	void tostring();
};


